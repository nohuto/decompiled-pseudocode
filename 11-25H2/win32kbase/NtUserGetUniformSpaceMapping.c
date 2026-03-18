/*
 * XREFs of NtUserGetUniformSpaceMapping @ 0x1400CDAB0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateSharedHandle @ 0x14003F620 (HMValidateSharedHandle.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DrvGetUniformSpaceMapping @ 0x1400CE7BC (DrvGetUniformSpaceMapping.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetUniformSpaceMapping(__int64 a1, _OWORD *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rax
  _BYTE *v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rbx
  __int64 UserSessionState; // rax
  __int128 v12; // [rsp+38h] [rbp-20h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v14, 1LL);
  v6 = HMValidateSharedHandle(a1, v5);
  if ( v6 )
  {
    v10 = *(_QWORD *)(v6 + 88);
    if ( v10 )
    {
      UserSessionState = W32GetUserSessionState(v8, v7);
      if ( (unsigned int)DrvGetUniformSpaceMapping(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 16LL), v10, &v12) )
      {
        v4 = 1;
        v7 = a2;
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          v7 = (_BYTE *)MmUserProbeAddress;
        *v7 = *v7;
        v7[15] = v7[15];
        *a2 = v12;
      }
    }
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, (__int64)v7);
  return v4;
}
