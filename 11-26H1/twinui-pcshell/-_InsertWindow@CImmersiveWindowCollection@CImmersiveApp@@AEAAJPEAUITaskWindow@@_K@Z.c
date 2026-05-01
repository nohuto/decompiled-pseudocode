/*
 * XREFs of ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x1801CD4E4
 * Callers:
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180065990 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180222E4C (-AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerI.c)
 *     ?_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z @ 0x180301028 (-_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ?_MakeRoomAt@?$CTSimpleArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18029A868 (-_MakeRoomAt@-$CTSimpleArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x180306AA8 (-OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_InsertWindow(
        CSplashScreen **this,
        struct ITaskWindow *a2,
        __int64 a3)
{
  _QWORD *v6; // r15
  struct ITaskWindow *v7; // rbx
  int RoomAt; // esi
  __int64 (__fastcall *v9)(struct ITaskWindow *, GUID *, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v14; // eax
  _QWORD *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  struct ITaskWindow *v18; // [rsp+58h] [rbp+10h] BYREF

  v6 = this + 20;
  v7 = a2;
  v18 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  RoomAt = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::_MakeRoomAt(
             v6,
             a3);
  if ( RoomAt >= 0 )
  {
    v15 = (_QWORD *)(*v6 + 8 * a3);
    if ( v15 )
    {
      Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(v15, &v18);
      v7 = v18;
    }
  }
  if ( v7 )
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( RoomAt >= 0 )
    CSplashScreen::OnViewAdded(this[30], a2);
  (*(void (__fastcall **)(struct ITaskWindow *, _QWORD))(*(_QWORD *)a2 + 248LL))(a2, 0LL);
  v17 = 0LL;
  v9 = *(__int64 (__fastcall **)(struct ITaskWindow *, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  v10 = v9(a2, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v17);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1C7E,
      (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v10);
  v12 = v17;
  if ( v17 )
  {
    LOBYTE(v11) = *((_BYTE *)this + 194);
    v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 592LL))(v17, v11);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1C81,
        (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)v14);
    v12 = v17;
  }
  if ( v12 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)RoomAt;
}
