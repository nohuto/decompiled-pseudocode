/*
 * XREFs of _ReplyMessage @ 0x1401B74C0
 * Callers:
 *     NtUserReplyMessage @ 0x1401B7480 (NtUserReplyMessage.c)
 * Callees:
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     SetWakeBit @ 0x1400338D0 (SetWakeBit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxInterSendMsgEx @ 0x14012BE00 (xxxInterSendMsgEx.c)
 */

__int64 __fastcall ReplyMessage(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // r9
  __int64 v4; // rbx
  int v5; // edx
  __int64 v6; // rcx
  bool v8; // cf
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-48h] BYREF
  _DWORD v13[2]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v14; // [rsp+68h] [rbp-30h]
  __int64 v15; // [rsp+70h] [rbp-28h]
  __int64 v16; // [rsp+78h] [rbp-20h]
  __int128 v17; // [rsp+80h] [rbp-18h]

  v3 = PtiCurrent(a1, a2);
  v4 = *((_QWORD *)v3 + 69);
  if ( !v4 )
    return 0LL;
  v5 = *(_DWORD *)(v4 + 84);
  if ( (v5 & 1) != 0 )
    return 0LL;
  v6 = *(_QWORD *)(v4 + 32);
  if ( v6 )
  {
    *(_QWORD *)(v4 + 72) = a1;
    *(_DWORD *)(v4 + 84) = v5 | 1;
    SetWakeBit(v6, 512LL);
  }
  else if ( (v5 & 0x100) != 0 )
  {
    v13[1] = 0;
    *(_DWORD *)(v4 + 84) = v5 | 1;
    v17 = 0LL;
    if ( (v5 & 4) == 0 )
    {
      v8 = (v5 & 0x400) != 0;
      v16 = a1;
      v9 = *(_QWORD *)(v4 + 112);
      v10 = 33;
      if ( v8 )
        v10 = 289;
      v13[0] = v10;
      v14 = *(_QWORD *)(v4 + 48);
      v15 = *(_QWORD *)(v4 + 56);
      Win32HM_LockIntoThread<1>((__int64)v3, v9, (__int64 *)BugCheckParameter3);
      xxxInterSendMsgEx(
        *(struct tagWND **)(v4 + 112),
        *(_DWORD *)(v4 + 104),
        0LL,
        0LL,
        0,
        *(_QWORD *)(v4 + 64),
        (__int64)v13,
        1,
        (*(_WORD *)(v4 + 86) & 1) == 0);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v11);
    }
  }
  return 1LL;
}
