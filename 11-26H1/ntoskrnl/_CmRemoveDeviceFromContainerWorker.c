/*
 * XREFs of _CmRemoveDeviceFromContainerWorker @ 0x140B1FA04
 * Callers:
 *     _CmRemoveDeviceFromContainer @ 0x14089E454 (_CmRemoveDeviceFromContainer.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x140958180 (_PnpCtxGetCachedNodeBaseKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     _PnpCtxRegQueryInfoKey @ 0x140975D5C (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegDeleteValue @ 0x1409AD448 (_PnpCtxRegDeleteValue.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1409AF85C (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _PnpCtxRegDeleteTree @ 0x140A3F304 (_PnpCtxRegDeleteTree.c)
 *     _CmDeleteDeviceContainer @ 0x140B1FCDC (_CmDeleteDeviceContainer.c)
 */

__int64 __fastcall CmRemoveDeviceFromContainerWorker(
        _QWORD *a1,
        const WCHAR *a2,
        const WCHAR *a3,
        const WCHAR *a4,
        _BYTE *a5)
{
  _BYTE *v5; // rsi
  _QWORD *v10; // rdx
  int CachedNodeBaseKey; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v23; // rdx
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v25; // [rsp+48h] [rbp-38h] BYREF
  HANDLE v26; // [rsp+50h] [rbp-30h] BYREF
  char *v27; // [rsp+58h] [rbp-28h] BYREF
  __int128 v28; // [rsp+60h] [rbp-20h]
  __int64 v29; // [rsp+70h] [rbp-10h]
  int v30; // [rsp+B0h] [rbp+30h] BYREF

  v5 = a5;
  v27 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  *a5 = 0;
  v10 = (_QWORD *)a1[22];
  Handle = 0LL;
  v30 = 0;
  if ( !v10 )
  {
    v23 = (_QWORD *)a1[7];
    if ( v23 == a1 + 7 )
      v10 = (_QWORD *)a1[11];
    else
      v10 = v23 - 2;
    a1[22] = v10;
  }
  CachedNodeBaseKey = PnpCtxGetCachedNodeBaseKey((__int64)a1, v10, 10, &v27);
  if ( CachedNodeBaseKey >= 0 )
  {
    v12 = a1[28];
    v13 = v12 ? *(_QWORD *)(v12 + 8) : 0LL;
    CachedNodeBaseKey = RegRtlOpenKeyTransacted(v27, a2, 0, 1u, &v26, v13);
    if ( CachedNodeBaseKey >= 0 )
    {
      v14 = a1[28];
      v15 = v14 ? *(_QWORD *)(v14 + 8) : 0LL;
      CachedNodeBaseKey = RegRtlOpenKeyTransacted((char *)v26, L"BaseContainers", 0, 1u, &v25, v15);
      if ( CachedNodeBaseKey >= 0 )
      {
        v16 = a1[28];
        v17 = v16 ? *(_QWORD *)(v16 + 8) : 0LL;
        CachedNodeBaseKey = RegRtlOpenKeyTransacted((char *)v25, a3, 0, 3u, &Handle, v17);
        if ( CachedNodeBaseKey >= 0 )
        {
          PnpCtxRegDeleteValue(v18, Handle, a4);
          CachedNodeBaseKey = PnpCtxRegQueryInfoKey(v19, Handle, 0LL, 0LL, &v30, 0LL, 0LL);
          if ( CachedNodeBaseKey >= 0 )
          {
            if ( !v30 )
              PnpCtxRegDeleteTree((__int64)a1, (__int64)Handle, 0LL);
            CachedNodeBaseKey = PnpCtxRegQueryInfoKey(v20, v25, &v30, 0LL, 0LL, 0LL, 0LL);
            if ( CachedNodeBaseKey >= 0 )
            {
              if ( !v30 )
              {
                CachedNodeBaseKey = CmDeleteDeviceContainer(a1, a2);
                if ( CachedNodeBaseKey >= 0 )
                  *v5 = 1;
              }
              v29 = 0LL;
              v21 = a1[62];
              v28 = 0LL;
              if ( v21 )
                PnpDeviceRaisePropertyChangeEventWorker(
                  (__int64)a1,
                  (__int64)a4,
                  0LL,
                  0LL,
                  (__int64)&DEVPKEY_Device_ContainerId,
                  v21);
            }
          }
        }
      }
    }
  }
  if ( CachedNodeBaseKey == -1073741772 || CachedNodeBaseKey == -1073741444 )
    CachedNodeBaseKey = 0;
  if ( Handle )
    ZwClose(Handle);
  if ( v25 )
    ZwClose(v25);
  if ( v26 )
    ZwClose(v26);
  return (unsigned int)CachedNodeBaseKey;
}
