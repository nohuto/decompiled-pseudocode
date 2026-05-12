/*
 * XREFs of RaidAdapterEnumerateBus @ 0x14000B1B0
 * Callers:
 *     RaidAdapterRescanBus @ 0x140036EE4 (RaidAdapterRescanBus.c)
 * Callees:
 *     RaidAdapterFindUnitAtDirql @ 0x140009C04 (RaidAdapterFindUnitAtDirql.c)
 *     RaidBusEnumeratorVisitUnit @ 0x140009CE4 (RaidBusEnumeratorVisitUnit.c)
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidBusEnumeratorGetUnit @ 0x14000C0F0 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x14000CA30 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidAdapterAcquireInterruptLock @ 0x14000CD40 (RaidAdapterAcquireInterruptLock.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x14000CE10 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorProcessProbeLunZero @ 0x140070190 (RaidBusEnumeratorProcessProbeLunZero.c)
 *     RaidBusEnumeratorReAllocateDataBufferResource @ 0x140070244 (RaidBusEnumeratorReAllocateDataBufferResource.c)
 *     RaidBusEnumeratorReleaseDataBufferResource @ 0x1400702E8 (RaidBusEnumeratorReleaseDataBufferResource.c)
 *     RaidLogAllocationFailure @ 0x140095610 (RaidLogAllocationFailure.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     RaidPrepareSrbForReuse @ 0x1401B3970 (RaidPrepareSrbForReuse.c)
 *     RaidInitializeInquirySrb @ 0x1401B48C0 (RaidInitializeInquirySrb.c)
 */

