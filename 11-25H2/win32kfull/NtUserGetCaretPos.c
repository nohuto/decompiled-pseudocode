/*
 * XREFs of NtUserGetCaretPos @ 0x1401CBAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetCaretPos(_DWORD *a1)
{
  _BYTE *v1; // rdx
  __int64 v4; // [rsp+58h] [rbp+10h]
  char v5; // [rsp+60h] [rbp+18h] BYREF
  struct tagTHREADINFO *v6; // [rsp+68h] [rbp+20h]

  EnterLeaveCritShared::EnterLeaveCritShared(&v5, 1LL);
  v1 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v1 = (_BYTE *)MmUserProbeAddress;
  *v1 = *v1;
  v1[7] = v1[7];
  v6 = PtiCurrent(MmUserProbeAddress, (__int64)v1);
  v4 = *((_QWORD *)v6 + 59);
  *a1 = *(_DWORD *)(v4 + 340);
  a1[1] = *(_DWORD *)(v4 + 344);
  UserSessionSwitchLeaveCrit(a1);
  return 1LL;
}
