/*
 * XREFs of NtUserGetKeyNameText @ 0x1401D19D0
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetKeyNameText(unsigned int a1, volatile void *a2, unsigned int a3)
{
  unsigned int KeyNameText; // ebx
  __int64 v7; // rcx
  char v9; // [rsp+68h] [rbp+20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v9, 1LL);
  ProbeForWrite(a2, 2LL * a3, 2u);
  KeyNameText = _GetKeyNameText(a1, a2, a3);
  UserSessionSwitchLeaveCrit(v7);
  return KeyNameText;
}
