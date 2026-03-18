/*
 * XREFs of ?Create@CWindowBackgroundTreatment@@SAJPEAVCComposition@@PEAVCBrush@@PEAPEAV1@@Z @ 0x18014DD04
 * Callers:
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x18014BF4C (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETW.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2CResource@@KAPEAX_K@Z @ 0x180110EF4 (--2CResource@@KAPEAX_K@Z.c)
 *     ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z @ 0x18014DD98 (--0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z.c)
 */

__int64 __fastcall CWindowBackgroundTreatment::Create(
        struct CComposition *a1,
        struct CBrush *a2,
        struct CWindowBackgroundTreatment **a3)
{
  unsigned int v6; // ebx
  CWindowBackgroundTreatment *v7; // rax
  CWindowBackgroundTreatment *v8; // rax
  struct CWindowBackgroundTreatment *v9; // rdi

  v6 = 0;
  v7 = (CWindowBackgroundTreatment *)CResource::operator new(0x140uLL);
  if ( v7 && (v8 = CWindowBackgroundTreatment::CWindowBackgroundTreatment(v7, a1, a2), (v9 = v8) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CWindowBackgroundTreatment *)((char *)v8 + 8));
    *a3 = v9;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x14u, 0LL);
  }
  return v6;
}
