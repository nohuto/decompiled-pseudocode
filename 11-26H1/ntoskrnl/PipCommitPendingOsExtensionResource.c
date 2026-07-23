/*
 * XREFs of PipCommitPendingOsExtensionResource @ 0x140CCCD30
 * Callers:
 *     <none>
 * Callees:
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKey @ 0x140974BF4 (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegDeleteKey @ 0x140A3F2C8 (_PnpCtxRegDeleteKey.c)
 *     _PnpCtxRegDeleteTree @ 0x140A3F304 (_PnpCtxRegDeleteTree.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140A47944 (PiDevCfgCopyDeviceKeys.c)
 *     _PnpCtxRegCloseKey @ 0x140A9E908 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegCreateKey @ 0x140AED690 (_PnpCtxRegCreateKey.c)
 */

__int64 __fastcall PipCommitPendingOsExtensionResource(__int64 a1, void *a2, void *a3)
{
  __int64 v6; // rcx
  int CachedContextBaseKey; // ebx
  __int64 v9; // [rsp+40h] [rbp-30h] BYREF
  void *v10; // [rsp+48h] [rbp-28h]
  void *v11; // [rsp+50h] [rbp-20h]
  void *v12; // [rsp+58h] [rbp-18h] BYREF
  void *v13; // [rsp+60h] [rbp-10h] BYREF

  v9 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v9);
  if ( CachedContextBaseKey >= 0 )
  {
    if ( !a2 )
    {
      CachedContextBaseKey = PnpCtxRegOpenKey(
                               *(__int64 *)&PiPnpRtlCtx,
                               v9,
                               (__int64)L"Control\\PendingDriverOperations\\OsExtensionDatabase",
                               0,
                               0x2001Fu,
                               (__int64)&v12);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_14;
      a2 = v12;
    }
    if ( !a3 )
    {
      CachedContextBaseKey = PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, (__int64)a2, a1, 0, 0x20019u, (__int64)&v13);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_14;
      a3 = v13;
    }
    CachedContextBaseKey = PnpCtxRegCreateKey(
                             *(__int64 *)&PiPnpRtlCtx,
                             v9,
                             (int)L"Control\\OsExtensionDatabase",
                             0,
                             131078,
                             0LL);
    if ( CachedContextBaseKey >= 0 )
    {
      CachedContextBaseKey = PnpCtxRegCreateKey(*(__int64 *)&PiPnpRtlCtx, (int)v11, a1, 0, 131078, 0LL);
      if ( CachedContextBaseKey >= 0 )
      {
        CachedContextBaseKey = PiDevCfgCopyDeviceKeys(a3, v10, 1u, 0LL);
        if ( CachedContextBaseKey >= 0 )
        {
          CachedContextBaseKey = PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)a2, a1);
          if ( CachedContextBaseKey >= 0 )
          {
            LODWORD(v9) = 0;
            if ( (unsigned int)PnpCtxRegEnumKey(v6, a2) == -2147483622 )
              PnpCtxRegDeleteKey(*(__int64 *)&PiPnpRtlCtx, (__int64)a2, 0LL);
          }
        }
      }
    }
  }
LABEL_14:
  if ( v10 )
    PnpCtxRegCloseKey(v6, v10);
  if ( v11 )
    PnpCtxRegCloseKey(v6, v11);
  if ( v12 )
    PnpCtxRegCloseKey(v6, v12);
  if ( v13 )
    PnpCtxRegCloseKey(v6, v13);
  return (unsigned int)CachedContextBaseKey;
}
