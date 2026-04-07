/*
 * XREFs of ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x1800216A4
 * Callers:
 *     ?GetDrawNineGridInstruction@CBitmapSource@@QEAAJPEAPEAVCDrawNineGridInstruction@@@Z @ 0x180021664 (-GetDrawNineGridInstruction@CBitmapSource@@QEAAJPEAPEAVCDrawNineGridInstruction@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x18001FC58 (-Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z.c)
 *     ??0CDrawNineGridInstruction@@IEAA@XZ @ 0x180021758 (--0CDrawNineGridInstruction@@IEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDrawNineGridInstruction::Create(struct CBitmapSource *a1, struct CDrawNineGridInstruction **a2)
{
  CDrawNineGridInstruction *v4; // rax
  struct _MARGINS *v5; // rax
  CBaseObject *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx

  v4 = (CDrawNineGridInstruction *)DefaultHeap::AllocClear(0x80uLL);
  if ( v4
    && (v5 = (struct _MARGINS *)CDrawNineGridInstruction::CDrawNineGridInstruction(v4), (v6 = (CBaseObject *)v5) != 0LL) )
  {
    v7 = CDrawNineGridInstruction::Initialize(v5, a1);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x33u, 0LL);
      CBaseObject::Release(v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x31u, 0LL);
  }
  return v8;
}
