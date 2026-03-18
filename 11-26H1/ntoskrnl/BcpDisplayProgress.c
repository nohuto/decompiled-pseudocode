/*
 * XREFs of BcpDisplayProgress @ 0x140717534
 * Callers:
 *     BcpGetComponentOffsets @ 0x140717990 (BcpGetComponentOffsets.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140717EE8 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1407180B4 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x140715C90 (BgpDisplayCharacterEx.c)
 *     BcpConvertProgressToString @ 0x140716630 (BcpConvertProgressToString.c)
 *     BcpCursorLessThan @ 0x14071670C (BcpCursorLessThan.c)
 *     BcpDisplayCriticalString @ 0x14071681C (BcpDisplayCriticalString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall BcpDisplayProgress(unsigned int a1, int a2, __int64 a3)
{
  __int64 v5; // r15
  bool v6; // zf
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r8
  _LIST_ENTRY *p_FirstArgument; // rcx
  struct _LIST_ENTRY *Flink; // xmm0_8
  int v12; // r13d
  unsigned int v13; // ebx
  unsigned int v14; // esi
  char *v15; // rax
  int v16; // r12d
  char *v17; // rcx
  volatile LONG Lock; // r14d
  unsigned int v19; // edi
  unsigned __int64 v21; // [rsp+48h] [rbp-19h]
  int v22; // [rsp+58h] [rbp-9h] BYREF
  int v23; // [rsp+5Ch] [rbp-5h] BYREF
  struct _LIST_ENTRY *v24; // [rsp+60h] [rbp-1h] BYREF
  int v25; // [rsp+68h] [rbp+7h]
  __int64 v26; // [rsp+70h] [rbp+Fh] BYREF
  char *v27; // [rsp+78h] [rbp+17h]
  char v28; // [rsp+80h] [rbp+1Fh] BYREF

  v24 = 0LL;
  v5 = 84LL * a2;
  v25 = 0;
  v22 = 0;
  v6 = a1 == 1;
  v23 = 0;
  v7 = ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)((char *)&stru_140E3E928.116 + 4);
  if ( !v6 )
    v7 = &stru_140E3E928.152;
  BcpDisplayCriticalString(v7, *(_DWORD *)((char *)&unk_140E0F020 + v5 + 8), a3, a2);
  v26 = 0x80000LL;
  v27 = &v28;
  BcpConvertProgressToString(a1, (__int64)&v26);
  BcpDisplayCriticalString(&v26, *(_DWORD *)((char *)&unk_140E0F020 + v5 + 8), v8, a2);
  p_FirstArgument = (_LIST_ENTRY *)&stru_140E3E928.FirstArgument;
  if ( a1 != 1 )
    p_FirstArgument = &stru_140E3E928.ApcState.ApcListHead[1];
  BcpDisplayCriticalString(p_FirstArgument, *(_DWORD *)((char *)&unk_140E0F020 + v5 + 8), v9, a2);
  Flink = WheapPfaLock.SchedulerApc.ApcListEntry.Flink;
  v12 = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[24];
  v26 = (__int64)WheapPfaLock.SchedulerApc.ApcListEntry.Flink;
  LODWORD(v27) = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[24];
  if ( BcpCursorLessThan((struct _LIST_ENTRY **)&v26) )
  {
    v13 = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[16];
    v14 = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[20];
    v15 = (char *)&unk_140E0F020 + v5;
    v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&stru_140E3E928.Timer.Processor + 24LL) + 40LL);
    v17 = (char *)&unk_140E0F020 + v5;
    if ( WheapPfaLock.SchedulerApc.Thread )
      Lock = WheapPfaLock.SchedulerApc.Thread->Header.Lock;
    else
      Lock = *((_DWORD *)v15 + 8) + *((_DWORD *)v17 + 4);
    if ( WheapPfaLock.SchedulerApc.Reserved[2] )
      v19 = *(_DWORD *)WheapPfaLock.SchedulerApc.Reserved[2];
    else
      v19 = *((_DWORD *)v15 + 8) + *((_DWORD *)v17 + 4) + *(_DWORD *)((char *)&unk_140E0F020 + v5 + 24);
LABEL_12:
    v24 = (struct _LIST_ENTRY *)__PAIR64__(v14, v13);
    while ( BcpCursorLessThan(&v24) )
    {
      if ( (int)BgpDisplayCharacterEx(
                  0x20u,
                  *(__int64 **)&stru_140E3E928.Timer.Processor,
                  v13,
                  v14,
                  v16,
                  v16,
                  &v22,
                  &v23,
                  v21) < 0 )
        return 0LL;
      v13 += v22;
      LODWORD(v24) = v13;
      if ( v13 > v19 )
      {
        v14 += v23;
        v13 = Lock;
        goto LABEL_12;
      }
    }
    Flink = (struct _LIST_ENTRY *)v26;
  }
  if ( (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x1000000) == 0 )
  {
    gLoadedDiffHivesLock.WaitListEntry.Blink = Flink;
    LODWORD(gLoadedDiffHivesLock.Queue) = v12;
  }
  return 0LL;
}
