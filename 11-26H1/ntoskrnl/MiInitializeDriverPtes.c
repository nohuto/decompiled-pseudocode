/*
 * XREFs of MiInitializeDriverPtes @ 0x140CFAA44
 * Callers:
 *     MiInitializeSystemImageRegion @ 0x140D06CC4 (MiInitializeSystemImageRegion.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     MiCheckForBootMappingsBetweenDrivers @ 0x140CFA720 (MiCheckForBootMappingsBetweenDrivers.c)
 *     MiReserveBootDriverPtes @ 0x140CFAD14 (MiReserveBootDriverPtes.c)
 */

__int64 __fastcall MiInitializeDriverPtes(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 *v2; // rdi
  __int64 *v3; // rbx
  PVOID v4; // rdx
  PVOID *p_SystemArgument2; // rax
  __int64 PoolMm; // rax
  _QWORD *v7; // r9
  bool v8; // r8
  _QWORD *v9; // rdx
  unsigned __int64 v10; // r10
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  ULONG_PTR v16; // r9
  _QWORD **v17; // rcx
  _QWORD *v18; // rax
  _QWORD *i; // rcx
  _QWORD *j; // rbx
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  _QWORD **v24; // rcx
  void *v25; // rdi
  _QWORD *v26; // rax
  _QWORD *k; // rcx
  _QWORD *v28; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = (__int64 *)(a1 + 16);
  v3 = *(__int64 **)(a1 + 16);
  v28 = 0LL;
  while ( v3 != v2 )
  {
    v4 = (PVOID)v3[6];
    if ( v4 == PsNtosImageBase
      || (p_SystemArgument2 = (PVOID *)&stru_140E2D2D0.SchedulerApcFill5[76], v4 == PsHalImageBase) )
    {
      p_SystemArgument2 = &stru_140E2D2D0.SchedulerApc.SystemArgument2;
    }
    _InterlockedAdd((volatile signed __int32 *)p_SystemArgument2, (*((_DWORD *)v3 + 16) >> 12) + ((v3[8] & 0xFFF) != 0));
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v3[6]) )
      goto LABEL_17;
    PoolMm = ExAllocatePoolMm(
               64LL,
               0x20uLL,
               1883532621,
               KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    v7 = (_QWORD *)PoolMm;
    if ( !PoolMm )
      return 0LL;
    *(_QWORD *)(PoolMm + 24) = v3;
    v8 = 0;
    v9 = v28;
    v10 = v3[6];
    if ( !v28 )
      goto LABEL_16;
    while ( 1 )
    {
      v11 = v9[3];
      v12 = *(_QWORD *)(v11 + 48);
      if ( v10 > v12 + (unsigned int)(*(_DWORD *)(v11 + 64) - 1) || v10 >= v12 )
        break;
      v13 = (_QWORD *)*v9;
      if ( !*v9 )
      {
        v8 = 0;
        goto LABEL_16;
      }
LABEL_14:
      v9 = v13;
    }
    v13 = (_QWORD *)v9[1];
    if ( v13 )
      goto LABEL_14;
    v8 = 1;
LABEL_16:
    RtlAvlInsertNodeEx((unsigned __int64 *)&v28, (unsigned __int64)v9, v8, v7);
LABEL_17:
    v3 = (__int64 *)*v3;
    v1 = v28;
  }
  v14 = 0LL;
  while ( v1 )
  {
    v14 = v1;
    v1 = (_QWORD *)*v1;
  }
  while ( v14 )
  {
    v15 = v14[3];
    v16 = *(unsigned int *)(v15 + 64);
    if ( ((*(_QWORD *)(v15 + 48) >> 9) & 0xFFF8) << 9 )
      KeBugCheckEx(
        0x1Au,
        0x1019uLL,
        (((*(_QWORD *)(v15 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) << 25 >> 16,
        v16,
        0LL);
    if ( !(unsigned int)MiReserveBootDriverPtes(
                          ((*(_QWORD *)(v15 + 48) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                          (unsigned int)(v16 + 4095) >> 12) )
      return 0LL;
    v17 = (_QWORD **)v14[1];
    v18 = v14;
    if ( v17 )
    {
      v14 = (_QWORD *)v14[1];
      for ( i = *v17; i; i = (_QWORD *)*i )
        v14 = i;
    }
    else
    {
      while ( 1 )
      {
        v14 = (_QWORD *)(v14[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v14 || (_QWORD *)*v14 == v18 )
          break;
        v18 = v14;
      }
    }
  }
  for ( j = stru_140E2D2D0.SchedulerApc.SystemArgument1; j; j = (_QWORD *)*j )
    MiCheckForBootMappingsBetweenDrivers((__int64)j);
  if ( (KiFeatureSettings & 0x20000) == 0 )
    stru_140E2DAB0.WaitBlock[1].SparePtr = (PVOID)((((__int64)((*(_QWORD *)(*(_QWORD *)stru_140E2D2D0.SchedulerApc.SystemArgument1
                                                                          + 8LL) << 25)
                                                             + ((unsigned __int64)(unsigned int)(16
                                                                                               * *(_DWORD *)(*(_QWORD *)stru_140E2D2D0.SchedulerApc.SystemArgument1 + 16LL)) << 28)) >> 16)
                                                  - (unsigned __int64)stru_140E2DAB0.WaitBlock[2].WaitListEntry.Flink) >> 21);
  v22 = v28;
  v23 = 0LL;
  while ( v22 )
  {
    v23 = v22;
    v22 = (_QWORD *)*v22;
  }
  while ( v23 )
  {
    v24 = (_QWORD **)v23[1];
    v25 = v23;
    v26 = v23;
    if ( v24 )
    {
      v23 = (_QWORD *)v23[1];
      for ( k = *v24; k; k = (_QWORD *)*k )
        v23 = k;
    }
    else
    {
      while ( 1 )
      {
        v23 = (_QWORD *)(v23[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v23 || (_QWORD *)*v23 == v26 )
          break;
        v26 = v23;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v28, (__int64)v25);
    ExFreePoolWithTag(v25, 0);
  }
  return 1LL;
}
