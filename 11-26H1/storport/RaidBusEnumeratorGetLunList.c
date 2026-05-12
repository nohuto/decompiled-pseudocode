/*
 * XREFs of RaidBusEnumeratorGetLunList @ 0x14000A2D0
 * Callers:
 *     RaidAdapterTargetedRescan @ 0x14006BF20 (RaidAdapterTargetedRescan.c)
 * Callees:
 *     RaidAdapterFindUnitAtDirql @ 0x140009C04 (RaidAdapterFindUnitAtDirql.c)
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidBusEnumeratorGetUnit @ 0x14000C0F0 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x14000CA30 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidAdapterAcquireInterruptLock @ 0x14000CD40 (RaidAdapterAcquireInterruptLock.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x14000CE10 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorProcessProbeLunZero @ 0x140070190 (RaidBusEnumeratorProcessProbeLunZero.c)
 *     RaidBusEnumeratorReAllocateDataBufferResource @ 0x140070244 (RaidBusEnumeratorReAllocateDataBufferResource.c)
 *     RaidBusEnumeratorReleaseDataBufferResource @ 0x1400702E8 (RaidBusEnumeratorReleaseDataBufferResource.c)
 *     RaidLogAllocationFailure @ 0x140095610 (RaidLogAllocationFailure.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     RaidPrepareSrbForReuse @ 0x1401B3970 (RaidPrepareSrbForReuse.c)
 *     RaidInitializeInquirySrb @ 0x1401B48C0 (RaidInitializeInquirySrb.c)
 */

