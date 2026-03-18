/*
 * XREFs of DpiPnpEnableVga @ 0x14024BC74
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x140242E80 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x14024809C (DpiFdoStartAdapterThreadImpl.c)
 *     DpiDisableMsBddFallbackDriverWorkItem @ 0x14024B2A0 (DpiDisableMsBddFallbackDriverWorkItem.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkInvalidateQdcCache @ 0x1403660C0 (DxgkInvalidateQdcCache.c)
 */

__int64 __fastcall DpiPnpEnableVga(unsigned __int8 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 v7; // rbx
  __int64 v8; // r8
  _DWORD v10[2]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v11; // [rsp+38h] [rbp-31h]
  __int64 v12; // [rsp+40h] [rbp-29h]
  __int64 v13; // [rsp+48h] [rbp-21h]
  _DWORD v14[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v15; // [rsp+58h] [rbp-11h]
  __int128 v16; // [rsp+60h] [rbp-9h]
  __int64 v17; // [rsp+70h] [rbp+7h]
  __int64 v18; // [rsp+78h] [rbp+Fh]
  int v19; // [rsp+80h] [rbp+17h]
  int v20; // [rsp+84h] [rbp+1Bh]
  int v21; // [rsp+88h] [rbp+1Fh]
  int v22; // [rsp+8Ch] [rbp+23h]

  v5 = a2;
  v7 = a1;
  v10[1] = 0;
  v13 = 0LL;
  DxgkInvalidateQdcCache();
  v10[0] = 7;
  v12 = v7;
  v11 = 0LL;
  if ( qword_140169078 )
    v11 = *(_QWORD *)(*(_QWORD *)(qword_140169078 + 64) + 152LL);
  v15 = 0LL;
  v22 = 0;
  v18 = 0LL;
  v16 = 0LL;
  v14[0] = 6;
  v14[1] = 64;
  v17 = 0LL;
  v19 = 48;
  v20 = v7;
  v21 = v5;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v14, 0x200000000uLL);
  LOBYTE(v8) = v5;
  return SMgrGdiCallout(
           v10,
           0x200000000LL,
           v8,
           (unsigned __int64)DpiFinishPnPTransitionCallback & -(__int64)(a3 != 0),
           a3,
           a4);
}
