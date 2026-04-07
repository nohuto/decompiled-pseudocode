/*
 * XREFs of ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z @ 0x1800BA60C
 * Callers:
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x1800BAF40 (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CMagnifier@@AEAA@PEAUHWND__@@HPEAVCVisual@@@Z @ 0x1800BA48C (--0CMagnifier@@AEAA@PEAUHWND__@@HPEAVCVisual@@@Z.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x1800BA6DC (-Initialize@CMagnifier@@AEAAJXZ.c)
 */

__int64 __fastcall CMagnifier::Create(HWND a1, unsigned int a2, struct CVisual *a3, struct CMagnifier **a4)
{
  CMagnifier *v8; // rax
  CMagnifier *v9; // rax
  struct CMagnifier *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx

  v8 = (CMagnifier *)DefaultHeap::AllocClear(0x178uLL);
  if ( v8 && (v9 = CMagnifier::CMagnifier(v8, a1, a2, a3), (v10 = v9) != 0LL) )
  {
    v11 = CMagnifier::Initialize(v9);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x5Du, 0LL);
    }
    else
    {
      *a4 = v10;
      CMILRefCountBase::AddRef(v10);
    }
    CBaseObject::Release(v10);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x5Bu, 0LL);
  }
  return v12;
}
