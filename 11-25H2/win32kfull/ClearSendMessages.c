/*
 * XREFs of ClearSendMessages @ 0x14012D548
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     SetWakeBit @ 0x1400338D0 (SetWakeBit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxInterSendMsgEx @ 0x14012BE00 (xxxInterSendMsgEx.c)
 */

__int64 __fastcall ClearSendMessages(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  int v6; // ecx
  int v7; // ecx
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // r8
  _QWORD *v17; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-48h] BYREF
  _DWORD v19[2]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v20; // [rsp+68h] [rbp-30h]
  __int64 v21; // [rsp+70h] [rbp-28h]
  __int64 v22; // [rsp+78h] [rbp-20h]
  __int128 v23; // [rsp+80h] [rbp-18h]

  result = W32GetUserSessionState(a1, a2);
  v4 = (_QWORD *)(result + 69056);
  v5 = *(_QWORD **)(result + 69056);
  while ( v5 != v4 )
  {
    v8 = v5;
    v5 = (_QWORD *)*v5;
    v9 = v8[14];
    if ( v9 == a1 )
    {
      v6 = *((_DWORD *)v8 + 21);
      if ( (v6 & 4) != 0 )
      {
        v7 = v6 | 9;
        goto LABEL_8;
      }
      if ( (v6 & 1) != 0 )
        goto LABEL_9;
      if ( (v6 & 0x100) != 0 )
      {
        v19[1] = 0;
        v10 = v6 | 1;
        *((_DWORD *)v8 + 21) = v10;
        v11 = 33;
        if ( (v10 & 0x400) != 0 )
          v11 = 289;
        v22 = 0LL;
        v19[0] = v11;
        v20 = v8[6];
        v21 = v8[7];
        v23 = 0LL;
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, v9);
        xxxInterSendMsgEx(
          (struct tagWND *)v8[14],
          *((_DWORD *)v8 + 26),
          0LL,
          0LL,
          0,
          v8[8],
          (__int64)v19,
          1,
          *((_DWORD *)v8 + 21) & 0x10000);
        v14 = PtiCurrent(v13, v12);
        Win32HM_UnlockFromThread<1>((ULONG_PTR)v14, BugCheckParameter3);
      }
      else
      {
        if ( (v6 & 0x4000) != 0 )
          goto LABEL_9;
        if ( !v8[4] )
        {
          v7 = v6 | 1;
LABEL_8:
          *((_DWORD *)v8 + 21) = v7;
          goto LABEL_9;
        }
        --*(_DWORD *)(v8[5] + 576LL);
        v15 = v8 + 2;
        v16 = v8[2];
        if ( *(_QWORD **)(v16 + 8) != v8 + 2 || (v17 = (_QWORD *)v8[3], (_QWORD *)*v17 != v15) )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        *v15 = 0LL;
        *((_DWORD *)v8 + 21) |= 0x8001u;
        v8[9] = 0LL;
        SetWakeBit(v8[4], 512LL);
      }
LABEL_9:
      result = HMAssignmentUnlock(v8 + 14);
    }
  }
  return result;
}
