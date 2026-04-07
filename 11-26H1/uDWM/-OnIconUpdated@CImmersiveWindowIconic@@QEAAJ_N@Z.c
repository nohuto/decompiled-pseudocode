/*
 * XREFs of ?OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z @ 0x180087384
 * Callers:
 *     ?SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z @ 0x180087308 (-SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z.c)
 *     ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800B8004 (-SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800873F4 (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveWindowIconic::OnIconUpdated(CImmersiveWindowIconic *this, char a2)
{
  int IconW; // eax
  unsigned int v5; // ebx

  IconW = CImmersiveWindowIconic::LoadIconW(this);
  v5 = IconW;
  if ( IconW < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, IconW, 0xBEu, 0LL);
  }
  else if ( a2 )
  {
    (*(void (__fastcall **)(CImmersiveWindowIconic *))(*(_QWORD *)this + 48LL))(this);
  }
  return v5;
}
