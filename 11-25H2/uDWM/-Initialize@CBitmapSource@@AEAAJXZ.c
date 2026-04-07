/*
 * XREFs of ?Initialize@CBitmapSource@@AEAAJXZ @ 0x180031A04
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180030AA8 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z @ 0x18003170C (-Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x180031930 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateBitmapSourceProxy@CCompositor@@QEAAJPEAPEAVCBitmapSourceProxy@@@Z @ 0x180031A58 (-CreateBitmapSourceProxy@CCompositor@@QEAAJPEAPEAVCBitmapSourceProxy@@@Z.c)
 */

__int64 __fastcall CBitmapSource::Initialize(struct CBitmapSourceProxy **this)
{
  int BitmapSourceProxy; // eax
  unsigned int v2; // ebx

  BitmapSourceProxy = CCompositor::CreateBitmapSourceProxy(
                        *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                        this + 2);
  v2 = BitmapSourceProxy;
  if ( BitmapSourceProxy < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapSourceProxy, 0x12Au, 0LL);
  else
    return 0;
  return v2;
}
