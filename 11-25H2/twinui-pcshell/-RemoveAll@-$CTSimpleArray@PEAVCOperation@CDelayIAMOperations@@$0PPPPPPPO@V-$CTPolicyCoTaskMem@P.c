/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAXXZ @ 0x18004CAC0
 * Callers:
 *     ??1CDelayIAMOperations@@QEAA@XZ @ 0x18004CA40 (--1CDelayIAMOperations@@QEAA@XZ.c)
 *     _CApplicationManager::OnShellHookMessage_::_1_::dtor$20 @ 0x1806A5F52 (_CApplicationManager--OnShellHookMessage_--_1_--dtor$20.c)
 *     _CPinnedList::ApplyAppendDefaultTaskbarLayout_::_1_::dtor$1 @ 0x1806DD10E (_CPinnedList--ApplyAppendDefaultTaskbarLayout_--_1_--dtor$1.c)
 *     _CPinnedList::ApplyInPlaceTaskbarLayout_::_1_::dtor$1 @ 0x1806DD144 (_CPinnedList--ApplyInPlaceTaskbarLayout_--_1_--dtor$1.c)
 *     _CPinnedList::ApplyPrependDefaultTaskbarLayout_::_1_::dtor$1 @ 0x1806DD18C (_CPinnedList--ApplyPrependDefaultTaskbarLayout_--_1_--dtor$1.c)
 *     _CPinnedList::ApplyReorderTaskbarLayout_::_1_::dtor$1 @ 0x1806DD1B0 (_CPinnedList--ApplyReorderTaskbarLayout_--_1_--dtor$1.c)
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
