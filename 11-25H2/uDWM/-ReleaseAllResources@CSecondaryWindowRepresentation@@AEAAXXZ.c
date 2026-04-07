/*
 * XREFs of ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x18001DA54
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18001D550 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x18001D92C (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseResources@CSecondaryWindowRepresentation@@AEAAXW4WindowFramePart@1@@Z @ 0x18001DA88 (-ReleaseResources@CSecondaryWindowRepresentation@@AEAAXW4WindowFramePart@1@@Z.c)
 */

void __fastcall CSecondaryWindowRepresentation::ReleaseAllResources(CSecondaryWindowRepresentation *this)
{
  unsigned int i; // ebx

  for ( i = 0; i < 5; ++i )
    CSecondaryWindowRepresentation::ReleaseResources(this, i);
}
