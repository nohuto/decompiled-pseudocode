/*
 * XREFs of MiInsertHotPatchRecord @ 0x140876C5C
 * Callers:
 *     MiLoadHotPatch @ 0x1408770BC (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140877654 (MiLoadHotPatchForUserSid.c)
 *     MmRegisterHotPatches @ 0x140D01F24 (MmRegisterHotPatches.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiCompareHotPatchNodes @ 0x140875A8C (MiCompareHotPatchNodes.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x140876E0C (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInsertHotPatchRecord(unsigned __int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  void *v4; // rbp
  int v5; // r12d
  struct _KTHREAD *CurrentThread; // rsi
  AutoBoost *v9; // rax
  void *v10; // rdx
  signed __int8 v11; // cf
  AutoBoost *v12; // rdi
  __int64 v13; // rdi
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  _QWORD *v17; // rdi
  bool v18; // r8
  _QWORD *v19; // rax
  unsigned int v20; // edi
  __int64 v21; // rcx
  $241382875694CED3D471BC5892DE3337 *v23; // rdx

  v4 = 0LL;
  v5 = a3;
  if ( (_DWORD)a3 )
  {
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v9 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E366D8, 0LL, a3, a4);
    v11 = _interlockedbittestandset64(&stru_140E366D8.Header.Lock, 0LL);
    v12 = v9;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E366D8, v9, (__int64)&stru_140E366D8);
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v12, v10);
      else
        *((_BYTE *)v12 + 10) = 1;
    }
  }
  v13 = *a1;
  while ( v13 )
  {
    v14 = MiCompareHotPatchNodes(a2, v13);
    if ( v14 >= 0 )
    {
      if ( v14 <= 0 )
        break;
      v13 = *(_QWORD *)(v13 + 8);
    }
    else
    {
      v13 = *(_QWORD *)v13;
    }
  }
  if ( v13 )
  {
    v15 = *(_DWORD *)(v13 + 32);
    v4 = (void *)v13;
    v16 = *(_DWORD *)(a2 + 32);
    if ( v16 <= v15 )
    {
      v4 = 0LL;
      v20 = 255;
      if ( v16 != v15 )
        v20 = -1073740758;
      goto LABEL_30;
    }
    RtlAvlRemoveNode(a1, v13);
    if ( (unsigned int)MiInsertPreviouslyRegisteredHotPatchRecord(v13) )
      v4 = 0LL;
  }
  v17 = (_QWORD *)*a1;
  v18 = 0;
  if ( !*a1 )
    goto LABEL_29;
  while ( (int)MiCompareHotPatchNodes(a2, (__int64)v17) >= 0 )
  {
    v19 = (_QWORD *)v17[1];
    if ( !v19 )
    {
      v18 = 1;
      goto LABEL_29;
    }
LABEL_27:
    v17 = v19;
  }
  v19 = (_QWORD *)*v17;
  if ( *v17 )
    goto LABEL_27;
  v18 = 0;
LABEL_29:
  RtlAvlInsertNodeEx(a1, (unsigned __int64)v17, v18, (_QWORD *)a2);
  v20 = 0;
LABEL_30:
  if ( !v5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E366D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E366D8.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E366D8);
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      v23 = &CurrentThread->152;
      if ( ($241382875694CED3D471BC5892DE3337 *)v23->ApcState.ApcListHead[0].Flink != v23 )
        KiCheckForKernelApcDelivery(v21, (__int64)v23);
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v20;
}
