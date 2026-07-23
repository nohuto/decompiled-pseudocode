/*
 * XREFs of ObpFreeObject @ 0x1408FF7D0
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x1408FF6D0 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     PspReturnQuota @ 0x1403C7860 (PspReturnQuota.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PspDereferenceQuotaBlock @ 0x1408FFC10 (PspDereferenceQuotaBlock.c)
 *     ObpLockObjectTypeExclusive @ 0x1408FFE00 (ObpLockObjectTypeExclusive.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ObpFreeObject(__int64 a1)
{
  char v1; // al
  _QWORD *v2; // r14
  PVOID *v4; // r13
  int *v5; // r15
  PVOID *v6; // r12
  unsigned int *v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // r14
  ULONG v10; // edx
  __int64 *v11; // r13
  unsigned int v12; // eax
  unsigned int v13; // ecx
  ULONG_PTR v14; // r15
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  signed __int64 v17; // rax
  signed __int64 v18; // rdx
  __int64 v19; // rtt
  __int64 v20; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  bool v22; // zf
  void *v23; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  _SLIST_ENTRY *v25; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  void *v27; // rcx
  unsigned int v28; // [rsp+70h] [rbp+8h]
  unsigned int v29; // [rsp+78h] [rbp+10h]
  PVOID *v30; // [rsp+80h] [rbp+18h]
  __int64 v31; // [rsp+88h] [rbp+20h]

  v1 = *(_BYTE *)(a1 + 26);
  v2 = (_QWORD *)(a1 - 32);
  if ( (v1 & 1) == 0 )
    v2 = 0LL;
  if ( (v1 & 2) != 0 )
    v31 = a1 - ObpInfoMaskToOffset[v1 & 3];
  else
    v31 = 0LL;
  if ( (v1 & 4) != 0 )
    v4 = (PVOID *)(a1 - ObpInfoMaskToOffset[v1 & 7]);
  else
    v4 = 0LL;
  v30 = v4;
  if ( (v1 & 8) != 0 )
    v5 = (int *)(a1 - ObpInfoMaskToOffset[v1 & 0xF]);
  else
    v5 = 0LL;
  if ( (v1 & 0x20) != 0 )
    v6 = (PVOID *)(a1 - ObpInfoMaskToOffset[v1 & 0x3F]);
  else
    v6 = 0LL;
  v7 = (unsigned int *)(a1 - ObpInfoMaskToOffset[(unsigned __int8)v1]);
  if ( v1 < 0 )
    v7 = (unsigned int *)((char *)v7 + 4LL - *v7);
  v8 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ BYTE1(a1) ^ (unsigned __int64)*(unsigned __int8 *)(a1 + 24)];
  if ( v2 )
  {
    ObpLockObjectTypeExclusive(v8);
    v15 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 != v2 )
    {
      v16 = (_QWORD *)v2[1];
      if ( (_QWORD *)v15[1] != v2 || (_QWORD *)*v16 != v2 )
        __fastfail(3u);
      *v16 = v15;
      v15[1] = v16;
    }
    _m_prefetchw((const void *)(v8 + 184));
    v17 = *(_QWORD *)(v8 + 184);
    v18 = v17 - 16;
    if ( (v17 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v18 = 0LL;
    if ( (v17 & 2) != 0
      || (v19 = *(_QWORD *)(v8 + 184),
          v19 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 184), v18, v17)) )
    {
      ExfReleasePushLock((_QWORD *)(v8 + 184));
    }
    KeAbPostRelease(v8 + 184);
    CurrentThread = KeGetCurrentThread();
    v22 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v22 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery((__int64)CurrentThread, v20);
  }
  _InterlockedDecrement((volatile signed __int32 *)(v8 + 44));
  v9 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(a1 + 27) & 1) != 0 )
  {
    if ( v9 )
    {
      v23 = *(void **)(v9 + 32);
      if ( v23 )
      {
        if ( *(_BYTE *)(v9 + 16) <= 1u )
          ExFreePoolWithTag(v23, 0);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) = 0LL;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v25 = *(_SLIST_ENTRY **)(a1 + 32);
      P = CurrentPrcb->PPLookasideList[4].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[4].L,
            ++P->TotalFrees,
            LOWORD(P->ListHead.Alignment) < P->Depth) )
      {
        RtlpInterlockedPushEntrySList(&P->ListHead, v25);
        *(_QWORD *)(a1 + 32) = 0LL;
      }
      else
      {
        ++P->FreeMisses;
        guard_dispatch_icall_no_overrides((__int64)v25, (__int64)v25);
        *(_QWORD *)(a1 + 32) = 0LL;
      }
    }
  }
  else if ( v9 )
  {
    if ( v5 )
    {
      v11 = (__int64 *)*((_QWORD *)v5 + 2);
      v12 = *v5;
      v13 = v5[1];
      v28 = *v5;
      v29 = v13;
      if ( (unsigned __int64)v11 >= 2 )
      {
        if ( v5[2] )
          PspReturnQuota(v11, 0LL, 1u, (unsigned int)v5[2]);
        PspDereferenceQuotaBlock(v11);
        v12 = v28;
        v13 = v29;
        v9 = *(_QWORD *)(a1 + 32);
      }
    }
    else
    {
      v12 = *(_DWORD *)(v8 + 104);
      v13 = *(_DWORD *)(v8 + 108);
    }
    v14 = v13;
    if ( v9 != 1 )
    {
      if ( v12 )
        PspReturnQuota((__int64 *)v9, 0LL, 1u, v12);
      if ( v14 )
        PspReturnQuota((__int64 *)v9, 0LL, 0, v14);
      PspDereferenceQuotaBlock((PVOID)v9);
    }
    v4 = v30;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  if ( v4 && (*(_BYTE *)(a1 + 27) & 0x40) == 0 )
  {
    ExFreePoolWithTag(*v4, 0);
    *v4 = 0LL;
  }
  if ( v31 )
  {
    v27 = *(void **)(v31 + 16);
    if ( v27 )
    {
      ExFreePoolWithTag(v27, 0);
      *(_QWORD *)(v31 + 16) = 0LL;
    }
  }
  if ( v6 && *v6 )
  {
    ExFreePoolWithTag(*v6, 0);
    *v6 = 0LL;
  }
  v10 = 1416258127;
  *(_BYTE *)(a1 + 24) = ObHeaderCookie ^ BYTE1(a1) ^ 1;
  if ( v8 )
    v10 = *(_DWORD *)(v8 + 192);
  ExFreePoolWithTag(v7, v10);
}
