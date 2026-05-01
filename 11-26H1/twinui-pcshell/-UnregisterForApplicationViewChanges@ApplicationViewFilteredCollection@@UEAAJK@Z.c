/*
 * XREFs of ?UnregisterForApplicationViewChanges@ApplicationViewFilteredCollection@@UEAAJK@Z @ 0x1805BD7B0
 * Callers:
 *     ?UnregisterForApplicationViewChanges@ApplicationViewFilteredCollection@@WBI@EAAJK@Z @ 0x1805BD7F0 (-UnregisterForApplicationViewChanges@ApplicationViewFilteredCollection@@WBI@EAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@CGITRegistrationList@@QEAAJK@Z @ 0x1800866A0 (-Unregister@CGITRegistrationList@@QEAAJK@Z.c)
 */

__int64 __fastcall ApplicationViewFilteredCollection::UnregisterForApplicationViewChanges(RTL_SRWLOCK *this, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CGITRegistrationList::Unregister(this + 16, a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\applicationviewfilteredcollection.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
