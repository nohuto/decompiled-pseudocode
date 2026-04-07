/*
 * XREFs of ?OnTransparencyPolicyChanged@CWindowList@@AEAAJ_N@Z @ 0x1800843C0
 * Callers:
 *     wistd::__function::__func__lambda_20fdf1c36a5152f84d2b416543516248__void___cdecl(int_const_&)_::operator() @ 0x1800E2A50 (wistd--__function--__func__lambda_20fdf1c36a5152f84d2b416543516248__void___cdecl(in_ea_1800E2A50.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?UpdateAccentState@CWindowList@@QEAAXXZ @ 0x180084470 (-UpdateAccentState@CWindowList@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnTransparencyPolicyUpdated@CAcrylicSheet@@QEAAJXZ @ 0x1800A1328 (-OnTransparencyPolicyUpdated@CAcrylicSheet@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::OnTransparencyPolicyChanged(CWindowList *this, char a2)
{
  CAcrylicSheet *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_BYTE *)this + 633) == a2
    || (*((_BYTE *)this + 633) = a2,
        CWindowList::UpdateAccentState(this),
        (v4 = (CAcrylicSheet *)*((_QWORD *)this + 67)) == 0LL)
    || (v5 = CAcrylicSheet::OnTransparencyPolicyUpdated(v4), v6 = v5, v5 >= 0) )
  {
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6DA,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v5,
      v8);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
    return v6;
  }
}
