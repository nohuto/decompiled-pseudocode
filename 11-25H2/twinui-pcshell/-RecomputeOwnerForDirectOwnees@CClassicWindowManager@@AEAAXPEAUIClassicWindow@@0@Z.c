/*
 * XREFs of ?RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z @ 0x180022D94
 * Callers:
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180022030 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     CClassicWindowManager::ForEachWindow__lambda_4ba8724d16ead783db38b79f3bb71832___ @ 0x1800232BC (CClassicWindowManager--ForEachWindow__lambda_4ba8724d16ead783db38b79f3bb71832___.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180023714 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180023B58 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@W4ClassicWindowCreationOptions@@W4CLASSIC_WINDOW_ENSURE_REASONS@@PEA_N@Z @ 0x180286450 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CClassicWindowManager::RecomputeOwnerForDirectOwnees(
        CClassicWindowManager *this,
        struct IClassicWindow *a2,
        struct IClassicWindow *a3)
{
  struct IClassicWindow *v3; // r14
  CClassicWindowManager *v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r13
  struct IClassicWindow *v7; // rbx
  __int64 v8; // rax
  void (__fastcall *v9)(_QWORD, _QWORD); // r12
  HWND v10; // r14
  __int64 v11; // rsi
  HWND Window; // r15
  unsigned __int64 i; // r14
  __int64 v14; // rdi
  int v15; // r12d
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v21; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]
  HWND v23; // [rsp+30h] [rbp-28h]
  void (__fastcall *v24)(_QWORD, _QWORD); // [rsp+38h] [rbp-20h]
  unsigned __int64 v25; // [rsp+40h] [rbp-18h]
  __int64 v29; // [rsp+B8h] [rbp+60h] BYREF

  v3 = a2;
  v4 = this;
  v5 = *((_QWORD *)this + 25);
  v25 = v5;
  v6 = 0LL;
  if ( !v5 )
    return;
  do
  {
    v7 = *(struct IClassicWindow **)(*((_QWORD *)v4 + 24) + 8 * v6);
    if ( v7 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*(_QWORD *)(*((_QWORD *)v4 + 24) + 8 * v6));
    if ( *(struct IClassicWindow **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 96LL))(v7) != v3
      || a3 && v7 == a3
      || !(*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 160LL))(v7) )
    {
      goto LABEL_5;
    }
    v8 = *(_QWORD *)v7;
    v9 = *(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v7 + 104LL);
    v24 = v9;
    v10 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(v8 + 24))(v7);
    v23 = v10;
    v11 = 0LL;
    Window = GetWindow(v10, 4u);
    if ( !Window )
      goto LABEL_16;
    while ( Window != v10 && !v11 )
    {
      if ( IsWindowVisible(Window) )
      {
        v29 = 0LL;
        v22 = 0LL;
        for ( i = 0LL; i < *((_QWORD *)v4 + 25); ++i )
        {
          v14 = *(_QWORD *)(*((_QWORD *)v4 + 24) + 8 * i);
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          v21 = 0LL;
          if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v14)(
                 v14,
                 &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
                 &v21) >= 0
            && (*(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v21 + 192LL))(v21, Window) )
          {
            v15 = 0;
          }
          else
          {
            v15 = -1;
          }
          v16 = v21;
          if ( v21 )
          {
            v21 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          v4 = this;
          if ( !v15 )
          {
            v17 = i;
            v18 = 0;
            goto LABEL_34;
          }
        }
        v18 = -2147319765;
        v17 = v22;
LABEL_34:
        if ( v18 >= 0
          && (v20 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)v4 + 24) + 8 * v17),
              (**v20)(v20, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v29) >= 0)
          && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v29 + 128LL))(v29) )
        {
          v19 = v29;
          if ( v29 )
          {
            v11 = v29;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
            goto LABEL_35;
          }
        }
        else
        {
LABEL_35:
          v19 = v29;
        }
        if ( v19 )
        {
          v29 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        v10 = v23;
      }
      Window = GetWindow(Window, 4u);
      if ( !Window )
        break;
    }
    v9 = v24;
LABEL_16:
    v9(v7, v11);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v5 = v25;
    v3 = a2;
LABEL_5:
    if ( v7 )
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 16LL))(v7);
    ++v6;
  }
  while ( v6 < v5 );
}
