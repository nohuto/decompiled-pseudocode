/*
 * XREFs of ?Register@HolographicPositioner@@UEAAJPEAUIHolographicViewTransitionNotification@@PEAK@Z @ 0x180213A40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x180084CE4 (-Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 */

__int64 __fastcall HolographicPositioner::Register(RTL_SRWLOCK *this, struct IUnknown *a2, unsigned int *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = AgileRegistrationList::Register(this + 49, a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47E,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
