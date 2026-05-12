/*
 * XREFs of RaidBusEnumeratorGetUnit @ 0x14000C0F0
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x140009CE4 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunList @ 0x14000A2D0 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterEnumerateBus @ 0x14000B1B0 (RaidAdapterEnumerateBus.c)
 *     StorAdapterNVMeEnumerateZNS @ 0x1401B5E24 (StorAdapterNVMeEnumerateZNS.c)
 * Callees:
 *     RaidAdapterFindUnitAtDirql @ 0x140009C04 (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterAcquireInterruptLock @ 0x14000CD40 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x14000EDE0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidCreateUnit @ 0x14002D474 (RaidCreateUnit.c)
 *     RaUnitUnlockForwardIo @ 0x1400429E0 (RaUnitUnlockForwardIo.c)
 *     McTemplateK0zquuuqqqt_EtwWriteTransfer @ 0x1400796C0 (McTemplateK0zquuuqqqt_EtwWriteTransfer.c)
 *     RaidLogAllocationFailure @ 0x140095610 (RaidLogAllocationFailure.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     RaidPrepareSrbForReuse @ 0x1401B3970 (RaidPrepareSrbForReuse.c)
 */

__int64 __fastcall RaidBusEnumeratorGetUnit(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v3; // r14
  void *v5; // rcx
  char v8; // bp
  unsigned int v9; // r13d
  IRP *v10; // rcx
  void *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  void *v14; // rcx
  __int64 v15; // r14
  KIRQL CurrentIrql; // al
  int v17; // r12d
  __int64 *v18; // r13
  __int64 **v19; // r14
  __int64 *i; // rdi
  _QWORD *UnitAtDirql; // rbp
  __int64 result; // rax
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 *v27; // r14
  __int64 **v28; // rdi
  __int64 *j; // r8
  __int64 v30; // rdi
  __int64 v31; // r9
  __int64 v32; // rax
  unsigned int v33; // ecx
  unsigned int v34; // edx
  int v35; // r8d
  __int64 v36; // rax
  _QWORD *v37; // rdx
  _QWORD *v38; // rax
  KIRQL v39; // r14
  __int64 v40; // rbx
  __int64 *v41; // r12
  __int64 (__fastcall *v42)(_QWORD); // rax
  unsigned int (__fastcall *v43)(__int64); // rbx
  unsigned int v44; // esi
  __int64 v45; // rax
  __int64 v46; // rsi
  _QWORD *k; // r13
  __int64 **v48; // rax
  __int64 v49; // rsi
  unsigned int v50; // ebx
  struct _KINTERRUPT *v51; // rcx
  PKINTERRUPT *v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // r14
  __int64 v57; // rax
  __int64 Pool2; // rax
  __int64 v59; // rbp
  __int64 v60; // rax
  PMDL Mdl; // rax
  void *MappedSystemVa; // rcx
  struct _MDL *v63; // rdx
  struct _KINTERRUPT *v64; // rcx
  unsigned __int8 v65; // di
  PIRP Irp; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-58h] BYREF
  __int64 (__fastcall *v68)(_QWORD); // [rsp+C0h] [rbp+8h] BYREF
  int v69; // [rsp+C8h] [rbp+10h]
  __int64 (__fastcall *v70)(__int64, __int64); // [rsp+D8h] [rbp+20h]

  v69 = a2;
  v3 = *a1;
  v5 = (void *)a1[3];
  v8 = 1;
  v9 = 1;
  if ( v5 )
  {
    RaidPrepareSrbForReuse(v5);
    goto LABEL_3;
  }
  if ( *(_DWORD *)v3 == 1314275652 )
  {
    v23 = v3 + 274;
  }
  else if ( *(_DWORD *)v3 == 1094997074 )
  {
    v23 = v3 + 482;
  }
  else
  {
    v23 = 98LL;
  }
  v24 = *(_QWORD *)(v3 + 8);
  if ( *(_BYTE *)v23 == 1 )
  {
    Pool2 = ExAllocatePool2(64LL, 184LL, 1918067026LL);
    v25 = Pool2;
    if ( !Pool2 && v24 )
    {
      RaidLogAllocationFailure(v24, 64, 184, 1918067026, 0x80000000);
      a1[3] = 0LL;
      return 3221225495LL;
    }
    if ( Pool2 )
    {
      *(_WORD *)Pool2 = 8;
      *(_BYTE *)(Pool2 + 2) = 40;
      *(_DWORD *)(Pool2 + 8) = 1397899864;
      *(_DWORD *)(Pool2 + 12) = 1;
      *(_QWORD *)(Pool2 + 16) = 184LL;
      *(_WORD *)(Pool2 + 36) = 2;
      *(_DWORD *)(Pool2 + 52) = 128;
      *(_DWORD *)(Pool2 + 56) = 1;
      *(_WORD *)(Pool2 + 128) = 1;
      *(_DWORD *)(Pool2 + 132) = 4;
      *(_DWORD *)(Pool2 + 120) = 144;
      a1[3] = Pool2;
      goto LABEL_3;
    }
  }
  else
  {
    v25 = ExAllocatePool2(64LL, 88LL, 1918067026LL);
    if ( !v25 && v24 )
      RaidLogAllocationFailure(v24, 64, 88, 1918067026, 0x80000000);
  }
  a1[3] = v25;
  if ( !v25 )
    return 3221225495LL;
