/*
 * XREFs of _anonymous_namespace_::ScreenOnStudySessionStateTracker::Stop @ 0x18022FC0C
 * Callers:
 *     _anonymous_namespace_::ScreenOnStudySessionStateTracker::Start @ 0x1802176E8 (_anonymous_namespace_--ScreenOnStudySessionStateTracker--Start.c)
 *     _anonymous_namespace_::State::_State @ 0x18022FB64 (_anonymous_namespace_--State--_State.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

void __fastcall anonymous_namespace_::ScreenOnStudySessionStateTracker::Stop(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)a1 )
  {
    *(_BYTE *)a1 = 0;
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 )
    {
      v3 = RtlUnsubscribeWnfStateChangeNotification(v2) | 0x10000000;
      if ( v3 < 0 )
        ModuleFailFastForHRESULT(v3, retaddr);
      *(_QWORD *)(a1 + 16) = 0LL;
    }
  }
}
