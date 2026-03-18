/*
 * XREFs of NtUserGetGUIThreadInfo @ 0x140194B00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     _GetGUIThreadInfo @ 0x140194C48 (_GetGUIThreadInfo.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtUserGetGUIThreadInfo(unsigned int a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  _BYTE *v9; // rdx
  _OWORD v11[4]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v12; // [rsp+90h] [rbp-18h]
  char v14; // [rsp+C8h] [rbp+20h] BYREF

  memset_0(v11, 0, 0x48uLL);
  EnterLeaveCritShared::EnterLeaveCritShared(&v14, 1LL);
  if ( a1 )
  {
    v6 = PtiFromThreadId(a1);
    if ( !v6 )
    {
      UserSetLastError(87);
      goto LABEL_11;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v8 = -PsGetCurrentProcessWow64Process(v5, v4);
  v9 = (_BYTE *)a2;
  if ( ((v8 != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a2 >= MmUserProbeAddress )
    v9 = (_BYTE *)MmUserProbeAddress;
  *v9 = *v9;
  v9[71] = v9[71];
  LODWORD(v11[0]) = *(_DWORD *)a2;
  LODWORD(v6) = GetGUIThreadInfo(v6, v11);
  if ( (_DWORD)v6 )
  {
    *(_OWORD *)a2 = v11[0];
    *(_OWORD *)(a2 + 16) = v11[1];
    *(_OWORD *)(a2 + 32) = v11[2];
    *(_OWORD *)(a2 + 48) = v11[3];
    *(_QWORD *)(a2 + 64) = v12;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v7);
  return (int)v6;
}
