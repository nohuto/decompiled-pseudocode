/*
 * XREFs of ?GetName@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180569390
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetNameInternal@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180227910 (-GetNameInternal@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktop::GetName(CVirtualDesktop *this, HSTRING *a2)
{
  int NameInternal; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10), &SRWLock);
  NameInternal = CVirtualDesktop::GetNameInternal((HSTRING *)this + 2, a2);
  v5 = NameInternal;
  if ( NameInternal >= 0 )
  {
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)NameInternal);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return v5;
  }
}
