/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18009D728
 * Callers:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18009D660 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP.c)
 *     ?StopWindowedSwapChainCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A3290 (-StopWindowedSwapChainCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY>,void *>>>(
        __int64 a1,
        CBaseObject **a2)
{
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(a2 + 4);
  std::_Deallocate<16>(a2, 0x38uLL);
}
