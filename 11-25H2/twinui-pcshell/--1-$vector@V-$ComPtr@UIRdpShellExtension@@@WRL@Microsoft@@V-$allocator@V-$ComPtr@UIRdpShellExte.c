/*
 * XREFs of ??1?$vector@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18064D8A8
 * Callers:
 *     _RdpShellExtensionHost::RdpShellExtensionHost_::_1_::dtor$1 @ 0x1806DCC84 (_RdpShellExtensionHost--RdpShellExtensionHost_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@0@@Z @ 0x18064D190 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@YAXPEA.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IRdpShellExtension>>::~vector<Microsoft::WRL::ComPtr<IRdpShellExtension>>(
        __int64 a1)
{
  __int64 *v2; // rcx

  v2 = *(__int64 **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IRdpShellExtension>>>(v2, *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
