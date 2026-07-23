/*
 * XREFs of EtwpCovSampEnumerateProcess @ 0x140A33C00
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlReleaseFileNameInformation @ 0x140922600 (FsRtlReleaseFileNameInformation.c)
 *     EtwpCovSampImageNotify @ 0x140A33F80 (EtwpCovSampImageNotify.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140A82E00 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampEnumerateProcess(ULONG_PTR BugCheckParameter1)
{
  int v1; // r14d
  void *v2; // rdi
  _QWORD *v5; // rax
  unsigned __int64 *v6; // rsi
  unsigned __int64 i; // r10
  unsigned __int64 v8; // r10
  _QWORD ImageInfo[6]; // [rsp+38h] [rbp-41h] BYREF
  unsigned __int64 v10; // [rsp+68h] [rbp-11h]
  UNICODE_STRING FullImageName; // [rsp+70h] [rbp-9h] BYREF
  _OWORD v12[3]; // [rsp+80h] [rbp+7h] BYREF

  v1 = 0;
  v2 = 0LL;
  memset(v12, 0, sizeof(v12));
  v10 = 0LL;
  FullImageName = 0LL;
  memset(ImageInfo, 0, sizeof(ImageInfo));
  if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
    return 0LL;
  if ( (_KPROCESS *)BugCheckParameter1 == KeGetCurrentThread()->ApcState.Process )
    goto LABEL_3;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 488)) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v12);
    v1 = 1;
LABEL_3:
    v5 = (_QWORD *)MmEnumerateAddressSpaceAndReferenceImages((PRKPROCESS)BugCheckParameter1);
    v2 = v5;
    if ( v5 )
    {
      LODWORD(ImageInfo[1]) |= 0x400u;
      v6 = v5;
      for ( i = *v5; *v6; i = *v6 )
      {
        if ( (i & 3) == 0 )
        {
          v8 = i & 0xFFFFFFFFFFFFFFFCuLL;
          *v6 = v8;
          v10 = v8;
          ImageInfo[2] = v6[1] & 0xFFFFFFFFFFFF0000uLL;
          ImageInfo[4] = v6[3];
          if ( FltMgrCallbacks )
          {
            if ( (int)guard_dispatch_icall_no_overrides(v8, 1024LL) >= 0 )
              EtwpCovSampImageNotify(&FullImageName, *(HANDLE *)(BugCheckParameter1 + 464), (PIMAGE_INFO)&ImageInfo[1]);
          }
        }
        v6 += 6;
      }
    }
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v1 )
  {
    KiUnstackDetachProcess((__int64)v12, 0);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 488));
  }
  return 0LL;
}
