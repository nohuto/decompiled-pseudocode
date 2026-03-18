/*
 * XREFs of ?FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z @ 0x140020BC8
 * Callers:
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x14002008C (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140082F00 (-InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Initialize@FxPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140096100 (-Initialize@FxPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 */

__int64 __fastcall FxPoolAddHeaderSize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 AllocationSize,
        unsigned __int64 *NewSize)
{
  unsigned __int64 v3; // rax
  unsigned __int16 v5; // r9

  v3 = AllocationSize + 16;
  if ( AllocationSize + 16 < AllocationSize )
  {
    v5 = 10;
  }
  else
  {
    if ( !FxDriverGlobals->FxPoolTrackingOn )
    {
LABEL_3:
      *NewSize = v3;
      return 0LL;
    }
    if ( AllocationSize + 80 >= AllocationSize + 16 )
    {
      v3 = AllocationSize + 80;
      goto LABEL_3;
    }
    v5 = 11;
  }
  WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x12u, v5, WPP_FxPoolInlines_hpp_Traceguids, 0xC0000095);
  return 3221225621LL;
}
