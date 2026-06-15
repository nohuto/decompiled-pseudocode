/*
 * XREFs of ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x1800204D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x1800204FC (-UnregisterSession@CWindowsPolicyManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 */

int __fastcall CProcess::UnregisterSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  if ( a2 )
    return CWindowsPolicyManager::UnregisterSession(this, this, a2);
  else
    return -2147024809;
}
