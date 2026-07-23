/*
 * XREFs of EtwpDiskProvTraceDisk @ 0x140259018
 * Callers:
 *     EtwpTraceIo @ 0x140216700 (EtwpTraceIo.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpLevelKeywordEnabled @ 0x1402578F0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall EtwpDiskProvTraceDisk(unsigned __int16 a1, __int64 a2, _DWORD *a3, GUID *a4)
{
  unsigned __int64 NpxState; // rbx
  int v8; // ecx
  __int64 *v9; // rdi
  void *v10; // rsi
  unsigned __int64 v11; // [rsp+90h] [rbp-9h] BYREF
  __int128 v12; // [rsp+98h] [rbp-1h] BYREF
  __int128 v13; // [rsp+A8h] [rbp+Fh]

  NpxState = stru_140F03830.NpxState;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( stru_140F03830.NpxState )
  {
    v8 = a1 - 266;
    if ( v8 )
    {
      if ( v8 == 4 )
        v9 = KDskEvt_Flush;
      else
        v9 = KDskEvt_Write;
    }
    else
    {
      v9 = KDskEvt_Read;
    }
    *(_DWORD *)(a2 + 8) -= 4;
    v10 = (void *)((*(_QWORD *)(NpxState + 112) + 28LL) & -(__int64)(*(_QWORD *)(NpxState + 112) != 0LL));
    if ( *(_WORD *)(NpxState + 100)
      && EtwpLevelKeywordEnabled(*(_QWORD *)(NpxState + 32) + 96LL, *((_BYTE *)v9 + 4), v9[1]) )
    {
      EtwpEventWriteFull(
        *(_QWORD *)(NpxState + 32),
        *(_WORD *)(NpxState + 100),
        0,
        0,
        (unsigned __int16 *)v9,
        0,
        0,
        a4,
        0LL,
        1u,
        a2,
        a3,
        (__int64)&v12,
        0LL,
        *(_WORD *)(NpxState + 98),
        v10,
        &v11);
    }
    if ( *(_WORD *)(NpxState + 102)
      && EtwpLevelKeywordEnabled(*(_QWORD *)(NpxState + 40) + 96LL, *((_BYTE *)v9 + 4), v9[1]) )
    {
      EtwpEventWriteFull(
        *(_QWORD *)(NpxState + 32),
        *(_WORD *)(NpxState + 102),
        0,
        0,
        (unsigned __int16 *)v9,
        0,
        0,
        a4,
        0LL,
        1u,
        a2,
        a3,
        (__int64)&v12,
        *(_QWORD *)(NpxState + 40),
        *(_WORD *)(NpxState + 98),
        v10,
        &v11);
    }
    if ( *(_QWORD *)(*(_QWORD *)(NpxState + 32) + 656LL) )
    {
      v12 = 0LL;
      v13 = 0LL;
      if ( *(_WORD *)(NpxState + 104)
        && EtwpLevelKeywordEnabled(*(_QWORD *)(*(_QWORD *)(NpxState + 32) + 656LL) + 96LL, *((_BYTE *)v9 + 4), v9[1]) )
      {
        EtwpEventWriteFull(
          *(_QWORD *)(*(_QWORD *)(NpxState + 32) + 656LL),
          *(_WORD *)(NpxState + 104),
          0,
          0,
          (unsigned __int16 *)v9,
          0,
          0,
          a4,
          0LL,
          1u,
          a2,
          a3,
          (__int64)&v12,
          0LL,
          *(_WORD *)(NpxState + 98),
          v10,
          &v11);
      }
      if ( *(_WORD *)(NpxState + 106) )
      {
        if ( EtwpLevelKeywordEnabled(*(_QWORD *)(*(_QWORD *)(NpxState + 40) + 656LL) + 96LL, *((_BYTE *)v9 + 4), v9[1]) )
          EtwpEventWriteFull(
            *(_QWORD *)(*(_QWORD *)(NpxState + 32) + 656LL),
            *(_WORD *)(NpxState + 106),
            0,
            0,
            (unsigned __int16 *)v9,
            0,
            0,
            a4,
            0LL,
            1u,
            a2,
            a3,
            (__int64)&v12,
            *(_QWORD *)(*(_QWORD *)(NpxState + 40) + 656LL),
            *(_WORD *)(NpxState + 98),
            v10,
            &v11);
      }
    }
  }
}
