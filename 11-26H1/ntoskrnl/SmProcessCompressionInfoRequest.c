/*
 * XREFs of SmProcessCompressionInfoRequest @ 0x140B286E8
 * Callers:
 *     SmQueryStoreInformation @ 0x140B28564 (SmQueryStoreInformation.c)
 * Callees:
 *     SmKmStoreDereference @ 0x140265080 (SmKmStoreDereference.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SmKmStoreReferenceEx @ 0x1402D2430 (SmKmStoreReferenceEx.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140357EA4 (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     SmpGetProcessPartition @ 0x1404D03DC (SmpGetProcessPartition.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     PsReferencePartitionByHandle @ 0x140A5D28C (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall SmProcessCompressionInfoRequest(char *a1, size_t Size, _DWORD *a3, char a4)
{
  SIZE_T v5; // r15
  int v7; // ebx
  size_t v8; // r8
  char *v9; // rdx
  __int64 ProcessPartition; // rsi
  struct _KLOCK_ENTRIES *v11; // r9
  volatile signed __int64 *v12; // rdi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v14; // rax
  void *v15; // rdx
  AutoBoost *v16; // r14
  __int64 v17; // rcx
  unsigned int i; // edi
  __int64 v19; // rax
  __int64 v20; // r14
  int StoreStats; // ebx
  char *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v26; // [rsp+40h] [rbp-688h] BYREF
  __int128 Src; // [rsp+48h] [rbp-680h] BYREF
  __int128 v28; // [rsp+58h] [rbp-670h]
  __int128 v29; // [rsp+68h] [rbp-660h] BYREF
  _DWORD *v30; // [rsp+78h] [rbp-650h]
  _BYTE v31[12]; // [rsp+80h] [rbp-648h] BYREF
  unsigned int v32; // [rsp+8Ch] [rbp-63Ch]
  unsigned int v33; // [rsp+A0h] [rbp-628h]
  unsigned int v34; // [rsp+A4h] [rbp-624h]
  char v35; // [rsp+ACh] [rbp-61Ch] BYREF

  v30 = a3;
  v5 = (unsigned int)Size;
  memset_0(v31, 0, 0x600uLL);
  v26 = 0LL;
  Src = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( (unsigned int)v5 < 0x28 )
  {
    v7 = -1073741306;
    goto LABEL_47;
  }
  if ( a4 )
  {
    ProbeForWrite(a1, v5, 8u);
    RtlCopyFromUser(&Src, a1, 0x28uLL);
  }
  else
  {
    RtlCopyVolatileMemory(&Src, a1, 0x28uLL);
  }
  if ( (unsigned __int8)Src == 4 )
  {
    if ( (_DWORD)v5 != 48 )
    {
LABEL_13:
      v7 = -1073741820;
      goto LABEL_47;
    }
  }
  else if ( (unsigned __int8)Src != 3 )
  {
    v7 = -1073741735;
    goto LABEL_47;
  }
  if ( (unsigned __int8)Src == 3 && (_DWORD)v5 != 40 )
    goto LABEL_13;
  v8 = (unsigned int)(v5 - 40);
  v9 = a1 + 40;
  if ( a4 )
    RtlCopyFromUser((char *)&v29 + 8, v9, v8);
  else
    RtlCopyVolatileMemory((char *)&v29 + 8, v9, v8);
  if ( (Src & 0xFFFFFF00) != 0 )
  {
    v7 = -1073741811;
    goto LABEL_47;
  }
  if ( *((_QWORD *)&v29 + 1) )
  {
    v7 = PsReferencePartitionByHandle(*((ULONG_PTR *)&v29 + 1), 1, a4, 0x52516D53u, &v26);
    if ( v7 < 0 )
      goto LABEL_47;
    ProcessPartition = *(_QWORD *)(v26 + 24);
    if ( !ProcessPartition )
      goto LABEL_28;
  }
  else
  {
    ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  }
  v12 = (volatile signed __int64 *)(ProcessPartition + 2264);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v14 = (AutoBoost *)KeAbPreAcquire(ProcessPartition + 2264, 0LL, 0LL, v11);
  v16 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(ProcessPartition + 2264), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(ProcessPartition + 2264), v14, ProcessPartition + 2264);
  if ( v16 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v16, v15);
    else
      *((_BYTE *)v16 + 10) = 1;
  }
  v17 = *(_QWORD *)(ProcessPartition + 2280);
  if ( !v17 )
  {
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(ProcessPartition + 2264));
    KeAbPostRelease(ProcessPartition + 2264);
    KeLeaveCriticalRegion();
LABEL_28:
    v7 = -1073741399;
    goto LABEL_47;
  }
  DWORD1(Src) = *(_DWORD *)(v17 + 464);
  *((_QWORD *)&Src + 1) = *(_QWORD *)(v17 + 1168) << 12;
  if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(ProcessPartition + 2264));
  KeAbPostRelease(ProcessPartition + 2264);
  KeLeaveCriticalRegion();
  v28 = 0uLL;
  for ( i = 0; i < 0x400; ++i )
  {
    v19 = SmKmStoreReferenceEx(ProcessPartition, i);
    v20 = v19;
    if ( v19 )
    {
      StoreStats = SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(v19);
      SmKmStoreDereference(ProcessPartition, *(_DWORD *)(v20 + 2464));
      if ( StoreStats >= 0 )
      {
        v22 = &v35;
        v23 = 8LL;
        v24 = *((_QWORD *)&v28 + 1);
        do
        {
          v24 += v32 * (unsigned __int64)*(unsigned int *)v22;
          *((_QWORD *)&v28 + 1) = v24;
          v22 += 8;
          --v23;
        }
        while ( v23 );
        *(_QWORD *)&v28 = ((unsigned __int64)v33 << 12) + v28;
        *(_QWORD *)&v29 = ((unsigned __int64)v34 << 12) + v29;
      }
    }
  }
  v7 = 0;
  if ( a4 )
    RtlCopyToUser(a1, &Src, v5);
  else
    RtlCopyVolatileMemory(a1, &Src, v5);
  *v30 = v5;
LABEL_47:
  if ( v26 )
    PsDereferencePartition(v26);
  return (unsigned int)v7;
}
