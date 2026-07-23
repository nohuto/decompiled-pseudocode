/*
 * XREFs of KiAdjustTimerDueTimes @ 0x1403E84DC
 * Callers:
 *     KiSetSystemTimeDpc @ 0x1403E8090 (KiSetSystemTimeDpc.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1405F0BC8 (KiAdjustTimersAfterDripsExit.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiAdjustTimer2DueTimes @ 0x140339568 (KiAdjustTimer2DueTimes.c)
 *     KiInsertTimerTable @ 0x1403B6998 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x1403B6C5C (KiTimerWaitTest.c)
 *     KiRemoveEntryTimer @ 0x1403E8730 (KiRemoveEntryTimer.c)
 *     KiTraceSetTimer @ 0x1403E8F38 (KiTraceSetTimer.c)
 */

__int64 __fastcall KiAdjustTimerDueTimes(__int64 a1, signed __int64 a2, __int64 a3)
{
  signed __int64 v4; // r10
  unsigned int i; // r14d
  unsigned int v7; // r15d
  _QWORD **v8; // rdi
  volatile signed __int32 *v9; // rbx
  _QWORD *v10; // rsi
  char v11; // r8
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  __int64 result; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned int v21; // r9d
  unsigned __int64 v22; // rdi
  bool inserted; // al
  __int64 v24; // r9
  _QWORD *v25; // [rsp+30h] [rbp-30h] BYREF
  _QWORD **v26; // [rsp+38h] [rbp-28h]
  int v27; // [rsp+40h] [rbp-20h]
  signed __int64 v28; // [rsp+A8h] [rbp+48h]
  volatile signed __int32 *v29; // [rsp+B8h] [rbp+58h] BYREF

  v28 = a2;
  v26 = &v25;
  v4 = a2;
  v25 = &v25;
  for ( i = 0; i < 2; ++i )
  {
    v7 = 0;
    v8 = (_QWORD **)(((unsigned __int64)i << 13) + v4 + 520);
    do
    {
      v9 = (volatile signed __int32 *)(v8 - 1);
      LODWORD(v29) = 0;
      while ( _interlockedbittestandset64(v9, 0LL) )
      {
        do
          KeYieldProcessorEx(&v29);
        while ( *(_QWORD *)v9 );
      }
      v10 = *v8;
      v29 = (volatile signed __int32 *)(v8 - 1);
      if ( v10 != v8 )
      {
        do
        {
          a2 = (signed __int64)(v10 - 4);
          v11 = *((_BYTE *)v10 - 31);
          v12 = v10;
          v10 = (_QWORD *)*v10;
          if ( (v11 & 1) != *(_BYTE *)a3 && (!*(_BYTE *)a3 || (v11 & 2) == 0) )
          {
            KiRemoveEntryTimer(v28, a2, v7, &v29);
            v13 = v26;
            if ( *v26 != &v25 )
LABEL_17:
              __fastfail(3u);
            v12[1] = v26;
            *v12 = &v25;
            *v13 = v12;
            v26 = (_QWORD **)v12;
          }
        }
        while ( v10 != v8 );
        v9 = v29;
      }
      _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
      ++v7;
      v8 += 4;
    }
    while ( v7 < 0x100 );
    v4 = v28;
  }
  while ( 1 )
  {
    result = (__int64)v25;
    if ( v25 == &v25 )
      break;
    v15 = (__int64)(v25 - 4);
    v16 = *v25;
    if ( *(_QWORD **)(*v25 + 8LL) != v25 )
      goto LABEL_17;
    v17 = *(_QWORD **)(v15 + 40);
    if ( (_QWORD *)*v17 != v25 )
      goto LABEL_17;
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    v18 = *(_QWORD *)(a3 + 24);
    v19 = *(_QWORD *)(v15 + 24);
    v20 = v19 - v18;
    if ( v18 < 0 )
    {
      if ( v20 < v19 )
        v20 = -1LL;
    }
    else if ( v20 > v19 )
    {
      v20 = 0LL;
    }
    v21 = (unsigned __int8)(v20 >> 18);
    v22 = (unsigned __int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ _byteswap_uint64(v15 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v15 + 48), KiWaitNever));
    *(_DWORD *)v15 |= 0x80u;
    *(_QWORD *)(v15 + 24) = v20;
    v27 = *(_DWORD *)v15;
    BYTE2(v27) = v20 >> 18;
    *(_DWORD *)v15 = v27;
    if ( *(_BYTE *)(a3 + 32) )
      inserted = KiInsertTimerTable(a1, v15, v22, v21, (char *)&v29);
    else
      inserted = KiInsertTimerTable(a1, v15, v22, v21, 0LL);
    if ( inserted )
    {
      if ( _bittest((_DWORD *)&PerfGlobalGroupMask + 2, 0x11u) )
        KiTraceSetTimer(v15, v22, 0LL);
      else
        _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
    }
    else
    {
      KiTimerWaitTest(a1, v15, 0LL, v24);
    }
  }
  if ( *(_BYTE *)(a1 + 33) || *(_BYTE *)(a3 + 32) )
    return KiAdjustTimer2DueTimes(a3, a2);
  return result;
}
