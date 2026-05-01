/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@0@@Z @ 0x18064D190
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@0@@Z @ 0x18064D42C (--$_Uninitialized_move@PEAV-$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@.c)
 *     ??1?$vector@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18064D8A8 (--1-$vector@V-$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIRdpShellExte.c)
 *     ??1RdpShellExtensionHost@@UEAA@XZ @ 0x18064D938 (--1RdpShellExtensionHost@@UEAA@XZ.c)
 *     ?StopAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ @ 0x18064EAC8 (-StopAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@_K1@Z @ 0x18064EBFC (-_Change_array@-$vector@V-$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UI.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IRdpShellExtension__std::allocator_Microsoft::WRL::ComPtr_IRdpShellExtension_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IRdpShellExtension__const_&__::_1_::catch$1 @ 0x1806DCBDA (_std--vector_Microsoft--WRL--ComPtr_IRdpShellExtension__std--allocator_Microsoft--WRL--ComPtr_IR.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGameInput@@@WRL@Microsoft@@IEAAKXZ @ 0x18029E6C0 (-InternalRelease@-$ComPtr@UIGameInput@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IRdpShellExtension>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<IGameInput>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
