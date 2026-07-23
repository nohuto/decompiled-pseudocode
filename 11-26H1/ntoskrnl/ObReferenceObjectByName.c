/*
 * XREFs of ObReferenceObjectByName @ 0x1408F8820
 * Callers:
 *     IopGetDriverPathInformation @ 0x1405CD1B4 (IopGetDriverPathInformation.c)
 *     ObShutdownSystem @ 0x1407C5600 (ObShutdownSystem.c)
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 *     IopGetLegacyVetoListDrivers @ 0x1409C0B9C (IopGetLegacyVetoListDrivers.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PspUnlockThreadSecurityShared @ 0x140271330 (PspUnlockThreadSecurityShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ObpReleaseLookupContext @ 0x14027B380 (ObpReleaseLookupContext.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     SeClearLearningModeObjectInformation @ 0x14041C210 (SeClearLearningModeObjectInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x14041D674 (SeSetLearningModeObjectInformation.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14043B0F0 (SepCreateAccessStateFromSubjectContext.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObpCheckObjectReference @ 0x1408F4DF4 (ObpCheckObjectReference.c)
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     ObpFreeObjectNameBuffer @ 0x1408F7DB0 (ObpFreeObjectNameBuffer.c)
 *     ObpCaptureObjectName @ 0x1408F8C70 (ObpCaptureObjectName.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 */

__int64 __fastcall ObReferenceObjectByName(
        __int64 a1,
        int a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        PVOID *a8)
{
  PVOID *v9; // rsi
  int v11; // r12d
  __int64 result; // rax
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // r15
  void *v17; // rdx
  LegacyAutoBoost *v18; // r12
  struct _LIST_ENTRY *v19; // rdi
  struct _LIST_ENTRY *v20; // rax
  struct _LIST_ENTRY *CurrentSilo; // rax
  BOOLEAN v22; // r8
  bool v23; // sf
  unsigned __int64 v24; // rdx
  NTSTATUS v25; // [rsp+70h] [rbp-90h] BYREF
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  int v27; // [rsp+80h] [rbp-80h]
  int v28; // [rsp+84h] [rbp-7Ch]
  __int128 v29; // [rsp+88h] [rbp-78h] BYREF
  struct _KTHREAD *v30; // [rsp+98h] [rbp-68h]
  PVOID *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  __int128 v33; // [rsp+B0h] [rbp-50h] BYREF
  struct _LIST_ENTRY *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  __int64 v36[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v37; // [rsp+E0h] [rbp-20h]
  __int128 v38; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v39; // [rsp+F8h] [rbp-8h]
  __int128 v40; // [rsp+108h] [rbp+8h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  _QWORD v42[20]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v43[28]; // [rsp+1D0h] [rbp+D0h] BYREF

  v9 = a8;
  v28 = a2;
  v32 = a7;
  v31 = a8;
  v11 = a4;
  v27 = a4;
  memset_0(v43, 0, sizeof(v43));
  Object = 0LL;
  v29 = 0LL;
  memset_0(v42, 0, sizeof(v42));
  v37 = 0LL;
  v41 = 0LL;
  *(_OWORD *)v36 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  if ( !a1 )
    return 3221225523LL;
  result = ObpCaptureObjectName(a6, a1, &v29, 1LL);
  v25 = result;
  if ( (int)result < 0 )
    return result;
  if ( !(_WORD)v29 )
    return 3221225523LL;
  if ( !a3 )
  {
    CurrentThread = KeGetCurrentThread();
    a3 = v42;
    *((_QWORD *)&v33 + 1) = 0LL;
    Process = (__int64)CurrentThread->ApcState.Process;
    v35 = *(_QWORD *)(Process + 464);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v30 = KeGetCurrentThread();
      --v30->KernelApcDisable;
      v18 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL, 0LL, v14);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(
          (signed __int64 *)&CurrentThread[1].WaitBlockList,
          0,
          v18,
          (struct _KTHREAD *)((char *)CurrentThread + 1424));
      if ( v18 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v18, v17);
        else
          *((_BYTE *)v18 + 10) = 1;
      }
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v19 = (struct _LIST_ENTRY *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v19, 0x75536553u);
        DWORD2(v33) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      else
      {
        v19 = 0LL;
      }
      PspUnlockThreadSecurityShared((__int64)CurrentThread, v30);
      v11 = v27;
    }
    else
    {
      v19 = 0LL;
    }
    *(_QWORD *)&v33 = v19;
    v20 = (struct _LIST_ENTRY *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u, v13, v14);
    v34 = v20;
    if ( SeTokenLeakTracking )
    {
      if ( v20 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&v20[71].Blink[17].Blink + 1);
        if ( v20 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
          __debugbreak();
      }
      if ( v19 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&v19[71].Blink[17].Blink + 1);
        if ( v19 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
          __debugbreak();
      }
    }
    v25 = SepCreateAccessStateFromSubjectContext(&v33, v42, v43, v11, (_DWORD *)(a5 + 76));
    if ( v25 < 0 )
      goto LABEL_20;
    v9 = v31;
  }
  CurrentSilo = PsGetCurrentSilo();
  v25 = ObpLookupObjectName(
          0LL,
          a6,
          v32,
          0LL,
          0LL,
          (__int64)CurrentSilo,
          (__int64)a3,
          (__int64)v36,
          0LL,
          (__int64)&Object);
  ObpReleaseLookupContext((__int64)v36);
  v23 = v25 < 0;
  *v9 = 0LL;
  if ( !v23 )
  {
    if ( SepLearningModeTokenCount )
    {
      v24 = (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
      *(_QWORD *)&v40 = 0LL;
      *(_QWORD *)&v39 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v24] + 16;
      *((_QWORD *)&v39 + 1) = &v29;
      SeSetLearningModeObjectInformation((__int64)&v38);
    }
    if ( ObpCheckObjectReference((__int64)Object, (__int64)a3, v22, a6, &v25) )
      *v9 = Object;
    else
      ObfDereferenceObject(Object);
    SeClearLearningModeObjectInformation();
  }
  if ( a3 == v42 )
    SeDeleteAccessState((__int64)a3);
LABEL_20:
  ObpFreeObjectNameBuffer((__int64)&v29);
  return (unsigned int)v25;
}
