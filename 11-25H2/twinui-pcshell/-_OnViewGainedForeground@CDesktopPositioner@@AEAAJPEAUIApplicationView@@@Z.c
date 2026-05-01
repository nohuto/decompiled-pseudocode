/*
 * XREFs of ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180054830
 * Callers:
 *     ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180054E40 (-OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHAN.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x18016DAA0 (--$_Try_emplace@AEBQEAUHWND__@@$$V@-$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$les.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18016DBC8 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPos.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHWND__@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHWND__@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801E4544 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUHWND__@@@1@V-$tuple@$$V@1@@-$_Tree_temp_node.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180318F84 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDesktopPositioner::_OnViewGainedForeground(CDesktopPositioner *this, struct IApplicationView *a2)
{
  char v4; // r12
  int v5; // eax
  unsigned int v6; // ebx
  struct IApplicationView *v7; // rdx
  bool v8; // bl
  HWND *v9; // rcx
  char v10; // si
  char v11; // bl
  HWND WindowForView; // rax
  __int64 v13; // rcx
  char v14; // di
  char *v15; // rdi
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 inserted; // rdx
  HWND *v21; // rcx
  char *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rbx
  int v28; // eax
  char *v29; // rdi
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  char v34; // r15
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int128 v42; // [rsp+30h] [rbp-50h] BYREF
  char v43; // [rsp+40h] [rbp-40h]
  _OWORD v44[2]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  HWND *v46; // [rsp+C8h] [rbp+48h] BYREF
  HWND v47; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v48; // [rsp+D8h] [rbp+58h] BYREF

  v4 = 0;
  v46 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, HWND **))(*(_QWORD *)a2 + 264LL))(a2, &v46);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = (*((unsigned int (__fastcall **)(HWND *))*v46 + 3))(v46) == 0;
    v9 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*((void (__fastcall **)(HWND *))*v9 + 2))(v9);
    }
    if ( !v8 )
      return 0LL;
    v10 = 0;
    v11 = 0;
    WindowForView = ApplicationViewHelpers::GetWindowForView(a2, v7);
    v47 = WindowForView;
    if ( !WindowForView )
      goto LABEL_6;
    v15 = (char *)this + 368;
    v16 = *((_QWORD *)this + 46);
    v17 = *(_QWORD *)(v16 + 8);
    HIDWORD(v44[0]) = 0;
    v18 = v16;
    v19 = v17;
    while ( !*(_BYTE *)(v19 + 25) )
    {
      if ( *(_QWORD *)(v19 + 32) >= (unsigned __int64)WindowForView )
      {
        v18 = v19;
        v19 = *(_QWORD *)v19;
      }
      else
      {
        v19 = *(_QWORD *)(v19 + 16);
      }
    }
    if ( v18 == v16 || *(_BYTE *)(v18 + 25) || (unsigned __int64)WindowForView < *(_QWORD *)(v18 + 32) )
      goto LABEL_6;
    v44[0] = (unsigned __int64)v17;
    inserted = v16;
    while ( !*(_BYTE *)(v17 + 25) )
    {
      *(_QWORD *)&v44[0] = v17;
      if ( *(_QWORD *)(v17 + 32) < (unsigned __int64)WindowForView )
      {
        DWORD2(v44[0]) = 0;
        v17 = *(_QWORD *)(v17 + 16);
      }
      else
      {
        DWORD2(v44[0]) = 1;
        inserted = v17;
        v17 = *(_QWORD *)v17;
      }
    }
    if ( *(_BYTE *)(inserted + 25) || (unsigned __int64)WindowForView < *(_QWORD *)(inserted + 32) )
    {
      if ( *((_QWORD *)this + 47) == 0x555555555555555LL )
        goto LABEL_79;
      v46 = &v47;
      v32 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>(
              (unsigned int)&v42,
              (int)this + 368,
              v16,
              v16,
              (__int64)&v46);
      v33 = *(_QWORD *)(v32 + 8);
      *(_QWORD *)(v32 + 8) = 0LL;
      if ( *((_QWORD *)&v42 + 1) )
        std::_Deallocate<16,0>(*((void **)&v42 + 1), (const struct std::nothrow_t *)0x30);
      inserted = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Insert_node(
                   (char *)this + 368,
                   v44,
                   v33);
      WindowForView = v47;
    }
    v34 = *(_BYTE *)(inserted + 40);
    v35 = *(_QWORD *)v15;
    v36 = *(_QWORD *)(*(_QWORD *)v15 + 8LL);
    v42 = (unsigned __int64)v36;
    v37 = v35;
    while ( !*(_BYTE *)(v36 + 25) )
    {
      *(_QWORD *)&v42 = v36;
      if ( *(_QWORD *)(v36 + 32) < (unsigned __int64)WindowForView )
      {
        DWORD2(v42) = 0;
        v36 = *(_QWORD *)(v36 + 16);
      }
      else
      {
        DWORD2(v42) = 1;
        v37 = v36;
        v36 = *(_QWORD *)v36;
      }
    }
    if ( *(_BYTE *)(v37 + 25) || (unsigned __int64)WindowForView < *(_QWORD *)(v37 + 32) )
    {
      if ( *((_QWORD *)this + 47) == 0x555555555555555LL )
        goto LABEL_79;
      v46 = &v47;
      v38 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>(
              (unsigned int)v44,
              (int)this + 368,
              v35,
              0,
              (__int64)&v46);
      v39 = *(_QWORD *)(v38 + 8);
      *(_QWORD *)(v38 + 8) = 0LL;
      if ( *((_QWORD *)&v44[0] + 1) )
        std::_Deallocate<16,0>(*((void **)&v44[0] + 1), (const struct std::nothrow_t *)0x30);
      v37 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Insert_node(
              (char *)this + 368,
              &v42,
              v39);
      WindowForView = v47;
    }
    v10 = *(_BYTE *)(v37 + 41);
    v40 = *(_QWORD *)v15;
    v41 = *(_QWORD *)(*(_QWORD *)v15 + 8LL);
    v42 = (unsigned __int64)v41;
    v27 = v40;
    while ( !*(_BYTE *)(v41 + 25) )
    {
      *(_QWORD *)&v42 = v41;
      if ( *(_QWORD *)(v41 + 32) < (unsigned __int64)WindowForView )
      {
        DWORD2(v42) = 0;
        v41 = *(_QWORD *)(v41 + 16);
      }
      else
      {
        DWORD2(v42) = 1;
        v27 = v41;
        v41 = *(_QWORD *)v41;
      }
    }
    if ( *(_BYTE *)(v27 + 25) || (unsigned __int64)WindowForView < *(_QWORD *)(v27 + 32) )
    {
      if ( *((_QWORD *)this + 47) == 0x555555555555555LL )
        goto LABEL_79;
      v46 = &v47;
      v25 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>(
              (unsigned int)v44,
              (int)this + 368,
              v40,
              0,
              (__int64)&v46);
      v26 = *(_QWORD *)(v25 + 8);
      *(_QWORD *)(v25 + 8) = 0LL;
      if ( *((_QWORD *)&v44[0] + 1) )
        std::_Deallocate<16,0>(*((void **)&v44[0] + 1), (const struct std::nothrow_t *)0x30);
      v27 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Insert_node(
              (char *)this + 368,
              &v42,
              v26);
      WindowForView = v47;
    }
    v11 = *(_BYTE *)(v27 + 42);
    if ( !v34 )
    {
LABEL_6:
      v48 = 0LL;
      (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
        a2,
        &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
        &v48);
      v4 = 1;
      v13 = v48;
      WindowForView = v47;
      if ( v48 )
      {
        v14 = 1;
        goto LABEL_8;
      }
    }
    else
    {
      v13 = v48;
    }
    v14 = 0;
    if ( (v4 & 1) == 0 )
    {
LABEL_39:
      v28 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
      if ( v28 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x913,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v28);
        v29 = (char *)this + 368;
        goto LABEL_27;
      }
      v29 = (char *)this + 368;
      v30 = *((_QWORD *)this + 46);
      v31 = *(_QWORD *)(v30 + 8);
      v42 = (unsigned __int64)v31;
      v24 = v30;
      while ( !*(_BYTE *)(v31 + 25) )
      {
        *(_QWORD *)&v42 = v31;
        if ( *(_QWORD *)(v31 + 32) < (unsigned __int64)v47 )
        {
          DWORD2(v42) = 0;
          v31 = *(_QWORD *)(v31 + 16);
        }
        else
        {
          DWORD2(v42) = 1;
          v24 = v31;
          v31 = *(_QWORD *)v31;
        }
      }
      if ( !*(_BYTE *)(v24 + 25) && (unsigned __int64)v47 >= *(_QWORD *)(v24 + 32) )
      {
LABEL_26:
        *(_BYTE *)(v24 + 40) = 1;
LABEL_27:
        if ( v10 )
        {
          DwmpEndTransitionRequest(93LL);
          *(_BYTE *)(*(_QWORD *)std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
                                  v29,
                                  v44,
                                  &v47)
                   + 41LL) = 0;
        }
        if ( v11 )
        {
          v42 = AnimationClock_TabSwitch;
          v43 = 1;
          *(_BYTE *)(*(_QWORD *)std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
                                  v29,
                                  v44,
                                  &v47)
                   + 42LL) = 0;
          v44[0] = AnimationClock_TabSwitch;
          DwmpEndAnimationClock(v44);
        }
        return 0LL;
      }
      if ( *((_QWORD *)this + 47) != 0x555555555555555LL )
      {
        v44[0] = (unsigned __int64)this + 368;
        v23 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
        *((_QWORD *)v23 + 4) = v47;
        *(_WORD *)(v23 + 41) = 0;
        *((_WORD *)v23 + 20) = 0;
        v23[42] = 0;
        *(_QWORD *)v23 = v30;
        *((_QWORD *)v23 + 1) = v30;
        *((_QWORD *)v23 + 2) = v30;
        *((_WORD *)v23 + 12) = 0;
        v44[0] = v42;
        v24 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Insert_node(
                (char *)this + 368,
                v44,
                v23);
        goto LABEL_26;
      }
LABEL_79:
      std::_Throw_tree_length_error();
    }
LABEL_8:
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      WindowForView = v47;
    }
    if ( v14 )
      DwmpTransitionWindow(WindowForView, 93LL);
    goto LABEL_39;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8F0,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v5);
  v21 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*((void (__fastcall **)(HWND *))*v21 + 2))(v21);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8F9,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)v6);
  return v6;
}
