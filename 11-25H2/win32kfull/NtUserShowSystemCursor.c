/*
 * XREFs of NtUserShowSystemCursor @ 0x1402A2770
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     CheckWinstaAttributeAccess @ 0x14005FF00 (CheckWinstaAttributeAccess.c)
 *     EditionShowSystemCursor @ 0x1401212C0 (EditionShowSystemCursor.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

_BOOL8 __fastcall NtUserShowSystemCursor(unsigned int a1)
{
  __int64 v2; // rdx
  BOOL v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v6, 1LL);
  v3 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(16LL) )
    v3 = EditionShowSystemCursor(a1, v2);
  else
    UserSetLastError(5);
  UserSessionSwitchLeaveCrit(v4);
  return v3;
}