__int64 __fastcall RaidBusEnumeratorGetLunList(__int64 a1, unsigned int a2, _QWORD *a3)
{
  _QWORD *v3; // rsi
  __int64 v5; // r12
  __int64 result; // rax
  unsigned int v7; // r14d
  int Unit; // edi
  void *v9; // rcx
  char v10; // r13
  _DWORD *v11; // r15
  IRP *v12; // rcx
  void *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rax
  void *v17; // rcx
  unsigned int v18; // r15d
  _DWORD *v19; // r13
  __int64 v20; // rsi
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // r15
  _DWORD *v24; // rsi
  _DWORD *v25; // rcx
  char v26; // al
  int v27; // edx
  unsigned int v28; // edi
  unsigned __int64 v29; // r14
  _QWORD **v30; // r13
  _QWORD *j; // rdi
  __int64 v32; // rax
  int v33; // eax
  _QWORD *v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // r14
  unsigned int v37; // edi
  struct _KINTERRUPT *v38; // rcx
  __int64 v39; // rdx
  _QWORD *v40; // rcx
  _DWORD *v41; // rsi
  KIRQL v42; // r13
  __int64 v43; // rdi
  __int64 v44; // r15
  unsigned int v45; // edi
  unsigned __int64 v46; // r14
  _QWORD **v47; // rax
  _QWORD *v48; // rdi
  __int64 v49; // rax
  int v50; // eax
  _QWORD *v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // r14
  unsigned int v54; // edi
  struct _KINTERRUPT *v55; // rcx
  __int64 v56; // rdx
  _QWORD *v57; // rcx
  unsigned __int8 v58; // si
  unsigned __int8 v59; // bl
  unsigned __int8 v60; // r13
  __int64 v61; // r14
  KIRQL CurrentIrql; // al
  __int64 *v63; // r15
  __int64 *m; // rdi
  _QWORD *UnitAtDirql; // r13
  __int64 v66; // rbx
  __int64 *v67; // r14
  __int64 *n; // rdi
  __int64 *v69; // rax
  KIRQL v70; // r15
  __int64 v71; // rdi
  bool v72; // cc
  int v73; // eax
  unsigned int v74; // ebx
  unsigned __int64 v75; // rdi
  unsigned int v76; // eax
  __int64 v77; // r13
  _QWORD **v78; // r13
  _QWORD *k; // rbx
  __int64 v80; // rax
  int v81; // eax
  int v82; // eax
  __int64 v83; // rdi
  unsigned int v84; // ebx
  PKINTERRUPT *v85; // r15
  PKINTERRUPT *v86; // r14
  PKINTERRUPT *v87; // r13
  __int64 v88; // rax
  __int64 v89; // r14
  __int64 Pool2; // rsi
  unsigned int v91; // r12d
  __int64 v92; // r14
  __int64 v93; // rax
  __int64 v94; // rax
  struct _KINTERRUPT *v95; // rcx
  __int64 Pool; // rax
  struct _KINTERRUPT *v97; // rcx
  PMDL Mdl; // rax
  struct _KINTERRUPT *v99; // rcx
  PIRP v100; // rax
  unsigned int v101; // r9d
  unsigned int v102; // edx
  __int64 v103; // rcx
  unsigned __int64 v104; // rax
  char Irp; // [rsp+20h] [rbp-E0h]
  char v106; // [rsp+40h] [rbp-C0h]
  char i; // [rsp+41h] [rbp-BFh]
  __int64 (__fastcall *v108)(_QWORD *); // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall *v109)(__int64, unsigned __int64); // [rsp+50h] [rbp-B0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-A8h] BYREF
  __int64 (__fastcall *v111)(__int64, unsigned __int64); // [rsp+70h] [rbp-90h]
  _QWORD *v112; // [rsp+78h] [rbp-88h]
  char v113[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v114; // [rsp+88h] [rbp-78h]
  char v115; // [rsp+DCh] [rbp-24h]
  char v116; // [rsp+DDh] [rbp-23h]
  char v117[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v118; // [rsp+E8h] [rbp-18h]
  char v119; // [rsp+13Ch] [rbp+3Ch]
  __int64 (__fastcall *v123)(_QWORD *); // [rsp+1A8h] [rbp+A8h] BYREF

  v3 = a3;
  v5 = a1;
  memset_0(v117, 0, 0x60uLL);
  result = RaidBusEnumeratorGetUnit(v5, a2, v117);
  if ( (int)result < 0 )
    return result;
  v7 = 1;
  if ( (int)RaidBusEnumeratorGetLunListFromTarget(v5, a2, v117, v3) >= 0 )
    goto LABEL_51;
  memset_0(v113, 0, 0x60uLL);
  Unit = RaidBusEnumeratorGetUnit(v5, a2, v113);
  if ( Unit < 0 )
    goto LABEL_49;
  LOBYTE(v123) = 0;
  LODWORD(v108) = 0;
  v106 = 0;
  for ( i = 0; ; i = 1 )
  {
    v9 = *(void **)(v5 + 24);
    v10 = 1;
    v11 = *(_DWORD **)v5;
    if ( v9 )
    {
      RaidPrepareSrbForReuse(v9);
      goto LABEL_7;
    }
    if ( *v11 == 1314275652 )
    {
      v88 = (__int64)v11 + 274;
    }
    else if ( *v11 == 1094997074 )
    {
      v88 = (__int64)v11 + 482;
    }
    else
    {
      v88 = 98LL;
    }
    v89 = *((_QWORD *)v11 + 1);
    if ( *(_BYTE *)v88 != 1 )
    {
      Pool2 = ExAllocatePool2(64LL, 88LL, 1918067026LL);
      if ( !Pool2 && v89 )
        RaidLogAllocationFailure(v89, 64, 88, 1918067026, 0x80000000);
      goto LABEL_122;
    }
    v94 = ExAllocatePool2(64LL, 184LL, 1918067026LL);
    Pool2 = v94;
    if ( !v94 )
    {
      if ( v89 )
        break;
    }
    if ( v94 )
    {
      *(_WORD *)v94 = 8;
      *(_DWORD *)(v94 + 12) = 1;
      *(_BYTE *)(v94 + 2) = 40;
      *(_DWORD *)(v94 + 8) = 1397899864;
      *(_DWORD *)(v94 + 16) = 184;
      *(_DWORD *)(v94 + 20) = 0;
      *(_WORD *)(v94 + 36) = 2;
      *(_DWORD *)(v94 + 52) = 128;
      *(_DWORD *)(v94 + 56) = 1;
      *(_WORD *)(v94 + 128) = 1;
      *(_DWORD *)(v94 + 132) = 4;
      *(_DWORD *)(v94 + 120) = 144;
      *(_QWORD *)(v5 + 24) = v94;
      goto LABEL_7;
    }
LABEL_122:
    *(_QWORD *)(v5 + 24) = Pool2;
    if ( !Pool2 )
      goto LABEL_29;
LABEL_7:
    if ( !*(_QWORD *)(v5 + 32) )
    {
      Pool = RaidAllocatePool(64LL, 18LL, 1314087250LL, *((_QWORD *)v11 + 1));
      *(_QWORD *)(v5 + 32) = Pool;
      if ( !Pool )
        goto LABEL_29;
      v10 = 0;
    }
    v12 = *(IRP **)(v5 + 8);
    if ( v12 )
    {
      IoReuseIrp(v12, -1073741823);
    }
    else
    {
      v100 = IoAllocateIrp(1, 0);
      *(_QWORD *)(v5 + 8) = v100;
      if ( !v100 )
        goto LABEL_29;
    }
    v13 = *(void **)(v5 + 40);
    if ( v13 )
    {
      if ( *(_DWORD *)(v5 + 48) >= 0x24u )
        goto LABEL_12;
      ExFreePoolWithTag(*(PVOID *)(v5 + 40), 0x32316152u);
    }
    *(_DWORD *)(v5 + 48) = 512;
    v92 = *((_QWORD *)v11 + 1);
    v93 = ExAllocatePool2(64LL, 512LL, 842096978LL);
    v13 = (void *)v93;
    if ( !v93 && v92 )
    {
      RaidLogAllocationFailure(v92, 64, 512, 842096978, 0x80000000);
      *(_QWORD *)(v5 + 40) = 0LL;
LABEL_129:
      *(_DWORD *)(v5 + 48) = 0;
      goto LABEL_29;
    }
    *(_QWORD *)(v5 + 40) = v93;
    if ( !v93 )
      goto LABEL_129;
LABEL_12:
    v14 = *(_QWORD *)(v5 + 16);
    if ( v14 )
    {
      if ( (*(_BYTE *)(v14 + 10) & 0x20) != 0 )
        MmUnmapLockedPages(*(PVOID *)(v14 + 24), *(PMDL *)(v5 + 16));
      v15 = 0LL;
    }
    else
    {
      v15 = 0LL;
      Mdl = IoAllocateMdl(v13, *(_DWORD *)(v5 + 48), 0, 0, 0LL);
      *(_QWORD *)(v5 + 16) = Mdl;
      if ( !Mdl )
        goto LABEL_29;
      if ( (Mdl->MdlFlags & 0x20) != 0 )
        MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
    }
    v16 = *(_QWORD *)(v5 + 32);
    if ( v16 && v10 )
    {
      *(_OWORD *)v16 = 0LL;
      *(_WORD *)(v16 + 16) = 0;
    }
    v17 = *(void **)(v5 + 40);
    if ( v17 )
      memset_0(v17, 0, *(unsigned int *)(v5 + 48));
    v18 = (unsigned int)v108;
    v19 = *(_DWORD **)v5;
    v20 = *(_QWORD *)(v5 + 24);
    if ( (unsigned int)v108 < 0x24 )
      v18 = 36;
    if ( *v19 == 1314275652 )
    {
      v21 = (__int64)v19 + 274;
    }
    else if ( *v19 == 1094997074 )
    {
      v21 = (__int64)v19 + 482;
    }
    else
    {
      v21 = 98LL;
    }
    RaidInitializeInquirySrb(v20, (unsigned __int8)a2, BYTE1(a2), BYTE2(a2), *(_QWORD *)(v5 + 40), v18, *(_BYTE *)v21);
    if ( *(_BYTE *)v21 == 1 )
    {
      *(_DWORD *)(v20 + 24) |= 0x80110u;
      v101 = *(_DWORD *)(v20 + 56);
      v102 = 0;
      *(_QWORD *)(v20 + 104) = 0LL;
      *(_QWORD *)(v20 + 64) = *(_QWORD *)(v5 + 40);
      *(_DWORD *)(v20 + 60) = v18;
      if ( v101 )
      {
        while ( 1 )
        {
          v103 = *(unsigned int *)(v20 + 4LL * v102 + 120);
          if ( (unsigned int)v103 >= 0x80 )
          {
            v104 = *(unsigned int *)(v20 + 16);
            if ( (unsigned int)v103 <= (unsigned int)v104 && *(_DWORD *)(v20 + v103) == 64 && v103 + 40 <= v104 )
              break;
          }
          if ( ++v102 >= v101 )
            goto LABEL_28;
        }
        v15 = (unsigned int)v103 + v20 + 24;
        *(_QWORD *)(v20 + (unsigned int)v103 + 16) = *(_QWORD *)(v5 + 32);
        *(_BYTE *)(v20 + (unsigned int)v103 + 9) = 18;
      }
    }
    else
    {
      v15 = v20 + 72;
      *(_QWORD *)(v20 + 56) = 0LL;
      *(_QWORD *)(v20 + 32) = *(_QWORD *)(v5 + 32);
      *(_BYTE *)(v20 + 11) = 18;
      v22 = *(_QWORD *)(v5 + 40);
      *(_DWORD *)(v20 + 12) |= 0x80110u;
      *(_QWORD *)(v20 + 24) = v22;
      *(_DWORD *)(v20 + 16) = v18;
    }
LABEL_28:
    *(_BYTE *)(v15 + 1) &= ~1u;
    *(_BYTE *)(v15 + 2) = 0;
    if ( (int)RaidBusEnumeratorIssueSynchronousRequest(v5, (unsigned int)v113, (int)v5 + 8, v20, Irp) < 0 )
      goto LABEL_29;
    RaidBusEnumeratorProcessProbeLunZero(v5, v20, v113, &v123, &v108);
    if ( !(_BYTE)v123 || v106 || (int)RaidBusEnumeratorReAllocateDataBufferResource(v5, v5 + 8, (unsigned int)v108) < 0 )
      goto LABEL_29;
    v106 = 1;
  }
  RaidLogAllocationFailure(v89, 64, 184, 1918067026, 0x80000000);
  *(_QWORD *)(v5 + 24) = 0LL;
LABEL_29:
  if ( i )
    RaidBusEnumeratorReleaseDataBufferResource(v5);
  v23 = v114;
  v24 = *(_DWORD **)v5;
  if ( v115 )
  {
    v25 = *(_DWORD **)v5;
    memset(&LockHandle, 0, sizeof(LockHandle));
    v26 = RaidAdapterAcquireInterruptLock(v25);
    v27 = *(_DWORD *)(v23 + 104);
    v28 = v24[43];
    LOBYTE(v123) = v26;
    v108 = (__int64 (__fastcall *)(_QWORD *))*((_QWORD *)v24 + 24);
    v109 = (__int64 (__fastcall *)(__int64, unsigned __int64))*((_QWORD *)v24 + 25);
    v29 = BYTE2(v27) | ((((unsigned __int64)(unsigned __int8)v27 << 8) | BYTE1(v27)) << 8);
    v30 = (_QWORD **)(16LL * ((*((unsigned int (__fastcall **)(unsigned __int64))v24 + 26))(v29) % v28)
                    + *((_QWORD *)v24 + 23));
    for ( j = *v30; ; j = (_QWORD *)*j )
    {
      if ( j == v30 )
        goto LABEL_38;
      v32 = v108(j);
      v33 = v109(v32, v29);
      if ( !v33 )
        break;
      if ( v33 < 0 )
        goto LABEL_38;
    }
    v34 = (_QWORD *)*j;
    if ( *(_QWORD **)(*j + 8LL) == j )
    {
      v35 = (_QWORD *)j[1];
      if ( (_QWORD *)*v35 == j )
      {
        *v35 = v34;
        v34[1] = v35;
        --v24[42];
LABEL_38:
        if ( *((_BYTE *)v24 + 4433) )
        {
          v36 = *((_QWORD *)v24 + 552);
          if ( v24[1100] == 2 )
          {
            v37 = *(_DWORD *)(v36 + 4) - 1;
            if ( *(_DWORD *)(v36 + 4) != 1 )
            {
              v87 = (PKINTERRUPT *)(v36 + 48LL * v37 + 24);
              do
              {
                KeReleaseInterruptSpinLock(*v87, *(_BYTE *)v36);
                v87 -= 6;
                --v37;
              }
              while ( v37 );
            }
          }
          v38 = *(struct _KINTERRUPT **)(v36 + 24);
LABEL_42:
          KeReleaseInterruptSpinLock(v38, (KIRQL)v123);
        }
        else
        {
          v38 = (struct _KINTERRUPT *)*((_QWORD *)v24 + 108);
          if ( v38 )
            goto LABEL_42;
        }
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v24 + 17, &LockHandle);
        v39 = *(_QWORD *)(v23 + 64);
        if ( *(_QWORD *)(v39 + 8) == v23 + 64 )
        {
          v40 = *(_QWORD **)(v23 + 72);
          if ( *v40 == v23 + 64 )
          {
            *v40 = v39;
            *(_QWORD *)(v39 + 8) = v40;
            --v24[40];
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            KeCancelTimer((PKTIMER)(v23 + 1184));
            *(_DWORD *)(v114 + 744) = 0;
            goto LABEL_46;
          }
        }
      }
    }
LABEL_152:
    __fastfail(3u);
  }
LABEL_46:
  Unit = -1073741810;
  v3 = a3;
  if ( v116 )
    Unit = 0;
  v7 = 1;
LABEL_49:
  memset_0(v3, 0, 0xFFuLL);
  if ( Unit >= 0 )
    *v3 = 0x101010101010101LL;
LABEL_51:
  v41 = *(_DWORD **)v5;
  if ( v119 )
  {
    v42 = 0;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( *((_BYTE *)v41 + 4433) )
    {
      v43 = *((_QWORD *)v41 + 552);
      v42 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v43 + 24));
      if ( v41[1100] == 2 && *(_DWORD *)(v43 + 4) > 1u )
      {
        do
          KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v43 + 48LL * v7++ + 24));
        while ( v7 < *(_DWORD *)(v43 + 4) );
      }
    }
    else
    {
      v97 = (struct _KINTERRUPT *)*((_QWORD *)v41 + 108);
      if ( v97 )
        v42 = KeAcquireInterruptSpinLock(v97);
    }
    v44 = v118;
    v45 = v41[43];
    v46 = (unsigned __int8)BYTE2(*(_DWORD *)(v118 + 104)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v118 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v118 + 104))) << 8);
    v123 = (__int64 (__fastcall *)(_QWORD *))*((_QWORD *)v41 + 24);
    v109 = (__int64 (__fastcall *)(__int64, unsigned __int64))*((_QWORD *)v41 + 25);
    v47 = (_QWORD **)(16LL * ((*((unsigned int (__fastcall **)(unsigned __int64))v41 + 26))(v46) % v45)
                    + *((_QWORD *)v41 + 23));
    v108 = (__int64 (__fastcall *)(_QWORD *))v47;
    v48 = *v47;
    while ( 1 )
    {
      if ( v48 == v47 )
        goto LABEL_61;
      v49 = v123(v48);
      v50 = v109(v49, v46);
      if ( !v50 )
        break;
      if ( v50 < 0 )
        goto LABEL_61;
      v48 = (_QWORD *)*v48;
      v47 = (_QWORD **)v108;
    }
    v51 = (_QWORD *)*v48;
    if ( *(_QWORD **)(*v48 + 8LL) != v48 )
      goto LABEL_152;
    v52 = (_QWORD *)v48[1];
    if ( (_QWORD *)*v52 != v48 )
      goto LABEL_152;
    *v52 = v51;
    v51[1] = v52;
    --v41[42];
