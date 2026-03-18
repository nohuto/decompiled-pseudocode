/*
 * XREFs of NtUserGetKeyboardInputThreadId @ 0x1401E49A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     Feature_Bugfix_58554964__private_IsEnabledDeviceUsageNoInline @ 0x1401E0330 (Feature_Bugfix_58554964__private_IsEnabledDeviceUsageNoInline.c)
 *     GetKeyboardInputThreadId @ 0x14021B640 (GetKeyboardInputThreadId.c)
 */

__int64 __fastcall NtUserGetKeyboardInputThreadId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int KeyboardInputThreadId; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  KeyboardInputThreadId = 0;
  EnterSharedCrit(0LL, 1LL, a3, a4);
  if ( (unsigned int)Feature_Bugfix_58554964__private_IsEnabledDeviceUsageNoInline() )
    KeyboardInputThreadId = GetKeyboardInputThreadId();
  UserSessionSwitchLeaveCritWithNonPaged(v6, v5, v7, v8);
  return KeyboardInputThreadId;
}
