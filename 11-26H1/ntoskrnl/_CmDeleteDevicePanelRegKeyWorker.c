/*
 * XREFs of _CmDeleteDevicePanelRegKeyWorker @ 0x1408A0344
 * Callers:
 *     _CmDeleteDevicePanelRegKey @ 0x1408A0200 (_CmDeleteDevicePanelRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     wcsrchr @ 0x14053A7D0 (wcsrchr.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x1408A0C74 (_CmGetDevicePanelRegKeyPath.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140A3DF40 (_PnpCtxRegOpenCurrentUserKey.c)
 *     _PnpCtxRegDeleteKey @ 0x140A3F2C8 (_PnpCtxRegDeleteKey.c)
 *     _PnpCtxRegDeleteTree @ 0x140A3F304 (_PnpCtxRegDeleteTree.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDevicePanelRegKeyWorker(__int64 a1, int a2, int a3, __int64 a4, char a5)
{
  wchar_t *pszDest; // rdi
  unsigned __int64 v9; // rsi
  int v10; // r9d
  int DevicePanelRegKeyPath; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  NTSTATUS inited; // ebx
  unsigned __int16 Length; // bx
  BOOLEAN v16; // r12
  const wchar_t *v17; // rsi
  HANDLE v18; // r14
  int v19; // eax
  wchar_t *v20; // rax
  wchar_t *v21; // rax
  int v23; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  void *v26; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+48h] BYREF

  LODWORD(v28) = 0;
  v26 = 0LL;
  Handle = 0LL;
  pszDest = 0LL;
  DestinationString = 0LL;
  if ( !a3 || (a3 & 0xFFFFFE9F) != 0 )
    goto LABEL_35;
  LODWORD(v9) = 317;
  while ( 1 )
  {
    pszDest = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( !pszDest )
    {
      inited = -1073741801;
      goto LABEL_36;
    }
    LODWORD(cchDest) = (unsigned int)v9 >> 1;
    DevicePanelRegKeyPath = CmGetDevicePanelRegKeyPath(
                              (unsigned int)v9 >> 1,
                              a2,
                              a3,
                              v10,
                              v23,
                              pszDest,
                              cchDest,
                              (__int64)&v28);
    inited = DevicePanelRegKeyPath;
    if ( DevicePanelRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(pszDest, 0);
    v9 = 2LL * (unsigned int)v28;
    pszDest = 0LL;
    if ( v9 > 0xFFFFFFFF )
    {
      inited = -1073741675;
      goto LABEL_36;
    }
  }
  if ( DevicePanelRegKeyPath < 0 )
    goto LABEL_36;
  if ( (a3 & 0x100) != 0 )
  {
    v17 = pszDest;
    inited = PnpCtxRegOpenCurrentUserKey(a1, v12, v13, &Handle);
    if ( inited < 0 )
      goto LABEL_36;
    v18 = Handle;
LABEL_20:
    if ( a5 )
      v19 = PnpCtxRegDeleteTree(a1, v18, v17);
    else
      v19 = PnpCtxRegDeleteKey(a1, v18, v17);
    if ( v19 == -1073741444 )
      goto LABEL_36;
    if ( v19 >= 0 )
    {
      v20 = wcsrchr(v17, 0x5Cu);
      if ( !v20 )
        goto LABEL_27;
      *v20 = 0;
      v19 = PnpCtxRegDeleteKey(a1, v18, v17);
      if ( v19 == -1073741535 )
        goto LABEL_36;
      if ( v19 < 0 )
        goto LABEL_25;
      v21 = wcsrchr(v17, 0x5Cu);
      if ( !v21 )
      {
LABEL_27:
        inited = -1073741595;
        goto LABEL_36;
      }
      *v21 = 0;
      v19 = PnpCtxRegDeleteKey(a1, v18, v17);
      if ( (int)(v19 + 0x80000000) < 0 || v19 == -1073741535 )
        goto LABEL_36;
    }
LABEL_25:
    inited = v19;
    goto LABEL_36;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
  if ( inited < 0 )
    goto LABEL_36;
  Length = DestinationString.Length;
  if ( DestinationString.Length < (unsigned int)v9
    && DestinationString.Length > 0x32u
    && RtlPrefixUnicodeString(&`_CmDeleteDevicePanelRegKeyWorker'::`2'::ObjectPathRootPrefix, &DestinationString, 1u) )
  {
    DestinationString.MaximumLength -= 50;
    DestinationString.Buffer = pszDest + 25;
    DestinationString.Length = Length - 50;
    v16 = RtlPrefixUnicodeString(
            &`_CmDeleteDevicePanelRegKeyWorker'::`2'::DevicePanelsKeyPrefix,
            &DestinationString,
            1u);
    inited = PnpCtxGetCachedContextBaseKey(a1, v16 != 0 ? 11 : 4, &v26);
    if ( inited < 0 )
      goto LABEL_36;
    v17 = pszDest + 46;
    if ( !v16 )
      v17 = pszDest + 25;
    v18 = v26;
    goto LABEL_20;
  }
LABEL_35:
  inited = -1073741811;
LABEL_36:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)inited;
}
