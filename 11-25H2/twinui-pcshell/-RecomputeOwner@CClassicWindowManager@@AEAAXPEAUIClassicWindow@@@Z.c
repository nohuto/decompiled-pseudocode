/*
 * XREFs of ?RecomputeOwner@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180101084
 * Callers:
 *     CClassicWindowManager::ForEachWindow__lambda_4ba8724d16ead783db38b79f3bb71832___ @ 0x1800232BC (CClassicWindowManager--ForEachWindow__lambda_4ba8724d16ead783db38b79f3bb71832___.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180023714 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180023B58 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     CClassicWindowManager::ForEachWindow__lambda_b1712e7e691d8bb114c04e91018acc0d___ @ 0x1802F1238 (CClassicWindowManager--ForEachWindow__lambda_b1712e7e691d8bb114c04e91018acc0d___.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CClassicWindowManager::RecomputeOwner(CClassicWindowManager *this, struct IClassicWindow *a2)
{
  CClassicWindowManager *v3; // rdi
  void (__fastcall *v4)(_QWORD, _QWORD); // r12
  HWND v5; // rsi
  __int64 v6; // rbx
  HWND Window; // r14
  unsigned __int64 v8; // r13
  unsigned __int64 i; // rsi
  __int64 v10; // rdi
  int v11; // r12d
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // rcx
  void (__fastcall *v16)(_QWORD, _QWORD); // [rsp+20h] [rbp-18h]
  __int64 v18; // [rsp+88h] [rbp+50h] BYREF
  __int64 v19; // [rsp+90h] [rbp+58h] BYREF
  HWND v20; // [rsp+98h] [rbp+60h]

  v3 = this;
  if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 160LL))(a2) )
  {
    v4 = *(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a2 + 104LL);
    v16 = v4;
    v5 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    v20 = v5;
    v6 = 0LL;
    Window = GetWindow(v5, 4u);
    if ( Window )
    {
      while ( 1 )
      {
        if ( Window == v5 || v6 )
        {
LABEL_24:
          v4 = v16;
          goto LABEL_25;
        }
        if ( IsWindowVisible(Window) )
          break;
LABEL_23:
        Window = GetWindow(Window, 4u);
        if ( !Window )
          goto LABEL_24;
      }
      v18 = 0LL;
      v8 = 0LL;
      for ( i = 0LL; i < *((_QWORD *)v3 + 25); ++i )
      {
        v10 = *(_QWORD *)(*((_QWORD *)v3 + 24) + 8 * i);
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        v19 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
               v10,
               &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
               &v19) >= 0
          && (*(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v19 + 192LL))(v19, Window) )
        {
          v11 = 0;
        }
        else
        {
          v11 = -1;
        }
        v12 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        v3 = this;
        if ( !v11 )
        {
          v8 = i;
          v13 = 0;
          goto LABEL_18;
        }
      }
      v13 = -2147319765;
LABEL_18:
      if ( v13 >= 0 )
      {
        v15 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)v3 + 24) + 8 * v8);
        if ( (**v15)(v15, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v18) >= 0 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v18 + 128LL))(v18) )
          {
            v14 = v18;
            if ( !v18 )
              goto LABEL_20;
            v6 = v18;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
          }
        }
      }
      v14 = v18;
LABEL_20:
      if ( v14 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v5 = v20;
      goto LABEL_23;
    }
LABEL_25:
    v4(a2, v6);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
