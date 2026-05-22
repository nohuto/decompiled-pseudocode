/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@0@@Z @ 0x180108870
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@0@@Z @ 0x180108D0C (--$_Uninitialized_move@PEAV-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V-$allocator@V-.c)
 *     ??1?$vector@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1801098F0 (--1-$vector@V-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIGame.c)
 *     ??1GamepadInterceptionHelper@@UEAA@XZ @ 0x180109944 (--1GamepadInterceptionHelper@@UEAA@XZ.c)
 *     ??1_Reallocation_guard@?$vector@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180109A00 (--1_Reallocation_guard@-$vector@V-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V-$alloca.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@_K1@Z @ 0x18010A168 (-_Change_array@-$vector@V-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V-$allocator@V-$C.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
