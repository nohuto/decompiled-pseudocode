/*
 * XREFs of _CmDeleteDeviceContainerRegKeyWorker @ 0x140A3FBE4
 * Callers:
 *     _CmDeleteDeviceContainerRegKey @ 0x140B2004C (_CmDeleteDeviceContainerRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x140A3CDE0 (_CmGetDeviceContainerRegKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A3DF70 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpCtxRegDeleteKey @ 0x140A3F2C8 (_PnpCtxRegDeleteKey.c)
 *     _PnpCtxRegDeleteTree @ 0x140A3F304 (_PnpCtxRegDeleteTree.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceContainerRegKeyWorker(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  wchar_t *pszDest; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // r9
  NTSTATUS DeviceContainerRegKeyPath; // eax
  int inited; // ebx
  unsigned __int16 Length; // bx
  wchar_t *v14; // rsi
  BOOLEAN v15; // r14
  HANDLE v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rcx
  int v19; // eax
  int v21; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  void *v24; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+48h] BYREF

  pszDest = 0LL;
  LODWORD(v26) = 0;
  v24 = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
    goto LABEL_30;
  LODWORD(v9) = 260;
  while ( 1 )
  {
    pszDest = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( !pszDest )
    {
      inited = -1073741801;
      goto LABEL_31;
    }
    LODWORD(cchDest) = (unsigned int)v9 >> 1;
    DeviceContainerRegKeyPath = CmGetDeviceContainerRegKeyPath(
                                  (unsigned int)v9 >> 1,
                                  a2,
                                  a3,
                                  v10,
                                  v21,
                                  pszDest,
                                  cchDest,
                                  &v26);
    inited = DeviceContainerRegKeyPath;
    if ( DeviceContainerRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(pszDest, 0);
    pszDest = 0LL;
    v9 = 2LL * (unsigned int)v26;
    if ( v9 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_31;
    }
  }
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_31;
  if ( (a3 & 0x100) == 0 )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( inited < 0 )
      goto LABEL_31;
    Length = DestinationString.Length;
    if ( DestinationString.Length < (unsigned int)v9
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v14 = pszDest + 25;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = pszDest + 25;
      DestinationString.Length = Length - 50;
      v15 = RtlPrefixUnicodeString(
              &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::DeviceContainersKeyPrefix,
              &DestinationString,
              1u);
      inited = PnpCtxGetCachedContextBaseKey(a1, v15 != 0 ? 10 : 4, (__int64)&v24);
      if ( inited < 0 )
        goto LABEL_31;
      v16 = v24;
      if ( !v15 )
        v14 = pszDest;
      v17 = (__int64)(v14 + 25);
      goto LABEL_23;
    }
LABEL_30:
    inited = -1073741811;
    goto LABEL_31;
  }
  v17 = (__int64)pszDest;
  if ( a1 )
    v18 = *(_QWORD *)(a1 + 224);
  else
    v18 = 0LL;
  inited = SysCtxRegOpenCurrentUserKey(v18, 0, 0x2000000u, (__int64)&Handle);
  if ( inited < 0 )
    goto LABEL_31;
  v16 = Handle;
LABEL_23:
  if ( a5 )
    v19 = PnpCtxRegDeleteTree(a1, (__int64)v16, v17);
  else
    v19 = PnpCtxRegDeleteKey(a1, (__int64)v16, v17);
  if ( (int)(v19 + 0x80000000) >= 0 && v19 != -1073741444 )
    inited = v19;
LABEL_31:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)inited;
}
