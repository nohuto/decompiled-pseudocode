/*
 * XREFs of EtwpNotifyDisallowedGuidChange @ 0x14091555C
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x140AE14B0 (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PsGetCurrentThreadProcessId @ 0x14044EE20 (PsGetCurrentThreadProcessId.c)
 *     EtwpUnreferenceGuidEntry @ 0x1409126C0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x140912E34 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpSendDataBlock @ 0x140914478 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x140914C04 (EtwpUnreferenceDataBlock.c)
 *     EtwpFindGuidEntryByGuid @ 0x140914CD0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpBuildNotificationPacket @ 0x1409159B8 (EtwpBuildNotificationPacket.c)
 *     EtwpCalculateUpdateNotification @ 0x140915B30 (EtwpCalculateUpdateNotification.c)
 *     EtwpIsGuidAllowed @ 0x140916CEC (EtwpIsGuidAllowed.c)
 */

_QWORD *__fastcall EtwpNotifyDisallowedGuidChange(_DWORD *a1, unsigned int *a2, unsigned int a3)
{
  _QWORD *result; // rax
  __int64 *v7; // rsi
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 *v9; // rbx
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rdi
  int v13; // eax
  __int64 v14; // r14
  struct _KLOCK_ENTRIES *v15; // r9
  __int64 *v16; // rbp
  __int64 *v17; // rcx
  __int64 *v18; // r13
  __int64 *v19; // r15
  char v20; // si
  __int64 *v21; // rax
  __int64 v22; // r13
  __int64 v23; // rcx
  unsigned __int16 *v24; // r12
  unsigned int v26; // edx
  unsigned __int8 v27; // al
  unsigned __int16 v28; // bx
  unsigned __int16 v29; // di
  char updated; // al
  char v31; // bl
  signed __int64 v32; // rax
  signed __int64 v33; // rdx
  __int64 v34; // rtt
  __int64 v35; // rdx
  __int64 v36; // r8
  struct _KLOCK_ENTRIES *v37; // r9
  struct _KTHREAD *v38; // rax
  AutoBoost *v39; // rax
  void *v40; // rdx
  AutoBoost *v41; // rbx
  __int64 v42; // rax
  __int64 *v43; // rax
  signed __int64 v44; // rax
  signed __int64 v45; // rdx
  __int64 v46; // rtt
  __int64 *v47; // [rsp+40h] [rbp-68h]
  volatile signed __int32 *v48; // [rsp+48h] [rbp-60h] BYREF
  __int64 *v49; // [rsp+50h] [rbp-58h]
  __int64 *v50; // [rsp+58h] [rbp-50h]
  __int64 *v51; // [rsp+60h] [rbp-48h]
  char v54; // [rsp+C8h] [rbp+20h]
  volatile signed __int32 *v55; // [rsp+C8h] [rbp+20h]

  v48 = 0LL;
  result = EtwpFindGuidEntryByGuid(*((_QWORD *)a2 + 170), a1, 0);
  v51 = result;
  v7 = result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = result + 83;
    --CurrentThread->KernelApcDisable;
    v10 = (AutoBoost *)KeAbPreAcquire((__int64)(result + 83), 0LL, 0LL, (struct _KLOCK_ENTRIES *)CurrentThread);
    v12 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (__int64)v9);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v11);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    v7[84] = (__int64)KeGetCurrentThread();
    v13 = EtwpBuildNotificationPacket(v7, 0LL, 0LL, &v48);
    v14 = (__int64)v48;
    if ( !v13 )
    {
      *v48 = 3;
      *(_OWORD *)(v14 + 40) = *(_OWORD *)a1;
      *(_DWORD *)(v14 + 36) = PsGetCurrentThreadProcessId();
      if ( ((unsigned __int8)EtwpIsGuidAllowed(a2, a1) != 0) != (a3 == 0) )
      {
        v16 = 0LL;
        v49 = 0LL;
        if ( !v7[82] )
        {
          v17 = (__int64 *)v7[2];
          if ( v17 != v7 + 2 )
          {
            v16 = v17 - 2;
            v49 = v17 - 2;
          }
        }
        v18 = v7;
        v50 = v7;
        v54 = 0;
        while ( 1 )
        {
          v19 = (__int64 *)v18[7];
          v47 = v18 + 7;
          if ( v19 != v18 + 7 )
          {
            v20 = v54;
            v21 = v18 + 7;
            do
            {
              v22 = (__int64)v19;
              v19 = (__int64 *)*v19;
              v23 = *(_QWORD *)(v22 + 40);
              if ( v23 )
              {
                if ( v20 )
                {
                  v23 = *(_QWORD *)(v23 + 656);
                  v24 = (unsigned __int16 *)(v22 + 106);
                }
                else
                {
                  v24 = (unsigned __int16 *)(v22 + 102);
                }
                if ( !(a3 ? *(_DWORD *)(v23 + 96) == 0 : *v24 == 0) )
                {
                  v26 = 0;
                  v15 = (struct _KLOCK_ENTRIES *)*a2;
                  while ( v26 < 0x10 )
                  {
                    if ( *(unsigned __int16 *)(32LL * v26 + v23 + 134) == (_DWORD)v15
                      && *(_DWORD *)(32 * (v26 + 4LL) + v23) )
                    {
                      v27 = 1 << v26;
                      if ( 1 << v26 && (a3 || (v27 & *(_BYTE *)v24) != 0) )
                      {
                        v28 = *v24;
                        v29 = v27;
                        EtwpUpdateRegEntryEnableMask(v22, (__int64)a2, v27, 2, v20, a3);
                        v55 = (volatile signed __int32 *)v14;
                        updated = EtwpCalculateUpdateNotification(v22, v29, v28, *v24, 2, v20, a3, (__int64)&v48);
                        v14 = (__int64)v48;
                        v31 = updated;
                        if ( v55 != v48 )
                        {
                          if ( v48 )
                          {
                            EtwpUnreferenceDataBlock(v55);
                          }
                          else
                          {
                            v14 = (__int64)v55;
                            v48 = v55;
                          }
                        }
                        if ( v31 )
                          EtwpSendDataBlock(v22, v14);
                      }
                      break;
                    }
                    ++v26;
                  }
                  v21 = v47;
                }
              }
            }
            while ( v19 != v21 );
            v7 = v51;
            v16 = v49;
            v18 = v50;
          }
          if ( v18 != v7 )
          {
            v18[84] = 0LL;
            _m_prefetchw(v18 + 83);
            v44 = v18[83];
            v45 = v44 - 16;
            if ( (v44 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v45 = 0LL;
            if ( (v44 & 2) != 0 || (v46 = v18[83], v46 != _InterlockedCompareExchange64(v18 + 83, v45, v44)) )
              ExfReleasePushLock(v18 + 83);
            KeAbPostRelease((unsigned __int64)(v18 + 83));
            KeLeaveCriticalRegion();
          }
          if ( !v16 )
            break;
          v38 = KeGetCurrentThread();
          v54 = 1;
          v50 = v16;
          v18 = v16;
          --v38->KernelApcDisable;
          v39 = (AutoBoost *)KeAbPreAcquire((__int64)(v16 + 83), 0LL, 0LL, v15);
          v41 = v39;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v16 + 166, 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v16 + 83, v39, (__int64)(v16 + 83));
          if ( v41 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v41, v40);
            else
              *((_BYTE *)v41 + 10) = 1;
          }
          v16[84] = (__int64)KeGetCurrentThread();
          v42 = v16[2];
          v16 = 0LL;
          v43 = (__int64 *)(v42 - 16);
          if ( v43 != v7 )
            v16 = v43;
          v49 = v16;
        }
      }
    }
    if ( v14 )
      EtwpUnreferenceDataBlock((volatile signed __int32 *)v14);
    v7[84] = 0LL;
    _m_prefetchw(v7 + 83);
    v32 = v7[83];
    v33 = v32 - 16;
    if ( (v32 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v33 = 0LL;
    if ( (v32 & 2) != 0 || (v34 = v7[83], v34 != _InterlockedCompareExchange64(v7 + 83, v33, v32)) )
      ExfReleasePushLock(v7 + 83);
    KeAbPostRelease((unsigned __int64)(v7 + 83));
    KeLeaveCriticalRegion();
    return (_QWORD *)EtwpUnreferenceGuidEntry(v7, v35, v36, v37);
  }
  return result;
}
