/*
 * XREFs of MiQueryProcessActivePatches @ 0x14087A690
 * Callers:
 *     NtManageHotPatch @ 0x140A9D550 (NtManageHotPatch.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404A5040 (MmAcquireLoadLock.c)
 *     MiGetBaseLoaderPortion @ 0x1404EE710 (MiGetBaseLoaderPortion.c)
 *     VslQueryActiveSecurePatches @ 0x1405C6160 (VslQueryActiveSecurePatches.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiFillActivePatchesQueryBuffer @ 0x140875ED8 (MiFillActivePatchesQueryBuffer.c)
 *     MiGetProcessHotPatchContext @ 0x140876358 (MiGetProcessHotPatchContext.c)
 *     MiIsActiveSystemHotPatch @ 0x140877074 (MiIsActiveSystemHotPatch.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiQueryProcessActivePatches(
        ULONG_PTR BugCheckParameter1,
        _QWORD *a2,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        int a7)
{
  int v7; // r14d
  struct _MDL *v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned int v11; // r12d
  __int64 v12; // rcx
  unsigned __int64 v13; // r15
  unsigned int v14; // ebx
  struct _KTHREAD *Lock; // rax
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD **v19; // rdx
  unsigned __int64 v20; // rax
  _QWORD *i; // rdx
  PVOID *j; // r9
  __int64 v23; // r9
  int active; // edi
  _KPROCESS *v25; // rdi
  int v26; // eax
  _KPROCESS_SECURE_STATE v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int16 *v30; // rdx
  __int64 v31; // rax
  struct _KLOCK_ENTRIES *v32; // r9
  _QWORD *v33; // rdi
  signed __int64 *v34; // r14
  void *v35; // rdx
  LegacyAutoBoost *v36; // rdi
  _QWORD *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  _QWORD *v42; // rdi
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r13
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r14
  _QWORD **v50; // rcx
  unsigned __int64 v51; // rax
  _QWORD *m; // rcx
  PVOID *n; // rsi
  __int64 BaseLoaderPortion; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  struct _MDL *v57; // rbx
  __int64 v58; // r12
  __int64 v59; // rsi
  __int64 Process; // rdx
  __int64 v61; // rcx
  struct _KTHREAD *v62; // r15
  _QWORD *v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rcx
  bool v66; // zf
  __int64 *v68; // r12
  __int64 *k; // rsi
  int v70; // [rsp+50h] [rbp-A1h]
  int v71; // [rsp+60h] [rbp-91h]
  __int64 v72; // [rsp+68h] [rbp-89h] BYREF
  __int64 v73; // [rsp+70h] [rbp-81h] BYREF
  __int64 v74; // [rsp+78h] [rbp-79h] BYREF
  __int64 v75; // [rsp+80h] [rbp-71h] BYREF
  struct _MDL *v76; // [rsp+88h] [rbp-69h] BYREF
  PVOID Object; // [rsp+90h] [rbp-61h] BYREF
  __int64 v78; // [rsp+98h] [rbp-59h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-51h]
  _QWORD *ProcessHotPatchContext; // [rsp+A8h] [rbp-49h]
  _QWORD *v81; // [rsp+B0h] [rbp-41h]
  _DWORD *v82; // [rsp+B8h] [rbp-39h]
  __int64 v83; // [rsp+C0h] [rbp-31h]
  _OWORD v84[3]; // [rsp+C8h] [rbp-29h] BYREF

  v7 = a7;
  v75 = BugCheckParameter1;
  v81 = a2;
  v83 = a4;
  v82 = a3;
  memset(v84, 0, sizeof(v84));
  v9 = 0LL;
  v72 = 0LL;
  Object = 0LL;
  v10 = 0LL;
  v11 = 0;
  CurrentThread = KeGetCurrentThread();
  v12 = 40LL;
  v76 = 0LL;
  ProcessHotPatchContext = 0LL;
  LODWORD(v73) = 0;
  if ( a7 != 2 )
    v12 = 48LL;
  v74 = v12;
  v13 = (unsigned int)v12;
  if ( BugCheckParameter1 )
  {
    active = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x70486D4Du, (__int64)&Object, 0LL, 0LL);
    if ( active < 0 )
      goto LABEL_96;
    v25 = (_KPROCESS *)Object;
    v26 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) & 1;
    v14 = 2 * v26;
    if ( !v26 )
    {
      active = -1073741558;
      goto LABEL_83;
    }
    KiStackAttachProcess(v25, 0, (__int64)v84);
    v27.EntireField = (unsigned __int64)v25->SecureState;
    v14 |= 4u;
    v71 = v14;
    if ( (v27.EntireField & 1) != 0 )
    {
      active = VslQueryActiveSecurePatches(v27.EntireField & 0xFFFFFFFFFFFFFFFCuLL, &v76, (unsigned int *)&v73);
      if ( active < 0 )
        goto LABEL_83;
      v11 = v73;
      if ( (_DWORD)v73 )
      {
        v28 = 28LL;
        v29 = (unsigned int)v73;
        v30 = *(unsigned __int16 **)&v76->Size;
        if ( a7 == 2 )
          v28 = 24LL;
        do
        {
          v31 = *v30;
          v30 += 8;
          v13 += v28 + v31;
          --v29;
        }
        while ( v29 );
      }
    }
    else
    {
      ProcessHotPatchContext = MiGetProcessHotPatchContext((__int64)v25, 0);
      v33 = ProcessHotPatchContext;
      if ( ProcessHotPatchContext )
      {
        v34 = ProcessHotPatchContext + 2;
        v14 |= 1u;
        v71 = v14;
        --CurrentThread->SpecialApcDisable;
        v36 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v33 + 2), 0LL, 0LL, v32);
        if ( _InterlockedCompareExchange64(v34, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v34, 0, v36, (struct _KTHREAD *)v34);
        if ( v36 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v36, v35);
          else
            *((_BYTE *)v36 + 10) = 1;
        }
        v7 = a7;
        v37 = (_QWORD *)*ProcessHotPatchContext;
        if ( (_QWORD *)*ProcessHotPatchContext != ProcessHotPatchContext )
        {
          v38 = 28LL;
          if ( a7 == 2 )
            v38 = 24LL;
          do
          {
            v39 = *((unsigned __int16 *)v37 + 20);
            ++v11;
            v37 = (_QWORD *)*v37;
            v13 += v38 + v39;
          }
          while ( v37 != ProcessHotPatchContext );
        }
      }
    }
  }
  else
  {
    v14 = 8;
    v71 = 8;
    Lock = MmAcquireLoadLock();
    v16 = (_QWORD *)qword_140E366D0;
    CurrentThread = Lock;
    while ( v16 )
    {
      v10 = (unsigned __int64)v16;
      v16 = (_QWORD *)*v16;
    }
    v17 = v10;
    if ( v10 )
    {
      v18 = 28LL;
      if ( a7 == 2 )
        v18 = 24LL;
      do
      {
        ++v11;
        v19 = *(_QWORD ***)(v17 + 8);
        v13 += v18 + *(unsigned __int16 *)(v17 + 48);
        v20 = v17;
        if ( v19 )
        {
          v17 = *(_QWORD *)(v17 + 8);
          for ( i = *v19; i; i = (_QWORD *)*i )
            v17 = (unsigned __int64)i;
        }
        else
        {
          while ( 1 )
          {
            v17 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v17 || *(_QWORD *)v17 == v20 )
              break;
            v20 = v17;
          }
        }
      }
      while ( v17 );
    }
    for ( j = (PVOID *)PsLoadedModuleList; j != &PsLoadedModuleList; j = *(PVOID **)v23 )
    {
      if ( (unsigned int)MiIsActiveSystemHotPatch((__int64)j) )
      {
        v13 += *(unsigned __int16 *)(v23 + 72) + 24LL;
        ++v11;
        if ( a7 != 2 )
          v13 += 4LL;
      }
    }
  }
  if ( a5 >= v13 )
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(256LL, (unsigned int)v13, 1900571981, CurrentProcessorColor | 0x80000000);
    v42 = (_QWORD *)PoolMm;
    if ( !PoolMm )
    {
      active = -1073741670;
      goto LABEL_83;
    }
    v43 = v75;
    *(_QWORD *)(PoolMm + 8) = v75;
    *(_DWORD *)PoolMm = v7;
    if ( v11 )
    {
      v44 = PoolMm + v74;
      v45 = PoolMm + v74 + 16LL * v11;
      v46 = v11;
      v74 += PoolMm;
      v75 = v45;
      v47 = v45 + 8LL * v11;
      if ( v7 == 2 )
      {
        v48 = v45 + 8LL * v11;
        v47 = 0LL;
      }
      else
      {
        v48 = v47 + 4LL * v11;
      }
      v73 = v47;
      v78 = v48;
      v42[3] = v44;
      v42[4] = v45;
      if ( v47 )
        v42[5] = v47;
      v49 = (__int64)v42 - v83;
      if ( v43 )
      {
        if ( (*((_BYTE *)Object + 368) & 1) != 0 )
        {
          v57 = v76;
          v58 = 0LL;
          v59 = 0LL;
          do
          {
            Process = (__int64)v57->Process;
            v61 = *(_QWORD *)&v57->Size;
            v72 = *(_QWORD *)(v59 + Process);
            MiFillActivePatchesQueryBuffer(
              (__int64)v42,
              Process,
              v45,
              v49,
              (_QWORD **)&v75,
              (UNICODE_STRING **)&v74,
              (wchar_t **)&v78,
              (_DWORD **)&v73,
              &v72,
              (PCUNICODE_STRING)(v58 + v61),
              *(_DWORD *)(v59 + Process + 24));
            v58 += 16LL;
            v59 += 28LL;
            --v46;
          }
          while ( v46 );
          v14 = v71;
        }
        else
        {
          v68 = ProcessHotPatchContext;
          for ( k = (__int64 *)*ProcessHotPatchContext; k != v68; k = (__int64 *)*k )
            MiFillActivePatchesQueryBuffer(
              (__int64)v42,
              (__int64)(k + 4),
              v45,
              v49,
              (_QWORD **)&v75,
              (UNICODE_STRING **)&v74,
              (wchar_t **)&v78,
              (_DWORD **)&v73,
              k + 4,
              (PCUNICODE_STRING)(k + 5),
              *((_DWORD *)k + 16));
        }
      }
      else
      {
        while ( v10 )
        {
          v72 = *(_QWORD *)(v10 + 24);
          MiFillActivePatchesQueryBuffer(
            (__int64)v42,
            v44,
            v45,
            v49,
            (_QWORD **)&v75,
            (UNICODE_STRING **)&v74,
            (wchar_t **)&v78,
            (_DWORD **)&v73,
            &v72,
            (PCUNICODE_STRING)(v10 + 48),
            *(_DWORD *)(v10 + 40));
          v50 = *(_QWORD ***)(v10 + 8);
          v51 = v10;
          if ( v50 )
          {
            v10 = *(_QWORD *)(v10 + 8);
            for ( m = *v50; m; m = (_QWORD *)*m )
              v10 = (unsigned __int64)m;
          }
          else
          {
            while ( 1 )
            {
              v10 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !v10 || *(_QWORD *)v10 == v51 )
                break;
              v51 = v10;
            }
          }
        }
        for ( n = (PVOID *)PsLoadedModuleList; n != &PsLoadedModuleList; n = (PVOID *)*n )
        {
          if ( (unsigned int)MiIsActiveSystemHotPatch((__int64)n) )
          {
            BaseLoaderPortion = MiGetBaseLoaderPortion((__int64)n);
            v55 = *(_QWORD *)(BaseLoaderPortion + 248);
            v70 = *(_DWORD *)(BaseLoaderPortion + 272);
            LODWORD(v72) = *(_DWORD *)(v55 + 120);
            HIDWORD(v72) = *(_DWORD *)(v55 + 156);
            MiFillActivePatchesQueryBuffer(
              (__int64)v42,
              v55,
              v56,
              v49,
              (_QWORD **)&v75,
              (UNICODE_STRING **)&v74,
              (wchar_t **)&v78,
              (_DWORD **)&v73,
              &v72,
              (PCUNICODE_STRING)(n + 9),
              v70);
          }
        }
      }
      v42[4] -= v49;
      v42[3] -= v49;
      if ( v73 )
        v42[5] -= v49;
    }
    *v81 = v42;
LABEL_82:
    active = 0;
    *v82 = v13;
    goto LABEL_83;
  }
  if ( v13 <= 0xFFFFFFFF )
  {
    *v81 = 0LL;
    goto LABEL_82;
  }
  active = -1073741675;
LABEL_83:
  v62 = CurrentThread;
  if ( v14 >= 8 )
    MmReleaseLoadLock(CurrentThread);
  if ( (v14 & 1) != 0 )
  {
    v63 = ProcessHotPatchContext;
    if ( _InterlockedCompareExchange64(ProcessHotPatchContext + 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v63 + 2);
    KeAbPostRelease((unsigned __int64)(v63 + 2));
    v66 = v62->SpecialApcDisable++ == -1;
    if ( v66 && ($241382875694CED3D471BC5892DE3337 *)v62->ApcState.ApcListHead[0].Flink != &v62->152 )
      KiCheckForKernelApcDelivery(v65, v64);
  }
  if ( (v14 & 4) != 0 )
    KiUnstackDetachProcess((__int64)v84, 0);
  if ( (v14 & 2) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 61);
  v9 = v76;
LABEL_96:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x70486D4Du);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)active;
}
