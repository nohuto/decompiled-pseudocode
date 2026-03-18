/*
 * XREFs of UserSetTimer @ 0x1402DE08C
 * Callers:
 *     vEnableSynchronize @ 0x1401FE5E0 (vEnableSynchronize.c)
 *     GreStartTimers @ 0x140226CD8 (GreStartTimers.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400C8028 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400D882C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     SetRITTimer @ 0x1401C8EB0 (SetRITTimer.c)
 */

__int64 __fastcall UserSetTimer(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v5);
  v3 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v2, v1) + 57576) )
    v3 = SetRITTimer(0LL, 0x32u, (__int64)GreSynchronizeTimer, 0);
  ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v5);
  return v3;
}
