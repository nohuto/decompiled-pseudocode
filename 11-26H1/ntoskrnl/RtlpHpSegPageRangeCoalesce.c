/*
 * XREFs of RtlpHpSegPageRangeCoalesce @ 0x14034F8C0
 * Callers:
 *     RtlpHpSegContextCompact @ 0x1403494AC (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeShrink @ 0x14034FBC0 (RtlpHpSegPageRangeShrink.c)
 * Callees:
 *     RtlpHpSegLockAcquire @ 0x14027ECE0 (RtlpHpSegLockAcquire.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14034F6D0 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpSegPageRangeCommit @ 0x140350650 (RtlpHpSegPageRangeCommit.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCoalesce(__int64 a1, __int64 a2, int a3, unsigned __int8 *a4)
{
  _RTL_RB_TREE *v5; // r9
  __int64 v9; // r14
  __int64 v10; // rdx
  unsigned int v11; // r15d
  __int64 v12; // rsi
  __int16 *v13; // rbp
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _KLOCK_ENTRIES *v22; // r9
  unsigned __int16 v23; // ax
  char v24; // dl
  __int64 v25; // rcx
  unsigned __int16 v26; // ax
  char v27; // [rsp+60h] [rbp+8h] BYREF

  v5 = (_RTL_RB_TREE *)(a1 + 96);
  while ( 1 )
  {
    v9 = 0LL;
    v10 = (a2 - (a2 & *(_QWORD *)a1)) >> 5;
    v11 = (unsigned __int16)~*(_WORD *)(a2 + 28);
    if ( (unsigned int)v10 + (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28)) < 0x100 )
    {
      v9 = a2 + 32LL * (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28));
      if ( (*(_BYTE *)(v9 + 24) & 1) != 0 )
        v9 = 0LL;
    }
    if ( (unsigned int)v10 <= *(unsigned __int8 *)(a1 + 10) )
      goto LABEL_10;
    v12 = a2 - 32;
    if ( (*(_BYTE *)(a2 - 8) & 2) == 0 )
      v12 += -32LL * *(unsigned __int8 *)(v12 + 26);
    if ( (*(_BYTE *)(v12 + 24) & 1) == 0 && v12 )
    {
      RtlRbRemoveNode(v5, (PRTL_BALANCED_NODE)v12);
      v13 = (__int16 *)(a1 + 22);
      *(_OWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 16) = 0LL;
      v26 = ~(unsigned __int16)*(_DWORD *)(v12 + 28);
      *(_DWORD *)v12 = -857879331;
      _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v26);
      v5 = (_RTL_RB_TREE *)(a1 + 96);
      *(_BYTE *)(v12 + 31) += *(_BYTE *)(a2 + 31);
      v11 += (unsigned __int16)~*(_WORD *)(v12 + 28);
      *(_WORD *)(v12 + 28) = ~(_WORD)v11;
      *(_BYTE *)(a2 + 24) &= (*(_BYTE *)(a2 + 31) <= 1u) - 4;
      a2 = v12;
      *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(v12 + 31) - 1) + v12 + 26) = *(_BYTE *)(v12 + 31) - 1;
    }
    else
    {
LABEL_10:
      v13 = (__int16 *)(a1 + 22);
    }
    *(_BYTE *)(a2 + 24) |= 0x21u;
    if ( v9 )
    {
      RtlRbRemoveNode(v5, (PRTL_BALANCED_NODE)v9);
      *(_OWORD *)v9 = 0LL;
      *(_QWORD *)(v9 + 16) = 0LL;
      v23 = ~(unsigned __int16)*(_DWORD *)(v9 + 28);
      *(_DWORD *)v9 = -857879331;
      _InterlockedAdd64((volatile signed __int64 *)(*v13 + a1 + 16), -(__int64)v23);
      if ( *(_BYTE *)(a2 + 31) != 1 )
      {
        v13 = (__int16 *)(a1 + 22);
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1) + a2 + 24) &= ~1u;
      }
      *(_BYTE *)(a2 + 31) += *(_BYTE *)(v9 + 31);
      v11 += (unsigned __int16)~*(_WORD *)(v9 + 28);
      *(_WORD *)(a2 + 28) = ~(_WORD)v11;
      *(_BYTE *)(v9 + 24) &= ~2u;
      v24 = *(_BYTE *)(a2 + 31) - 1;
      v25 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
      *(_BYTE *)(v25 + a2 + 24) |= 1u;
      *(_BYTE *)(v25 + a2 + 26) = v24;
    }
    if ( !v11 )
      break;
    if ( !a3 && (*(_BYTE *)(a1 + 13) & 8) == 0 )
    {
      v14 = *v13;
      v15 = *(_QWORD *)(v14 + a1 + 8) >> *(_BYTE *)(a1 + 11);
      if ( v15 <= 8 )
        v15 = 8LL;
      v16 = *(_QWORD *)(v14 + a1 + 8) >> *(_BYTE *)(a1 + 12);
      if ( v16 <= 8 )
        v16 = 8LL;
      v17 = *(_QWORD *)(v14 + a1 + 24) + *(_QWORD *)(v14 + a1 + 16) + v11;
      if ( v17 <= v15 || (int)RtlpHpEnvCompactionSchedule(*(_QWORD **)(a1 + 56)) >= 0 && v17 <= v16 )
        break;
    }
    RtlpHpReleaseLockExclusive((struct _KTHREAD *)(a1 + 64), *(_DWORD *)(a1 + 40) & 1, *a4);
    RtlpHpSegPageRangeCommit(a1, a2, 0, -(*(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 9)), 0, (__int64)&v27);
    *a4 = RtlpHpSegLockAcquire(a1, v20, v21, v22);
    v5 = (_RTL_RB_TREE *)(a1 + 96);
    *(_BYTE *)(a2 + 24) &= ~0x20u;
  }
  v18 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
  *(_BYTE *)(v18 + a2 + 24) &= ~1u;
  *(_BYTE *)(a2 + 24) &= 0xDEu;
  return a2;
}
