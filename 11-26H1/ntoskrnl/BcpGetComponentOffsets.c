/*
 * XREFs of BcpGetComponentOffsets @ 0x14071C680
 * Callers:
 *     BgpFwDisplayBugCheckScreen @ 0x14071CDA4 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BcpDisplayProgress @ 0x14071C224 (BcpDisplayProgress.c)
 *     BcpSetCursorPosition @ 0x14071CB0C (BcpSetCursorPosition.c)
 */

__int64 __fastcall BcpGetComponentOffsets(unsigned int *a1, _DWORD *a2, int *a3, int a4, int a5, char a6)
{
  int v7; // edi
  _DWORD *v9; // r8
  __int64 v10; // r11
  int Blink; // r9d
  int v13; // r10d
  __int64 v14; // rbx
  unsigned int v15; // ecx
  unsigned int Flink; // r12d
  unsigned int v17; // esi
  LONG SignalState; // ebp
  int v19; // edx
  unsigned int v20; // ecx
  __int64 v22; // [rsp+20h] [rbp-38h]

  *a1 = (unsigned int)WheapPfaLock.ThreadListEntry.Flink;
  v7 = 0;
  a1[1] = HIDWORD(WheapPfaLock.ThreadListEntry.Flink);
  v9 = dword_140E0F0A0;
  v10 = a4;
  Blink = (int)WheapPfaLock.ThreadListEntry.Blink;
  v13 = 0;
  a1[2] = (unsigned int)WheapPfaLock.ThreadListEntry.Blink;
  v14 = 21 * v10;
  *a1 = dword_140E0F0A0[21 * v10 + 4] + dword_140E0F0A0[21 * v10 + 8];
  v15 = Blink + dword_140E0F0A0[21 * v10 + 11];
  a1[1] = v15;
  Flink = dword_140E0F0A0[21 * v10 + 11] + v15;
  a1[2] = Flink;
  v22 = *(_QWORD *)a1;
  if ( a6 )
  {
    *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] |= 0x1000000u;
    v17 = 0;
    SignalState = HIDWORD(v22);
    while ( v17 <= 0x64 )
    {
      v13 = BcpDisplayProgress(v17, v10, (__int64)v9);
      if ( v13 < 0 )
        return (unsigned int)v13;
      if ( __PAIR64__(SignalState, v22) < *(_QWORD *)&gLoadedDiffHivesLock.Timer.Header.Lock )
      {
        Flink = (unsigned int)gLoadedDiffHivesLock.Timer.Header.WaitListHead.Flink;
        LODWORD(v22) = gLoadedDiffHivesLock.Timer.Header.Lock;
        SignalState = gLoadedDiffHivesLock.Timer.Header.SignalState;
      }
      BcpSetCursorPosition(*a1, a1[1], a1 + 2);
      LODWORD(v10) = a4;
      ++v17;
    }
    *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] &= ~0x1000000u;
  }
  v19 = dword_140E0F0A0[v14 + 8] + dword_140E0F0A0[v14 + 4];
  *a3 = v19;
  a3[1] = Flink + dword_140E0F0A0[v14 + 13];
  if ( a5 )
    v7 = a5 + dword_140E0F0A0[v14 + 14];
  *a2 = v19 + v7;
  v20 = Flink + dword_140E0F0A0[v14 + 15];
  a2[1] = v20;
  a2[2] = dword_140E0F0A0[v14 + 11] + v20;
  return (unsigned int)v13;
}
