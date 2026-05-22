/*
 * XREFs of ?QueryInterface@BamoSimpleHapticsControllerStub@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018A250
 * Callers:
 *     ?QueryInterface@BamoSimpleHapticsControllerStub@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018A290 (-QueryInterface@BamoSimpleHapticsControllerStub@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     Microsoft::BamoImpl::Util::FindInterface_BamoSimpleHapticsControllerStub_ISimpleHapticsControllerStub_ @ 0x180188370 (Microsoft--BamoImpl--Util--FindInterface_BamoSimpleHapticsControllerStub_ISimpleHapticsControlle.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoSimpleHapticsControllerStub::QueryInterface(
        BamoSimpleHapticsControllerStub *this,
        struct _GUID *a2,
        void **a3)
{
  __int64 Interface_BamoSimpleHapticsControllerStub_ISimpleHapticsControllerStub; // rax
  void (__fastcall ***v4)(_QWORD); // r10
  unsigned int v5; // ebx
  __int64 *v6; // r9

  Interface_BamoSimpleHapticsControllerStub_ISimpleHapticsControllerStub = Microsoft::BamoImpl::Util::FindInterface_BamoSimpleHapticsControllerStub_ISimpleHapticsControllerStub_(
                                                                             (__int64)this,
                                                                             a2);
  v5 = 0;
  *v6 = Interface_BamoSimpleHapticsControllerStub_ISimpleHapticsControllerStub;
  if ( Interface_BamoSimpleHapticsControllerStub_ISimpleHapticsControllerStub )
    (**v4)(v4);
  else
    return (unsigned int)-2147467262;
  return v5;
}
