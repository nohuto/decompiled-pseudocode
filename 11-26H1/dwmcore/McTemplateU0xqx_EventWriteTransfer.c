/*
 * XREFs of McTemplateU0xqx_EventWriteTransfer @ 0x1802AC344
 * Callers:
 *     ?NotifyUnPinned@CDxHandleBitmapRealization@@UEAAXXZ @ 0x1802ABEB0 (-NotifyUnPinned@CDxHandleBitmapRealization@@UEAAXXZ.c)
 *     ?NotifyUnPinned@CSwapChainRealization@@UEAAXXZ @ 0x1802ADF60 (-NotifyUnPinned@CSwapChainRealization@@UEAAXXZ.c)
 *     ?NotifyUnPinned@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x1802AF5E0 (-NotifyUnPinned@CDxHandleYUVBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0xqx_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  int *v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  char *v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]
  __int64 v13; // [rsp+A0h] [rbp+20h] BYREF
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v13 = a3;
  v8 = 8LL;
  v7 = &v13;
  v12 = 8LL;
  v9 = &v14;
  v11 = &a5;
  v10 = 4LL;
  return McGenEventWrite_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &ResourceUnPinned, a3, 4u, &v6);
}
