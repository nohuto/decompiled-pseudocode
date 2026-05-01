/*
 * XREFs of ?OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z @ 0x18005E638
 * Callers:
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x18005E5F0 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005C880 (-QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005CB4C (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005CD2C (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005D1D0 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005E7B8 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z @ 0x18005EB40 (-_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z.c)
 *     WPP_SF_Sdql @ 0x1801F2220 (WPP_SF_Sdql.c)
 *     ?CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1802FCC98 (-CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x1802FF9FC (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::CImmersiveWindowCollection::OnViewReadinessChanged(
        CImmersiveApp::CImmersiveWindowCollection *this,
        HWND a2,
        char a3)
{
  int TaskWindow; // ebx
  int v7; // edx
  int v8; // r8d
  int v9; // ebx
  int v10; // edx
  int v11; // r8d
  HWND v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h] BYREF
  char v14; // [rsp+50h] [rbp-18h]
  unsigned __int64 v15; // [rsp+88h] [rbp+20h] BYREF

  if ( a3 )
  {
    v15 = 0LL;
    if ( *((_QWORD *)this + 21) )
    {
      if ( !a2 )
        goto LABEL_6;
      v12 = a2;
      v13 = 0LL;
      v14 = 0;
      TaskWindow = CImmersiveApp::CImmersiveWindowCollection::_FindTaskWindow(
                     this,
                     (const struct CTaskWindowFinder *)&v12,
                     &v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
      if ( TaskWindow < 0 )
        return;
      if ( !v15 )
      {
LABEL_6:
        v9 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 20) + 216LL))(**((_QWORD **)this + 20));
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 32LL))(
          *((_QWORD *)this + 18),
          **((_QWORD **)this + 20));
        if ( v9 == 3 )
          CImmersiveApp::CImmersiveWindowCollection::QueueAyncPositionReconciliation(this);
      }
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_Sdql(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          v7,
          v8,
          *(_QWORD *)(*((_QWORD *)this + 19) + 576LL),
          *(_DWORD *)(*((_QWORD *)this + 19) + 584LL),
          (char)a2,
          a3);
      }
      if ( *((_QWORD *)this + 16) && CImmersiveApp::CImmersiveWindowCollection::CanShowPendingApplicationWindow(this) )
      {
        CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(this, a2);
        goto LABEL_14;
      }
      if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(this)
        && CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(this, v10, v11) )
      {
        CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(this);
LABEL_14:
        CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged(this);
      }
    }
  }
}
