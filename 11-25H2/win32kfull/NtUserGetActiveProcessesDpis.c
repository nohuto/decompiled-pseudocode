/*
 * XREFs of NtUserGetActiveProcessesDpis @ 0x14004B8C0
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiCacheSlot @ 0x14004B9C0 (GetDpiCacheSlot.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 NtUserGetActiveProcessesDpis()
{
  unsigned int v0; // edi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 i; // rbx
  int DpiCacheSlot; // eax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v6, 1LL);
  v0 = 0;
  for ( i = *(_QWORD *)(W32GetUserSessionState(v2, v1) + 36368); i; i = *(_QWORD *)(i + 360) )
  {
    DpiCacheSlot = GetDpiCacheSlot(*(unsigned __int16 *)(i + 272));
    if ( DpiCacheSlot != -1 )
      v0 |= 1 << DpiCacheSlot;
  }
  UserSessionSwitchLeaveCrit();
  return v0;
}
