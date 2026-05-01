/*
 * XREFs of ?GetAdjacentDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4FocusNavigationDirection@Input@Xaml@UI@6@PEAPEAU23456@@Z @ 0x1804919E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1802B9A40 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualDesktopController::GetAdjacentDesktop(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3,
        _QWORD *a4)
{
  __int64 v8; // r15
  int v9; // ebx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rbx
  int v12; // eax
  char *v13; // rax
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  unsigned int v18; // esi
  __int64 (__fastcall *v19)(__int64, __int64, _QWORD, __int64 *); // rdi
  int v20; // eax
  __int64 v22; // rdx
  __int64 v23; // [rsp+30h] [rbp-20h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-18h] BYREF
  __int64 v25[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v27; // [rsp+80h] [rbp+30h] BYREF
  __int64 v28; // [rsp+98h] [rbp+48h] BYREF

  *a4 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, (RTL_SRWLOCK *)(a1 + 136));
  v8 = *(_QWORD *)(a1 + 88);
  if ( !v8 )
  {
    v9 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14D,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
LABEL_31:
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return (unsigned int)v9;
  }
  v10 = 0LL;
  v28 = 0LL;
  if ( a2 )
  {
    v23 = 0LL;
    v11 = **a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    v12 = v11(a2, &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2, &v23);
    v9 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x153,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
LABEL_30:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
      goto LABEL_31;
    }
    v13 = (char *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 24LL))(v23, v25);
    Microsoft::WRL::ComPtr<IClassicWindow>::operator=(&v28, v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v25);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    v8 = *(_QWORD *)(a1 + 88);
    v10 = v28;
  }
  if ( a3 )
  {
    v14 = a3 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            if ( v17 == 1 )
              v18 = 4;
            else
              v18 = 0;
          }
          else
          {
            v18 = 3;
          }
        }
        else
        {
          v18 = 2;
        }
      }
      else
      {
        v18 = 1;
      }
    }
    else
    {
      v18 = 6;
    }
  }
  else
  {
    v18 = 5;
  }
  v27 = 0LL;
  v19 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v8 + 64LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
  v20 = v19(v8, v10, v18, &v27);
  v9 = v20;
  if ( v20 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(**(_QWORD **)(a1 + 104) + 24LL))(
           *(_QWORD *)(a1 + 104),
           v27,
           a4);
    if ( v9 >= 0 )
    {
LABEL_29:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
      goto LABEL_30;
    }
    v22 = 357LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_29;
  }
  if ( v20 != -2147316575 )
  {
    v22 = 354LL;
    goto LABEL_28;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