LABEL_61:
    if ( *((_BYTE *)v41 + 4433) )
    {
      v53 = *((_QWORD *)v41 + 552);
      if ( v41[1100] == 2 )
      {
        v54 = *(_DWORD *)(v53 + 4) - 1;
        if ( *(_DWORD *)(v53 + 4) != 1 )
        {
          v85 = (PKINTERRUPT *)(v53 + 48LL * v54 + 24);
          do
          {
            KeReleaseInterruptSpinLock(*v85, *(_BYTE *)v53);
            v85 -= 6;
            --v54;
          }
          while ( v54 );
          v44 = v118;
        }
      }
      v55 = *(struct _KINTERRUPT **)(v53 + 24);
LABEL_65:
      KeReleaseInterruptSpinLock(v55, v42);
    }
    else
    {
      v55 = (struct _KINTERRUPT *)*((_QWORD *)v41 + 108);
      if ( v55 )
        goto LABEL_65;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v41 + 17, &LockHandle);
    v56 = *(_QWORD *)(v44 + 64);
    if ( *(_QWORD *)(v56 + 8) != v44 + 64 )
      goto LABEL_152;
    v57 = *(_QWORD **)(v44 + 72);
    if ( *v57 != v44 + 64 )
      goto LABEL_152;
    *v57 = v56;
    *(_QWORD *)(v56 + 8) = v57;
    --v41[40];
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeCancelTimer((PKTIMER)(v44 + 1184));
    *(_DWORD *)(v44 + 744) = 0;
  }
  LODWORD(v123) = a2;
  v58 = 0;
  v59 = BYTE1(a2);
  v60 = (unsigned __int8)v123;
  do
  {
    v61 = *(_QWORD *)v5;
    BYTE2(v123) = v58;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      if ( (unsigned int)CurrentIrql >= *(_DWORD *)(v61 + 872) )
      {
        UnitAtDirql = RaidAdapterFindUnitAtDirql(v61, (int)v123);
      }
      else
      {
        v70 = 0;
        if ( *(_BYTE *)(v61 + 4433) )
        {
          v71 = *(_QWORD *)(v61 + 4416);
          v70 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v71 + 24));
          if ( *(_DWORD *)(v61 + 4400) == 2 )
          {
            v72 = *(_DWORD *)(v71 + 4) <= 1u;
            LODWORD(v108) = 1;
            if ( !v72 )
            {
              v91 = (unsigned int)v108;
              do
                KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v71 + 48LL * v91++ + 24));
              while ( v91 < *(_DWORD *)(v71 + 4) );
              v5 = a1;
            }
          }
        }
        else
        {
          v99 = *(struct _KINTERRUPT **)(v61 + 864);
          if ( v99 )
            v70 = KeAcquireInterruptSpinLock(v99);
        }
        v112 = 0LL;
        v73 = v59;
        v74 = *(_DWORD *)(v61 + 172);
        v75 = v58 | (unsigned __int64)((v73 | (v60 << 8)) << 8);
        v109 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(v61 + 192);
        v111 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(v61 + 200);
        v76 = (*(__int64 (__fastcall **)(unsigned __int64))(v61 + 208))(v75);
        v77 = *(_QWORD *)(v61 + 184);
        LODWORD(v108) = -1073741275;
        v78 = (_QWORD **)(16LL * (v76 % v74) + v77);
        for ( k = *v78; ; k = (_QWORD *)*k )
        {
          if ( k == v78 )
          {
            k = v112;
            v82 = (int)v108;
            goto LABEL_94;
          }
          v80 = ((__int64 (__fastcall *)(_QWORD *))v109)(k);
          v81 = v111(v80, v75);
          if ( !v81 )
          {
            v82 = 0;
            goto LABEL_94;
          }
          if ( v81 < 0 )
            break;
        }
        v82 = -1073741275;
        k = 0LL;
