/*
 * XREFs of KiInsertTimerTable @ 0x1403B6998
 * Callers:
 *     KiCommitThreadWait @ 0x140224340 (KiCommitThreadWait.c)
 *     KiResumeThread @ 0x140310D78 (KiResumeThread.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x1403B5EA0 (KeSetTimerEx.c)
 *     KeSetTimer @ 0x1403B62A0 (KeSetTimer.c)
 *     KiTimerWaitTest @ 0x1403B6C5C (KiTimerWaitTest.c)
 *     KiAdjustTimerDueTimes @ 0x1403E84DC (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x14037B19C (KiSendClockInterruptToTargetProcessor.c)
 *     KiRemoveEntryTimer @ 0x1403E8730 (KiRemoveEntryTimer.c)
 *     KiSelectTimerTableForTimer @ 0x140442FB0 (KiSelectTimerTableForTimer.c)
 */

bool __fastcall KiInsertTimerTable(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char *a5)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rbp
  __int64 v11; // rsi
  unsigned __int64 v12; // r14
  _QWORD *v13; // r15
  _QWORD *v14; // rdi
  _QWORD *v15; // rdx
  unsigned __int64 v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rbp
  BOOL v22; // eax
  signed __int32 v24[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v25; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+28h] [rbp-40h]
  char v28; // [rsp+78h] [rbp+10h]

  v28 = 0;
  v6 = 0;
  if ( !*(_DWORD *)(a2 + 60) )
    *(_DWORD *)(a2 + 4) = 0;
  v7 = KiSelectTimerTableForTimer(a1, a3, a2);
  v8 = *(_QWORD *)(a2 + 24);
  v26 = v7;
  v10 = v9;
  LODWORD(v25) = 0;
  v11 = v7 - 16640;
  v12 = v7 + 32 * (((unsigned __int64)*(unsigned __int8 *)(a2 + 58) << 8) + v9 + 16);
  v13 = (_QWORD *)(v12 + 8);
  v14 = (_QWORD *)(v12 + 8);
  while ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
  {
    do
      KeYieldProcessorEx(&v25);
    while ( *(_QWORD *)v12 );
  }
  v15 = (_QWORD *)*v13;
  v25 = v12;
  if ( v15 == v13 )
  {
    v6 = 6;
  }
  else
  {
    v16 = *(v15 - 1);
    if ( v8 <= v16 )
    {
      v6 = v8 < v16 ? 2 : 0;
    }
    else
    {
      if ( v8 - v16 > (unsigned __int64)KeMaximumIncrement >> 2 )
      {
        v14 = *(_QWORD **)(v12 + 16);
        do
        {
          if ( v8 >= *(v14 - 1) )
            break;
          v14 = (_QWORD *)v14[1];
        }
        while ( v14 != v13 );
      }
      else
      {
        v17 = *(_QWORD **)(v12 + 16);
        v14 = v15;
        if ( v15 != v17 )
        {
          do
          {
            v18 = (_QWORD *)*v14;
            if ( v8 <= *(_QWORD *)(*v14 - 8LL) )
              break;
            v14 = (_QWORD *)*v14;
          }
          while ( v18 != v17 );
        }
      }
      v15 = (_QWORD *)*v14;
    }
  }
  v19 = (_QWORD *)(a2 + 32);
  if ( (_QWORD *)v15[1] != v14 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 40) = v14;
  *v19 = v15;
  v15[1] = v19;
  *v14 = v19;
  if ( (v6 & 2) != 0 )
  {
    *(_QWORD *)(v12 + 24) = v8;
    _InterlockedOr(v24, 0);
    if ( v6 >= 4 )
    {
      if ( KiSerializeTimerExpiration )
      {
        v20 = a4 & 0x3F;
        v21 = 8 * (v10 >> 6);
      }
      else
      {
        v20 = *(unsigned __int8 *)(v11 + 209);
        v21 = v10 << 6;
      }
      _interlockedbittestandset64(
        (volatile signed __int32 *)(qword_140FC2698[2 * *(unsigned __int8 *)(v11 + 208)] + v21),
        v20);
    }
    if ( v8 <= MEMORY[0xFFFFF78000000008] )
    {
      if ( a5 )
      {
        v28 = 1;
      }
      else
      {
        v6 |= 1u;
        KiRemoveEntryTimer(v26, a2, a4, &v25);
        v12 = v25;
      }
    }
    if ( (v6 & 1) == 0 && v11 != a1 && KiClockTimerPerCpuTickScheduling && !KiSerializeTimerExpiration )
    {
      if ( *(_BYTE *)(v11 + 38473) )
      {
        if ( !*(_BYTE *)(v11 + 38472) || (v22 = 0, *(_QWORD *)(v11 + 38336) > v8) )
          v22 = 1;
      }
      else
      {
        v22 = *(_BYTE *)(v11 + 7) != 0;
      }
      v6 |= 8 * v22;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
  if ( v6 >= 8 )
    KiSendClockInterruptToTargetProcessor(*(_DWORD *)(v11 + 36));
  if ( a5 )
    *a5 = v28;
  return (v6 & 1) == 0;
}
