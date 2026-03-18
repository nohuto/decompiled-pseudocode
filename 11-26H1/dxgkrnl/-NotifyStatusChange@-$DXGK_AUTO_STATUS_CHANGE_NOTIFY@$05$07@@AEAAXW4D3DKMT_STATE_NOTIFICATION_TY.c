/*
 * XREFs of ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$05$07@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1400585B0
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D2DA8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkStatusChangeNotify @ 0x1402D4620 (DxgkStatusChangeNotify.c)
 */

__int64 __fastcall DXGK_AUTO_STATUS_CHANGE_NOTIFY<6,8>::NotifyStatusChange(__int64 *a1, int a2)
{
  __int64 result; // rax
  int v3; // edx
  int v4; // r8d
  _DWORD v5[2]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v6; // [rsp+68h] [rbp-30h]
  __int128 v7; // [rsp+70h] [rbp-28h]

  v5[0] = a2;
  v5[1] = 0;
  v6 = *a1;
  v7 = 0LL;
  result = DxgkStatusChangeNotify(v5);
  if ( (int)result < 0 )
  {
    result = WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1559;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        return McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                 1559,
                 v3,
                 v4,
                 0LL,
                 2,
                 -1,
                 (__int64)L"NT_SUCCESS(_Status)",
                 1559LL,
                 0LL,
                 0LL,
                 0LL,
                 0LL);
    }
  }
  return result;
}