LABEL_94:
        UnitAtDirql = k - 10;
        if ( v82 < 0 )
          UnitAtDirql = 0LL;
        if ( *(_BYTE *)(v61 + 4433) )
        {
          v83 = *(_QWORD *)(v61 + 4416);
          if ( *(_DWORD *)(v61 + 4400) == 2 )
          {
            v84 = *(_DWORD *)(v83 + 4) - 1;
            if ( *(_DWORD *)(v83 + 4) != 1 )
            {
              v86 = (PKINTERRUPT *)(v83 + 48LL * v84 + 24);
              do
              {
                KeReleaseInterruptSpinLock(*v86, *(_BYTE *)v83);
                v86 -= 6;
                --v84;
              }
              while ( v84 );
            }
          }
          KeReleaseInterruptSpinLock(*(PKINTERRUPT *)(v83 + 24), v70);
        }
        else
        {
          v95 = *(struct _KINTERRUPT **)(v61 + 864);
          if ( v95 )
            KeReleaseInterruptSpinLock(v95, v70);
        }
      }
    }
    else
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      v63 = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v61 + 136), &LockHandle);
      for ( m = *(__int64 **)(v61 + 144); m != (__int64 *)(v61 + 144); m = (__int64 *)*m )
      {
        v63 = m - 8;
        if ( ((unsigned __int8)BYTE2(*((_DWORD *)m + 10)) | ((((unsigned __int8)*((_DWORD *)m + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)m + 10))) << 8)) == (v58 | ((v59 | (v60 << 8)) << 8)) )
          break;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      UnitAtDirql = 0LL;
      if ( m != (__int64 *)(v61 + 144) )
        UnitAtDirql = v63;
    }
    if ( UnitAtDirql )
      goto LABEL_151;
    v66 = *(_QWORD *)v5;
    v67 = 0LL;
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v66 + 216), &LockHandle);
    for ( n = *(__int64 **)(v66 + 224); n != (__int64 *)(v66 + 224); n = (__int64 *)*n )
    {
      v67 = n - 8;
      if ( ((unsigned __int8)BYTE2(*((_DWORD *)n + 10)) | ((((unsigned __int8)*((_DWORD *)n + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)n + 10))) << 8)) == (v58 | ((BYTE1(v123) | ((unsigned __int8)v123 << 8)) << 8)) )
        break;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v69 = 0LL;
    if ( n != (__int64 *)(v66 + 224) )
      v69 = v67;
    if ( v69 )
LABEL_151:
      *((_BYTE *)a3 + v58) = 1;
    v59 = BYTE1(v123);
    ++v58;
    v60 = (unsigned __int8)v123;
  }
  while ( v58 != 0xFF );
  return 0LL;
}
