/*
 * XREFs of _GetProcFromComCtl32 @ 0x1802D8288
 * Callers:
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x18002C624 (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 *     ?CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z @ 0x1801290B4 (-CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z.c)
 *     ImageList_Destroy @ 0x1802157F0 (ImageList_Destroy.c)
 *     PremultiplyAlphaChannel @ 0x180219AEC (PremultiplyAlphaChannel.c)
 *     ImageList_Create @ 0x18021BAC8 (ImageList_Create.c)
 *     ImageList_GetIcon @ 0x1802C00F0 (ImageList_GetIcon.c)
 *     DefSubclassProc @ 0x1802D81A4 (DefSubclassProc.c)
 *     SetWindowSubclass @ 0x1802D821C (SetWindowSubclass.c)
 *     CreateBitmapFromIcon @ 0x18049F3C0 (CreateBitmapFromIcon.c)
 * Callees:
 *     DelayLoadCC @ 0x1802C1FD4 (DelayLoadCC.c)
 */

__int64 __fastcall GetProcFromComCtl32(__int64 *a1, const CHAR *a2)
{
  __int64 v3; // rbx
  HMODULE v4; // rcx
  __int64 result; // rax

  v3 = 0LL;
  v4 = g_hinstCC;
  if ( g_hinstCC || (result = DelayLoadCC(), (v4 = g_hinstCC) != 0LL) )
  {
    result = (__int64)GetProcAddress(v4, a2);
    v3 = result;
  }
  *a1 = v3;
  return result;
}
