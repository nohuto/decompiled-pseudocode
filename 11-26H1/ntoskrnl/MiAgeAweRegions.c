/*
 * XREFs of MiAgeAweRegions @ 0x14046FBA0
 * Callers:
 *     MiAgeTargetedWorkingSet @ 0x1404704B0 (MiAgeTargetedWorkingSet.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void MiAgeAweRegions()
{
  _KPROCESS *Process; // r14
  volatile _KAFFINITY_EX *ActiveProcessors; // rsi
  volatile signed __int32 *v2; // rbx
  int v3; // edi
  KIRQL v4; // al
  _QWORD *v5; // rcx
  unsigned __int64 k; // rdx
  unsigned __int64 i; // rbp
  unsigned __int64 v8; // r8
  char v9; // cl
  unsigned __int8 v10; // cl
  unsigned __int64 v11; // rax
  __int64 *v12; // r9
  char v13; // r11
  __int64 v14; // r10
  __int64 *v15; // rcx
  bool v16; // zf
  _QWORD *v17; // r8
  _QWORD **v18; // rcx
  unsigned __int64 v19; // rax
  _QWORD *j; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  Process = KeGetCurrentThread()->ApcState.Process;
  ActiveProcessors = Process[2].ActiveProcessors;
  if ( ActiveProcessors[4].StaticBitmap[30] )
  {
    v2 = (volatile signed __int32 *)&ActiveProcessors[5].8;
    v3 = 0;
    v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&ActiveProcessors[5].8);
    v5 = (_QWORD *)ActiveProcessors[4].StaticBitmap[30];
    k = 0LL;
    for ( i = v4; v5; v5 = (_QWORD *)*v5 )
      k = (unsigned __int64)v5;
    if ( k )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(k - 16);
        if ( !v8 )
          goto LABEL_23;
        v9 = *(_BYTE *)(k + 56);
        if ( v9 == -1 )
          goto LABEL_23;
        v10 = v9 + 1;
        *(_BYTE *)(k + 56) = v10;
        if ( v3 || v10 < 0x3Fu )
          goto LABEL_23;
        v11 = *(_QWORD *)(k - 16);
        if ( !v11 )
          goto LABEL_22;
        if ( v8 <= 1 )
          break;
        if ( v11 < v8 )
          goto LABEL_22;
        v12 = *(__int64 **)(k - 8);
        v13 = v8 - 1;
        v14 = *v12;
        v15 = &v12[(v8 - 1) >> 6];
        if ( v12 == v15 )
        {
          v16 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8)) & v14) == 0;
        }
        else
        {
          if ( v14 )
            goto LABEL_22;
          v17 = v12 + 1;
          if ( v12 + 1 != v15 )
          {
            while ( !*v17 )
            {
              if ( ++v17 == v15 )
                goto LABEL_20;
            }
LABEL_22:
            v3 = 1;
            goto LABEL_23;
          }
LABEL_20:
          v16 = ((0xFFFFFFFFFFFFFFFFuLL >> ~v13) & *v17) == 0;
        }
        if ( !v16 )
          goto LABEL_22;
LABEL_23:
        v18 = *(_QWORD ***)(k + 8);
        v19 = k;
        if ( v18 )
        {
          k = *(_QWORD *)(k + 8);
          for ( j = *v18; j; j = (_QWORD *)*j )
            k = (unsigned __int64)j;
        }
        else
        {
          for ( k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL; k; k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)k == v19 )
              break;
            v19 = k;
          }
        }
        if ( !k )
        {
          if ( v3 && !ActiveProcessors[5].StaticBitmap[3] )
          {
            ObfReferenceObjectWithTag(Process, 0x68506D4Du);
            ActiveProcessors[5].StaticBitmap[4] = (unsigned __int64)Process;
            ActiveProcessors[5].StaticBitmap[3] = (unsigned __int64)MiDeleteAwePageTables;
            ActiveProcessors[5].StaticBitmap[1] = 0LL;
            ExQueueWorkItem((PWORK_QUEUE_ITEM)&ActiveProcessors[5].StaticBitmap[1], BackgroundWorkQueue);
          }
          goto LABEL_34;
        }
      }
      if ( !_bittest64(*(const signed __int64 **)(k - 8), 0) )
        goto LABEL_23;
      goto LABEL_22;
    }
LABEL_34:
    if ( (_BYTE)i == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd(v2, 0xBFFFFFFF);
        _InterlockedDecrement(v2);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)&ActiveProcessors[5].8, retaddr);
      }
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd(v2, 0xBFFFFFFF);
        _InterlockedDecrement(v2);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)&ActiveProcessors[5].8, retaddr);
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), i);
      __writecr8(i);
    }
  }
}
