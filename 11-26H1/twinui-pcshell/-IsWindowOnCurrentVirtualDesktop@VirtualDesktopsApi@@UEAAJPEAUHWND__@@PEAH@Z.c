/*
 * XREFs of ?IsWindowOnCurrentVirtualDesktop@VirtualDesktopsApi@@UEAAJPEAUHWND__@@PEAH@Z @ 0x18003D6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualDesktopsApi::IsWindowOnCurrentVirtualDesktop(VirtualDesktopsApi *this, HWND a2, int *a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  RTL_SRWLOCK *v11; // rcx
  __int64 v13; // rcx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 1;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11), &SRWLock);
  v6 = *((_QWORD *)this + 12);
  if ( v6 )
  {
    if ( a2 )
    {
      v16 = 0LL;
      if ( (*(int (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, a2, &v16) < 0 )
      {
        *a3 = 1;
        v13 = v16;
        if ( v16 )
        {
          v16 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        v11 = SRWLock;
        if ( !SRWLock )
          return 0LL;
LABEL_10:
        ReleaseSRWLockShared(v11);
        return 0LL;
      }
      v17 = 0LL;
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 7) + 368LL))(*((_QWORD *)this + 7), &v17);
      v8 = v7;
      if ( v7 >= 0 )
      {
        *a3 = (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 9) + 24LL))(
                *((_QWORD *)this + 9),
                v16,
                v17);
        v9 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        v10 = v16;
        if ( v16 )
        {
          v16 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        v11 = SRWLock;
        if ( !SRWLock )
          return 0LL;
        goto LABEL_10;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
        (const char *)(unsigned int)v7,
        v14);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      return v8;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x42,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
        (const char *)0x80070057LL,
        v14);
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      return 2147942487LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
      (const char *)0x8007139FLL,
      v14);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return 2147947423LL;
  }
}
