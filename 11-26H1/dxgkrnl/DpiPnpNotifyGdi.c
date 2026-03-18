/*
 * XREFs of DpiPnpNotifyGdi @ 0x14024BD94
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x14024809C (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFdoStopAdapter @ 0x140248A44 (DpiFdoStopAdapter.c)
 * Callees:
 *     DpiFdoIsPostDevice @ 0x140056A38 (DpiFdoIsPostDevice.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DpiPnpNotifyGdi(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int64 a4,
        char a5,
        __int64 a6)
{
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // r8
  __int128 v15; // [rsp+38h] [rbp-61h] BYREF
  __int128 v16; // [rsp+48h] [rbp-51h]
  _DWORD v17[2]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v18; // [rsp+68h] [rbp-31h]
  __int128 v19; // [rsp+70h] [rbp-29h]
  __int64 v20; // [rsp+80h] [rbp-19h]
  __int64 v21; // [rsp+88h] [rbp-11h]
  int v22; // [rsp+90h] [rbp-9h]
  int v23; // [rsp+94h] [rbp-5h]
  __int64 v24; // [rsp+98h] [rbp-1h]
  __int64 v25; // [rsp+A0h] [rbp+7h]

  v8 = a2;
  v15 = 0LL;
  v16 = 0LL;
  if ( a1 )
  {
    if ( !a2 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      *((_QWORD *)&v15 + 1) = *(_QWORD *)(v9 + 152);
      if ( *(_DWORD *)(v9 + 16) == 1953656900 && *(_DWORD *)(v9 + 20) == 2 )
      {
        BYTE12(v16) = *(_BYTE *)(v9 + 4040) >> 7;
        BYTE14(v16) = *(_DWORD *)(v9 + 4120) == 3;
      }
    }
  }
  LODWORD(v15) = 7;
  *(_QWORD *)&v16 = v8;
  BYTE13(v16) = DpiFdoIsPostDevice(a1);
  HIBYTE(v16) = a5;
  v25 = v10;
  v18 = 0LL;
  v21 = v11;
  v17[0] = 30;
  v17[1] = 72;
  v20 = v11;
  v19 = 0LL;
  v22 = 47;
  v23 = v12;
  v24 = v11;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v17, a4);
  LOBYTE(v13) = 1;
  return SMgrGdiCallout(&v15, a4, v13, (unsigned __int64)DpiFinishPnPTransitionCallback & -(__int64)(a3 != 0), a3, a6);
}
