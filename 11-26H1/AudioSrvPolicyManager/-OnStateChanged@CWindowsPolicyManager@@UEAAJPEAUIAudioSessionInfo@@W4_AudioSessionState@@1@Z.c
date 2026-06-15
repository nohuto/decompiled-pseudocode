/*
 * XREFs of ?OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180016010
 * Callers:
 *     <none>
 * Callees:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180015050 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnStateChanged(
        CWindowsPolicyManager *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        const char *a4)
{
  CDuckingManager *v5; // rcx
  __int64 result; // rax

  v5 = (CDuckingManager *)*((_QWORD *)this + 4);
  result = 0LL;
  if ( !v5 || (result = CDuckingManager::OnStateChanged(v5, a2, a3, a4), (int)result >= 0) )
  {
    if ( *((_QWORD *)this + 3) )
      return 0LL;
  }
  return result;
}
