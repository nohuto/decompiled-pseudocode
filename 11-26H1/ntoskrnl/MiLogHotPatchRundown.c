/*
 * XREFs of MiLogHotPatchRundown @ 0x140878A8C
 * Callers:
 *     MiTracingEnabledCallback @ 0x140B45DF0 (MiTracingEnabledCallback.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404A5040 (MmAcquireLoadLock.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     MiGetBaseLoaderPortion @ 0x1404EE710 (MiGetBaseLoaderPortion.c)
 *     MiLogHotPatchRundownForProcess @ 0x14070101C (MiLogHotPatchRundownForProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiIsActiveSystemHotPatch @ 0x140877074 (MiIsActiveSystemHotPatch.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 */

_UNKNOWN **__fastcall MiLogHotPatchRundown(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _UNKNOWN **result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  void *v6; // rdx
  LegacyAutoBoost *v7; // rbx
  _QWORD *v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // r8
  _QWORD **v11; // rcx
  unsigned __int64 v12; // rax
  _QWORD *i; // rcx
  _QWORD *v14; // rax
  unsigned __int64 v15; // rdi
  _QWORD *v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // r8
  int v19; // eax
  _QWORD **v20; // rcx
  unsigned __int64 v21; // rax
  _QWORD *j; // rcx
  _QWORD **v23; // rcx
  unsigned __int64 v24; // rax
  _QWORD *k; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  bool v28; // zf
  _QWORD *v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // r8
  _QWORD **v32; // rcx
  unsigned __int64 v33; // rax
  _QWORD *m; // rcx
  PVOID *n; // rbx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r10
  void *ii; // rcx
  _UNKNOWN **v40; // rbx
  int v41; // [rsp+28h] [rbp-A9h]
  int v42; // [rsp+30h] [rbp-A1h]
  int v43; // [rsp+48h] [rbp-89h] BYREF
  int v44; // [rsp+4Ch] [rbp-85h] BYREF
  int v45; // [rsp+50h] [rbp-81h] BYREF
  int v46; // [rsp+54h] [rbp-7Dh] BYREF
  _DWORD v47[4]; // [rsp+58h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48[2]; // [rsp+68h] [rbp-69h] BYREF
  int *v49; // [rsp+88h] [rbp-49h]
  __int64 v50; // [rsp+90h] [rbp-41h]
  int *v51; // [rsp+98h] [rbp-39h]
  __int64 v52; // [rsp+A0h] [rbp-31h]
  __int64 *v53; // [rsp+A8h] [rbp-29h]
  __int64 v54; // [rsp+B0h] [rbp-21h]
  int *v55; // [rsp+B8h] [rbp-19h]
  __int64 v56; // [rsp+C0h] [rbp-11h] BYREF
  int *v57; // [rsp+C8h] [rbp-9h]
  __int64 v58; // [rsp+D0h] [rbp-1h]
  int *v59; // [rsp+D8h] [rbp+7h]
  __int64 v60; // [rsp+E0h] [rbp+Fh]
  PVOID v61; // [rsp+E8h] [rbp+17h]
  int v62; // [rsp+F0h] [rbp+1Fh] BYREF
  int v63; // [rsp+F4h] [rbp+23h]
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+5Fh] BYREF

  result = &retaddr;
  if ( stru_140E366D8.FirstArgument && HIDWORD(stru_140E366D8.SListFaultAddress) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v7 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140E366D8, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E366D8, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140E366D8.Header.Lock, 0, v7, &stru_140E366D8);
    if ( v7 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v7, v6);
      else
        *((_BYTE *)v7 + 10) = 1;
    }
    v8 = (_QWORD *)xmmword_140E366C0;
    v9 = 0LL;
    while ( v8 )
    {
      v9 = (unsigned __int64)v8;
      v8 = (_QWORD *)*v8;
    }
    while ( v9 )
    {
      if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 32LL) )
      {
        v43 = *(_DWORD *)(v9 + 24);
        v50 = 4LL;
        v49 = &v43;
        v44 = *(_DWORD *)(v9 + 28);
        v51 = &v44;
        v53 = &v56;
        v55 = *(int **)(v9 + 48);
        v56 = *(unsigned __int16 *)(v9 + 40);
        v52 = 4LL;
        v54 = 2LL;
        tlgWriteEx_EtwWriteEx(v10, (unsigned __int8 *)&word_1400594EE, v10, 1u, v41, v42, 6u, v48);
      }
      v11 = *(_QWORD ***)(v9 + 8);
      v12 = v9;
      if ( v11 )
      {
        v9 = *(_QWORD *)(v9 + 8);
        for ( i = *v11; i; i = (_QWORD *)*i )
          v9 = (unsigned __int64)i;
      }
      else
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v9 || *(_QWORD *)v9 == v12 )
            break;
          v12 = v9;
        }
      }
    }
    v14 = (_QWORD *)qword_140E366B8;
    v15 = 0LL;
    while ( v14 )
    {
      v15 = (unsigned __int64)v14;
      v14 = (_QWORD *)*v14;
    }
    while ( v15 )
    {
      v16 = *(_QWORD **)(v15 + 24);
      v17 = 0LL;
      while ( v16 )
      {
        v17 = (unsigned __int64)v16;
        v16 = (_QWORD *)*v16;
      }
      while ( v17 )
      {
        if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 32LL) )
        {
          v44 = *(_DWORD *)(v17 + 24);
          v50 = 4LL;
          v49 = &v44;
          v43 = *(_DWORD *)(v17 + 28);
          v51 = &v43;
          v53 = &v56;
          v55 = *(int **)(v17 + 48);
          v56 = *(unsigned __int16 *)(v17 + 40);
          v57 = (int *)(v15 + 40);
          v19 = *(unsigned __int8 *)(v15 + 41);
          v52 = 4LL;
          v54 = 2LL;
          v58 = (unsigned int)(4 * v19 + 8);
          tlgWriteEx_EtwWriteEx(v18, (unsigned __int8 *)&byte_14005948B, v18, 1u, v41, v42, 7u, v48);
        }
        v20 = *(_QWORD ***)(v17 + 8);
        v21 = v17;
        if ( v20 )
        {
          v17 = *(_QWORD *)(v17 + 8);
          for ( j = *v20; j; j = (_QWORD *)*j )
            v17 = (unsigned __int64)j;
        }
        else
        {
          while ( 1 )
          {
            v17 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v17 || *(_QWORD *)v17 == v21 )
              break;
            v21 = v17;
          }
        }
      }
      v23 = *(_QWORD ***)(v15 + 8);
      v24 = v15;
      if ( v23 )
      {
        v15 = *(_QWORD *)(v15 + 8);
        for ( k = *v23; k; k = (_QWORD *)*k )
          v15 = (unsigned __int64)k;
      }
      else
      {
        while ( 1 )
        {
          v15 = *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v15 || *(_QWORD *)v15 == v24 )
            break;
          v24 = v15;
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E366D8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&stru_140E366D8.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E366D8);
    v28 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v28 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v27, v26);
    MmAcquireLoadLock();
    v29 = (_QWORD *)qword_140E366D0;
    v30 = 0LL;
    while ( v29 )
    {
      v30 = (unsigned __int64)v29;
      v29 = (_QWORD *)*v29;
    }
    while ( v30 )
    {
      if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 32LL) )
      {
        v44 = *(_DWORD *)(v30 + 24);
        v50 = 4LL;
        v49 = &v44;
        v43 = *(_DWORD *)(v30 + 28);
        v51 = &v43;
        v45 = *(_DWORD *)(v30 + 32);
        v53 = (__int64 *)&v45;
        v46 = *(_DWORD *)(v30 + 36);
        v55 = &v46;
        v47[0] = *(_DWORD *)(v30 + 40);
        v57 = v47;
        v59 = &v62;
        v61 = *(PVOID *)(v30 + 56);
        v62 = *(unsigned __int16 *)(v30 + 48);
        v52 = 4LL;
        v54 = 4LL;
        v56 = 4LL;
        v58 = 4LL;
        v60 = 2LL;
        v63 = 0;
        tlgWriteEx_EtwWriteEx(v31, (unsigned __int8 *)&byte_140059A2F, v31, 1u, v41, v42, 9u, v48);
      }
      v32 = *(_QWORD ***)(v30 + 8);
      v33 = v30;
      if ( v32 )
      {
        v30 = *(_QWORD *)(v30 + 8);
        for ( m = *v32; m; m = (_QWORD *)*m )
          v30 = (unsigned __int64)m;
      }
      else
      {
        while ( 1 )
        {
          v30 = *(_QWORD *)(v30 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v30 || *(_QWORD *)v30 == v33 )
            break;
          v33 = v30;
        }
      }
    }
    for ( n = (PVOID *)PsLoadedModuleList; n != &PsLoadedModuleList; n = (PVOID *)*n )
    {
      if ( (unsigned int)MiIsActiveSystemHotPatch((__int64)n) )
      {
        MiGetBaseLoaderPortion((__int64)n);
        if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 32LL) )
        {
          v47[0] = *(_DWORD *)(v38 + 120);
          v50 = 4LL;
          v49 = v47;
          v46 = *(_DWORD *)(v38 + 156);
          v51 = &v46;
          v45 = *((_DWORD *)n + 30);
          v53 = (__int64 *)&v45;
          v44 = *((_DWORD *)n + 39);
          v55 = &v44;
          v43 = *(_DWORD *)(v37 + 272);
          v57 = &v43;
          v59 = &v62;
          v61 = n[10];
          v62 = *((unsigned __int16 *)n + 36);
          v52 = 4LL;
          v54 = 4LL;
          v56 = 4LL;
          v58 = 4LL;
          v60 = 2LL;
          v63 = 0;
          tlgWriteEx_EtwWriteEx(v36, (unsigned __int8 *)&word_1400599A2, v36, 1u, v41, v42, 9u, v48);
        }
      }
    }
    MmReleaseLoadLock(CurrentThread);
    for ( ii = 0LL; ; ii = v40 )
    {
      result = (_UNKNOWN **)PsGetNextProcess(ii);
      v40 = result;
      if ( !result )
        break;
      MiLogHotPatchRundownForProcess((ULONG_PTR)result, (__int64)CurrentThread);
    }
  }
  return result;
}
