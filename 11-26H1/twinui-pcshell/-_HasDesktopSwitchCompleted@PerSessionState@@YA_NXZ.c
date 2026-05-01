/*
 * XREFs of ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x1802C89CC
 * Callers:
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x180211470 (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 * Callees:
 *     PerSessionState::_CreateSessionKey @ 0x1801E0D8C (PerSessionState--_CreateSessionKey.c)
 *     PerSessionState::_DoesSessionKeyExist @ 0x1801F92B0 (PerSessionState--_DoesSessionKeyExist.c)
 *     ?IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ @ 0x1802075A4 (-IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ.c)
 */

char __fastcall PerSessionState::_HasDesktopSwitchCompleted(PerSessionState *this)
{
  char result; // al
  PerSessionState *v2; // rcx

  result = byte_1808DCB94;
  if ( !byte_1808DCB94 )
  {
    if ( PerSessionState::_DoesSessionKeyExist(L"DesktopSwitchCompleted") )
    {
LABEL_3:
      result = 1;
      byte_1808DCB94 = 1;
      return result;
    }
    if ( PerSessionState::IsCurrentThreadOnInputDesktop(v2) )
    {
      PerSessionState::_CreateSessionKey();
      goto LABEL_3;
    }
    return byte_1808DCB94;
  }
  return result;
}
