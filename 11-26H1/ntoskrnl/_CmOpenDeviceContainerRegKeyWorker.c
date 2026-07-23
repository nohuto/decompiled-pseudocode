/*
 * XREFs of _CmOpenDeviceContainerRegKeyWorker @ 0x140A3C990
 * Callers:
 *     _CmOpenDeviceContainerRegKey @ 0x140A3C1F0 (_CmOpenDeviceContainerRegKey.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegCreateTree @ 0x140978C5C (_PnpCtxRegCreateTree.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     _CmValidateDeviceContainerName @ 0x140A3CE94 (_CmValidateDeviceContainerName.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A3DF70 (_SysCtxRegOpenCurrentUserKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmOpenDeviceContainerRegKeyWorker(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        ACCESS_MASK a5,
        char a6,
        HANDLE *a7,
        ULONG *a8)
{
  __int16 v8; // r13
  __int64 v9; // rbx
  wchar_t *Pool2; // rdi
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  int inited; // ebx
  unsigned int v18; // r12d
  __int64 v19; // r14
  unsigned __int16 Length; // bx
  wchar_t *v21; // rsi
  BOOLEAN v22; // r14
  HANDLE v23; // rdx
  const wchar_t *v24; // rsi
  int Tree; // eax
  __int64 v26; // rcx
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  void *v28; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  v28 = 0LL;
  v8 = a3;
  Handle = 0LL;
  v9 = a2;
  Pool2 = 0LL;
  LODWORD(v12) = 0;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
    goto LABEL_32;
  LODWORD(v13) = 260;
  while ( 1 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      inited = -1073741801;
      goto LABEL_6;
    }
    v18 = (unsigned int)v13 >> 1;
    inited = CmValidateDeviceContainerName(v14, v9, v15);
    if ( inited < 0 )
      break;
    v9 = a2;
    v19 = -1LL;
    do
      ++v19;
    while ( *(_WORD *)(a2 + 2 * v19) );
    v12 = v19 + 51;
    if ( v12 > 0xFFFFFFFF )
    {
LABEL_15:
      inited = -1073741675;
      goto LABEL_6;
    }
    if ( (unsigned int)v12 <= v18 )
    {
      inited = RtlStringCchPrintfExW(
                 Pool2,
                 v18,
                 0LL,
                 0LL,
                 0x800u,
                 L"System\\CurrentControlSet\\Control\\DeviceContainers\\%s",
                 a2);
      break;
    }
LABEL_38:
    ExFreePoolWithTag(Pool2, 0);
    v13 = 2LL * (unsigned int)v12;
    Pool2 = 0LL;
    if ( v13 > 0xFFFFFFFF )
      goto LABEL_15;
  }
  if ( inited == -1073741789 )
  {
    v9 = a2;
    goto LABEL_38;
  }
  if ( inited < 0 )
    goto LABEL_6;
  if ( (v8 & 0x100) != 0 )
  {
    v24 = Pool2;
    v26 = 0LL;
    if ( a1 )
      v26 = *(_QWORD *)(a1 + 224);
    inited = SysCtxRegOpenCurrentUserKey(v26, 0LL, 0x2000000LL, &Handle);
    if ( inited >= 0 )
    {
      v23 = Handle;
      goto LABEL_29;
    }
    goto LABEL_6;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, Pool2);
  if ( inited < 0 )
    goto LABEL_6;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= (unsigned int)v13
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(&`_CmOpenDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix, &DestinationString, 1u) )
  {
LABEL_32:
    inited = -1073741811;
    goto LABEL_6;
  }
  v21 = Pool2 + 25;
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = Pool2 + 25;
  DestinationString.Length = Length - 50;
  v22 = RtlPrefixUnicodeString(
          &`_CmOpenDeviceContainerRegKeyWorker'::`2'::DeviceContainersKeyPrefix,
          &DestinationString,
          1u);
  inited = PnpCtxGetCachedContextBaseKey(a1, v22 != 0 ? 10 : 4, (__int64)&v28);
  if ( inited < 0 )
    goto LABEL_6;
  v23 = v28;
  if ( !v22 )
    v21 = Pool2;
  v24 = v21 + 25;
LABEL_29:
  if ( a6 )
  {
    Tree = PnpCtxRegCreateTree(a1, v23, v24, 0, a5, 0LL, a7, a8);
  }
  else
  {
    Tree = PnpCtxRegOpenKey(a1, (__int64)v23, (__int64)v24, 0, a5, (__int64)a7);
    if ( Tree >= 0 )
    {
      *a8 = 2;
      goto LABEL_6;
    }
  }
  if ( Tree == -1073741444 )
  {
    inited = -1073741595;
  }
  else if ( Tree < 0 )
  {
    inited = Tree;
  }
LABEL_6:
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
