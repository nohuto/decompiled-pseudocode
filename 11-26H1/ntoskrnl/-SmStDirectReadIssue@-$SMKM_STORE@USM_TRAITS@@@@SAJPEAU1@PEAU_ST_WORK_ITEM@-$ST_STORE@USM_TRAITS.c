/*
 * XREFs of ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x14020D4D4
 * Callers:
 *     ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020D410 (-SmStDirectReadCallout@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140397DB0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020F10C (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     SmWorkItemQueue @ 0x14028056C (SmWorkItemQueue.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140392300 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST_STORE_EXCEPTION_SOURCE@1@@Z @ 0x14064107C (-SmStUnhandledExceptionFilter@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v5; // r13
  int v6; // r8d
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  volatile signed __int64 *v10; // rsi
  unsigned int v11; // ebx
  signed __int16 v12; // ax
  signed __int16 v13; // tt
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KTHREAD *CurrentThread; // rcx
  bool v18; // zf
  unsigned __int8 v20; // [rsp+20h] [rbp-68h]
  int v21; // [rsp+24h] [rbp-64h]
  int v22; // [rsp+24h] [rbp-64h]
  __int64 v23; // [rsp+28h] [rbp-60h]
  __int64 v24; // [rsp+48h] [rbp-40h]
  unsigned __int8 v27; // [rsp+A8h] [rbp+20h]

  v5 = &KeGetCurrentThread()[1].SavedApcStateFill[15];
  v27 = *v5;
  v20 = *v5;
  *v5 = *(_BYTE *)(a1 + 3220);
  v6 = (unsigned __int8)*(_DWORD *)(a2 + 8);
  v24 = a1 + 3200;
  v7 = *(_QWORD *)(a1 + 3200);
  v8 = _InterlockedIncrement64((volatile signed __int64 *)(v7 + 2888));
  if ( *(_QWORD *)(v7 + 2896) < v8 )
    *(_QWORD *)(v7 + 2896) = v8;
  v9 = (unsigned int)(v6 - 1);
  if ( (unsigned int)v9 >= 0x11 )
    v9 = 16LL;
  _InterlockedAdd64((volatile signed __int64 *)(v7 + 8 * v9 + 2752), 1uLL);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 3064), 1u);
  v10 = (volatile signed __int64 *)(a1 + 2472);
  *(_DWORD *)(a3 + 448) = StLockAcquireShared((struct VLOCK *)(a1 + 2472));
  v11 = ST_STORE<SM_TRAITS>::StDmPageRetrieve(a1 + 64, a3, a2);
  HIDWORD(v23) = *(_DWORD *)(a3 + 448);
  v21 = 0;
  if ( (*(_BYTE *)(a1 + 2372) & 1) == 0 )
  {
    _m_prefetchw((const void *)(a1 + 2372));
    v12 = *(_WORD *)(a1 + 2372);
    do
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 2372), v12 | 1, v12);
    }
    while ( v13 != v12 );
    if ( (v12 & 1) == 0 )
    {
      SmWorkItemQueue(*(_QWORD *)(a1 + 856), a1 + 2360, 2LL);
      v22 = 1;
    }
  }
  LODWORD(v23) = v11;
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((struct _KTHREAD *)v10);
  CurrentThread = KeGetCurrentThread();
  v18 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v18 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(CurrentThread, v14, v15, v16, v20, v23);
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 3064));
  if ( v11 == -2147483634 )
    v11 = -1073741670;
  _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)v24 + 2888LL));
  *v5 = v27;
  return v11;
}
