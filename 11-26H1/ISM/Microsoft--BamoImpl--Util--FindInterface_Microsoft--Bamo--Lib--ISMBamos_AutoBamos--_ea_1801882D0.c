/*
 * XREFs of Microsoft::BamoImpl::Util::FindInterface_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Stub_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_SimpleHapticsControllerFeedback_Stub_ @ 0x1801882D0
 * Callers:
 *     ?QueryInterface@BamoList_SimpleHapticsControllerFeedback_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018A1B0 (-QueryInterface@BamoList_SimpleHapticsControllerFeedback_Stub@ISMBamos_AutoBamos@Lib@Bamo@Micros.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::Util::FindInterface_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Stub_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_SimpleHapticsControllerFeedback_Stub_(
        __int64 a1,
        _QWORD *a2)
{
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && a2[1] == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *a2 == *(_QWORD *)&GUID_323196f6_b205_34b3_6fc4_ea126da09c11.Data1
    && a2[1] == *(_QWORD *)GUID_323196f6_b205_34b3_6fc4_ea126da09c11.Data4 )
  {
    return (a1 + 8) & -(__int64)(a1 != 0);
  }
  else
  {
    return 0LL;
  }
}