__int64 __fastcall RaidAdapterEnumerateBus(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  _QWORD *UnitAtDirql; // r12
  unsigned int v5; // ebx
  unsigned int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned __int8 v11; // r14
  unsigned __int8 v12; // si
  unsigned int v13; // r15d
  __int64 result; // rax
  int Unit; // ebx
  void *v16; // rcx
  __int64 v17; // r12
  IRP *v18; // rcx
  void *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rax
  void *v22; // rcx
  unsigned int v23; // r12d
  _DWORD *v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rdi
  __int64 v31; // rcx
  KIRQL v32; // al
  unsigned int v33; // ebx
  unsigned __int64 v34; // rsi
  _QWORD **v35; // r12
  _QWORD *j; // rbx
  __int64 v37; // rax
  int v38; // eax
  _QWORD *v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rsi
  unsigned int v42; // ebx
  struct _KINTERRUPT *v43; // rcx
  __int64 v44; // rdx
  _QWORD *v45; // rax
  __int64 v46; // rdi
  KIRQL v47; // r12
  __int64 v48; // rbx
  unsigned int k; // esi
  __int64 v50; // r14
  unsigned int v51; // ebx
  unsigned __int64 v52; // rsi
  _QWORD **v53; // rax
  _QWORD *v54; // rbx
  __int64 v55; // rax
  int v56; // eax
  _QWORD *v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rsi
  unsigned int v60; // ebx
  struct _KINTERRUPT *v61; // rcx
  __int64 v62; // rdx
  _QWORD *v63; // rax
  unsigned __int8 v64; // si
  __int64 v65; // r15
  KIRQL CurrentIrql; // al
  __int64 *v67; // r14
  __int64 *n; // rdi
  __int64 v69; // rbx
  __int64 *v70; // r14
  __int64 *ii; // rdi
  __int64 *v72; // rax
  unsigned int jj; // ebx
  __int64 v74; // rbx
  unsigned int m; // edi
  unsigned int v76; // ebx
  unsigned __int64 v77; // r14
  int v78; // edi
  _QWORD **v79; // rax
  _QWORD *v80; // rbx
  __int64 v81; // rax
  int v82; // eax
  __int64 v83; // rdi
  unsigned int v84; // ebx
  PKINTERRUPT *v85; // r14
  PKINTERRUPT *v86; // r14
  PKINTERRUPT *v87; // r12
  __int64 v88; // rax
  __int64 v89; // r12
  __int64 Pool2; // rdi
  __int64 v91; // r12
  __int64 v92; // rax
  __int64 v93; // rax
  struct _KINTERRUPT *v94; // rcx
  __int64 Pool; // rax
  struct _KINTERRUPT *v96; // rcx
  PMDL Mdl; // rax
  void *MappedSystemVa; // rcx
  struct _MDL *v99; // rdx
  struct _KINTERRUPT *v100; // rcx
  PIRP v101; // rax
  unsigned int v102; // r8d
  __int64 v103; // rax
  unsigned int v104; // edx
  __int64 v105; // rcx
  unsigned __int64 v106; // rax
  char Irp; // [rsp+20h] [rbp-E0h]
  char v108; // [rsp+40h] [rbp-C0h]
  KIRQL v109; // [rsp+40h] [rbp-C0h]
  char i; // [rsp+41h] [rbp-BFh]
  KIRQL v111; // [rsp+41h] [rbp-BFh]
  char v112; // [rsp+42h] [rbp-BEh] BYREF
  char v113; // [rsp+43h] [rbp-BDh]
  _QWORD **v114; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v115; // [rsp+50h] [rbp-B0h]
  __int64 v116; // [rsp+58h] [rbp-A8h]
  __int64 v117; // [rsp+60h] [rbp-A0h]
  unsigned int v118; // [rsp+68h] [rbp-98h]
  unsigned int v119; // [rsp+6Ch] [rbp-94h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v121; // [rsp+88h] [rbp-78h]
  unsigned int v122; // [rsp+8Ch] [rbp-74h]
  unsigned int v123; // [rsp+90h] [rbp-70h]
  _QWORD **v124; // [rsp+98h] [rbp-68h]
  _BYTE v125[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v126; // [rsp+A8h] [rbp-58h]
  char v127; // [rsp+FCh] [rbp-4h]
  char v128; // [rsp+FDh] [rbp-3h]
  _BYTE v129[8]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v130; // [rsp+108h] [rbp+8h]
  char v131; // [rsp+15Ch] [rbp+5Ch]
  _QWORD v132[32]; // [rsp+160h] [rbp+60h] BYREF

  v3 = a1[456];
  UnitAtDirql = 0LL;
  v5 = a1[481];
  v7 = a1[530];
  v115 = 0;
  v123 = v3;
  v8 = 0;
  v122 = v5;
  v121 = v7;
  memset_0(v132, 1, 0xFFuLL);
  v9 = 0;
LABEL_2:
  v119 = v9;
  if ( v9 < v3 )
  {
    v10 = 0;
    while ( 1 )
    {
      v118 = v10;
      if ( v10 >= v5 )
      {
        v3 = v123;
        ++v9;
        goto LABEL_2;
      }
      v11 = v9;
      v12 = v10;
      LOBYTE(v115) = v9;
      v13 = (unsigned __int8)v9 | ((unsigned __int8)v10 << 8);
      BYTE1(v115) = v10;
      HIWORD(v115) = 0;
      memset_0(v129, 0, 0x60uLL);
      result = RaidBusEnumeratorGetUnit(a3, v13, v129);
      if ( (int)result < 0 )
        return result;
      if ( (int)RaidBusEnumeratorGetLunListFromTarget(a3, v13, v129, v132) >= 0 )
        goto LABEL_52;
      memset_0(v125, 0, 0x60uLL);
      Unit = RaidBusEnumeratorGetUnit(a3, v13, v125);
      if ( Unit < 0 )
        goto LABEL_50;
      v112 = 0;
      LODWORD(v114) = 0;
      v113 = 0;
      for ( i = 0; ; i = 1 )
      {
        v16 = *(void **)(a3 + 24);
        v17 = *(_QWORD *)a3;
        v108 = 1;
        v116 = *(_QWORD *)a3;
        if ( v16 )
        {
          RaidPrepareSrbForReuse(v16);
          goto LABEL_11;
        }
        if ( *(_DWORD *)v17 == 1314275652 )
        {
          v88 = v17 + 274;
        }
        else if ( *(_DWORD *)v17 == 1094997074 )
        {
          v88 = v17 + 482;
        }
        else
        {
          v88 = 98LL;
        }
        v89 = *(_QWORD *)(v17 + 8);
        if ( *(_BYTE *)v88 != 1 )
        {
          Pool2 = ExAllocatePool2(64LL, 88LL, 1918067026LL);
          if ( !Pool2 && v89 )
            RaidLogAllocationFailure(v89, 64, 88, 1918067026, 0x80000000);
          goto LABEL_126;
        }
        v93 = ExAllocatePool2(64LL, 184LL, 1918067026LL);
        Pool2 = v93;
        if ( !v93 )
        {
          if ( v89 )
            break;
        }
        if ( v93 )
        {
          v17 = v116;
          *(_DWORD *)(v93 + 12) = 1;
          *(_WORD *)v93 = 8;
          *(_BYTE *)(v93 + 2) = 40;
          *(_DWORD *)(v93 + 8) = 1397899864;
          *(_DWORD *)(v93 + 16) = 184;
          *(_DWORD *)(v93 + 20) = 0;
          *(_WORD *)(v93 + 36) = 2;
          *(_DWORD *)(v93 + 52) = 128;
          *(_DWORD *)(v93 + 56) = 1;
          *(_WORD *)(v93 + 128) = 1;
          *(_DWORD *)(v93 + 132) = 4;
          *(_DWORD *)(v93 + 120) = 144;
          *(_QWORD *)(a3 + 24) = v93;
          goto LABEL_11;
        }
LABEL_126:
        *(_QWORD *)(a3 + 24) = Pool2;
        if ( !Pool2 )
          goto LABEL_165;
        v17 = v116;
LABEL_11:
        if ( !*(_QWORD *)(a3 + 32) )
        {
          Pool = RaidAllocatePool(64LL, 18LL, 1314087250LL, *(_QWORD *)(v17 + 8));
          *(_QWORD *)(a3 + 32) = Pool;
          if ( !Pool )
            goto LABEL_165;
          v108 = 0;
        }
        v18 = *(IRP **)(a3 + 8);
        if ( v18 )
        {
          IoReuseIrp(v18, -1073741823);
        }
        else
        {
          v101 = IoAllocateIrp(1, 0);
          *(_QWORD *)(a3 + 8) = v101;
          if ( !v101 )
            goto LABEL_165;
        }
        v19 = *(void **)(a3 + 40);
        if ( v19 )
        {
          if ( *(_DWORD *)(a3 + 48) >= 0x24u )
            goto LABEL_16;
          ExFreePoolWithTag(*(PVOID *)(a3 + 40), 0x32316152u);
        }
        *(_DWORD *)(a3 + 48) = 512;
        v91 = *(_QWORD *)(v17 + 8);
        v92 = ExAllocatePool2(64LL, 512LL, 842096978LL);
        v19 = (void *)v92;
        if ( !v92 && v91 )
        {
          RaidLogAllocationFailure(v91, 64, 512, 842096978, 0x80000000);
          *(_QWORD *)(a3 + 40) = 0LL;
LABEL_132:
          UnitAtDirql = 0LL;
          *(_DWORD *)(a3 + 48) = 0;
          goto LABEL_31;
        }
        *(_QWORD *)(a3 + 40) = v92;
        if ( !v92 )
          goto LABEL_132;
LABEL_16:
        v20 = *(_QWORD *)(a3 + 16);
        if ( v20 )
        {
          if ( (*(_BYTE *)(v20 + 10) & 0x20) != 0 )
          {
            v99 = *(struct _MDL **)(a3 + 16);
            MappedSystemVa = *(void **)(v20 + 24);
            goto LABEL_183;
          }
        }
        else
        {
          UnitAtDirql = 0LL;
          Mdl = IoAllocateMdl(v19, *(_DWORD *)(a3 + 48), 0, 0, 0LL);
          *(_QWORD *)(a3 + 16) = Mdl;
          if ( !Mdl )
            goto LABEL_31;
          if ( (Mdl->MdlFlags & 0x20) != 0 )
          {
            MappedSystemVa = Mdl->MappedSystemVa;
            v99 = Mdl;
LABEL_183:
            MmUnmapLockedPages(MappedSystemVa, v99);
          }
        }
        v21 = *(_QWORD *)(a3 + 32);
        if ( v21 && v108 )
        {
          *(_OWORD *)v21 = 0LL;
          *(_WORD *)(v21 + 16) = 0;
        }
        v22 = *(void **)(a3 + 40);
        if ( v22 )
          memset_0(v22, 0, *(unsigned int *)(a3 + 48));
        v23 = (unsigned int)v114;
        v24 = *(_DWORD **)a3;
        v25 = *(_QWORD *)(a3 + 24);
        v26 = *(_QWORD *)(a3 + 40);
        if ( (unsigned int)v114 < 0x24 )
          v23 = 36;
        v116 = 0LL;
        if ( *v24 == 1314275652 )
        {
          v117 = (__int64)v24 + 274;
        }
        else if ( *v24 == 1094997074 )
        {
          v117 = (__int64)v24 + 482;
        }
        else
        {
          v117 = 98LL;
        }
        RaidInitializeInquirySrb(v25, v11, v12, 0, v26, v23, *(_BYTE *)v117);
        if ( *(_BYTE *)v117 == 1 )
        {
          *(_DWORD *)(v25 + 24) |= 0x80110u;
          v102 = *(_DWORD *)(v25 + 56);
          *(_QWORD *)(v25 + 104) = 0LL;
          v103 = *(_QWORD *)(a3 + 40);
          *(_DWORD *)(v25 + 60) = v23;
          UnitAtDirql = 0LL;
          *(_QWORD *)(v25 + 64) = v103;
          v104 = 0;
          if ( v102 )
          {
            while ( 1 )
            {
              v105 = *(unsigned int *)(v25 + 4LL * v104 + 120);
              if ( (unsigned int)v105 >= 0x80 )
              {
                v106 = *(unsigned int *)(v25 + 16);
                if ( (unsigned int)v105 <= (unsigned int)v106 && *(_DWORD *)(v105 + v25) == 64 && v105 + 40 <= v106 )
                  break;
              }
              if ( ++v104 >= v102 )
                goto LABEL_30;
            }
            v116 = (unsigned int)v105 + v25 + 24;
            *(_QWORD *)((unsigned int)v105 + v25 + 16) = *(_QWORD *)(a3 + 32);
            *(_BYTE *)((unsigned int)v105 + v25 + 9) = 18;
          }
        }
        else
        {
          v116 = v25 + 72;
          *(_QWORD *)(v25 + 56) = 0LL;
          *(_QWORD *)(v25 + 32) = *(_QWORD *)(a3 + 32);
          *(_BYTE *)(v25 + 11) = 18;
          v27 = *(_QWORD *)(a3 + 40);
          *(_DWORD *)(v25 + 12) |= 0x80110u;
          *(_DWORD *)(v25 + 16) = v23;
          UnitAtDirql = 0LL;
          *(_QWORD *)(v25 + 24) = v27;
        }
LABEL_30:
        v28 = v116;
        *(_BYTE *)(v116 + 1) &= ~1u;
        *(_BYTE *)(v28 + 2) = 0;
        if ( (int)RaidBusEnumeratorIssueSynchronousRequest(a3, (unsigned int)v125, (int)a3 + 8, v25, Irp) < 0 )
          goto LABEL_31;
        RaidBusEnumeratorProcessProbeLunZero(a3, v25, v125, &v112, &v114);
        if ( !v112 || v113 || (int)RaidBusEnumeratorReAllocateDataBufferResource(a3, a3 + 8, (unsigned int)v114) < 0 )
          goto LABEL_31;
        v113 = 1;
      }
      RaidLogAllocationFailure(v89, 64, 184, 1918067026, 0x80000000);
      *(_QWORD *)(a3 + 24) = 0LL;
LABEL_165:
      UnitAtDirql = 0LL;
LABEL_31:
      if ( i )
        RaidBusEnumeratorReleaseDataBufferResource(a3);
      v29 = v126;
      v30 = *(_QWORD *)a3;
      if ( v127 )
      {
        v31 = *(_QWORD *)a3;
        memset(&LockHandle, 0, sizeof(LockHandle));
        v32 = RaidAdapterAcquireInterruptLock(v31);
        v33 = *(_DWORD *)(v30 + 172);
        v111 = v32;
        v34 = (unsigned __int8)BYTE2(*(_DWORD *)(v29 + 104)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v29 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v29 + 104))) << 8);
        v116 = *(_QWORD *)(v30 + 192);
        v117 = *(_QWORD *)(v30 + 200);
        v35 = (_QWORD **)(16LL * ((*(unsigned int (__fastcall **)(unsigned __int64))(v30 + 208))(v34) % v33)
                        + *(_QWORD *)(v30 + 184));
        for ( j = *v35; ; j = (_QWORD *)*j )
        {
          if ( j == v35 )
            goto LABEL_40;
          v37 = ((__int64 (__fastcall *)(_QWORD *))v116)(j);
          v38 = ((__int64 (__fastcall *)(__int64, unsigned __int64))v117)(v37, v34);
          if ( !v38 )
            break;
          if ( v38 < 0 )
            goto LABEL_40;
        }
        v39 = (_QWORD *)*j;
        if ( *(_QWORD **)(*j + 8LL) == j )
        {
          v40 = (_QWORD *)j[1];
          if ( (_QWORD *)*v40 == j )
          {
            *v40 = v39;
            v39[1] = v40;
            --*(_DWORD *)(v30 + 168);
LABEL_40:
            if ( *(_BYTE *)(v30 + 4433) )
            {
              v41 = *(_QWORD *)(v30 + 4416);
              if ( *(_DWORD *)(v30 + 4400) == 2 )
              {
                v42 = *(_DWORD *)(v41 + 4) - 1;
                if ( *(_DWORD *)(v41 + 4) != 1 )
                {
                  v87 = (PKINTERRUPT *)(v41 + 48LL * v42 + 24);
                  do
                  {
                    KeReleaseInterruptSpinLock(*v87, *(_BYTE *)v41);
                    v87 -= 6;
                    --v42;
                  }
                  while ( v42 );
                }
              }
              v43 = *(struct _KINTERRUPT **)(v41 + 24);
LABEL_44:
              KeReleaseInterruptSpinLock(v43, v111);
            }
            else
            {
              v43 = *(struct _KINTERRUPT **)(v30 + 864);
              if ( v43 )
                goto LABEL_44;
            }
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v30 + 136), &LockHandle);
            v44 = *(_QWORD *)(v29 + 64);
            if ( *(_QWORD *)(v44 + 8) == v29 + 64 )
            {
              v45 = *(_QWORD **)(v29 + 72);
              if ( *v45 == v29 + 64 )
              {
                *v45 = v44;
                *(_QWORD *)(v44 + 8) = v45;
                --*(_DWORD *)(v30 + 160);
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                KeCancelTimer((PKTIMER)(v29 + 1184));
                UnitAtDirql = 0LL;
                *(_DWORD *)(v126 + 744) = 0;
                goto LABEL_48;
              }
            }
          }
        }
