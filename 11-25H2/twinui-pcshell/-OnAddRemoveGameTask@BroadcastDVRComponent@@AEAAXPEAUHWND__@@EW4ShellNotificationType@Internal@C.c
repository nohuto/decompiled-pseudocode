/*
 * XREFs of ?OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@Capture@Media@Windows@@E@Z @ 0x180316D40
 * Callers:
 *     ?RefreshGameListsTask@BroadcastDVRComponent@@AEAAX_N@Z @ 0x180317B44 (-RefreshGameListsTask@BroadcastDVRComponent@@AEAAX_N@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7___::Run @ 0x1803180C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7___--Run.c)
 * Callees:
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180028EF8 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180085690 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??1?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAA@XZ @ 0x1800B59F4 (--1-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastDVRActiveAppInfo@.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B5D10 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ??$make_pair@AEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@AEAV?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@YA?AU?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@0@AEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@AEAV?$shared_ptr@UBroadcastDVRActiveAppInfo@@@0@@Z @ 0x1801342A0 (--$make_pair@AEAV-$ComPtr@UIApplicationView@@@WRL@Microsoft@@AEAV-$shared_ptr@UBroadcastDVRActiv.c)
 *     ??$?4U?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@$0A@@?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801D9044 (--$-4U-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastD_ea_1801D9044.c)
 *     ?SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUBroadcastDVRActiveAppInfo@@K_NPEA_N@Z @ 0x180238D58 (-SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Captur.c)
 *     ?BroadcastDVRComponent_OnAddRemoveGameTask@GameDVRTraceProvider@@SAXPEAXK@Z @ 0x18031511C (-BroadcastDVRComponent_OnAddRemoveGameTask@GameDVRTraceProvider@@SAXPEAXK@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BroadcastDVRComponent::OnAddRemoveGameTask(__int64 a1, void *a2, char a3, int a4, char a5)
{
  int v9; // r9d
  __int64 v10; // rax
  _QWORD *v11; // r15
  std::_Ref_count_base *v12; // rsi
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  unsigned int v21; // esi
  __int64 *v22; // rax
  std::_Ref_count_base *v23; // rdi
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  std::_Ref_count_base *v25[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+48h] [rbp-28h] BYREF
  std::_Ref_count_base *v27; // [rsp+50h] [rbp-20h]
  __int64 v28[3]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+30h] BYREF

  *(_OWORD *)v25 = 0LL;
  v24 = 0LL;
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v26, (_QWORD *)(a1 + 312));
  GameDVRTraceProvider::BroadcastDVRComponent_OnAddRemoveGameTask(a2, v9);
  v10 = **(_QWORD **)(a1 + 264);
  v29 = v10;
  while ( v10 != *(_QWORD *)(a1 + 264) )
  {
    v11 = (_QWORD *)(v10 + 32);
    std::shared_ptr<FlyoutView>::operator=(v25, (_QWORD *)(v10 + 40));
    v12 = v25[0];
    if ( *(void **)v25[0] == a2 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v24, v11);
      *((_BYTE *)v12 + 16) = a3 != 0;
      v13 = *((_DWORD *)v12 + 14) ^ (*((_DWORD *)v12 + 14) ^ (32 * *(unsigned __int8 *)(a1 + 451))) & 0x20;
      *((_DWORD *)v12 + 14) = v13;
      v14 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(*(_BYTE *)(a1 + 452) << 6)) & 0x40;
      *((_DWORD *)v12 + 14) = v14;
      v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(8 * *(_BYTE *)(a1 + 449))) & 8;
      *((_DWORD *)v12 + 14) = v15;
      v16 = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(16 * *(_BYTE *)(a1 + 450))) & 0x10;
      *((_DWORD *)v12 + 14) = v16;
      *((_DWORD *)v12 + 15) = 0;
      LOBYTE(v29) = (v16 & 2) != 0;
      v17 = (*((_BYTE *)v12 + 16) != 0) | 0x40;
      if ( !*((_BYTE *)v12 + 18) )
        v17 = *((_BYTE *)v12 + 16) != 0;
      v18 = v17 | 2;
      if ( (v16 & 8) == 0 )
        v18 = v17;
      v19 = v18 | 4;
      if ( (v16 & 0x10) == 0 )
        v19 = v18;
      v20 = v19 | 8;
      if ( (v16 & 0x20) == 0 )
        v20 = v19;
      v21 = v20 | 0x10;
      if ( (v16 & 0x40) == 0 )
        v21 = v20;
      if ( a3 )
      {
        v22 = std::make_pair<Microsoft::WRL::ComPtr<IApplicationView> &,std::shared_ptr<BroadcastDVRActiveAppInfo> &>(
                v28,
                &v24,
                (__int64 *)v25);
        std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>,0>(
          (__int64 *)(a1 + 280),
          v22);
        std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::~pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>(v28);
        v23 = v25[0];
        if ( *(_BYTE *)(a1 + 433) )
        {
          BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 2, v25[0], v21, 0, &v29);
          if ( (_BYTE)v29 )
            *((_DWORD *)v23 + 14) ^= (*((_DWORD *)v23 + 14) ^ (2 * (unsigned __int8)v29)) & 2;
        }
        if ( a5 )
        {
          BroadcastDVRComponent::SendShellNotificationToDVR2(a1, a4, v23, v21, 0, &v29);
          if ( (_BYTE)v29 )
            *((_DWORD *)v23 + 14) ^= (*((_DWORD *)v23 + 14) ^ (2 * (unsigned __int8)v29)) & 2;
        }
      }
      break;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&v29);
    v10 = v29;
  }
  if ( v27 )
    std::_Ref_count_base::_Decref(v27);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  if ( v25[1] )
    std::_Ref_count_base::_Decref(v25[1]);
}
