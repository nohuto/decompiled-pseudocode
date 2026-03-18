/*
 * XREFs of _dynamic_atexit_destructor_for__CManipulationContext::s_ParticipatingInteractionMap__ @ 0x1802B9980
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 */

void dynamic_atexit_destructor_for__CManipulationContext::s_ParticipatingInteractionMap__()
{
  if ( CManipulationContext::s_ParticipatingInteractionMap )
  {
    operator delete(CManipulationContext::s_ParticipatingInteractionMap);
    CManipulationContext::s_ParticipatingInteractionMap = 0LL;
  }
  if ( qword_1803DE2D8 )
  {
    operator delete(qword_1803DE2D8);
    qword_1803DE2D8 = 0LL;
  }
  dword_1803DE2E0 = 0;
}
