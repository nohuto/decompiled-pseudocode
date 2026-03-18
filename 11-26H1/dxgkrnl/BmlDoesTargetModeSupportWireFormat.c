/*
 * XREFs of BmlDoesTargetModeSupportWireFormat @ 0x140379F18
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1402DD530 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1402DDDC0 (BmlCompareTargetModesWithConstraint.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1403419E8 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14037AA90 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall BmlDoesTargetModeSupportWireFormat(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  char v3; // si
  __int64 v6; // rbp
  __int64 v7; // rbp
  unsigned __int8 v8; // dl

  v2 = *(_DWORD *)(a1 + 128);
  v3 = 0;
  if ( !*(_QWORD *)(a1 + 40) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL);
  if ( !*(_QWORD *)(v6 + 40) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v7 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v6 + 40) + 64LL) + 48);
  if ( !*(_QWORD *)(v7 + 8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  if ( !DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(*(_QWORD *)(v7 + 8) + 16LL)) )
    return (v8 & 0x3F) == 2;
  if ( (v8 & (unsigned __int8)(v2 >> 2) & 0x3F) != 0 || (a2 & v2 & 0x3FFFF00) != 0 || (a2 & v2) >= 0x4000000 )
    return 1;
  return v3;
}
