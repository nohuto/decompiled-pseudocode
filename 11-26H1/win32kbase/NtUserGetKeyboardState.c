/*
 * XREFs of NtUserGetKeyboardState @ 0x1400E83A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     EtwTraceUIPIInputError @ 0x14006F600 (EtwTraceUIPIInputError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ApiSetEditionIsGetKeyStateBlocked @ 0x1400D300C (ApiSetEditionIsGetKeyStateBlocked.c)
 *     IsKeyStateCached @ 0x1400E8580 (IsKeyStateCached.c)
 *     Feature_IPS44834473__private_IsEnabledDeviceUsageNoInline @ 0x1400E85E0 (Feature_IPS44834473__private_IsEnabledDeviceUsageNoInline.c)
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1400E8CE0 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     _GetKeyboardState @ 0x1401BD130 (_GetKeyboardState.c)
 */

__int64 __fastcall NtUserGetKeyboardState(_BYTE *a1)
{
  bool v1; // si
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rdi
  __int64 v5; // rcx
  int KeyStateBlocked; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // r14
  unsigned int v13; // edi
  __int64 v14; // rcx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rcx
  int v20; // eax
  int v21; // edx
  int v22; // r8d
  __int64 UserSessionState; // rax
  __int64 v24; // [rsp+50h] [rbp-38h] BYREF
  int v25; // [rsp+58h] [rbp-30h]
  __int64 v27; // [rsp+A0h] [rbp+18h] BYREF

  v1 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v27);
  v4 = PtiCurrent(v3, v2);
  if ( !(unsigned int)Feature_IPS44834473__private_IsEnabledDeviceUsageNoInline() )
  {
    KeyStateBlocked = ApiSetEditionIsGetKeyStateBlocked(v5);
    v1 = KeyStateBlocked == 0;
    if ( !KeyStateBlocked && !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(1LL) )
    {
      v19 = *(_QWORD *)(W32GetUserSessionState(v17, v16, v18) + 18928);
      v20 = *(_DWORD *)(v19 + 480);
      v24 = *(_QWORD *)(v19 + 472);
      v25 = v20;
      UserSessionState = W32GetUserSessionState(v19, v21, v22);
      EtwTraceUIPIInputError((__int64)v4, 0LL, *(_QWORD *)(UserSessionState + 18928), &v24, 3);
      v1 = 0;
    }
  }
  ProbeForWrite(a1, 0x100uLL, 1u);
  if ( (unsigned int)Feature_IPS44834473__private_IsEnabledDeviceUsageNoInline() )
  {
    GetKeyboardState(a1);
  }
  else
  {
    v12 = *((_QWORD *)PtiCurrent(v8, v7) + 58);
    v13 = 0;
    LODWORD(v27) = 0;
    v14 = 0LL;
    while ( (int)v14 < 256 )
    {
      *a1 = 0;
      if ( v1 || (LOBYTE(v14) = v13, (unsigned __int8)IsKeyStateCached(v14)) )
      {
        v10 = v13 & 3;
        v11 = (unsigned __int64)(unsigned __int8)v13 >> 2;
        if ( ((unsigned __int8)(1 << (2 * v10)) & *(_BYTE *)(v11 + v12 + 280)) != 0 )
          *a1 |= 0x80u;
        v9 = (unsigned int)(1 << (2 * v10 + 1));
        if ( ((unsigned __int8)v9 & *(_BYTE *)(v11 + v12 + 280)) != 0 )
          *a1 |= 1u;
      }
      LODWORD(v27) = ++v13;
      v14 = v13;
      ++a1;
    }
  }
  UserSessionSwitchLeaveCritWithNonPaged(v14, v9, v10, v11);
  return 1LL;
}