LABEL_3:
  if ( !a1[4] )
  {
    v59 = *(_QWORD *)(v3 + 8);
    v60 = ExAllocatePool2(64LL, 18LL, 1314087250LL);
    if ( !v60 && v59 )
    {
      RaidLogAllocationFailure(v59, 64, 18, 1314087250, 0x80000000);
      a1[4] = 0LL;
      return 3221225495LL;
    }
    a1[4] = v60;
    if ( !v60 )
      return 3221225495LL;
    v8 = 0;
  }
  v10 = (IRP *)a1[1];
  if ( v10 )
  {
    IoReuseIrp(v10, -1073741823);
  }
  else
  {
    Irp = IoAllocateIrp(1, 0);
    a1[1] = Irp;
    if ( !Irp )
      return 3221225495LL;
  }
  v11 = (void *)a1[5];
  if ( !v11 )
  {
    *((_DWORD *)a1 + 12) = 512;
    v56 = *(_QWORD *)(v3 + 8);
    v57 = ExAllocatePool2(64LL, 512LL, 842096978LL);
    v11 = (void *)v57;
    if ( v57 || !v56 )
    {
      a1[5] = v57;
      if ( v57 )
        goto LABEL_7;
    }
    else
    {
      RaidLogAllocationFailure(v56, 64, 512, 842096978, 0x80000000);
      a1[5] = 0LL;
    }
    *((_DWORD *)a1 + 12) = 0;
    return 3221225495LL;
  }
LABEL_7:
  v12 = a1[2];
  if ( !v12 )
  {
    Mdl = IoAllocateMdl(v11, *((_DWORD *)a1 + 12), 0, 0, 0LL);
    a1[2] = Mdl;
    if ( Mdl )
    {
      if ( (Mdl->MdlFlags & 0x20) == 0 )
        goto LABEL_9;
      MappedSystemVa = Mdl->MappedSystemVa;
      v63 = Mdl;
LABEL_112:
      MmUnmapLockedPages(MappedSystemVa, v63);
      goto LABEL_9;
    }
    return 3221225495LL;
  }
  if ( (*(_BYTE *)(v12 + 10) & 0x20) != 0 )
  {
    v63 = (struct _MDL *)a1[2];
    MappedSystemVa = *(void **)(v12 + 24);
    goto LABEL_112;
  }
