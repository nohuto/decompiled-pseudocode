/*
 * XREFs of ??1?$CAutoPtr@UAuxiliaryInputDescriptor@@@ATL@@QEAA@XZ @ 0x1800B0938
 * Callers:
 *     _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$8 @ 0x180168249 (_CAudioResourceManager--UpdateAuxiliaryInputForStreamGroup_--_1_--dtor$8.c)
 * Callees:
 *     ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x180087D30 (--_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z.c)
 */

void **__fastcall ATL::CAutoPtr<AuxiliaryInputDescriptor>::~CAutoPtr<AuxiliaryInputDescriptor>(void ***a1)
{
  void **v2; // rcx
  void **result; // rax

  v2 = *a1;
  if ( v2 )
    result = AuxiliaryInputDescriptor::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
