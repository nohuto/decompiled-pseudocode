/*
 * XREFs of NtUserReleaseDC @ 0x1400474E0
 * Callers:
 *     <none>
 * Callees:
 *     ReleaseCacheDC @ 0x140046EA0 (ReleaseCacheDC.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

_BOOL8 __fastcall NtUserReleaseDC(__int64 a1)
{
  char v3; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v3, 1LL);
  LODWORD(a1) = ReleaseCacheDC(a1, 0LL);
  UserSessionSwitchLeaveCritWithNonPaged(0LL);
  return (_DWORD)a1 != 2;
}
