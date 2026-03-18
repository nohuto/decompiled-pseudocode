/*
 * XREFs of NtUserSoundSentry @ 0x140110890
 * Callers:
 *     <none>
 * Callees:
 *     xxxSoundSentry @ 0x1401108CC (xxxSoundSentry.c)
 */

__int64 NtUserSoundSentry()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)xxxSoundSentry();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
