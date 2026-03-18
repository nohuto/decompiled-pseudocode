/*
 * XREFs of NtUserGetUniformSpaceMapping @ 0x14011D250
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     HMValidateSharedHandle @ 0x140087920 (HMValidateSharedHandle.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     DrvGetUniformSpaceMapping @ 0x14011D308 (DrvGetUniformSpaceMapping.c)
 *     ??$Write@UtagRECT@@@?$UserModePointer@UtagRECT@@@@QEAAXAEBUtagRECT@@@Z @ 0x1401C5C90 (--$Write@UtagRECT@@@-$UserModePointer@UtagRECT@@@@QEAAXAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetUniformSpaceMapping(int a1, __int64 a2)
{
  int v3; // edi
  int v4; // edx
  int v5; // r8d
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 UserSessionState; // rax
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  __int128 v15; // [rsp+38h] [rbp-20h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v16 = a2;
  v15 = 0LL;
  v3 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v14);
  v6 = HMValidateSharedHandle(a1, v4, v5);
  if ( v6 )
  {
    v11 = *(_QWORD *)(v6 + 88);
    if ( v11 )
    {
      UserSessionState = W32GetUserSessionState(v8, v7, v9);
      if ( (unsigned int)DrvGetUniformSpaceMapping(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 16LL), v11, &v15) )
      {
        v3 = 1;
        UserModePointer<tagRECT>::Write<tagRECT>(&v16, &v15);
      }
    }
  }
  UserSessionSwitchLeaveCritWithNonPaged(v8, v7, v9, v10);
  return v3;
}
