/*
 * XREFs of ?OnRepresentationTypeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x1800C5CA8
 * Callers:
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x1800CF840 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 * Callees:
 *     ?OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z @ 0x1800B8EB4 (-OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z.c)
 */

void __fastcall CSecondaryWindowRepresentation::OnRepresentationTypeUpdated(CSecondaryWindowRepresentation *this)
{
  if ( *((_QWORD *)this + 47) )
    CImmersiveWindowIconic::OnRepresentationTypeUpdated(*((CImmersiveWindowIconic **)this + 47), *((_DWORD *)this + 41));
}
