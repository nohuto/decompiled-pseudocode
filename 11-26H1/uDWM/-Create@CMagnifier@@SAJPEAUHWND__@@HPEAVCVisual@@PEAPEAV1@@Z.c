/*
 * XREFs of ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z @ 0x1800B9ECC
 * Callers:
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x1800BA730 (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CMagnifier@@AEAA@PEAUHWND__@@HPEAVCVisual@@@Z @ 0x1800B9D58 (--0CMagnifier@@AEAA@PEAUHWND__@@HPEAVCVisual@@@Z.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x1800B9FA4 (-Initialize@CMagnifier@@AEAAJXZ.c)
 */

__int64 __fastcall CMagnifier::Create(HWND a1, unsigned int a2, struct CVisual *a3, struct CMagnifier **a4)
{
  CMagnifier *v8; // rax
  CMagnifier *v9; // rax
  struct CMagnifier *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx

  v8 = (CMagnifier *)DefaultHeap::AllocClear(0x170uLL);
  if ( v8 && (v9 = CMagnifier::CMagnifier(v8, a1, a2, a3), (v10 = v9) != 0LL) )
  {
    v11 = CMagnifier::Initialize(v9);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x63u, 0LL);
    }
    else
    {
      *a4 = v10;
      CBaseObject::AddRef(v10);
    }
    CBaseObject::Release(v10);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x61u, 0LL);
  }
  return v12;
}
