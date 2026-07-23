/*
 * XREFs of _CmRemovePanelDeviceWorker @ 0x1408A1268
 * Callers:
 *     _CmRemovePanelDevice @ 0x1408A1124 (_CmRemovePanelDevice.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x140975D5C (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegDeleteValue @ 0x1409AD448 (_PnpCtxRegDeleteValue.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1409AF740 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpCtxRegDeleteTree @ 0x140A3F304 (_PnpCtxRegDeleteTree.c)
 */

__int64 __fastcall CmRemovePanelDeviceWorker(__int64 a1, int a2, __int64 a3, _BYTE *a4)
{
  int CachedContextBaseKey; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  HANDLE v12; // rdx
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h] BYREF
  int v17; // [rsp+98h] [rbp+38h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  Handle = 0LL;
  v17 = 0;
  *a4 = 0;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 11LL, &v16);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_12;
  CachedContextBaseKey = PnpCtxRegOpenKey(a1, v16, a2, 0, 1, (__int64)&v15);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_12;
  CachedContextBaseKey = PnpCtxRegOpenKey(a1, (_DWORD)v15, (unsigned int)L"Devices", 0, 3, (__int64)&Handle);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_12;
  v10 = PnpCtxRegDeleteValue(v9, Handle, a3);
  CachedContextBaseKey = v10;
  if ( v10 != -1073741772 && v10 != -1073741444 && v10 < 0 )
    goto LABEL_14;
  v12 = Handle;
  *a4 = 1;
  CachedContextBaseKey = PnpCtxRegQueryInfoKey(v11, v12, 0LL, 0LL, &v17, 0LL, 0LL);
  if ( CachedContextBaseKey < 0 )
  {
LABEL_12:
    if ( CachedContextBaseKey == -1073741772 || CachedContextBaseKey == -1073741444 )
      CachedContextBaseKey = 0;
  }
  else
  {
    if ( !v17 )
      PnpCtxRegDeleteTree(a1, Handle, 0LL);
    PnpObjectRaisePropertyChangeEvent(a1, a3, 1, 0, 0LL, (__int64)DEVPKEY_Device_PanelId);
  }
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  if ( v15 )
    ZwClose(v15);
  return (unsigned int)CachedContextBaseKey;
}
