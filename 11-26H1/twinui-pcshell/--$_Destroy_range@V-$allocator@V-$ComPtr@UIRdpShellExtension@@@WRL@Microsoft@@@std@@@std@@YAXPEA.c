/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@0@@Z @ 0x1806731D4
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@0@@Z @ 0x1806734B8 (--$_Uninitialized_move@PEAV-$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@.c)
 *     ??1?$vector@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18067394C (--1-$vector@V-$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIRdpShellExte.c)
 *     ??1RdpShellExtensionHost@@UEAA@XZ @ 0x1806739F4 (--1RdpShellExtensionHost@@UEAA@XZ.c)
 *     ??1_Reallocation_guard@?$vector@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180673AB8 (--1_Reallocation_guard@-$vector@V-$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V-$allocator@V-$C.c)
 *     ?StopAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ @ 0x180674B80 (-StopAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@_K1@Z @ 0x180674CB4 (-_Change_array@-$vector@V-$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ @ 0x180297034 (-InternalRelease@-$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ.c)
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
      result = Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
