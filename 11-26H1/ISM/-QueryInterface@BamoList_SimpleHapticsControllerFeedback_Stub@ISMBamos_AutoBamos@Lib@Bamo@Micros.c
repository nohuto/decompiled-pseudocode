/*
 * XREFs of ?QueryInterface@BamoList_SimpleHapticsControllerFeedback_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018A1B0
 * Callers:
 *     ?QueryInterface@BamoList_SimpleHapticsControllerFeedback_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018A1F0 (-QueryInterface@BamoList_SimpleHapticsControllerFeedback_Stub@ISMBamos_AutoBamos@Li_ea_18018A1F0.c)
 * Callees:
 *     Microsoft::BamoImpl::Util::FindInterface_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Stub_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_SimpleHapticsControllerFeedback_Stub_ @ 0x1801882D0 (Microsoft--BamoImpl--Util--FindInterface_Microsoft--Bamo--Lib--ISMBamos_AutoBamos--_ea_1801882D0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Stub::QueryInterface(
        Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Stub *this,
        struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  void (__fastcall ***v4)(_QWORD); // r10
  unsigned int v5; // ebx
  __int64 *v6; // r9

  v3 = Microsoft::BamoImpl::Util::FindInterface_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Stub_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_SimpleHapticsControllerFeedback_Stub_(
         (__int64)this,
         a2);
  v5 = 0;
  *v6 = v3;
  if ( v3 )
    (**v4)(v4);
  else
    return (unsigned int)-2147467262;
  return v5;
}
