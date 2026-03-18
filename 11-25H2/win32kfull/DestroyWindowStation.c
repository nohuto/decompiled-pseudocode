/*
 * XREFs of DestroyWindowStation @ 0x1401EB510
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400C7970 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400D882C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x14020F980 (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall DestroyWindowStation(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 *i; // rbx
  __int64 v6; // rax
  bool v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 36) == 1 )
  {
    v7 = IS_USERCRIT_OWNED_EXCLUSIVE();
    if ( !v7 )
      EnterCrit(1LL, 0LL);
    for ( i = (__int64 *)(W32GetUserSessionState(v4, v3) + 63520); ; i = (__int64 *)(v6 + 8) )
    {
      v6 = *i;
      if ( !*i )
        break;
      if ( v1 == v6 )
      {
        DeferrableUnlockObjectAssignment<tagWINDOWSTATION>(i);
        *i = *(_QWORD *)(v1 + 8);
        *(_QWORD *)(v1 + 8) = 0LL;
        break;
      }
    }
    *(_DWORD *)(v1 + 64) |= 0x100u;
    ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v7);
  }
  return 0LL;
}
