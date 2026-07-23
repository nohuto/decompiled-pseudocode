/*
 * XREFs of HalpAllocatePmcCounterSetEx @ 0x140357CC0
 * Callers:
 *     HalpAllocatePmcCounterSet @ 0x140582340 (HalpAllocatePmcCounterSet.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HalpRequestPmuAccess @ 0x140B5F240 (HalpRequestPmuAccess.c)
 */

__int64 __fastcall HalpAllocatePmcCounterSetEx(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        _QWORD *a5,
        __int64 a6)
{
  _QWORD *v6; // r14
  unsigned int v7; // r15d
  __int64 v8; // rsi
  int v9; // edi
  __int64 v10; // r13
  unsigned int v11; // ecx
  __int64 v12; // rcx
  _DWORD *v13; // rax
  _DWORD *v14; // rbx
  __int64 v15; // rcx
  unsigned __int8 CurrentIrql; // r14
  unsigned int v17; // esi
  unsigned int v18; // r12d
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // r8
  unsigned int *v26; // r15
  char *v27; // r12
  int v28; // eax
  __int64 v29; // r8
  int v30; // ecx
  int v31; // ecx
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int *v36; // r8
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rdx
  unsigned int *v40; // rsi
  unsigned int v41; // [rsp+40h] [rbp-98h]
  _GROUP_AFFINITY Affinity; // [rsp+48h] [rbp-90h] BYREF
  unsigned int *v44; // [rsp+58h] [rbp-80h]
  __int64 v45; // [rsp+60h] [rbp-78h]
  __int64 v46; // [rsp+68h] [rbp-70h]
  __int64 v47; // [rsp+70h] [rbp-68h]
  __int64 v48; // [rsp+78h] [rbp-60h]
  _DWORD *v49; // [rsp+80h] [rbp-58h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+88h] [rbp-50h] BYREF

  v6 = a5;
  v45 = (__int64)a5;
  v7 = a3;
  v48 = a6;
  Affinity = 0LL;
  v49 = a4;
  PreviousAffinity = 0LL;
  v46 = a2;
  v8 = a1;
  v9 = HalpRequestPmuAccess();
  if ( v9 < 0 )
    return (unsigned int)v9;
  v10 = (unsigned int)v8;
  v11 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v8);
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(v11 >> 6);
  Affinity.Mask = 1LL << v11;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  v13 = (_DWORD *)HalpMmAllocCtxAlloc(v12, 40 * v7 + 24);
  v14 = v13;
  if ( !v13 )
  {
    v9 = -1073741801;
    goto LABEL_15;
  }
  memset_0(v13, 0, 40 * v7 + 24);
  v14[5] = v7;
  v9 = 0;
  v14[4] = v8;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v15) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v15, 15LL);
  }
  v17 = 0;
  v41 = 0;
  v18 = 0;
  while ( 1 )
  {
    if ( v17 >= v7 )
    {
      if ( v9 >= 0 )
      {
        v20 = HalpCounterSetInfo + 24 * v10;
        v21 = *(_QWORD *)v20;
        if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) != v20 )
          __fastfail(3u);
        *(_QWORD *)v14 = v21;
        *((_QWORD *)v14 + 1) = v20;
        *(_QWORD *)(v21 + 8) = v14;
        *(_QWORD *)v20 = v14;
      }
      goto LABEL_10;
    }
    v22 = v17;
    v23 = 5LL * v18;
    v24 = *(unsigned int *)(v46 + 4LL * v17);
    v25 = (unsigned __int64)&v14[10 * v18 + 14];
    v26 = &v14[10 * v18 + 12];
    v47 = v23;
    v27 = (char *)&v14[10 * v18];
    v14[2 * v23 + 10] = v24;
    Affinity.Mask = v25;
    v44 = &v14[2 * v23 + 13];
    v28 = guard_dispatch_icall_no_overrides(1LL, v24, v27 + 44);
    v9 = v28;
    if ( v28 < 0 )
      break;
    _InterlockedIncrement((_DWORD *)&HalpPmuArbiter.Header.WaitListHead.Flink + 1);
    v30 = *((_DWORD *)v27 + 11);
    if ( v30 )
    {
      v31 = v30 - 1;
      if ( !v31 )
      {
        v32 = __readpmc(*v26);
        LODWORD(v33) = HIDWORD(v32);
        v32 = (unsigned int)v32;
        v33 = (unsigned int)v33;
        goto LABEL_27;
      }
      if ( v31 == 1 )
      {
        v32 = __readmsr(*v26);
        LODWORD(v33) = HIDWORD(v32);
        v32 = (unsigned int)v32;
        v33 = (unsigned int)v33;
LABEL_27:
        v34 = (v33 << 32) | v32;
        goto LABEL_29;
      }
    }
    v34 = 0LL;
LABEL_29:
    v35 = v47;
    v18 = ++v41;
    *(_QWORD *)&v14[2 * v47 + 6] = v34;
    v9 = guard_dispatch_icall_no_overrides(*v26, &v14[2 * v35 + 15], v29);
    v36 = v44;
    if ( v48 )
      *(_DWORD *)(v48 + 4LL * v17) = *v44;
    v37 = *v36;
    if ( (_DWORD)v37 != -1 )
    {
      v38 = *(_QWORD *)(KiProcessorBlock[v10] + 88);
      if ( *(_DWORD *)Affinity.Mask )
      {
        switch ( *(_DWORD *)Affinity.Mask )
        {
          case 1:
            v38 += 24LL;
            break;
          case 0x64:
            v38 += 48LL;
            break;
          case 0x65:
            v38 += 72LL;
            break;
          default:
            goto LABEL_46;
        }
      }
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 16);
        if ( v49 )
          *(_DWORD *)(v39 + 48 * v37 + 32) = *v49;
        else
          *(_DWORD *)(v39 + 48 * v37 + 32) = 1701736270;
      }
    }
LABEL_46:
    v7 = a3;
    ++v17;
  }
  if ( v28 == -1073741637 )
  {
    --v14[5];
    v18 = v41;
    v9 = 0;
    goto LABEL_46;
  }
  if ( v17 )
  {
    v40 = v14 + 10;
    do
    {
      guard_dispatch_icall_no_overrides(*v40, v40 + 2, v29);
      _InterlockedDecrement((_DWORD *)&HalpPmuArbiter.Header.WaitListHead.Flink + 1);
      v40 += 10;
      --v22;
    }
    while ( v22 );
  }
LABEL_10:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v9 < 0 )
    HalpMmAllocCtxFree(CurrentIrql, v14);
  v6 = (_QWORD *)v45;
LABEL_15:
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  _InterlockedCompareExchange((volatile signed __int32 *)&HalpPmuArbiter.Header.WaitListHead, 0, 1);
  if ( v9 >= 0 )
    *v6 = v14;
  return (unsigned int)v9;
}
