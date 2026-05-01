/*
 * XREFs of CClassicWindowManager::ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___ @ 0x1801D8534
 * Callers:
 *     ?RecomputePseudoTrayForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x1802ECD30 (-RecomputePseudoTrayForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 * Callees:
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1800955FC (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rsi
  __int64 *v6; // r12
  struct IClassicWindow *v7; // rbx
  __int64 v8; // rdi

  v4 = *(_QWORD *)(a1 + 200);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *(__int64 **)a2;
    do
    {
      v7 = *(struct IClassicWindow **)(*(_QWORD *)(a1 + 192) + 8 * v5);
      if ( v7 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * v5));
      v8 = *v6;
      if ( *(_QWORD *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 96LL))(v7) == v8 )
        CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(**(CClassicWindowManager ***)(a2 + 8), v7, 0);
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 16LL))(v7);
      ++v5;
    }
    while ( v5 < v4 );
  }
  return 1;
}
