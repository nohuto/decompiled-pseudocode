/*
 * XREFs of NtUserBitBltSysBmp @ 0x140192600
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     NtGdiStretchBlt @ 0x140076870 (NtGdiStretchBlt.c)
 *     GreBitBltInternal @ 0x140084DC8 (GreBitBltInternal.c)
 *     GetOemBitmapInfo @ 0x140192A04 (GetOemBitmapInfo.c)
 *     GetOemBitmapInfoForDpi @ 0x140192A28 (GetOemBitmapInfoForDpi.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140192EA0 (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     GreGetDCDpiScaleValue @ 0x140195950 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall NtUserBitBltSysBmp(HDC a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
  int v9; // ebx
  __int64 v10; // rcx
  HDC v11; // r14
  __int16 *OemBitmapInfo; // rsi
  __int64 v13; // rcx
  int DCDpiScaleValue; // eax
  __int16 *OemBitmapInfoForDpi; // rax
  int v16; // eax

  v9 = 0;
  EnterCrit(0LL, 0LL);
  if ( a4 < 0x5D )
  {
    v11 = PrepareHDCBITSBitmap(a1);
    if ( v11 )
    {
      OemBitmapInfo = (__int16 *)GetOemBitmapInfo(a4);
      if ( (W32GetCurrentThreadDpiAwarenessContext(v13) & 0xF) != 0
        || (DCDpiScaleValue = GreGetDCDpiScaleValue(a1), DCDpiScaleValue <= 1)
        || (OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, (unsigned int)(96 * DCDpiScaleValue))) == 0LL )
      {
        v16 = GreBitBltInternal(
                a1,
                a2,
                a3,
                OemBitmapInfo[2],
                OemBitmapInfo[3],
                v11,
                *OemBitmapInfo,
                OemBitmapInfo[1],
                a5,
                0,
                0);
      }
      else
      {
        v16 = NtGdiStretchBlt(
                a1,
                a2,
                a3,
                OemBitmapInfo[2],
                OemBitmapInfo[3],
                v11,
                *OemBitmapInfoForDpi,
                OemBitmapInfoForDpi[1],
                OemBitmapInfoForDpi[2],
                OemBitmapInfoForDpi[3],
                a5,
                0);
      }
      v9 = v16;
    }
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v10);
  return v9;
}
