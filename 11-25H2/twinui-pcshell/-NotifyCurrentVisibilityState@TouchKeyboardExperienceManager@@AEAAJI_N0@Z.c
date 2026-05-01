/*
 * XREFs of ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@AEAAJI_N0@Z @ 0x180098E94
 * Callers:
 *     _lambda_ce5f0a13437f36dbd45420a359bd80e9_::operator() @ 0x18045E9CC (_lambda_ce5f0a13437f36dbd45420a359bd80e9_--operator().c)
 * Callees:
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x180098EC4 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(
        TouchKeyboardExperienceManager *this,
        int a2,
        bool a3,
        bool a4)
{
  if ( a2 == *(_DWORD *)(*((_QWORD *)this + 73) + 496LL) )
    IhmNotification::SendKeyboardSetVisible(0LL, a4, a3);
  return 0LL;
}
