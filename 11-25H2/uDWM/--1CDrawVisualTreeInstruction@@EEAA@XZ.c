/*
 * XREFs of ??1CDrawVisualTreeInstruction@@EEAA@XZ @ 0x180074F3C
 * Callers:
 *     ??_ECDrawVisualTreeInstruction@@EEAAPEAXI@Z @ 0x180074EF0 (--_ECDrawVisualTreeInstruction@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDrawVisualTreeInstruction::~CDrawVisualTreeInstruction(CDrawVisualTreeInstruction *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CDrawVisualTreeInstruction::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  CRenderDataInstruction::~CRenderDataInstruction(this);
}
