/*
 * XREFs of ?OnProcessDisconnected@CWindowList@@UEAAJK@Z @ 0x18007C5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OnProcessDisconnected(CWindowList *this, unsigned int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 58) + 136LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
         a2);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x570,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v3,
      v6);
  else
    v4 = 0;
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
