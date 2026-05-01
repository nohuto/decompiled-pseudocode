/*
 * XREFs of __tailMerge_gdi32_dll @ 0x1802D9795
 * Callers:
 *     __imp_load_CombineRgn @ 0x1802D9814 (__imp_load_CombineRgn.c)
 *     __imp_load_DeleteObject @ 0x1802D9826 (__imp_load_DeleteObject.c)
 *     __imp_load_CreateCompatibleBitmap @ 0x1802D9838 (__imp_load_CreateCompatibleBitmap.c)
 *     __imp_load_CreateRectRgnIndirect @ 0x1802D984A (__imp_load_CreateRectRgnIndirect.c)
 *     __imp_load_GetStockObject @ 0x1802D985C (__imp_load_GetStockObject.c)
 *     __imp_load_CreateDIBSection @ 0x1802D986E (__imp_load_CreateDIBSection.c)
 *     __imp_load_GetObjectW @ 0x1802D9880 (__imp_load_GetObjectW.c)
 *     __imp_load_CreateCompatibleDC @ 0x1802D9892 (__imp_load_CreateCompatibleDC.c)
 *     __imp_load_SelectObject @ 0x1802D98A4 (__imp_load_SelectObject.c)
 *     __imp_load_DeleteDC @ 0x1802D98B6 (__imp_load_DeleteDC.c)
 *     __imp_load_GetDIBits @ 0x1802D98C8 (__imp_load_GetDIBits.c)
 *     __imp_load_StretchDIBits @ 0x1802D98DA (__imp_load_StretchDIBits.c)
 *     __imp_load_GdiAlphaBlend @ 0x1802D98EC (__imp_load_GdiAlphaBlend.c)
 *     __imp_load_SetBkColor @ 0x1802D98FE (__imp_load_SetBkColor.c)
 *     __imp_load_BitBlt @ 0x1802D9910 (__imp_load_BitBlt.c)
 *     __imp_load_SetStretchBltMode @ 0x1802D9922 (__imp_load_SetStretchBltMode.c)
 *     __imp_load_StretchBlt @ 0x1802D9934 (__imp_load_StretchBlt.c)
 *     __imp_load_CreateSolidBrush @ 0x1802D9946 (__imp_load_CreateSolidBrush.c)
 *     __imp_load_GetDeviceCaps @ 0x1802D9958 (__imp_load_GetDeviceCaps.c)
 *     __imp_load_SetBkMode @ 0x1802DB969 (__imp_load_SetBkMode.c)
 *     __imp_load_GetCurrentObject @ 0x1802DB97B (__imp_load_GetCurrentObject.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C3400 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_gdi32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_gdi32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
