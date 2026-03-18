/*
 * XREFs of NtUserGetCursor @ 0x1401C8840
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 NtUserGetCursor()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v6, 1LL);
  v2 = 0LL;
  v4 = *((_QWORD *)PtiCurrent(v1, v0) + 59);
  if ( *(_QWORD *)(v4 + 400) )
  {
    v4 = *((_QWORD *)PtiCurrent(v4, v3) + 59);
    v2 = **(_QWORD **)(v4 + 400);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