LABEL_158:
        __fastfail(3u);
      }
LABEL_48:
      Unit = -1073741810;
      if ( v128 )
        Unit = 0;
LABEL_50:
      memset_0(v132, 0, 0xFFuLL);
      if ( Unit >= 0 )
        v132[0] = 0x101010101010101LL;
LABEL_52:
      v46 = *(_QWORD *)a3;
      if ( v131 )
      {
        v47 = 0;
        memset(&LockHandle, 0, sizeof(LockHandle));
        if ( *(_BYTE *)(v46 + 4433) )
        {
          v48 = *(_QWORD *)(v46 + 4416);
          v47 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v48 + 24));
          if ( *(_DWORD *)(v46 + 4400) == 2 )
          {
            for ( k = 1; k < *(_DWORD *)(v48 + 4); ++k )
              KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v48 + 48LL * k + 24));
          }
        }
        else
        {
          v96 = *(struct _KINTERRUPT **)(v46 + 864);
          if ( v96 )
            v47 = KeAcquireInterruptSpinLock(v96);
        }
        v50 = v130;
        v51 = *(_DWORD *)(v46 + 172);
        v52 = (unsigned __int8)BYTE2(*(_DWORD *)(v130 + 104)) | ((((unsigned __int64)(unsigned __int8)*(_DWORD *)(v130 + 104) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(v130 + 104))) << 8);
        v116 = *(_QWORD *)(v46 + 192);
        v117 = *(_QWORD *)(v46 + 200);
        v53 = (_QWORD **)(16LL * ((*(unsigned int (__fastcall **)(unsigned __int64))(v46 + 208))(v52) % v51)
                        + *(_QWORD *)(v46 + 184));
        v114 = v53;
        v54 = *v53;
        while ( 1 )
        {
          if ( v54 == v53 )
            goto LABEL_62;
          v55 = ((__int64 (__fastcall *)(_QWORD *))v116)(v54);
          v56 = ((__int64 (__fastcall *)(__int64, unsigned __int64))v117)(v55, v52);
          if ( !v56 )
            break;
          if ( v56 < 0 )
            goto LABEL_62;
          v54 = (_QWORD *)*v54;
          v53 = v114;
        }
        v57 = (_QWORD *)*v54;
        if ( *(_QWORD **)(*v54 + 8LL) != v54 )
          goto LABEL_158;
        v58 = (_QWORD *)v54[1];
        if ( (_QWORD *)*v58 != v54 )
          goto LABEL_158;
        *v58 = v57;
        v57[1] = v58;
        --*(_DWORD *)(v46 + 168);
