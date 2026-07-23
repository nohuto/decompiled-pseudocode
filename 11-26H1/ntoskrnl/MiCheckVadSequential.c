/*
 * XREFs of MiCheckVadSequential @ 0x140440CD0
 * Callers:
 *     MiZeroFault @ 0x14041A2F0 (MiZeroFault.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiCheckVadSequential(__int64 a1)
{
  unsigned __int64 v1; // r12
  unsigned int v3; // r13d
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  unsigned int v6; // edi
  int i; // ecx
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // r11
  __int64 v11; // rdx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rdx
  _QWORD *v15; // r8
  __int64 v16; // r9
  int v17; // eax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 56);
  v5 = v1 & 0x7FFFFFFFFFFFF000LL | 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v6 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(v4 + 64), 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(v4 + 64), 0xFFu);
    for ( i = *(_DWORD *)(v4 + 64); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(v4 + 64) )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr((volatile signed __int32 *)(v4 + 64), 0x40000000u);
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(v4 + 64), 0xFFu);
  }
  v8 = *(_QWORD *)(v4 + 128);
  v9 = 128LL;
  *(_DWORD *)a1 |= 0x80u;
  v10 = v8 & 0xFFF;
  v11 = **(_QWORD **)(v4 + 80);
  v12 = (v8 & 0x7FFFFFFFFFFFF000LL) + (v10 << 12);
  if ( !*(_QWORD *)(v11 + 64)
    || (*(_DWORD *)(v11 + 56) & 0x20) != 0
    || (*(_DWORD *)(v11 + 56) & 0x30000000) != 0x10000000 )
  {
    v9 = 8LL;
  }
  if ( (v1 & 0xFFFFFFFFFFFFF000uLL) == v12 )
  {
    if ( v10 == 4095 )
      v5 = ((v8 & 0xFFFFFFFFFFFFF000uLL) + 4096) & 0x7FFFFFFFFFFFF000LL | 0xFFF;
    else
      v5 = v8 & 0x7FFFFFFFFFFFF000LL | ((_WORD)v8 + 1) & 0xFFF;
    goto LABEL_42;
  }
  if ( v1 <= v12 || (v13 = (v1 - v12) >> 12, v13 >= v9) )
  {
    if ( v12 || v1 >> 12 != (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) )
LABEL_41:
      *(_DWORD *)a1 &= ~0x80u;
  }
  else
  {
    v14 = (((v1 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF;
    if ( v14 <= v13 )
    {
      if ( ((((v1 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF) != 0 )
        *(_DWORD *)a1 &= ~0x80u;
    }
    else
    {
      LODWORD(v14) = (v1 - v12) >> 12;
    }
    if ( (*(_DWORD *)a1 & 0x80u) != 0 )
    {
      v15 = (_QWORD *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
      if ( (_DWORD)v14 )
      {
        while ( (*v15 & 1) != 0 && (*v15 & 0x20) != 0 )
        {
          --v15;
          LODWORD(v14) = v14 - 1;
          if ( !(_DWORD)v14 )
            goto LABEL_36;
        }
        goto LABEL_41;
      }
LABEL_36:
      v16 = (unsigned int)(v13 + 1);
      if ( (unsigned __int64)(v16 + v10) > 0xFFF )
        v5 = (v8 + ((unsigned __int64)((unsigned int)v16 + (v8 & 0xFFF) - 4095) << 12)) ^ (v8 ^ (v8
                                                                                               + ((unsigned __int64)((unsigned int)v16 + (v8 & 0xFFF) - 4095) << 12))) & 0x8000000000000FFFuLL | 0xFFF;
      else
        v5 = (v16 + v8) ^ (v8 ^ (v16 + v8)) & 0xFFFFFFFFFFFFF000uLL;
    }
  }
LABEL_42:
  v17 = *(_DWORD *)(v4 + 72);
  if ( (*(_DWORD *)a1 & 0x80u) != 0 )
  {
    if ( (v17 & 2) != 0 )
    {
      v18 = *(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32);
      v19 = ((v1 >> 12) - v18) >> 8;
      if ( v12 )
        v1 = v12 - 4096;
      if ( (((v1 >> 12) - v18) >> 8) + 1 == v19 )
        v3 = -1073741280;
    }
  }
  else
  {
    *(_DWORD *)(v4 + 72) = v17 & 0xFFFFFFFD;
  }
  *(_QWORD *)(v4 + 128) = v5;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    *(_DWORD *)(v4 + 64) = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v4 + 64), retaddr);
  return v3;
}
