/*
 * XREFs of ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18012F820
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800B11E4 (-_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E204C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18012FA8C (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18012FD24 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositio.c)
 *     ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18012FFFC (-_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@1@@Z @ 0x1801309D8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositione.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18050E8B0 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$ComPtr@UIApplicationView@@@W_ea_18050E8B0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  struct IApplicationView **v9; // r14
  struct IApplicationView *v10; // rdx
  __int64 v11; // rcx
  struct IApplicationView *v12; // rsi
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 WindowForView; // rdx
  _QWORD *v17; // rbp
  _QWORD *v18; // rsi
  __int64 *v19; // r9
  _QWORD *v20; // rcx
  _QWORD *v21; // r8
  _QWORD *v22; // rax
  __int64 *v23; // rax
  _QWORD *v24; // r10
  _QWORD *i; // rdi
  __int64 *v26; // rcx
  int v27; // eax
  _QWORD *v28; // rax
  __int64 v29; // r10
  __int64 v30; // rax
  _QWORD *v31; // [rsp+20h] [rbp-28h] BYREF
  int v32; // [rsp+34h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a3 - 1;
  if ( v5 )
  {
    v6 = v5 - 6;
    if ( v6 && (v7 = v6 - 1) != 0 )
    {
      if ( v7 == 7 )
        CDesktopPositioner::_OnSizeConstraintsChanged((CDesktopPositioner *)(a1 - 168), a2);
    }
    else
    {
      v27 = CDesktopPositioner::_OnViewGainedForeground((CDesktopPositioner *)(a1 - 168), a2);
      if ( v27 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x374,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v27);
    }
  }
  else
  {
    v9 = (struct IApplicationView **)(a1 + 216);
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
    v10 = *v9;
    v11 = *((_QWORD *)*v9 + 1);
    v32 = 0;
    v12 = v10;
    while ( !*(_BYTE *)(v11 + 25) )
    {
      if ( *(_QWORD *)(v11 + 32) >= (unsigned __int64)a2 )
        v12 = (struct IApplicationView *)v11;
      v13 = (__int64 *)(v11 + 16);
      if ( *(_QWORD *)(v11 + 32) >= (unsigned __int64)a2 )
        v13 = (__int64 *)v11;
      v11 = *v13;
    }
    if ( *((_BYTE *)v12 + 25) || (unsigned __int64)a2 < *((_QWORD *)v12 + 4) )
      v12 = v10;
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
    if ( v12 != *v9 )
    {
      v14 = std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>>::_Extract(
              v9,
              v12);
      std::_Tree_node<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>,void *>>>(
        v15,
        v14);
    }
    WindowForView = ApplicationViewHelpers::GetWindowForView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                      v10);
    if ( WindowForView )
    {
      v17 = (_QWORD *)(a1 + 200);
      v18 = (_QWORD *)*v17;
      v19 = *(__int64 **)(*v17 + 8LL);
      v32 = 0;
      v20 = v18;
      v21 = v19;
      if ( !*((_BYTE *)v19 + 25) )
      {
        do
        {
          if ( v21[4] >= WindowForView )
            v20 = v21;
          v22 = v21 + 2;
          if ( v21[4] >= WindowForView )
            v22 = v21;
          v21 = (_QWORD *)*v22;
        }
        while ( !*(_BYTE *)(*v22 + 25LL) );
      }
      if ( v20 != v18 && !*((_BYTE *)v20 + 25) && WindowForView >= v20[4] )
      {
        v23 = v19;
        v24 = v18;
        for ( i = v18; !*((_BYTE *)v23 + 25); v23 = (__int64 *)*v23 )
        {
          if ( v23[4] < WindowForView )
          {
            v23 += 2;
          }
          else
          {
            if ( *((_BYTE *)i + 25) && WindowForView < v23[4] )
              i = v23;
            v24 = v23;
          }
        }
        v26 = v19;
        if ( !*((_BYTE *)i + 25) )
          v26 = (__int64 *)*i;
        while ( !*((_BYTE *)v26 + 25) )
        {
          v28 = v26;
          if ( WindowForView >= v26[4] )
            v28 = i;
          i = v28;
          if ( WindowForView >= v26[4] )
            v26 += 2;
          v26 = (__int64 *)*v26;
        }
        v31 = v24;
        if ( v24 == (_QWORD *)*v18 && *((_BYTE *)i + 25) )
        {
          std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *>>>(
            v17,
            v17,
            v19);
          v18[1] = v18;
          *v18 = v18;
          v18[2] = v18;
          v17[1] = 0LL;
        }
        else
        {
          while ( v24 != i )
          {
            std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&v31);
            v30 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Extract(
                    v17,
                    v29);
            std::_Deallocate<16>(v30, 48LL);
            v24 = v31;
          }
        }
      }
    }
  }
  return 0LL;
}
