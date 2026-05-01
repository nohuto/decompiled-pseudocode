/*
 * XREFs of wil::details::ScopeExitFn__lambda_c9ed5d0d7324d3c8737b5be4fdbf9fc2___::_ScopeExitFn__lambda_c9ed5d0d7324d3c8737b5be4fdbf9fc2___ @ 0x1805213FC
 * Callers:
 *     _ScreenManager::GetAppViewCloseOverrideOperation_::_1_::dtor$0 @ 0x1806F3767 (_ScreenManager--GetAppViewCloseOverrideOperation_--_1_--dtor$0.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAXXZ @ 0x18022B250 (-RemoveAll@-$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UCacheEntr.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_c9ed5d0d7324d3c8737b5be4fdbf9fc2___::_ScopeExitFn__lambda_c9ed5d0d7324d3c8737b5be4fdbf9fc2___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAll(*(_QWORD *)a1 + 312LL);
  }
}
