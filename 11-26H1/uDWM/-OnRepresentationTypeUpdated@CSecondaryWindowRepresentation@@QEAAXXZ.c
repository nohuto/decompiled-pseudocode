/*
 * XREFs of ?OnRepresentationTypeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x1800BF758
 * Callers:
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x1800C9ED8 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 * Callees:
 *     ?OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z @ 0x1800B7F60 (-OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z.c)
 */

void __fastcall CSecondaryWindowRepresentation::OnRepresentationTypeUpdated(CSecondaryWindowRepresentation *this)
{
  if ( *((_QWORD *)this + 26) )
    CImmersiveWindowIconic::OnRepresentationTypeUpdated(*((CImmersiveWindowIconic **)this + 26), *((_DWORD *)this + 41));
}
