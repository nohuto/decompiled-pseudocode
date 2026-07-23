/*
 * XREFs of MiCreatePerSessionProtos @ 0x1409A0A14
 * Callers:
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 *     MiCloneImageVad @ 0x140714B50 (MiCloneImageVad.c)
 *     MiFinishCreateSection @ 0x14098BADC (MiFinishCreateSection.c)
 *     MiValidateSectionMap @ 0x14099CAFC (MiValidateSectionMap.c)
 *     MiInitializeImageVad @ 0x14099ED2C (MiInitializeImageVad.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiLocateSessionProtosInSubsection @ 0x14036ED6C (MiLocateSessionProtosInSubsection.c)
 *     MiUpdatePerSessionProto @ 0x1404D97AC (MiUpdatePerSessionProto.c)
 *     MiDereferenceSubsectionProtos @ 0x140A9AFD0 (MiDereferenceSubsectionProtos.c)
 *     MiAllocatePerSessionProtos @ 0x140B13A28 (MiAllocatePerSessionProtos.c)
 *     MiFreeSubsectionProtos @ 0x140B26E04 (MiFreeSubsectionProtos.c)
 */

__int64 __fastcall MiCreatePerSessionProtos(_QWORD *a1, unsigned int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 *v7; // rsi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rbp
  _QWORD *v11; // r14
  __int64 i; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // zf
  __int64 *SessionProtosInSubsection; // rax
  __int64 v18; // rcx
  int v19; // r12d
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *v23; // [rsp+70h] [rbp+18h] BYREF

  if ( a2 - 0x7FFFF <= 0xFFF7FFFF )
    return 3221225678LL;
  CurrentThread = KeGetCurrentThread();
  v7 = (unsigned __int64 *)(*a1 + 40LL);
  --CurrentThread->SpecialApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)v7, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  v11 = a1 + 16;
  for ( i = (__int64)(a1 + 16); i; i = *(_QWORD *)(i + 16) )
  {
    if ( (*(_DWORD *)(i + 32) & 0x20000) != 0 )
    {
      SessionProtosInSubsection = MiLocateSessionProtosInSubsection(i, a2);
      v23 = SessionProtosInSubsection;
      if ( SessionProtosInSubsection )
      {
        ++*((_DWORD *)SessionProtosInSubsection + 20);
      }
      else
      {
        v19 = MiAllocatePerSessionProtos(v18, &v23);
        if ( v19 < 0 )
        {
          v23 = 0LL;
          while ( v11 != (_QWORD *)i )
          {
            MiDereferenceSubsectionProtos(v11, a2, &v23);
            v11 = (_QWORD *)v11[2];
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v7);
          KeAbPostRelease((unsigned __int64)v7);
          v15 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v15
            && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v22, v21);
          }
          MiFreeSubsectionProtos(&v23);
          return (unsigned int)v19;
        }
        v20 = (__int64)v23;
        *((_DWORD *)v23 + 16) = a2;
        MiUpdatePerSessionProto((__int64)a1, i, v20, 1);
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  KeAbPostRelease((unsigned __int64)v7);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v14, v13);
  return 0LL;
}
