/*
 * XREFs of ?_HandleOwnerBecameDestroyed@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x1801893E0
 * Callers:
 *     CClassicWindowManager::ForEachWindow__lambda_4ba8724d16ead783db38b79f3bb71832___ @ 0x180095128 (CClassicWindowManager--ForEachWindow__lambda_4ba8724d16ead783db38b79f3bb71832___.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1800955FC (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180095A68 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1802ED0A4 (-_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOpti.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CClassicWindowManager::_HandleOwnerBecameDestroyed(
        CClassicWindowManager *this,
        struct IClassicWindow *a2)
{
  unsigned __int64 v4; // r15
  unsigned __int64 i; // rbp
  __int64 v6; // rbx
  void (__fastcall *v7)(__int64, _QWORD); // rsi
  _QWORD *v8; // rax

  v4 = *((_QWORD *)this + 25);
  for ( i = 0LL; i < v4; ++i )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 24) + 8 * i);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)(*((_QWORD *)this + 24) + 8 * i));
    if ( *(struct IClassicWindow **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 96LL))(v6) == a2 )
    {
      v7 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 104LL);
      v8 = (_QWORD *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 96LL))(a2);
      v7(v6, *v8);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
