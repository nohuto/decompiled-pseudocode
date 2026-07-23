/*
 * XREFs of BcpDisplayProgress @ 0x14071C224
 * Callers:
 *     BcpGetComponentOffsets @ 0x14071C680 (BcpGetComponentOffsets.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14071CBD8 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14071CDA4 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x14071A980 (BgpDisplayCharacterEx.c)
 *     BcpConvertProgressToString @ 0x14071B320 (BcpConvertProgressToString.c)
 *     BcpCursorLessThan @ 0x14071B3FC (BcpCursorLessThan.c)
 *     BcpDisplayCriticalString @ 0x14071B50C (BcpDisplayCriticalString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall BcpDisplayProgress(unsigned int a1, int a2, __int64 a3)
{
  __int64 v5; // r15
  bool v6; // zf
  $241382875694CED3D471BC5892DE3337 *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r8
  _LIST_ENTRY *p_FirstArgument; // rcx
  struct _LIST_ENTRY *Flink; // xmm0_8
  int Blink; // r13d
  unsigned int v13; // ebx
  unsigned int Flink_high; // esi
  char *v15; // rax
  int v16; // r12d
  char *v17; // rcx
  int v18; // r14d
  unsigned int v19; // edi
  unsigned __int64 v21; // [rsp+48h] [rbp-19h]
  int v22; // [rsp+58h] [rbp-9h] BYREF
  int v23; // [rsp+5Ch] [rbp-5h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp-1h] BYREF
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
  v7 = ($241382875694CED3D471BC5892DE3337 *)((char *)&stru_140E3EAA8.116 + 4);
  if ( !v6 )
    v7 = &stru_140E3EAA8.152;
  BcpDisplayCriticalString(v7, *(_DWORD *)((char *)&unk_140E0F0A0 + v5 + 8), a3, a2);
  v26 = 0x80000LL;
  v27 = &v28;
  BcpConvertProgressToString(a1, (__int64)&v26);
  BcpDisplayCriticalString(&v26, *(_DWORD *)((char *)&unk_140E0F0A0 + v5 + 8), v8, a2);
  p_FirstArgument = (_LIST_ENTRY *)&stru_140E3EAA8.FirstArgument;
  if ( a1 != 1 )
    p_FirstArgument = &stru_140E3EAA8.ApcState.ApcListHead[1];
  BcpDisplayCriticalString(p_FirstArgument, *(_DWORD *)((char *)&unk_140E0F0A0 + v5 + 8), v9, a2);
  Flink = WheapPfaLock.ThreadListEntry.Flink;
  Blink = (int)WheapPfaLock.ThreadListEntry.Blink;
  v26 = (__int64)WheapPfaLock.ThreadListEntry.Flink;
  LODWORD(v27) = WheapPfaLock.ThreadListEntry.Blink;
  if ( BcpCursorLessThan(&v26) )
  {
    v13 = (unsigned int)WheapPfaLock.ThreadListEntry.Flink;
    Flink_high = HIDWORD(WheapPfaLock.ThreadListEntry.Flink);
    v15 = (char *)&unk_140E0F0A0 + v5;
    v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&stru_140E3EAA8.Timer.Processor + 24LL) + 40LL);
    v17 = (char *)&unk_140E0F0A0 + v5;
    if ( WheapPfaLock.MutantListHead.Flink )
      v18 = (int)WheapPfaLock.MutantListHead.Flink->Flink;
    else
      v18 = *((_DWORD *)v15 + 8) + *((_DWORD *)v17 + 4);
    if ( WheapPfaLock.MutantListHead.Blink )
      v19 = (unsigned int)WheapPfaLock.MutantListHead.Blink->Flink;
    else
      v19 = *((_DWORD *)v15 + 8) + *((_DWORD *)v17 + 4) + *(_DWORD *)((char *)&unk_140E0F0A0 + v5 + 24);
LABEL_12:
    v24 = __PAIR64__(Flink_high, v13);
    while ( BcpCursorLessThan(&v24) )
    {
      if ( (int)BgpDisplayCharacterEx(
                  0x20u,
                  *(__int64 **)&stru_140E3EAA8.Timer.Processor,
                  v13,
                  Flink_high,
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
        Flink_high += v23;
        v13 = v18;
        goto LABEL_12;
      }
    }
    Flink = (struct _LIST_ENTRY *)v26;
  }
  if ( (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x1000000) == 0 )
  {
    *(_QWORD *)&gLoadedDiffHivesLock.Timer.Header.Lock = Flink;
    LODWORD(gLoadedDiffHivesLock.Timer.Header.WaitListHead.Flink) = Blink;
  }
  return 0LL;
}
