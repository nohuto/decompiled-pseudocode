/*
 * XREFs of CHidInput_Destroy @ 0x140212CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCRIMBase@@UEAAPEAXI@Z @ 0x14014B150 (--_GCRIMBase@@UEAAPEAXI@Z.c)
 *     ??9?$SGHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z @ 0x14014E678 (--9-$SGHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z.c)
 */

char __fastcall CHidInput_Destroy(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  CRIMBase *v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  LOBYTE(UserSessionState) = SGHIDgpHidInput<CHidInput *>::operator!=(a1, &v7);
  if ( (_BYTE)UserSessionState )
  {
    v5 = *(CRIMBase **)(W32GetUserSessionState(v3, v2) + 16840);
    if ( v5 )
      CRIMBase::`scalar deleting destructor'(v5, 1);
    UserSessionState = W32GetUserSessionState(v5, v4);
    *(_QWORD *)(UserSessionState + 16840) = 0LL;
  }
  return UserSessionState;
}
