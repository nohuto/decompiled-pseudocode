/*
 * XREFs of ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x1802D1D34
 * Callers:
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x18021FD50 (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 * Callees:
 *     PerSessionState::_CreateSessionKey @ 0x1801EA320 (PerSessionState--_CreateSessionKey.c)
 *     PerSessionState::_DoesSessionKeyExist @ 0x1802050C0 (PerSessionState--_DoesSessionKeyExist.c)
 *     ?IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ @ 0x18021532C (-IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ.c)
 */

char __fastcall PerSessionState::_HasDesktopSwitchCompleted(PerSessionState *this)
{
  char result; // al
  PerSessionState *v2; // rcx

  result = byte_18089C4DC;
  if ( !byte_18089C4DC )
  {
    if ( PerSessionState::_DoesSessionKeyExist(L"DesktopSwitchCompleted") )
    {
LABEL_3:
      result = 1;
      byte_18089C4DC = 1;
      return result;
    }
    if ( PerSessionState::IsCurrentThreadOnInputDesktop(v2) )
    {
      PerSessionState::_CreateSessionKey();
      goto LABEL_3;
    }
    return byte_18089C4DC;
  }
  return result;
}
