/*
 * XREFs of KiAssignCooperativeIdleSearchContexts @ 0x1405ECC18
 * Callers:
 *     KiConfigureNodeSchedulingInformation @ 0x1405ED570 (KiConfigureNodeSchedulingInformation.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRegisterProcessorWithCooperativeIdleSearchContext @ 0x1405FDC38 (KiRegisterProcessorWithCooperativeIdleSearchContext.c)
 *     KiMergeSmallSharedReadyQueueAssignments @ 0x1405FEC28 (KiMergeSmallSharedReadyQueueAssignments.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiAssignCooperativeIdleSearchContexts(__int64 a1)
{
  int i; // eax
  __int64 v3; // rcx
  int v4; // edx
  __int64 CurrentIrql; // rdi
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r14
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int j; // eax
  __int64 v15; // rsi
  __int64 v16; // rbx
  void *v17; // rcx
  __int64 result; // rax
  __int64 v19; // [rsp+28h] [rbp-89h] BYREF
  unsigned __int16 *v20; // [rsp+30h] [rbp-81h] BYREF
  __int64 v21; // [rsp+38h] [rbp-79h]
  __int16 v22; // [rsp+40h] [rbp-71h]
  int v23; // [rsp+42h] [rbp-6Fh]
  __int16 v24; // [rsp+46h] [rbp-6Bh]
  __int64 v25; // [rsp+48h] [rbp-69h]
  _OWORD v26[4]; // [rsp+58h] [rbp-59h] BYREF
  _OWORD v27[4]; // [rsp+98h] [rbp-19h] BYREF

  LODWORD(v19) = 0;
  v23 = 0;
  v24 = 0;
  memset_0(v26, 255, 0x80uLL);
  v22 = *(_WORD *)(a1 + 136);
  v21 = *(_QWORD *)(a1 + 128);
  v20 = 0LL;
  for ( i = KeEnumerateNextProcessor(&v19, &v20); !i; i = KeEnumerateNextProcessor(&v19, &v20) )
    *((_BYTE *)v26 + *(unsigned __int8 *)(KiProcessorBlock[(unsigned int)v19] + 209)) = *(_BYTE *)(*(_QWORD *)(KiProcessorBlock[(unsigned int)v19] + 36488)
                                                                                                 + 705LL);
  if ( (unsigned __int16)KiSubNodeCount <= 1u )
  {
    memset_0(v27, 255, sizeof(v27));
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 128);
    v27[0] = v26[0];
    v27[1] = v26[1];
    v27[2] = v26[2];
    v27[3] = v26[3];
    KiMergeSmallSharedReadyQueueAssignments(v3, (unsigned int)KiMaximumCooperativeIdleSearchWidth, v27);
  }
  CurrentIrql = KeGetCurrentIrql();
  v25 = CurrentIrql;
  if ( (_BYTE)CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v4);
  }
  v22 = *(_WORD *)(a1 + 136);
  v21 = *(_QWORD *)(a1 + 128);
  v20 = 0LL;
  if ( !(unsigned int)KeEnumerateNextProcessor(&v19, &v20) )
  {
    do
    {
      v6 = 0LL;
      v7 = 2LL;
      v8 = KiProcessorBlock[(unsigned int)v19];
      v9 = (_QWORD *)(v8 + 37976);
      do
      {
        v10 = *(unsigned __int8 *)(v8 + 209);
        v11 = *((unsigned __int8 *)&v26[v6] + v10);
        if ( (_BYTE)v11 != 0xFF )
        {
          if ( (_BYTE)v11 == (_BYTE)v10 )
            v12 = *(v9 - 2);
          else
            v12 = *(_QWORD *)((char *)v9
                            + KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int64)*(unsigned __int16 *)(a1 + 136)].Flink
                                               + v11)]
                            - v8);
          v13 = v9[2];
          *v9 = v12;
          KiRegisterProcessorWithCooperativeIdleSearchContext(v12, v8, v13);
        }
        ++v9;
        v6 += 4LL;
        --v7;
      }
      while ( v7 );
    }
    while ( !(unsigned int)KeEnumerateNextProcessor(&v19, &v20) );
    LOBYTE(CurrentIrql) = v25;
  }
  v22 = *(_WORD *)(a1 + 136);
  v21 = *(_QWORD *)(a1 + 128);
  v20 = 0LL;
  for ( j = KeEnumerateNextProcessor(&v19, &v20); !j; j = KeEnumerateNextProcessor(&v19, &v20) )
  {
    v15 = 2LL;
    v16 = KiProcessorBlock[(unsigned int)v19] + 37960;
    do
    {
      v17 = *(void **)v16;
      if ( *(_QWORD *)v16 && *(void **)(v16 + 16) != v17 )
      {
        ExFreePoolWithTag(v17, 0);
        *(_QWORD *)v16 = 0LL;
      }
      v16 += 8LL;
      --v15;
    }
    while ( v15 );
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = (unsigned __int8)CurrentIrql;
  __writecr8((unsigned __int8)CurrentIrql);
  return result;
}
