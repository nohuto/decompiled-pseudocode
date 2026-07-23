/*
 * XREFs of RtlpHpSegPageRangeCoalesce @ 0x18008ADB0
 * Callers:
 *     RtlpHpSegContextCompact @ 0x180061944 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeShrink @ 0x180071824 (RtlpHpSegPageRangeShrink.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpTlLogGCScheduled @ 0x180064504 (RtlpHpTlLogGCScheduled.c)
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 *     RtlpHpSegPageRangeCommit @ 0x180089CA0 (RtlpHpSegPageRangeCommit.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AD00 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlpHpSegFreeRangeRemove @ 0x18008B350 (RtlpHpSegFreeRangeRemove.c)
 *     RtlRbRemoveNode @ 0x18008BD00 (RtlRbRemoveNode.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCoalesce(__int64 a1, __int64 a2, int a3, _BYTE *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r14
  __int64 v16; // rcx
  volatile signed __int32 *v18; // rsi
  volatile signed __int32 **v19; // rdx
  char *SchedulerSharedDataSlot; // r8
  unsigned int i; // ecx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int16 v24; // ax
  __int64 *v25; // rcx
  char v26; // dl
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // r8d
  int v31; // r9d
  int v32; // [rsp+30h] [rbp-89h] BYREF
  __int64 v33; // [rsp+38h] [rbp-81h] BYREF
  __int64 v34; // [rsp+40h] [rbp-79h] BYREF
  __int64 v35; // [rsp+48h] [rbp-71h] BYREF
  __int64 v36; // [rsp+50h] [rbp-69h] BYREF
  __int64 v37; // [rsp+58h] [rbp-61h] BYREF
  _EVENT_DATA_DESCRIPTOR v38; // [rsp+60h] [rbp-59h] BYREF
  __int64 *v39; // [rsp+80h] [rbp-39h]
  __int64 v40; // [rsp+88h] [rbp-31h]
  __int64 *v41; // [rsp+90h] [rbp-29h]
  __int64 v42; // [rsp+98h] [rbp-21h]
  __int64 *v43; // [rsp+A0h] [rbp-19h]
  __int64 v44; // [rsp+A8h] [rbp-11h]
  __int64 *v45; // [rsp+B0h] [rbp-9h]
  __int64 v46; // [rsp+B8h] [rbp-1h]
  __int64 *v47; // [rsp+C0h] [rbp+7h]
  __int64 v48; // [rsp+C8h] [rbp+Fh]

  v32 = 0;
  while ( 1 )
  {
    v8 = 0LL;
    v9 = (a2 - (a2 & *(_QWORD *)a1)) >> 5;
    v10 = (unsigned __int16)~*(_WORD *)(a2 + 28);
    if ( (unsigned int)v9 + (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28)) < 0x100 )
    {
      v8 = a2 + 32LL * (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28));
      if ( (*(_BYTE *)(v8 + 24) & 1) != 0 )
        v8 = 0LL;
    }
    if ( (unsigned int)v9 > *(unsigned __int8 *)(a1 + 10) )
    {
      v11 = a2 - 32;
      if ( (*(_BYTE *)(a2 - 8) & 2) == 0 )
        v11 += -32LL * *(unsigned __int8 *)(v11 + 26);
      if ( (*(_BYTE *)(v11 + 24) & 1) == 0 )
      {
        RtlpHpSegFreeRangeRemove(a1, v11);
        *(_BYTE *)(v11 + 31) += *(_BYTE *)(a2 + 31);
        v10 = (unsigned __int16)~*(_WORD *)(v11 + 28) + (unsigned int)v10;
        *(_WORD *)(v11 + 28) = ~(_WORD)v10;
        *(_BYTE *)(a2 + 24) &= (*(_BYTE *)(a2 + 31) <= 1u) - 4;
        a2 = v11;
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(v11 + 31) - 1) + v11 + 26) = *(_BYTE *)(v11 + 31) - 1;
      }
    }
    *(_BYTE *)(a2 + 24) |= 0x21u;
    if ( v8 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v8);
      *(_OWORD *)v8 = 0LL;
      *(_QWORD *)(v8 + 16) = 0LL;
      v24 = ~(unsigned __int16)*(_DWORD *)(v8 + 28);
      *(_DWORD *)v8 = -857879331;
      _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v24);
      if ( (RtlpHpHeapFeatures & 0x10) != 0 )
      {
        v25 = (__int64 *)(a1 + *(__int16 *)(a1 + 22));
        if ( (unsigned int)dword_1801C4680 > 5 )
        {
          v33 = *(_QWORD *)(a1 + 56);
          v40 = 8LL;
          v39 = &v33;
          v34 = *v25;
          v41 = &v34;
          v35 = v25[1];
          v43 = &v35;
          v36 = v25[2];
          v45 = &v36;
          v37 = v25[3];
          v47 = &v37;
          v42 = 8LL;
          v44 = 8LL;
          v46 = 8LL;
          v48 = 8LL;
          tlgWriteTransfer_EtwEventWriteTransfer(
            (__int64)&dword_1801C4680,
            (unsigned __int8 *)dword_18019AEB0,
            v22,
            v23,
            7u,
            &v38);
        }
      }
      if ( *(_BYTE *)(a2 + 31) != 1 )
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1) + a2 + 24) &= ~1u;
      *(_BYTE *)(a2 + 31) += *(_BYTE *)(v8 + 31);
      v10 = (unsigned __int16)~*(_WORD *)(v8 + 28) + (unsigned int)v10;
      *(_WORD *)(a2 + 28) = ~(_WORD)v10;
      *(_BYTE *)(v8 + 24) &= ~2u;
      v26 = *(_BYTE *)(a2 + 31) - 1;
      v27 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
      *(_BYTE *)(v27 + a2 + 24) |= 1u;
      *(_BYTE *)(v27 + a2 + 26) = v26;
    }
    if ( !(_DWORD)v10 )
      break;
    if ( !a3 && (*(_BYTE *)(a1 + 13) & 8) == 0 )
    {
      v12 = *(__int16 *)(a1 + 22);
      v13 = *(_QWORD *)(v12 + a1 + 8) >> *(_BYTE *)(a1 + 11);
      if ( v13 <= 8 )
        v13 = 8LL;
      v14 = *(_QWORD *)(v12 + a1 + 8) >> *(_BYTE *)(a1 + 12);
      if ( v14 <= 8 )
        v14 = 8LL;
      v15 = *(_QWORD *)(v12 + a1 + 24) + *(_QWORD *)(v12 + a1 + 16) + v10;
      if ( v15 <= v13 )
        break;
      if ( Timer && !byte_1801CA908 )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C6278, 1, 0) )
        {
          TpSetTimerEx(Timer, &DueTime, 0, 0x3E8u);
          if ( (RtlpHpHeapFeatures & 0x10) != 0 )
            RtlpHpTlLogGCScheduled(v29, v28, v30, v31);
        }
        if ( v15 <= v14 )
          break;
      }
    }
    v18 = (volatile signed __int32 *)(a1 + 64);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    RtlpHpSegPageRangeCommit(a1, a2, 0, -(*(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 9)), 0, &v32);
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        v19 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
        if ( !*v19 )
        {
          *v19 = v18;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64(v18, 0LL) )
      RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)(a1 + 64), (unsigned __int64)v19);
    *a4 = -1;
    *(_BYTE *)(a2 + 24) &= ~0x20u;
  }
  v16 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
  *(_BYTE *)(v16 + a2 + 24) &= ~1u;
  *(_BYTE *)(a2 + 24) &= 0xDEu;
  return a2;
}