LABEL_9:
  v13 = a1[4];
  if ( v13 && v8 )
  {
    *(_OWORD *)v13 = 0LL;
    *(_WORD *)(v13 + 16) = 0;
  }
  v14 = (void *)a1[5];
  if ( v14 )
    memset_0(v14, 0, *((unsigned int *)a1 + 12));
  v15 = *a1;
  CurrentIrql = KeGetCurrentIrql();
  v17 = BYTE2(v69);
  if ( CurrentIrql )
  {
    if ( (unsigned int)CurrentIrql >= *(_DWORD *)(v15 + 872) )
    {
      UnitAtDirql = RaidAdapterFindUnitAtDirql(v15, a2);
    }
    else
    {
      v65 = RaidAdapterAcquireInterruptLock(v15);
      UnitAtDirql = RaidAdapterFindUnitAtDirql(v15, a2);
      RaidAdapterReleaseInterruptLock(v15, v65);
    }
  }
  else
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    v18 = 0LL;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v15 + 136), &LockHandle);
    v19 = (__int64 **)(v15 + 144);
    for ( i = *v19; i != (__int64 *)v19; i = (__int64 *)*i )
    {
      v18 = i - 8;
      if ( ((unsigned __int8)BYTE2(*((_DWORD *)i + 10)) | ((((unsigned __int8)*((_DWORD *)i + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)i + 10))) << 8)) == (v17 | ((BYTE1(v69) | ((unsigned __int8)a2 << 8)) << 8)) )
        break;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    UnitAtDirql = 0LL;
    if ( i != (__int64 *)v19 )
      UnitAtDirql = v18;
    v9 = 1;
  }
  if ( UnitAtDirql )
    goto LABEL_22;
  v26 = *a1;
  v27 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v26 + 216), &LockHandle);
  v28 = (__int64 **)(v26 + 224);
  for ( j = *v28; j != (__int64 *)v28; j = (__int64 *)*j )
  {
    v27 = j - 8;
    if ( ((unsigned __int8)BYTE2(*((_DWORD *)j + 10)) | ((((unsigned __int8)*((_DWORD *)j + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)j + 10))) << 8)) == (v17 | ((BYTE1(v69) | ((unsigned __int8)a2 << 8)) << 8)) )
      break;
  }
  UnitAtDirql = 0LL;
  if ( j != (__int64 *)v28 )
    UnitAtDirql = v27;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v68 = (__int64 (__fastcall *)(_QWORD))UnitAtDirql;
  if ( UnitAtDirql )
  {
    if ( (UnitAtDirql[63] & 4) != 0 )
      goto LABEL_22;
    v68 = 0LL;
  }
  UnitAtDirql = (_QWORD *)a1[7];
  v30 = *a1;
  if ( !UnitAtDirql )
  {
    result = RaidCreateUnit(*a1, &v68);
    if ( (int)result < 0 )
      return result;
    UnitAtDirql = v68;
    a1[7] = v68;
    *((_BYTE *)UnitAtDirql + 504) |= 8u;
    *((_BYTE *)UnitAtDirql + 757) = 0;
    RaUnitUnlockForwardIo(UnitAtDirql, 1LL);
    goto LABEL_45;
  }
  v31 = UnitAtDirql[3];
  if ( *(_DWORD *)v31 == 1314275652 )
  {
    v32 = v31 + 176;
  }
  else
  {
    if ( *(_DWORD *)v31 != 1094997074 )
      goto LABEL_45;
    v32 = v31 + 384;
  }
  if ( v32 )
  {
    v33 = *(_DWORD *)(v32 + 212);
    v34 = *(_DWORD *)(v32 + 208);
    v35 = *((_DWORD *)UnitAtDirql + 181);
    if ( v33 && v33 <= v34 )
    {
      *((_DWORD *)UnitAtDirql + 181) = v33;
      goto LABEL_43;
    }
    if ( v33 == v35 )
    {
LABEL_43:
      *((_DWORD *)UnitAtDirql + 232) = v34;
      if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
        McTemplateK0zquuuqqqt_EtwWriteTransfer(
          v33,
          v34,
          v35,
          *(_QWORD *)(v31 + 48),
          *(_DWORD *)(v31 + 56),
          *((_BYTE *)UnitAtDirql + 104),
          *((_BYTE *)UnitAtDirql + 105),
          *((_BYTE *)UnitAtDirql + 106),
          v35,
          v33,
          v34,
          0);
    }
  }
