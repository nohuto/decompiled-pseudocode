/*
 * XREFs of KiTimerWaitTest @ 0x1403B6C5C
 * Callers:
 *     KiCommitThreadWait @ 0x140224340 (KiCommitThreadWait.c)
 *     KiResumeThread @ 0x140310D78 (KiResumeThread.c)
 *     KiProcessExpiredTimerList @ 0x1403B58FC (KiProcessExpiredTimerList.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x1403B5EA0 (KeSetTimerEx.c)
 *     KeSetTimer @ 0x1403B62A0 (KeSetTimer.c)
 *     KiAdjustTimerDueTimes @ 0x1403E84DC (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiInsertTimerTable @ 0x1403B6998 (KiInsertTimerTable.c)
 *     KiDecodeTolerableDelayValue @ 0x1403B6BFC (KiDecodeTolerableDelayValue.c)
 *     PsTimerResolutionActive @ 0x14044E890 (PsTimerResolutionActive.c)
 */

unsigned __int64 __fastcall KiTimerWaitTest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v5; // r12
  __int64 v6; // rbp
  char v7; // r15
  __int64 v8; // rax
  unsigned __int64 v10; // rbp
  unsigned __int8 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rcx
  unsigned int v15; // r9d
  _QWORD *v16; // r14
  _QWORD *v17; // rbx
  __int64 v18; // rax
  char v19; // cl
  __int64 v20; // r8
  __int64 v21; // rax
  _QWORD *v22; // rcx
  char v23; // cl
  int v24; // eax
  bool v26; // cf
  _QWORD *v27; // r8
  _QWORD *v28; // rdx
  _QWORD *v29; // rcx
  int v30; // [rsp+30h] [rbp-48h]
  __int64 v31; // [rsp+88h] [rbp+10h] BYREF

  v5 = (unsigned int *)a3;
  v6 = __ROL8__(KiWaitNever ^ *(_QWORD *)(a2 + 48), KiWaitNever);
  v7 = *(_BYTE *)a2 & 0x7F;
  v31 = 0LL;
  v8 = *(int *)(a2 + 60);
  v10 = (unsigned __int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ _byteswap_uint64(a2 ^ v6);
  v11 = -1;
  if ( (_DWORD)v8 )
  {
    v12 = -10000 * v8;
    v11 = 0;
    if ( *(_BYTE *)(a1 + 14522) )
    {
      if ( ++*(_DWORD *)(a1 + 34404) >= 0xBB8u )
      {
        v26 = *(_DWORD *)(a1 + 34408) < 0x5F5E100u;
        *(_DWORD *)(a1 + 34404) = 0;
        if ( v26 )
          *(_DWORD *)(a1 + 34408) += KePseudoHrTimeIncrement;
      }
      v12 -= *(unsigned int *)(a1 + 34408);
    }
    if ( MEMORY[0xFFFFF78000000008] + v12 - *(_QWORD *)(a2 + 24) >= 0 )
      *(_QWORD *)(a2 + 24) = MEMORY[0xFFFFF78000000008];
    v13 = 0LL;
    v30 = *(_DWORD *)a2;
    v14 = (unsigned int)(*(int *)a2 >> 8);
    if ( (unsigned __int8)BYTE1(*(_DWORD *)a2) >> 2 )
    {
      LOBYTE(v14) = (unsigned __int8)BYTE1(*(_DWORD *)a2) >> 2;
      v13 = (unsigned int)KiDecodeTolerableDelayValue(v14, a2, a3, a4);
    }
    if ( KiGlobalTimerResolutionRequests )
    {
LABEL_8:
      *(_BYTE *)(a2 + 58) = 0;
    }
    else
    {
      v27 = (_QWORD *)(a2 + 8);
      *(_BYTE *)(a2 + 58) = 1;
      v28 = *(_QWORD **)(a2 + 8);
      while ( v28 != v27 )
      {
        v29 = v28;
        v28 = (_QWORD *)*v28;
        if ( *((_BYTE *)v29 + 16) <= 1u && (unsigned __int8)PsTimerResolutionActive(*(_QWORD *)(v29[3] + 544LL)) )
          goto LABEL_8;
      }
    }
    BYTE1(v30) &= ~1u;
    HIBYTE(v30) = 64;
    do
    {
      *(_QWORD *)(a2 + 24) -= v12;
      v15 = (unsigned __int8)((unsigned __int64)(v13 + *(_QWORD *)(a2 + 24)) >> 18);
      BYTE2(v30) = (unsigned __int64)(v13 + *(_QWORD *)(a2 + 24)) >> 18;
      *(_DWORD *)a2 = v30;
    }
    while ( !KiInsertTimerTable(a1, a2, v10, v15, 0LL) );
  }
  *(_DWORD *)(a2 + 4) = 1;
  v16 = (_QWORD *)(a2 + 8);
  v17 = *(_QWORD **)(a2 + 8);
  if ( v7 != 8 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v17 == v16 )
          goto LABEL_22;
        v21 = (__int64)v17;
        v17 = (_QWORD *)*v17;
        if ( v17[1] != v21 || (v22 = *(_QWORD **)(v21 + 8), *v22 != v21) )
          __fastfail(3u);
        *v22 = v17;
        v17[1] = v22;
        v23 = *(_BYTE *)(v21 + 16);
        if ( v23 != 1 )
          break;
        if ( KiTryUnwaitThread(a1, v21, *(unsigned __int16 *)(v21 + 18), 0LL) )
        {
LABEL_21:
          v24 = *(_DWORD *)(a2 + 4) - 1;
          *(_DWORD *)(a2 + 4) = v24;
          if ( !v24 )
            goto LABEL_22;
        }
      }
      if ( v23 == 2 )
      {
        *(_BYTE *)(v21 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v21 + 24), (_QWORD *)v21, a3);
        goto LABEL_21;
      }
      if ( v23 == 4 )
      {
        *(_BYTE *)(v21 + 17) = 5;
        *(_DWORD *)(a2 + 4) = 0;
        KiInsertQueueDpc(*(_QWORD *)(v21 + 24), a2, v21, 0LL, 0);
      }
      else
      {
        KiTryUnwaitThread(a1, v21, 256LL, 0LL);
      }
    }
  }
  while ( v17 != v16 )
  {
    v18 = (__int64)v17;
    v17 = (_QWORD *)*v17;
    v19 = *(_BYTE *)(v18 + 16);
    switch ( v19 )
    {
      case 1:
        v20 = *(unsigned __int16 *)(v18 + 18);
        goto LABEL_15;
      case 2:
        *(_BYTE *)(v18 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v18 + 24), (_QWORD *)v18, a3);
        break;
      case 4:
        *(_BYTE *)(v18 + 17) = 5;
        *(_DWORD *)(a2 + 4) = 0;
        KiInsertQueueDpc(*(_QWORD *)(v18 + 24), a2, v18, 0LL, 0);
        break;
      default:
        v20 = 256LL;
LABEL_15:
        KiTryUnwaitThread(a1, v18, v20, 0LL);
        break;
    }
  }
  *(_QWORD *)(a2 + 16) = a2 + 8;
  *(_QWORD *)(a2 + 8) = a2 + 8;
LABEL_22:
  if ( v10 )
  {
    if ( v5 )
    {
      if ( (!KiSerializeTimerExpiration || *(_WORD *)(v10 + 2) < 0x800u)
        && (*(_BYTE *)v10 != 26 || !*(_BYTE *)(a1 + 14520)) )
      {
        *(_QWORD *)(a1 + 14432) = v10;
        if ( (*(_QWORD *)(a1 + 200) & *(_QWORD *)(v10 + 16)) == 0LL )
          _interlockedbittestandset64((volatile signed __int32 *)(v10 + 16), *(unsigned __int8 *)(a1 + 209));
        goto LABEL_28;
      }
    }
    else
    {
      v5 = (unsigned int *)&v31;
      v31 = MEMORY[0xFFFFF78000000014];
    }
    KiInsertQueueDpc(v10, *v5, v5[1], (volatile signed __int32 *)a2, v11);
    return 0LL;
  }
  else
  {
LABEL_28:
    _InterlockedAnd((volatile signed __int32 *)a2, ~((v11 << 24) | 0x80));
  }
  return v10;
}
