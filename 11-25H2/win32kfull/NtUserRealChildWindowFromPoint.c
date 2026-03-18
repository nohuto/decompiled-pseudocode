/*
 * XREFs of NtUserRealChildWindowFromPoint @ 0x140023470
 * Callers:
 *     <none>
 * Callees:
 *     _RealChildWindowFromPoint @ 0x1400234DC (_RealChildWindowFromPoint.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserRealChildWindowFromPoint(__int64 a1)
{
  tagWND *v2; // rax
  __int64 v3; // rdi
  __int64 *v4; // rax
  char v6; // [rsp+40h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v6, 1LL);
  v2 = (tagWND *)ValidateHwnd(a1);
  v3 = 0LL;
  if ( v2 )
  {
    v4 = (__int64 *)RealChildWindowFromPoint(v2);
    if ( v4 )
      v3 = *v4;
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
