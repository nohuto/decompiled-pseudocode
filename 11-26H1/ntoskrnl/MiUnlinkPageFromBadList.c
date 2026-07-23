/*
 * XREFs of MiUnlinkPageFromBadList @ 0x1402A9E2C
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiAllocateBadPagesForMdl @ 0x140526C24 (MiAllocateBadPagesForMdl.c)
 *     MiRemoveBadPages @ 0x1406F6410 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x1406F6C4C (MiUnlinkBadPages.c)
 *     MiMoveBadPagePartition @ 0x14070E088 (MiMoveBadPagePartition.c)
 * Callees:
 *     MiSetPfnBlink @ 0x1402AA140 (MiSetPfnBlink.c)
 *     MiAcquirePageListLock @ 0x1402DD540 (MiAcquirePageListLock.c)
 *     MiReleasePageListLock @ 0x14036BCB0 (MiReleasePageListLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall MiUnlinkPageFromBadList(__int64 *a1, char a2)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // r15
  volatile signed __int32 *v6; // r8
  unsigned __int64 v7; // r9
  int v8; // r13d
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rsi
  unsigned __int64 v12; // r10
  int v13; // ebp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r10
  int v16; // ebp
  unsigned __int64 v17; // rcx
  unsigned __int64 result; // rax
  _BYTE v19[112]; // [rsp+30h] [rbp-A8h] BYREF

  v4 = (__int64)(a1 + 0x44000000000LL) / 48;
  v5 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * (((unsigned __int64)a1[5] >> 43) & 0x3FF)) + 7424LL;
  memset_0(v19, 0, 0x68uLL);
  v8 = a2 & 0x80;
  if ( !v8 )
    MiAcquirePageListLock(v5, (_DWORD)a1, 9, 1, (__int64)v19);
  v9 = *a1;
  v10 = *a1 & 0xFFFFFFFFFFLL;
  v11 = a1[3] & 0xFFFFFFFFFFLL;
  if ( v10 == 0x3FFFFFFFFFLL )
    *(_QWORD *)(v5 + 8) = v11;
  else
    MiSetPfnBlink(48 * v10 - 0x220000000000LL, a1[3] & 0xFFFFFFFFFFLL, 0LL);
  if ( v11 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)v5 = v10;
  }
  else
  {
    v6 = (volatile signed __int32 *)0xFFFFFF0000000000LL;
    *(_QWORD *)(48 * v11 - 0x220000000000LL) = v9 ^ (v9 ^ *(_QWORD *)(48 * v11 - 0x220000000000LL)) & 0xFFFFFF0000000000uLL;
  }
  if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 1 )
  {
    v12 = v4 & 0x1F;
    v7 = 1LL;
    v6 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (v4 >> 5);
    if ( v12 + 1 > 0x20 )
    {
      if ( (v4 & 0x1F) == 0 )
        goto LABEL_17;
      v13 = v4 & 0x1F;
      _InterlockedOr(v6, ((1 << (32 - v13)) - 1) << v12);
      v7 = 1LL - (unsigned int)(32 - v13);
      ++v6;
      if ( v7 >= 0x20 )
      {
        v14 = v7 >> 5;
        v7 += -32LL * (v7 >> 5);
        do
        {
          *v6++ = -1;
          --v14;
        }
        while ( v14 );
      }
      if ( v7 )
LABEL_17:
        _InterlockedOr(v6, (1 << v7) - 1);
    }
    else
    {
      _InterlockedOr(v6, 1 << v12);
    }
  }
  else if ( LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 3 )
  {
    v15 = v4 & 0x1F;
    v7 = 1LL;
    v6 = &stru_140E2ED08.WaitBlock[1].Thread->Header.Lock + (v4 >> 5);
    if ( v15 + 1 > 0x20 )
    {
      if ( (v4 & 0x1F) == 0 )
        goto LABEL_26;
      v16 = v4 & 0x1F;
      _InterlockedAnd(v6, ~(((1 << (32 - v16)) - 1) << v15));
      v7 = 1LL - (unsigned int)(32 - v16);
      ++v6;
      if ( v7 >= 0x20 )
      {
        v17 = v7 >> 5;
        v7 += -32LL * (v7 >> 5);
        do
        {
          *v6++ = 0;
          --v17;
        }
        while ( v17 );
      }
      if ( v7 )
LABEL_26:
        _InterlockedAnd(v6, -1 << v7);
    }
    else
    {
      _InterlockedAnd(v6, ~(1 << v15));
    }
  }
  _InterlockedDecrement64((volatile signed __int64 *)(v5 + 16));
  if ( !v8 )
    MiReleasePageListLock(v5, v19, v6, v7);
  *a1 = 0LL;
  result = a1[3] & 0xC000000000000000uLL;
  a1[3] = result;
  a1[1] = 0LL;
  return result;
}
