/*
 * XREFs of ?OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@Capture@Media@Windows@@E@Z @ 0x180312EDC
 * Callers:
 *     ?RefreshGameListsTask@BroadcastDVRComponent@@AEAAX_N@Z @ 0x180313D04 (-RefreshGameListsTask@BroadcastDVRComponent@@AEAAX_N@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7___::Run @ 0x180314280 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7___--Run.c)
 * Callees:
 *     ??$make_pair@AEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@AEAV?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@YA?AU?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@0@AEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@AEAV?$shared_ptr@UBroadcastDVRActiveAppInfo@@@0@@Z @ 0x1800346D8 (--$make_pair@AEAV-$ComPtr@UIApplicationView@@@WRL@Microsoft@@AEAV-$shared_ptr@UBroadcastDVRActiv.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003479C (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUBroadcastDVRActiveAppInfo@@K_NPEA_N@Z @ 0x1800C8874 (-SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Captur.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E204C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ??1?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAA@XZ @ 0x18017E344 (--1-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastDVRActiveAppInfo@.c)
 *     ??$?4U?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@$0A@@?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801CF230 (--$-4U-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastD_ea_1801CF230.c)
 *     ?BroadcastDVRComponent_OnAddRemoveGameTask@GameDVRTraceProvider@@SAXPEAXK@Z @ 0x1803112A8 (-BroadcastDVRComponent_OnAddRemoveGameTask@GameDVRTraceProvider@@SAXPEAXK@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BroadcastDVRComponent::OnAddRemoveGameTask(__int64 a1, void *a2, char a3, int a4, char a5)
{
  int v9; // r9d
  __int64 v10; // rbx
  std::_Ref_count_base *v11; // rsi
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  unsigned int v20; // esi
  __int64 *v21; // rax
  std::_Ref_count_base *v22; // rbx
  __int64 v23; // [rsp+30h] [rbp-40h] BYREF
  std::_Ref_count_base *v24[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v25; // [rsp+48h] [rbp-28h] BYREF
  std::_Ref_count_base *v26; // [rsp+50h] [rbp-20h]
  __int64 v27[3]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+30h] BYREF

  *(_OWORD *)v24 = 0LL;
  v23 = 0LL;
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v25, (_QWORD *)(a1 + 312));
  GameDVRTraceProvider::BroadcastDVRComponent_OnAddRemoveGameTask(a2, v9);
  v10 = **(_QWORD **)(a1 + 264);
  v28 = v10;
  while ( v10 != *(_QWORD *)(a1 + 264) )
  {
    std::shared_ptr<FlyoutView>::operator=(v24, (_QWORD *)(v10 + 40));
    v11 = v24[0];
    if ( *(void **)v24[0] == a2 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v23, (_QWORD *)(v10 + 32));
      *((_BYTE *)v11 + 16) = a3 != 0;
      v12 = *((_DWORD *)v11 + 14) ^ (*((_DWORD *)v11 + 14) ^ (32 * *(unsigned __int8 *)(a1 + 451))) & 0x20;
      *((_DWORD *)v11 + 14) = v12;
      v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(*(_BYTE *)(a1 + 452) << 6)) & 0x40;
      *((_DWORD *)v11 + 14) = v13;
      v14 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(8 * *(_BYTE *)(a1 + 449))) & 8;
      *((_DWORD *)v11 + 14) = v14;
      v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(16 * *(_BYTE *)(a1 + 450))) & 0x10;
      *((_DWORD *)v11 + 14) = v15;
      *((_DWORD *)v11 + 15) = 0;
      LOBYTE(v28) = (v15 & 2) != 0;
      v16 = (*((_BYTE *)v11 + 16) != 0) | 0x40;
      if ( !*((_BYTE *)v11 + 18) )
        v16 = *((_BYTE *)v11 + 16) != 0;
      v17 = v16 | 2;
      if ( (v15 & 8) == 0 )
        v17 = v16;
      v18 = v17 | 4;
      if ( (v15 & 0x10) == 0 )
        v18 = v17;
      v19 = v18 | 8;
      if ( (v15 & 0x20) == 0 )
        v19 = v18;
      v20 = v19 | 0x10;
      if ( (v15 & 0x40) == 0 )
        v20 = v19;
      if ( a3 )
      {
        v21 = std::make_pair<Microsoft::WRL::ComPtr<IApplicationView> &,std::shared_ptr<BroadcastDVRActiveAppInfo> &>(
                v27,
                &v23,
                (__int64 *)v24);
        std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>,0>(
          (__int64 *)(a1 + 280),
          v21);
        std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::~pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>(v27);
        v22 = v24[0];
        if ( *(_BYTE *)(a1 + 433) )
        {
          BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 2, v24[0], v20, 0, &v28);
          if ( (_BYTE)v28 )
            *((_DWORD *)v22 + 14) ^= (*((_DWORD *)v22 + 14) ^ (2 * (unsigned __int8)v28)) & 2;
        }
        if ( a5 )
        {
          BroadcastDVRComponent::SendShellNotificationToDVR2(a1, a4, v22, v20, 0, &v28);
          if ( (_BYTE)v28 )
            *((_DWORD *)v22 + 14) ^= (*((_DWORD *)v22 + 14) ^ (2 * (unsigned __int8)v28)) & 2;
        }
      }
      break;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&v28);
    v10 = v28;
  }
  if ( v26 )
    std::_Ref_count_base::_Decref(v26);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  if ( v24[1] )
    std::_Ref_count_base::_Decref(v24[1]);
}
