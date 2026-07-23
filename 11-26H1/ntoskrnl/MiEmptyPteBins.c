/*
 * XREFs of MiEmptyPteBins @ 0x140360F30
 * Callers:
 *     MiInsertCachedPte @ 0x140281740 (MiInsertCachedPte.c)
 *     MiMakeSystemPtesAppear @ 0x1402A5094 (MiMakeSystemPtesAppear.c)
 *     MiAdjustPteBins @ 0x1402A51F0 (MiAdjustPteBins.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiCheckProcessorPteCache @ 0x140360820 (MiCheckProcessorPteCache.c)
 * Callees:
 *     MiReleasePteMappings @ 0x1402A3050 (MiReleasePteMappings.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 */

unsigned __int64 __fastcall MiEmptyPteBins(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r13
  char v4; // al
  __int64 v5; // r10
  __int16 v6; // r9
  __int64 CurrentIrql; // r11
  struct _KTHREAD *CurrentThread; // r15
  int v9; // ebp
  int v10; // r12d
  int v11; // r15d
  unsigned int v12; // ebx
  unsigned int v13; // edi
  __int64 v14; // r14
  unsigned int i; // esi
  volatile signed __int64 *v16; // rdx
  signed __int64 v17; // rax
  unsigned int v19; // r9d
  unsigned int v20; // ecx
  BOOL v21; // r8d
  __int64 v22; // rax
  signed __int32 v23[8]; // [rsp+0h] [rbp-88h] BYREF
  struct _KTHREAD *v24; // [rsp+20h] [rbp-68h]
  signed __int64 v25; // [rsp+28h] [rbp-60h] BYREF
  __int64 v26; // [rsp+30h] [rbp-58h]
  char v29; // [rsp+A0h] [rbp+18h]
  __int16 v30; // [rsp+A8h] [rbp+20h]

  v29 = a3;
  v3 = 0LL;
  v4 = a3;
  v5 = a1;
  _InterlockedOr(v23, 0);
  v6 = KiTbFlushTimeStamp;
  v30 = KiTbFlushTimeStamp;
  CurrentIrql = KeGetCurrentIrql();
  v26 = CurrentIrql;
  if ( (_BYTE)CurrentIrql )
  {
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
  }
  v24 = CurrentThread;
  v9 = (a3 >> 2) & 1;
  v10 = 1;
  if ( (_KWAIT_BLOCK **)a1 == &stru_140E366D8.WaitBlockList || (_UNKNOWN *)a1 == &unk_140E34BC0 )
  {
    v10 = 3;
  }
  else
  {
    v4 = a3;
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      v10 = 2;
  }
  if ( v9 < (unsigned int)v10 )
  {
    v11 = v4 & 2;
    do
    {
      if ( v11 )
      {
        v12 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
        v13 = v12 + 1;
      }
      else
      {
        v13 = (unsigned __int16)KeNumberNodes;
        v12 = 0;
      }
      v14 = *(_QWORD *)(v5 + 80) + 72 * (v12 + (__int64)(v9 * (unsigned __int16)KeNumberNodes));
      while ( v12 < v13 )
      {
        for ( i = 0; i < 8; ++i )
        {
          v16 = (volatile signed __int64 *)(v14 + 8LL * i);
          v17 = *v16;
          v25 = v17;
          if ( (_WORD)v17 )
          {
            v19 = (unsigned __int16)(v6 - v17);
            if ( v19 > 2 || (v17 & 1) == 0 && v19 >= 2 || (v29 & 1) != 0 )
            {
              if ( (_BYTE)CurrentIrql == 2
                && ((_KWAIT_BLOCK **)v5 == &stru_140E366D8.WaitBlockList && v9 || (_UNKNOWN *)v5 == &unk_140E34BC0 && v9) )
              {
                goto LABEL_16;
              }
              if ( v17 == _InterlockedCompareExchange64(v16, 0LL, v17) )
              {
                _InterlockedOr(v23, 0);
                v20 = (unsigned __int16)(KiTbFlushTimeStamp - v17);
                if ( v20 > 2 )
                {
                  v21 = 0;
                }
                else if ( (v17 & 1) != 0 || (v21 = 0, v20 < 2) )
                {
                  v21 = 1;
                }
                v22 = MiReleasePteMappings(v5, (unsigned __int64 *)&v25, v21, v9);
                _InterlockedAdd64((volatile signed __int64 *)(v14 + 64), -v22);
                v5 = a1;
                v3 += v22;
                LOBYTE(CurrentIrql) = v26;
              }
              else
              {
                --i;
              }
              if ( v3 && !a2 || v3 >= a2 )
                goto LABEL_16;
            }
            v6 = v30;
          }
        }
        v14 += 72LL;
        ++v12;
      }
      ++v9;
    }
    while ( v9 < v10 );
LABEL_16:
    CurrentThread = v24;
  }
  if ( CurrentThread )
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v3;
}
