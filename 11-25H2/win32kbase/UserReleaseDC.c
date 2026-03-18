/*
 * XREFs of UserReleaseDC @ 0x1400F4E50
 * Callers:
 *     GrepDeleteDC @ 0x14001CC30 (GrepDeleteDC.c)
 * Callees:
 *     ReleaseCacheDC @ 0x140046EA0 (ReleaseCacheDC.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall UserReleaseDC(__int64 a1)
{
  __int64 v2; // rdx
  char v4; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v4, 1LL);
  LODWORD(a1) = ReleaseCacheDC(a1, 0LL) != 2;
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v2);
  return (unsigned int)a1;
}