LABEL_45:
  v36 = UnitAtDirql[3];
  *((_DWORD *)UnitAtDirql + 26) = a2;
  *((_WORD *)UnitAtDirql + 48) = 1;
  *((_DWORD *)UnitAtDirql + 25) = 4;
  *((_WORD *)UnitAtDirql + 49) = *(_WORD *)(v36 + 56);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v30 + 136), &LockHandle);
  v37 = *(_QWORD **)(v30 + 152);
  v38 = UnitAtDirql + 8;
  if ( *v37 != v30 + 144 )
    goto LABEL_59;
  *v38 = v30 + 144;
  v39 = 0;
  UnitAtDirql[9] = v37;
  *v37 = v38;
  *(_QWORD *)(v30 + 152) = v38;
  ++*(_DWORD *)(v30 + 160);
  if ( *(_BYTE *)(v30 + 4433) )
  {
    v40 = *(_QWORD *)(v30 + 4416);
    v39 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v40 + 24));
    if ( *(_DWORD *)(v30 + 4400) == 2 && *(_DWORD *)(v40 + 4) > 1u )
    {
      do
        KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v40 + 48LL * v9++ + 24));
      while ( v9 < *(_DWORD *)(v40 + 4) );
    }
  }
  else
  {
    v64 = *(struct _KINTERRUPT **)(v30 + 864);
    if ( v64 )
      v39 = KeAcquireInterruptSpinLock(v64);
  }
  v41 = UnitAtDirql + 10;
  v42 = *(__int64 (__fastcall **)(_QWORD))(v30 + 192);
  v43 = *(unsigned int (__fastcall **)(__int64))(v30 + 208);
  v44 = *(_DWORD *)(v30 + 172);
  v70 = *(__int64 (__fastcall **)(__int64, __int64))(v30 + 200);
  v68 = v42;
  v45 = v42(UnitAtDirql + 10);
  v46 = 16LL * (v43(v45) % v44) + *(_QWORD *)(v30 + 184);
  for ( k = *(_QWORD **)v46; ; k = (_QWORD *)*k )
  {
    if ( k == (_QWORD *)v46 )
    {
      ++*(_DWORD *)(v30 + 168);
      v48 = *(__int64 ***)(v46 + 8);
      if ( *v48 == (__int64 *)v46 )
      {
        *v41 = v46;
        UnitAtDirql[11] = v48;
        *v48 = v41;
        *(_QWORD *)(v46 + 8) = v41;
        goto LABEL_53;
      }
LABEL_59:
      __fastfail(3u);
    }
    v53 = v68(UnitAtDirql + 10);
    v54 = v68(k);
    v55 = v70(v54, v53);
    if ( !v55 )
      goto LABEL_53;
    if ( v55 < 0 )
      break;
  }
  *v41 = (__int64)k;
  UnitAtDirql[11] = k[1];
  k[1] = v41;
  *(_QWORD *)UnitAtDirql[11] = v41;
  ++*(_DWORD *)(v30 + 168);
LABEL_53:
  if ( *(_BYTE *)(v30 + 4433) )
  {
    v49 = *(_QWORD *)(v30 + 4416);
    if ( *(_DWORD *)(v30 + 4400) == 2 )
    {
      v50 = *(_DWORD *)(v49 + 4) - 1;
      if ( *(_DWORD *)(v49 + 4) != 1 )
      {
        v52 = (PKINTERRUPT *)(v49 + 48LL * v50 + 24);
        do
        {
          KeReleaseInterruptSpinLock(*v52, *(_BYTE *)v49);
          v52 -= 6;
          --v50;
        }
        while ( v50 );
      }
    }
    v51 = *(struct _KINTERRUPT **)(v49 + 24);
LABEL_57:
    KeReleaseInterruptSpinLock(v51, v39);
  }
  else
  {
    v51 = *(struct _KINTERRUPT **)(v30 + 864);
    if ( v51 )
      goto LABEL_57;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *(_BYTE *)(a3 + 92) = 1;
LABEL_22:
  *(_QWORD *)(a3 + 8) = UnitAtDirql;
  *(_DWORD *)(a3 + 4) = *((_DWORD *)UnitAtDirql + 26);
  result = 0LL;
  *(_DWORD *)(a3 + 88) = 0;
  return result;
}
