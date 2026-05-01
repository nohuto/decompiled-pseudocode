/*
 * XREFs of ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180047EE0
 * Callers:
 *     ?GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x180133B60 (-GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 *     _lambda_4963465e0f00482d68929271c70599ba_::operator() @ 0x18030805C (_lambda_4963465e0f00482d68929271c70599ba_--operator().c)
 *     ?GetOwnerAppView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z @ 0x1803086E0 (-GetOwnerAppView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z.c)
 *     ?WindowEnterpriseIdChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x180309160 (-WindowEnterpriseIdChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x180309240 (-WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18030ABA0 (-EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CApplicationViewManager::GetViewForHwnd(RTL_SRWLOCK *this, HWND a2, struct IApplicationView **a3)
{
  RTL_SRWLOCK *v6; // rdi
  struct IApplicationView *v7; // rbx
  struct IApplicationView **Ptr; // r14
  struct IApplicationView **v9; // r12
  struct IApplicationView *v10; // rsi
  bool v11; // si
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct IApplicationView *v14; // rsi
  unsigned int v15; // esi
  int (__fastcall *v17)(struct IApplicationView *, GUID *, __int64 *); // r15
  __int64 v18; // rcx
  int v19; // eax
  HWND v20; // rcx
  HWND v21; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v22[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  BOOL v24; // [rsp+80h] [rbp+40h] BYREF
  struct IApplicationView **v25; // [rsp+90h] [rbp+50h]
  __int64 v26; // [rsp+98h] [rbp+58h] BYREF

  v25 = a3;
  v6 = this + 49;
  v22[1] = this + 49;
  AcquireSRWLockShared(this + 49);
  *a3 = 0LL;
  v7 = 0LL;
  v22[2] = 0LL;
  Ptr = (struct IApplicationView **)this[50].Ptr;
  v9 = &Ptr[(__int64)this[51].Ptr];
  while ( Ptr != v9 )
  {
    v10 = *Ptr;
    v24 = 0;
    v22[0] = 0LL;
    v26 = 0LL;
    if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, _QWORD *))v10)(
           v10,
           &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
           v22) < 0 )
    {
      v17 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v10;
      v18 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      if ( v17(v10, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v26) >= 0 )
      {
        v21 = 0LL;
        v19 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v26 + 24LL))(v26, &v21);
        if ( v19 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3D,
            (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\util.cpp",
            (const char *)(unsigned int)v19,
            (int)v21);
        else
          (*(void (__fastcall **)(HWND, HWND, BOOL *))(*(_QWORD *)v21 + 96LL))(v21, a2, &v24);
        v20 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(HWND))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    else
    {
      v21 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, HWND *))(*(_QWORD *)v22[0] + 24LL))(v22[0], &v21) >= 0 )
        v24 = a2 == v21;
    }
    v11 = v24;
    v12 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = v22[0];
    if ( v22[0] )
    {
      v22[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( v11 )
    {
      v14 = *Ptr;
      if ( *Ptr )
      {
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v14 + 8LL))(*Ptr);
        v7 = v14;
      }
      break;
    }
    ++Ptr;
  }
  *v25 = v7;
  v15 = -2147319765;
  if ( v7 )
    v15 = 0;
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v15;
}
