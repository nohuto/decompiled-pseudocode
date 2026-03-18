/*
 * XREFs of MiDereferencePerSessionProtos @ 0x140A96D34
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x14048FFF8 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x1404EDA44 (MiInsertInSystemSpace.c)
 *     MiValidateSectionUnmap @ 0x14087B3F8 (MiValidateSectionUnmap.c)
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 *     MiDeletePartialCloneVads @ 0x1409619E4 (MiDeletePartialCloneVads.c)
 *     MiFinishCreateSection @ 0x1409BAAFC (MiFinishCreateSection.c)
 *     MiValidateSectionMap @ 0x1409CBB1C (MiValidateSectionMap.c)
 *     MiMapViewOfImageSection @ 0x1409CD37C (MiMapViewOfImageSection.c)
 *     MiSectionDelete @ 0x140A96C50 (MiSectionDelete.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MiDeletePerSessionProtos @ 0x1404586A0 (MiDeletePerSessionProtos.c)
 *     MiDereferenceSubsectionProtos @ 0x140A96E50 (MiDereferenceSubsectionProtos.c)
 */

void __fastcall MiDereferencePerSessionProtos(_QWORD *a1, unsigned int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 *v7; // rsi
  char *v8; // rbx
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rbp
  _QWORD *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // zf
  char *v16; // rcx
  char *v17; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v7 = (unsigned __int64 *)(*a1 + 40LL);
  --CurrentThread->SpecialApcDisable;
  v17 = 0LL;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)v7, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v9, (__int64)v7);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  v12 = a1 + 16;
  if ( a1 != (_QWORD *)-128LL )
  {
    do
    {
      MiDereferenceSubsectionProtos(v12, a2, &v17);
      v12 = (_QWORD *)v12[2];
    }
    while ( v12 );
    v8 = v17;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  KeAbPostRelease((unsigned __int64)v7);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v14, v13);
  while ( 1 )
  {
    v16 = v8;
    if ( !v8 )
      break;
    v8 = *(char **)v8;
    MiDeletePerSessionProtos(v16);
  }
}
