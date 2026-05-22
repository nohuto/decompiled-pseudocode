/*
 * XREFs of ?QueryInterface@BamoSimpleHapticsControllerPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018A200
 * Callers:
 *     ?QueryInterface@BamoSimpleHapticsControllerPrincipal@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018A240 (-QueryInterface@BamoSimpleHapticsControllerPrincipal@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     Microsoft::BamoImpl::Util::FindInterface_BamoSimpleHapticsControllerPrincipal_ISimpleHapticsControllerPrincipal_ @ 0x180188320 (Microsoft--BamoImpl--Util--FindInterface_BamoSimpleHapticsControllerPrincipal_ISimpleHapticsCont.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoSimpleHapticsControllerPrincipal::QueryInterface(
        BamoSimpleHapticsControllerPrincipal *this,
        struct _GUID *a2,
        void **a3)
{
  __int64 Interface_BamoSimpleHapticsControllerPrincipal_ISimpleHapticsControllerPrincipal; // rax
  void (__fastcall ***v4)(_QWORD); // r10
  unsigned int v5; // ebx
  __int64 *v6; // r9

  Interface_BamoSimpleHapticsControllerPrincipal_ISimpleHapticsControllerPrincipal = Microsoft::BamoImpl::Util::FindInterface_BamoSimpleHapticsControllerPrincipal_ISimpleHapticsControllerPrincipal_(
                                                                                       (__int64)this,
                                                                                       a2);
  v5 = 0;
  *v6 = Interface_BamoSimpleHapticsControllerPrincipal_ISimpleHapticsControllerPrincipal;
  if ( Interface_BamoSimpleHapticsControllerPrincipal_ISimpleHapticsControllerPrincipal )
    (**v4)(v4);
  else
    return (unsigned int)-2147467262;
  return v5;
}
