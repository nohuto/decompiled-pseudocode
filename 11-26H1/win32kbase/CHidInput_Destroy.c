/*
 * XREFs of CHidInput_Destroy @ 0x140219980
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCRIMBase@@UEAAPEAXI@Z @ 0x14016F650 (--_GCRIMBase@@UEAAPEAXI@Z.c)
 *     ??9?$SGHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z @ 0x1401889D4 (--9-$SGHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z.c)
 */

char __fastcall CHidInput_Destroy(int a1, __int64 a2, int a3)
{
  __int64 UserSessionState; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  CRIMBase *v8; // rcx
  int v9; // r8d
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  LOBYTE(UserSessionState) = SGHIDgpHidInput<CHidInput *>::operator!=(a1, &v11, a3);
  if ( (_BYTE)UserSessionState )
  {
    v8 = *(CRIMBase **)(W32GetUserSessionState(v5, v4, v6) + 16832);
    if ( v8 )
      CRIMBase::`scalar deleting destructor'(v8, 1);
    UserSessionState = W32GetUserSessionState((_DWORD)v8, v7, v9);
    *(_QWORD *)(UserSessionState + 16832) = 0LL;
  }
  return UserSessionState;
}
