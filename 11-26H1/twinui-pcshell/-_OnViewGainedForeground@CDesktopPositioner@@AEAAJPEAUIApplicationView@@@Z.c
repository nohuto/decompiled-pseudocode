/*
 * XREFs of ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18012FFFC
 * Callers:
 *     ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18012F820 (-OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHAN.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x1801305AC (--$_Try_emplace@AEBQEAUHWND__@@$$V@-$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$les.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801306D0 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPos.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHWND__@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHWND__@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180130948 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUHWND__@@@1@V-$tuple@$$V@1@@-$_Tree_temp_node.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803151E4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0V?$tuple@AEBQEAUHWND__@@@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@AEAA@AEAV?$tuple@AEBQEAUHWND__@@@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x18050E170 (--$-0V-$tuple@AEBQEAUHWND__@@@std@@V-$tuple@$$V@1@$0A@$$Z$S@-$pair@QEAUHWND__@@UWindowCloakInfo@.c)
 *     ?reset@unique_animation_clock@@QEAAXXZ @ 0x180512FAC (-reset@unique_animation_clock@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDesktopPositioner::_OnViewGainedForeground(
        CDesktopPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  char v4; // r13
  int v5; // eax
  unsigned int v6; // ebx
  struct IApplicationView *v7; // rdx
  bool v8; // bl
  unsigned __int64 *v9; // rcx
  char v10; // r14
  char v11; // si
  unsigned __int64 WindowForView; // rax
  __int64 v13; // rcx
  char v14; // bl
  __int64 *v15; // rbx
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 i; // rdx
  __int64 inserted; // rdx
  unsigned __int64 *v21; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdx
  int v29; // eax
  char *v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdi
  char v35; // r15
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // r8
  __int64 v42; // rcx
  __int128 v43; // [rsp+30h] [rbp-48h] BYREF
  char v44; // [rsp+40h] [rbp-38h]
  _OWORD v45[2]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]
  unsigned __int64 *v48; // [rsp+C8h] [rbp+50h] BYREF
  unsigned __int64 v49; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v50; // [rsp+D8h] [rbp+60h] BYREF

  v4 = 0;
  v48 = 0LL;
  v5 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), unsigned __int64 **))(*a2)[33])(
         a2,
         &v48);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = (*(unsigned int (__fastcall **)(unsigned __int64 *))(*v48 + 24))(v48) == 0;
    v9 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      (*(void (__fastcall **)(unsigned __int64 *))(*v9 + 16))(v9);
    }
    if ( !v8 )
      return 0LL;
    v10 = 0;
    v11 = 0;
    WindowForView = ApplicationViewHelpers::GetWindowForView(a2, v7);
    v49 = WindowForView;
    if ( !WindowForView )
      goto LABEL_6;
    v15 = (__int64 *)((char *)this + 368);
    v16 = *((_QWORD *)this + 46);
    v17 = *(_QWORD *)(v16 + 8);
    HIDWORD(v45[0]) = 0;
    v18 = v16;
    for ( i = v17; !*(_BYTE *)(i + 25); i = *(_QWORD *)i )
    {
      if ( *(_QWORD *)(i + 32) >= WindowForView )
        v18 = i;
      else
        i += 16LL;
    }
    if ( v18 == v16 || *(_BYTE *)(v18 + 25) || WindowForView < *(_QWORD *)(v18 + 32) )
      goto LABEL_6;
    v45[0] = (unsigned __int64)v17;
    inserted = v16;
    while ( !*(_BYTE *)(v17 + 25) )
    {
      *(_QWORD *)&v45[0] = v17;
      if ( *(_QWORD *)(v17 + 32) < WindowForView )
      {
        DWORD2(v45[0]) = 0;
        v17 += 16LL;
      }
      else
      {
        DWORD2(v45[0]) = 1;
        inserted = v17;
      }
      v17 = *(_QWORD *)v17;
    }
    if ( *(_BYTE *)(inserted + 25) || WindowForView < *(_QWORD *)(inserted + 32) )
    {
      if ( *((_QWORD *)this + 47) == 0x555555555555555LL )
        goto LABEL_83;
      v48 = &v49;
      v33 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>(
              (unsigned int)&v43,
              (int)this + 368,
              v16,
              v16,
              (__int64)&v48);
      v34 = *(_QWORD *)(v33 + 8);
      *(_QWORD *)(v33 + 8) = 0LL;
      if ( *((_QWORD *)&v43 + 1) )
        std::_Deallocate<16>(*((_QWORD *)&v43 + 1), 48LL);
      inserted = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Insert_node(
                   v15,
                   v45,
                   v34);
      WindowForView = v49;
    }
    v35 = *(_BYTE *)(inserted + 40);
    v36 = *v15;
    v37 = *(_QWORD *)(*v15 + 8);
    v43 = (unsigned __int64)v37;
    v38 = v36;
    while ( !*(_BYTE *)(v37 + 25) )
    {
      *(_QWORD *)&v43 = v37;
      if ( *(_QWORD *)(v37 + 32) < WindowForView )
      {
        DWORD2(v43) = 0;
        v37 += 16LL;
      }
      else
      {
        DWORD2(v43) = 1;
        v38 = v37;
      }
      v37 = *(_QWORD *)v37;
    }
    if ( *(_BYTE *)(v38 + 25) || WindowForView < *(_QWORD *)(v38 + 32) )
    {
      if ( v15[1] == 0x555555555555555LL )
        goto LABEL_83;
      v48 = &v49;
      v39 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>(
              (unsigned int)v45,
              (_DWORD)v15,
              v36,
              v16,
              (__int64)&v48);
      v40 = *(_QWORD *)(v39 + 8);
      *(_QWORD *)(v39 + 8) = 0LL;
      if ( *((_QWORD *)&v45[0] + 1) )
        std::_Deallocate<16>(*((_QWORD *)&v45[0] + 1), 48LL);
      v38 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Insert_node(
              v15,
              &v43,
              v40);
      WindowForView = v49;
    }
    v10 = *(_BYTE *)(v38 + 41);
    v41 = *v15;
    v42 = *(_QWORD *)(*v15 + 8);
    v43 = (unsigned __int64)v42;
    v28 = v41;
    while ( !*(_BYTE *)(v42 + 25) )
    {
      *(_QWORD *)&v43 = v42;
      if ( *(_QWORD *)(v42 + 32) < WindowForView )
      {
        DWORD2(v43) = 0;
        v42 += 16LL;
      }
      else
      {
        DWORD2(v43) = 1;
        v28 = v42;
      }
      v42 = *(_QWORD *)v42;
    }
    if ( *(_BYTE *)(v28 + 25) || WindowForView < *(_QWORD *)(v28 + 32) )
    {
      if ( v15[1] == 0x555555555555555LL )
        goto LABEL_83;
      v48 = &v49;
      v26 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>(
              (unsigned int)v45,
              (_DWORD)v15,
              v41,
              v16,
              (__int64)&v48);
      v27 = *(_QWORD *)(v26 + 8);
      *(_QWORD *)(v26 + 8) = 0LL;
      if ( *((_QWORD *)&v45[0] + 1) )
        std::_Deallocate<16>(*((_QWORD *)&v45[0] + 1), 48LL);
      v28 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Insert_node(
              v15,
              &v43,
              v27);
      WindowForView = v49;
    }
    v11 = *(_BYTE *)(v28 + 42);
    if ( !v35 )
    {
LABEL_6:
      v50 = 0LL;
      (**a2)((ApplicationViewHelpers *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v50);
      v4 = 1;
      v13 = v50;
      WindowForView = v49;
      if ( v50 )
      {
        v14 = 1;
        goto LABEL_8;
      }
    }
    else
    {
      v13 = v50;
    }
    v14 = 0;
    if ( (v4 & 1) == 0 )
    {
LABEL_39:
      v29 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), __int64))(*a2)[12])(
              a2,
              1LL);
      if ( v29 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x913,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v29);
        v30 = (char *)this + 368;
        goto LABEL_27;
      }
      v30 = (char *)this + 368;
      v31 = *((_QWORD *)this + 46);
      v32 = *(_QWORD *)(v31 + 8);
      v43 = (unsigned __int64)v32;
      v25 = v31;
      while ( !*(_BYTE *)(v32 + 25) )
      {
        *(_QWORD *)&v43 = v32;
        if ( *(_QWORD *)(v32 + 32) < v49 )
        {
          DWORD2(v43) = 0;
          v32 += 16LL;
        }
        else
        {
          DWORD2(v43) = 1;
          v25 = v32;
        }
        v32 = *(_QWORD *)v32;
      }
      if ( !*(_BYTE *)(v25 + 25) && v49 >= *(_QWORD *)(v25 + 32) )
      {
LABEL_26:
        *(_BYTE *)(v25 + 40) = 1;
LABEL_27:
        if ( v10 )
        {
          DwmpEndTransitionRequest(93LL);
          *(_BYTE *)(*(_QWORD *)std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
                                  v30,
                                  v45,
                                  &v49)
                   + 41LL) = 0;
        }
        if ( v11 )
        {
          v43 = AnimationClock_TabSwitch;
          v44 = 1;
          *(_BYTE *)(*(_QWORD *)std::map<HWND__ *,CDesktopPositioner::WindowCloakInfo>::_Try_emplace<HWND__ * const &,>(
                                  v30,
                                  v45,
                                  &v49)
                   + 42LL) = 0;
          unique_animation_clock::reset((unique_animation_clock *)&v43);
        }
        return 0LL;
      }
      if ( *((_QWORD *)this + 47) != 0x555555555555555LL )
      {
        v45[0] = (unsigned __int64)this + 368;
        v23 = std::_Allocate<16,std::_Default_allocate_traits>(48LL);
        v48 = &v49;
        ____0V__tuple_AEBQEAUHWND_____std__V__tuple___V_1__0A___Z_S___pair_QEAUHWND____UWindowCloakInfo_CDesktopPositioner___std__AEAA_AEAV__tuple_AEBQEAUHWND_____1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
          v23 + 32,
          &v48);
        *(_QWORD *)v24 = v31;
        *(_QWORD *)(v24 + 8) = v31;
        *(_QWORD *)(v24 + 16) = v31;
        *(_WORD *)(v24 + 24) = 0;
        v45[0] = v43;
        v25 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Insert_node(
                v30,
                v45,
                v24);
        goto LABEL_26;
      }
LABEL_83:
      std::_Throw_tree_length_error();
    }
LABEL_8:
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      WindowForView = v49;
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
  v21 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(unsigned __int64 *))(*v21 + 16))(v21);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8F9,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)v6);
  return v6;
}
