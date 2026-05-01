/*
 * XREFs of ?RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z @ 0x180095E48
 * Callers:
 *     CClassicWindowManager::ForEachWindow__lambda_4ba8724d16ead783db38b79f3bb71832___ @ 0x180095128 (CClassicWindowManager--ForEachWindow__lambda_4ba8724d16ead783db38b79f3bb71832___.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1800955FC (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180095A68 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180096330 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@W4ClassicWindowCreationOptions@@W4CLASSIC_WINDOW_ENSURE_REASONS@@PEA_N@Z @ 0x18027D9E0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 * Callees:
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CClassicWindowManager::RecomputeOwnerForDirectOwnees(
        CClassicWindowManager *this,
        struct IClassicWindow *a2,
        struct IClassicWindow *a3)
{
  struct IClassicWindow *v3; // rsi
  CClassicWindowManager *v4; // r8
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r13
  __int64 *v7; // rbx
  __int64 v8; // rax
  void (__fastcall *v9)(_QWORD, _QWORD); // r14
  HWND v10; // rdi
  __int64 v11; // rsi
  HWND Window; // r15
  unsigned __int64 i; // r14
  __int64 v14; // rdx
  __int64 v15; // rdi
  int v16; // r12d
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v22; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-50h]
  HWND v24; // [rsp+30h] [rbp-48h]
  void (__fastcall *v25)(_QWORD, _QWORD); // [rsp+38h] [rbp-40h]
  unsigned __int64 v26; // [rsp+40h] [rbp-38h]
  __int128 v27; // [rsp+50h] [rbp-28h]
  _BYTE v28[24]; // [rsp+60h] [rbp-18h] BYREF
  struct IClassicWindow *v31; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v32; // [rsp+D8h] [rbp+60h] BYREF

  v31 = a3;
  v3 = a2;
  v27 = *(_OWORD *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v28, &v31, this);
  v5 = *((_QWORD *)v4 + 25);
  v26 = v5;
  v6 = 0LL;
  if ( !v5 )
    return;
  do
  {
    v7 = *(__int64 **)(*((_QWORD *)v4 + 24) + 8 * v6);
    if ( v7 )
      (*(void (__fastcall **)(_QWORD))(*v7 + 8))(*(_QWORD *)(*((_QWORD *)v4 + 24) + 8 * v6));
    if ( *(struct IClassicWindow **)(*(__int64 (__fastcall **)(__int64 *))(*v7 + 96))(v7) != v3
      || *(_QWORD *)v27 && v7 == *(__int64 **)v27
      || !(*(unsigned __int8 (__fastcall **)(__int64 *))(*v7 + 160))(v7) )
    {
      goto LABEL_5;
    }
    v8 = *v7;
    v9 = *(void (__fastcall **)(_QWORD, _QWORD))(*v7 + 104);
    v25 = v9;
    v10 = (HWND)(*(__int64 (__fastcall **)(__int64 *))(v8 + 24))(v7);
    v24 = v10;
    v11 = 0LL;
    Window = GetWindow(v10, 4u);
    if ( !Window )
      goto LABEL_14;
    while ( Window != v10 && !v11 )
    {
      if ( IsWindowVisible(Window) )
      {
        v32 = 0LL;
        v23 = 0LL;
        for ( i = 0LL; ; ++i )
        {
          v14 = *((_QWORD *)&v27 + 1);
          if ( i >= *(_QWORD *)(*((_QWORD *)&v27 + 1) + 200LL) )
            break;
          v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&v27 + 1) + 192LL) + 8 * i);
          if ( v15 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 8LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)&v27 + 1) + 192LL)
                                                                              + 8 * i));
          v22 = 0LL;
          if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v15)(
                 v15,
                 &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
                 &v22) >= 0
            && (*(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v22 + 192LL))(v22, Window) )
          {
            v16 = 0;
          }
          else
          {
            v16 = -1;
          }
          v17 = v22;
          if ( v22 )
          {
            v22 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          if ( !v16 )
          {
            v18 = i;
            v19 = 0;
            v14 = *((_QWORD *)&v27 + 1);
            goto LABEL_32;
          }
        }
        v19 = -2147319765;
        v18 = v23;
LABEL_32:
        if ( v19 >= 0
          && (v21 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(v14 + 192) + 8 * v18),
              (**v21)(v21, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v32) >= 0)
          && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v32 + 128LL))(v32) )
        {
          v20 = v32;
          if ( v32 )
          {
            v11 = v32;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
            goto LABEL_33;
          }
        }
        else
        {
LABEL_33:
          v20 = v32;
        }
        if ( v20 )
        {
          v32 = 0LL;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 16LL))(v20, v14);
        }
        v10 = v24;
      }
      Window = GetWindow(Window, 4u);
      if ( !Window )
        break;
    }
    v9 = v25;
LABEL_14:
    v9(v7, v11);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v5 = v26;
    v3 = a2;
LABEL_5:
    (*(void (__fastcall **)(__int64 *))(*v7 + 16))(v7);
    ++v6;
    v4 = this;
  }
  while ( v6 < v5 );
}
