/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAXXZ @ 0x180092DD8
 * Callers:
 *     ??1CDelayIAMOperations@@QEAA@XZ @ 0x180092D58 (--1CDelayIAMOperations@@QEAA@XZ.c)
 *     _CApplicationManager::OnShellHookMessage_::_1_::dtor$20 @ 0x1806CECAC (_CApplicationManager--OnShellHookMessage_--_1_--dtor$20.c)
 *     _CPinnedList::ApplyPrependDefaultTaskbarLayout_::_1_::dtor$1 @ 0x180705D59 (_CPinnedList--ApplyPrependDefaultTaskbarLayout_--_1_--dtor$1.c)
 *     _CPinnedList::ApplyInPlaceTaskbarLayout_::_1_::dtor$1 @ 0x180705D8F (_CPinnedList--ApplyInPlaceTaskbarLayout_--_1_--dtor$1.c)
 *     _CPinnedList::ApplyReorderTaskbarLayout_::_1_::dtor$1 @ 0x180705DD7 (_CPinnedList--ApplyReorderTaskbarLayout_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::RemoveAll(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
