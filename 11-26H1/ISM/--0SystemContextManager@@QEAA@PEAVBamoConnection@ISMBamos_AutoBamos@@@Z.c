/*
 * XREFs of ??0SystemContextManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18013EAE4
 * Callers:
 *     ??0InputSystemInternal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18004567C (--0InputSystemInternal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180026AC8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

SystemContextManager *__fastcall SystemContextManager::SystemContextManager(
        SystemContextManager *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  *(_QWORD *)this = &BamoSystemContextManagerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoSystemContextManagerPrincipal::`vftable'{for `ISystemContextManagerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((SystemContextManager *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoSystemContextManagerPrincipalImpl::`vftable';
  *(_QWORD *)this = &SystemContextManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoSystemContextManagerPrincipal::`vftable'{for `ISystemContextManagerPrincipal'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  return this;
}
