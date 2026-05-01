/*
 * XREFs of ??1PositionAdjustmentHistory@@UEAA@XZ @ 0x1802C3C98
 * Callers:
 *     ??_GPositionAdjustmentHistory@@UEAAPEAXI@Z @ 0x180211400 (--_GPositionAdjustmentHistory@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@UAppSpecialInfo@CAppTransitionManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UAppSpecialInfo@CAppTransitionManager@@@@V?$CSimpleArrayStandardCompareHelper@UAppSpecialInfo@CAppTransitionManager@@@@V?$CSimpleArrayStandardMergeHelper@UAppSpecialInfo@CAppTransitionManager@@@@@@QEAAXXZ @ 0x1801B7C88 (-RemoveAll@-$CTSimpleArray@UAppSpecialInfo@CAppTransitionManager@@$0PPPPPPPO@V-$CTPolicyCoTaskMe.c)
 */

void __fastcall PositionAdjustmentHistory::~PositionAdjustmentHistory(PositionAdjustmentHistory *this)
{
  CTSimpleArray<CAppTransitionManager::AppSpecialInfo,4294967294,CTPolicyCoTaskMem<CAppTransitionManager::AppSpecialInfo>,CSimpleArrayStandardCompareHelper<CAppTransitionManager::AppSpecialInfo>,CSimpleArrayStandardMergeHelper<CAppTransitionManager::AppSpecialInfo>>::RemoveAll((__int64)this + 24);
  *((_DWORD *)this + 5) = -1073741823;
}
