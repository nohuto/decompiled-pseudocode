/*
 * XREFs of ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x1800420E0
 * Callers:
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x1800D6C54 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x18013835C (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x180305310 (-_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180042250 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180182A34 (-QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180182B20 (-QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180182F38 (-EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct ITaskWindow *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // rax
  int (__fastcall *v8)(struct ITaskWindow *, GUID *, __int64 *); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(this);
  if ( v4 < 0 )
  {
    v5 = 7436LL;
    goto LABEL_5;
  }
  if ( a2 )
  {
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 72LL))(a2);
    v4 = (*(__int64 (__fastcall **)(_QWORD, struct ITaskWindow *))(**((_QWORD **)this + 18) + 32LL))(
           *((_QWORD *)this + 18),
           a2);
    if ( v4 < 0 )
    {
      v5 = 7454LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
    CImmersiveApp::CImmersiveWindowCollection::EnsurePositionOffsetAsync(this);
    CImmersiveApp::CImmersiveWindowCollection::QueueAyncPositionReconciliation(this);
    v7 = *((_QWORD *)this + 19);
    if ( v7 && *(_DWORD *)(v7 + 896) )
    {
      v10 = 0LL;
      v8 = *(int (__fastcall **)(struct ITaskWindow *, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
      if ( v8(a2, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v10) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 608LL))(
          v10,
          *(unsigned int *)(*((_QWORD *)this + 19) + 896LL),
          *(unsigned int *)(*((_QWORD *)this + 19) + 900LL));
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    }
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 40LL))(*((_QWORD *)this + 18));
    if ( v4 < 0 )
    {
      v5 = 7477LL;
      goto LABEL_5;
    }
  }
  if ( *((_QWORD *)this + 21) >= 2uLL || !a2 )
    CImmersiveApp::CImmersiveWindowCollection::QueueAyncVisibilityReconciliation(this);
  return 0LL;
}