LABEL_62:
        if ( *(_BYTE *)(v46 + 4433) )
        {
          v59 = *(_QWORD *)(v46 + 4416);
          if ( *(_DWORD *)(v46 + 4400) == 2 )
          {
            v60 = *(_DWORD *)(v59 + 4) - 1;
            if ( *(_DWORD *)(v59 + 4) != 1 )
            {
              v85 = (PKINTERRUPT *)(v59 + 48LL * v60 + 24);
              do
              {
                KeReleaseInterruptSpinLock(*v85, *(_BYTE *)v59);
                v85 -= 6;
                --v60;
              }
              while ( v60 );
              v50 = v130;
            }
          }
          v61 = *(struct _KINTERRUPT **)(v59 + 24);
LABEL_66:
          KeReleaseInterruptSpinLock(v61, v47);
        }
        else
        {
          v61 = *(struct _KINTERRUPT **)(v46 + 864);
          if ( v61 )
            goto LABEL_66;
        }
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v46 + 136), &LockHandle);
        v62 = *(_QWORD *)(v50 + 64);
        if ( *(_QWORD *)(v62 + 8) != v50 + 64 )
          goto LABEL_158;
        v63 = *(_QWORD **)(v50 + 72);
        if ( *v63 != v50 + 64 )
          goto LABEL_158;
        *v63 = v62;
        *(_QWORD *)(v62 + 8) = v63;
        --*(_DWORD *)(v46 + 160);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        KeCancelTimer((PKTIMER)(v50 + 1184));
        UnitAtDirql = 0LL;
        *(_DWORD *)(v50 + 744) = 0;
      }
      LODWORD(v114) = v13;
      v64 = 0;
      while ( 2 )
      {
        v65 = *(_QWORD *)a3;
        BYTE2(v114) = v64;
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql )
        {
          if ( (unsigned int)CurrentIrql >= *(_DWORD *)(v65 + 872) )
          {
            UnitAtDirql = RaidAdapterFindUnitAtDirql(v65, (int)v114);
          }
          else
          {
            v109 = 0;
            if ( *(_BYTE *)(v65 + 4433) )
            {
              v74 = *(_QWORD *)(v65 + 4416);
              v109 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v74 + 24));
              if ( *(_DWORD *)(v65 + 4400) == 2 )
              {
                for ( m = 1; m < *(_DWORD *)(v74 + 4); ++m )
                  KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v74 + 48LL * m + 24));
              }
            }
            else
            {
              v100 = *(struct _KINTERRUPT **)(v65 + 864);
              if ( v100 )
                v109 = KeAcquireInterruptSpinLock(v100);
            }
            v76 = *(_DWORD *)(v65 + 172);
            v77 = v64 | (unsigned __int64)((BYTE1(v114) | ((unsigned __int8)v114 << 8)) << 8);
            v116 = *(_QWORD *)(v65 + 192);
            v117 = *(_QWORD *)(v65 + 200);
            v78 = -1073741275;
            v79 = (_QWORD **)(16LL * ((*(unsigned int (__fastcall **)(unsigned __int64))(v65 + 208))(v77) % v76)
                            + *(_QWORD *)(v65 + 184));
            v124 = v79;
            v80 = *v79;
            while ( v80 != v79 )
            {
              v81 = ((__int64 (__fastcall *)(_QWORD *))v116)(v80);
              v82 = ((__int64 (__fastcall *)(__int64, unsigned __int64))v117)(v81, v77);
              if ( !v82 )
              {
                UnitAtDirql = v80;
                v78 = 0;
                break;
              }
              if ( v82 < 0 )
              {
                UnitAtDirql = 0LL;
                break;
              }
              v80 = (_QWORD *)*v80;
              v79 = v124;
            }
            UnitAtDirql -= 10;
            if ( v78 < 0 )
              UnitAtDirql = 0LL;
            if ( *(_BYTE *)(v65 + 4433) )
            {
              v83 = *(_QWORD *)(v65 + 4416);
              if ( *(_DWORD *)(v65 + 4400) == 2 )
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
              KeReleaseInterruptSpinLock(*(PKINTERRUPT *)(v83 + 24), v109);
            }
            else
            {
              v94 = *(struct _KINTERRUPT **)(v65 + 864);
              if ( v94 )
                KeReleaseInterruptSpinLock(v94, v109);
            }
          }
        }
        else
        {
          memset(&LockHandle, 0, sizeof(LockHandle));
          v67 = 0LL;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v65 + 136), &LockHandle);
          for ( n = *(__int64 **)(v65 + 144); n != (__int64 *)(v65 + 144); n = (__int64 *)*n )
          {
            v67 = n - 8;
            if ( ((unsigned __int8)BYTE2(*((_DWORD *)n + 10)) | ((((unsigned __int8)*((_DWORD *)n + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)n + 10))) << 8)) == (v64 | ((BYTE1(v114) | ((unsigned __int8)v114 << 8)) << 8)) )
              break;
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( n != (__int64 *)(v65 + 144) )
            UnitAtDirql = v67;
        }
        if ( UnitAtDirql )
        {
          UnitAtDirql = 0LL;
LABEL_155:
          *((_BYTE *)v132 + v64) = 1;
          goto LABEL_82;
        }
        v69 = *(_QWORD *)a3;
        v70 = 0LL;
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v69 + 216), &LockHandle);
        for ( ii = *(__int64 **)(v69 + 224); ii != (__int64 *)(v69 + 224); ii = (__int64 *)*ii )
        {
          v70 = ii - 8;
          if ( ((unsigned __int8)BYTE2(*((_DWORD *)ii + 10)) | ((((unsigned __int8)*((_DWORD *)ii + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)ii + 10))) << 8)) == (v64 | ((BYTE1(v114) | ((unsigned __int8)v114 << 8)) << 8)) )
            break;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v72 = 0LL;
        if ( ii != (__int64 *)(v69 + 224) )
          v72 = v70;
        if ( v72 )
          goto LABEL_155;
LABEL_82:
        if ( ++v64 != 0xFF )
          continue;
        break;
      }
      v8 = 0;
      for ( jj = 0; jj < v121; ++jj )
      {
        if ( *((_BYTE *)v132 + jj) )
        {
          BYTE2(v115) = jj;
          result = RaidBusEnumeratorVisitUnit((__int64 *)a3, v115);
          v8 = result;
          if ( (int)result < 0 )
            return result;
        }
      }
      v5 = v122;
      v10 = v118 + 1;
      v9 = v119;
    }
  }
  return v8;
}
