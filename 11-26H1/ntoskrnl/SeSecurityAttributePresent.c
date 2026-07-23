/*
 * XREFs of SeSecurityAttributePresent @ 0x1402FF790
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1403AF970 (SepVerifyDesktopAppxPackageName.c)
 *     EtwpQueryTokenPackageInfo @ 0x1408FBFFC (EtwpQueryTokenPackageInfo.c)
 *     PfpPrivSourceEnum @ 0x14091DEAC (PfpPrivSourceEnum.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1409C9B4C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PsQueryProcessAttributes @ 0x1409DD970 (PsQueryProcessAttributes.c)
 *     PsQueryProcessAttributesByToken @ 0x140A5DCD0 (PsQueryProcessAttributesByToken.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140B52BC8 (EtwpGetPsmKeyExtendedHeaderItem.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x140276050 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x1402FD38C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExIsFastResourceHeldExclusive @ 0x1402FD3E0 (ExIsFastResourceHeldExclusive.c)
 *     ExpAcquireResourceSharedLite @ 0x1402FEE28 (ExpAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     AuthzBasepEqualUnicodeString @ 0x1403B0620 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403B1F88 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeSecurityAttributePresent(__int64 a1, const UNICODE_STRING *a2)
{
  char v4; // si
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rbx
  char v7; // r9
  __int64 v8; // r14
  __int64 *i; // rbx
  const UNICODE_STRING *v10; // rcx
  __int64 *v12; // rdi
  __int64 *j; // r14
  unsigned __int8 v14; // bl
  void *OwnerEntryForLegacyShim; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v18; // rdx

  v4 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = *(_QWORD *)(a1 + 48);
    v7 = *(_BYTE *)(v6 + 26);
    if ( (v7 & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, v6, 0LL, 0LL);
    if ( (v7 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v18 = KeGetCurrentThread();
      if ( CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
      if ( (v18->ApcState.InProgressFlags & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !CurrentIrql && (v18->MiscFlags & 0x400) == 0 && !v18->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
    if ( (*(_BYTE *)(v6 + 26) & 1) != 0 )
    {
      OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
      if ( !ExAcquireFastResourceShared((__int64 *)v6, (ULONG_PTR)OwnerEntryForLegacyShim, 1)
        || ExIsFastResourceHeldExclusive(v6) )
      {
        ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
      }
    }
    else
    {
      ExpAcquireResourceSharedLite(v6, 1);
    }
    v4 = 1;
  }
  v8 = *(_QWORD *)(a1 + 776);
  for ( i = *(__int64 **)(v8 + 8); ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)(v8 + 8) )
    {
      v12 = (__int64 *)(v8 + 32);
      for ( j = *(__int64 **)(v8 + 32); j != v12; j = (__int64 *)*j )
      {
        i = j - 2;
        if ( (j[5] & 1) == 0 && (unsigned __int8)AuthzBasepEqualUnicodeString(i + 4, a2) )
          goto LABEL_19;
      }
      goto LABEL_15;
    }
    v10 = (const UNICODE_STRING *)(i + 4);
    if ( KeGetCurrentIrql() >= 2u
       ? AuthzBasepEqualUnicodeStringCaseSensitive(v10, a2)
       : RtlEqualUnicodeString(v10, a2, 1u) )
    {
      break;
    }
  }
LABEL_19:
  if ( !i )
  {
LABEL_15:
    v14 = 0;
    goto LABEL_16;
  }
  v14 = 1;
LABEL_16:
  if ( v4 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KeLeaveCriticalRegionThread(KeGetCurrentThread());
  }
  return v14;
}
