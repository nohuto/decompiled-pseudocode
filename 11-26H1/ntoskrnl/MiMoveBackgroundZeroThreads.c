/*
 * XREFs of MiMoveBackgroundZeroThreads @ 0x1402F53B0
 * Callers:
 *     MmReportParkedProcessors @ 0x1402F528C (MmReportParkedProcessors.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiProcessorParked @ 0x1402F5654 (MiProcessorParked.c)
 *     KeSetUserGroupAffinityThread @ 0x1402F56D4 (KeSetUserGroupAffinityThread.c)
 *     MiSelectBestZeroingProcessor @ 0x1402F59A4 (MiSelectBestZeroingProcessor.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiMoveBackgroundZeroThreads(ULONG *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int8 CurrentIrql; // si
  unsigned int v4; // ebx
  ULONG *v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 *v8; // r15
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rax
  int v16; // r13d
  _QWORD **v17; // r12
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // r15
  __int64 v21; // [rsp+20h] [rbp-78h]
  char v22; // [rsp+28h] [rbp-70h]
  volatile LONG *SpinLock; // [rsp+30h] [rbp-68h]
  __int128 v24; // [rsp+40h] [rbp-58h] BYREF
  __int128 v25[4]; // [rsp+50h] [rbp-48h] BYREF
  ULONG *v26; // [rsp+A0h] [rbp+8h]
  unsigned int v27; // [rsp+A0h] [rbp+8h]
  _QWORD *v28; // [rsp+B0h] [rbp+18h]
  __int64 v29; // [rsp+B8h] [rbp+20h]

  v26 = a1;
  result = (unsigned __int64)&MiSystemPartition;
  if ( a1 == &MiSystemPartition )
  {
    if ( !a2 )
      return result;
    CurrentIrql = 17;
    v22 = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v22 = CurrentIrql;
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(a1) = CurrentIrql;
      result = KiRaiseIrqlProcessIrqlFlags(a1, a2);
    }
  }
  v4 = 0;
  if ( KeNumberNodes )
  {
    v5 = v26;
    do
    {
      v6 = *((_QWORD *)v5 + 2);
      v7 = 56320LL * v4;
      if ( *(_QWORD *)(v6 + v7 + 13888) || *(_QWORD *)(v6 + v7 + 13904) )
      {
        SpinLock = (volatile LONG *)(v7 + v6 + 14200);
        v8 = *(__int64 **)(384LL * v4 + qword_140E2D838 + 376);
        ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
        v9 = *(_QWORD *)(v6 + v7 + 14192);
        if ( v9 && *(_QWORD *)(v6 + v7 + 14208) )
        {
          if ( (*((_DWORD *)v8 + 9) & 1) != 0 && *(_BYTE *)(v9 + 271) )
            v8 = &qword_140E2D818;
          v10 = *((_DWORD *)v8 + 2);
          v11 = v9 + 768;
          v12 = 2LL;
          v27 = v10;
          v21 = 2LL;
          do
          {
            if ( *(_DWORD *)(v11 + 100) )
            {
              if ( *(_BYTE *)v11 )
              {
                v25[0] = 0LL;
                if ( v10 )
                {
                  v13 = v10;
                  v14 = 0LL;
                  v29 = v10;
                  do
                  {
                    v15 = *(_QWORD *)(v11 + 56);
                    v16 = *(_DWORD *)(v15 + v14 + 32);
                    if ( v16 )
                    {
                      v17 = (_QWORD **)(v14 + v15 + 16);
                      v18 = *v17;
                      if ( *v17 != v17 )
                      {
                        do
                        {
                          v19 = (_QWORD *)*v18;
                          v20 = v18 - 22;
                          v28 = (_QWORD *)*v18;
                          if ( *(v18 - 10) )
                          {
                            v24 = *((_OWORD *)v20 + 6);
                            if ( (unsigned int)MiProcessorParked(&v24) )
                            {
                              KeSetUserGroupAffinityThread(v20[9], v25);
                              MiSelectBestZeroingProcessor(v11 - 32, v20);
                            }
                            v19 = v28;
                          }
                          if ( !--v16 )
                            break;
                          v18 = v19;
                        }
                        while ( v19 != v17 );
                        v13 = v29;
                      }
                    }
                    v14 += 48LL;
                    v29 = --v13;
                  }
                  while ( v13 );
                  v12 = v21;
                  v10 = v27;
                }
              }
            }
            v11 += 504LL;
            v21 = --v12;
          }
          while ( v12 );
          ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        }
        else
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + v6 + 14200));
        }
      }
      result = (unsigned __int16)KeNumberNodes;
      ++v4;
    }
    while ( v4 < (unsigned __int16)KeNumberNodes );
    CurrentIrql = v22;
  }
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
