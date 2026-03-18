/*
 * XREFs of McTemplateU0xqxt_EventWriteTransfer @ 0x1802AC3D4
 * Callers:
 *     ?NotifyPinned@CDxHandleBitmapRealization@@UEAAXXZ @ 0x1802ABE50 (-NotifyPinned@CDxHandleBitmapRealization@@UEAAXXZ.c)
 *     ?NotifyPinned@CSwapChainRealization@@UEAAXXZ @ 0x1802ADF00 (-NotifyPinned@CSwapChainRealization@@UEAAXXZ.c)
 *     ?NotifyPinned@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x1802AF580 (-NotifyPinned@CDxHandleYUVBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0xqxt_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-19h] BYREF
  __int64 *v8; // [rsp+48h] [rbp-9h]
  __int64 v9; // [rsp+50h] [rbp-1h]
  int *v10; // [rsp+58h] [rbp+7h]
  __int64 v11; // [rsp+60h] [rbp+Fh]
  char *v12; // [rsp+68h] [rbp+17h]
  __int64 v13; // [rsp+70h] [rbp+1Fh]
  char *v14; // [rsp+78h] [rbp+27h]
  __int64 v15; // [rsp+80h] [rbp+2Fh]
  __int64 v16; // [rsp+B8h] [rbp+67h] BYREF
  int v17; // [rsp+C0h] [rbp+6Fh] BYREF

  v17 = a4;
  v16 = a3;
  v9 = 8LL;
  v8 = &v16;
  v11 = 4LL;
  v10 = &v17;
  v13 = 8LL;
  v12 = &a5;
  v15 = 4LL;
  v14 = &a6;
  return McGenEventWrite_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &ResourcePinned, a3, 5u, &v7);
}
