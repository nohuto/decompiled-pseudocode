/*
 * XREFs of MiEmptyPteBins @ 0x14035F190
 * Callers:
 *     MiInsertCachedPte @ 0x1402821D0 (MiInsertCachedPte.c)
 *     MiMakeSystemPtesAppear @ 0x1402A5C9C (MiMakeSystemPtesAppear.c)
 *     MiAdjustPteBins @ 0x1402A5DF8 (MiAdjustPteBins.c)
 *     MiReservePtes @ 0x14035DE50 (MiReservePtes.c)
 *     MiCheckProcessorPteCache @ 0x14035EA80 (MiCheckProcessorPteCache.c)
 * Callees:
 *     MiReleasePteMappings @ 0x1402A3B00 (MiReleasePteMappings.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 */

unsigned __int64 __fastcall MiEmptyPteBins(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  volatile signed __int64 *v3; // rdx
  unsigned __int64 v4; // r13
  char v5; // al
  __int64 v6; // r10
  __int16 v7; // r9
  __int64 CurrentIrql; // r11
  struct _KTHREAD *CurrentThread; // r15
  int v10; // ebp
  __int64 v11; // r8
  int v12; // r12d
  int v13; // r15d
  unsigned int v14; // ebx
  unsigned int v15; // edi
  __int64 v16; // r14
  unsigned int i; // esi
  signed __int64 v18; // rax
  unsigned int v20; // r9d
  unsigned int v21; // ecx
  BOOL v22; // r8d
  __int64 v23; // rax
  signed __int32 v24[8]; // [rsp+0h] [rbp-88h] BYREF
  struct _KTHREAD *v25; // [rsp+20h] [rbp-68h]
  signed __int64 v26; // [rsp+28h] [rbp-60h] BYREF
  __int64 v27; // [rsp+30h] [rbp-58h]
  char v30; // [rsp+A0h] [rbp+18h]
  __int16 v31; // [rsp+A8h] [rbp+20h]

  v30 = a3;
  v3 = 0LL;
  v4 = 0LL;
  v5 = a3;
  v6 = a1;
  _InterlockedOr(v24, 0);
  v7 = KiTbFlushTimeStamp;
  v31 = KiTbFlushTimeStamp;
  CurrentIrql = KeGetCurrentIrql();
  v27 = CurrentIrql;
  if ( (_BYTE)CurrentIrql )
  {
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
  }
  v25 = CurrentThread;
  v10 = (a3 >> 2) & 1;
  v11 = (__int64)&unk_140E34A40;
  v12 = 1;
  if ( (_KWAIT_BLOCK **)a1 == &stru_140E36558.WaitBlockList || (_UNKNOWN *)a1 == &unk_140E34A40 )
  {
    v12 = 3;
  }
  else
  {
    v5 = v30;
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      v12 = 2;
  }
  if ( v10 < (unsigned int)v12 )
  {
    v13 = v5 & 2;
    do
    {
      if ( v13 )
      {
        v14 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
        v15 = v14 + 1;
      }
      else
      {
        v15 = (unsigned __int16)KeNumberNodes;
        v14 = 0;
      }
      v16 = *(_QWORD *)(v6 + 80) + 72 * (v14 + (__int64)(v10 * (unsigned __int16)KeNumberNodes));
      while ( v14 < v15 )
      {
        for ( i = 0; i < 8; ++i )
        {
          v3 = (volatile signed __int64 *)(v16 + 8LL * i);
          v18 = *v3;
          v26 = v18;
          if ( (_WORD)v18 )
          {
            v11 = (unsigned __int16)v18;
            v20 = (unsigned __int16)(v7 - v18);
            if ( v20 > 2 || (v18 & 1) == 0 && v20 >= 2 || (v30 & 1) != 0 )
            {
              if ( (_BYTE)CurrentIrql == 2
                && ((_KWAIT_BLOCK **)v6 == &stru_140E36558.WaitBlockList && v10
                 || (_UNKNOWN *)v6 == &unk_140E34A40 && v10) )
              {
                goto LABEL_16;
              }
              if ( v18 == _InterlockedCompareExchange64(v3, 0LL, v18) )
              {
                _InterlockedOr(v24, 0);
                v21 = (unsigned __int16)(KiTbFlushTimeStamp - v18);
                if ( v21 > 2 )
                {
                  v22 = 0;
                }
                else if ( (v18 & 1) != 0 || (v22 = 0, v21 < 2) )
                {
                  v22 = 1;
                }
                v23 = MiReleasePteMappings(v6, (unsigned __int64 *)&v26, v22, v10);
                _InterlockedAdd64((volatile signed __int64 *)(v16 + 64), -v23);
                v6 = a1;
                v4 += v23;
                LOBYTE(CurrentIrql) = v27;
              }
              else
              {
                --i;
              }
              if ( v4 && !a2 || v4 >= a2 )
                goto LABEL_16;
            }
            v7 = v31;
          }
        }
        v16 += 72LL;
        ++v14;
        v3 = 0LL;
      }
      ++v10;
    }
    while ( v10 < v12 );
LABEL_16:
    CurrentThread = v25;
  }
  if ( CurrentThread )
    KeLeaveCriticalRegionThread((__int64)CurrentThread, (__int64)v3, v11);
  return v4;
}
