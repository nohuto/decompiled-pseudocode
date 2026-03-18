/*
 * XREFs of NtUserChildWindowFromPointEx @ 0x140021F60
 * Callers:
 *     <none>
 * Callees:
 *     _ChildWindowFromPointEx @ 0x140021FDC (_ChildWindowFromPointEx.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserChildWindowFromPointEx(__int64 a1)
{
  struct tagWND *v2; // rax
  __int64 v3; // rdi
  __int64 *v4; // rax
  char v6; // [rsp+48h] [rbp+20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v6, 1LL);
  v2 = (struct tagWND *)ValidateHwnd(a1);
  v3 = 0LL;
  if ( v2 )
  {
    v4 = (__int64 *)ChildWindowFromPointEx(v2);
    if ( v4 )
      v3 = *v4;
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
