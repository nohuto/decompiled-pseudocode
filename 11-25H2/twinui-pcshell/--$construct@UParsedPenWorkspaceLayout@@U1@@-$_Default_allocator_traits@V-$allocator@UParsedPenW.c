/*
 * XREFs of ??$construct@UParsedPenWorkspaceLayout@@U1@@?$_Default_allocator_traits@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@SAXAEAV?$allocator@UParsedPenWorkspaceLayout@@@1@QEAUParsedPenWorkspaceLayout@@$$QEAU3@@Z @ 0x1803E8268
 * Callers:
 *     ??$_Emplace_reallocate@UParsedPenWorkspaceLayout@@@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAPEAUParsedPenWorkspaceLayout@@QEAU2@$$QEAU2@@Z @ 0x1803E8050 (--$_Emplace_reallocate@UParsedPenWorkspaceLayout@@@-$vector@UParsedPenWorkspaceLayout@@V-$alloca.c)
 *     ??$_Uninitialized_move@PEAUParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAPEAUParsedPenWorkspaceLayout@@QEAU1@0PEAU1@AEAV?$allocator@UParsedPenWorkspaceLayout@@@0@@Z @ 0x1803E81F4 (--$_Uninitialized_move@PEAUParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@st.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1801748C8 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x18031FB2C (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 */

// Hidden C++ exception states: #wind=1
WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *__fastcall std::_Default_allocator_traits<std::allocator<ParsedPenWorkspaceLayout>>::construct<ParsedPenWorkspaceLayout,ParsedPenWorkspaceLayout>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  a2[3] = 0LL;
  v5 = *a3;
  v6 = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  a3[3] = 0LL;
  CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)a2);
  *a2 = v5;
  a2[1] = v6;
  a2[3] = v6;
  return WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData(
           (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)(a2 + 4),
           (const struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)(a3 + 4));
}
