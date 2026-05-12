/*
 * XREFs of RaidAdapterCreateDumpInfo @ 0x1401842F0
 * Callers:
 *     RaUnitStorageGetDumpInfoIoctl @ 0x14018C2D8 (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidAdapterFreeDumpInfo @ 0x1400494BC (RaidAdapterFreeDumpInfo.c)
 *     RaidAdapterFreeDriverInfo @ 0x140061244 (RaidAdapterFreeDriverInfo.c)
 *     RaidQueryCrashdumpFunctions @ 0x14007FBFC (RaidQueryCrashdumpFunctions.c)
 *     StorPortGetAdditionalCrashDumpArea @ 0x1400AAC8C (StorPortGetAdditionalCrashDumpArea.c)
 *     RaidAdapterCreateDriverInfo @ 0x1401BD5E4 (RaidAdapterCreateDriverInfo.c)
 */

__int64 __fastcall RaidAdapterCreateDumpInfo(__int64 a1, __int64 a2, _QWORD *a3, _BYTE *a4, _QWORD *a5, _BYTE *a6)
{
  _QWORD *v6; // r15
  _BYTE *v7; // r12
  _QWORD *v10; // r9
  _QWORD *v11; // rcx
  unsigned int v14; // esi
  _QWORD *v15; // r14
  _QWORD *v16; // r8
  __int64 v17; // rdx
  _QWORD *v18; // r10
  _QWORD *v19; // rax
  _QWORD *Pool; // rax
  _QWORD *v21; // rdi
  _QWORD *v22; // rax
  _DWORD *v23; // rax
  _DWORD *v24; // r14
  _DWORD *v25; // r12
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // r8d
  int v31; // eax
  char v32; // r13
  _QWORD *v33; // rcx
  char v34; // si
  struct _DEVICE_OBJECT *v35; // rcx
  __int64 v36; // rax
  PVOID v37; // rax
  _QWORD *v38; // rcx
  PVOID v39; // rax
  PVOID v41; // [rsp+20h] [rbp-10h] BYREF
  PVOID v42; // [rsp+28h] [rbp-8h] BYREF
  char v43; // [rsp+78h] [rbp+48h] BYREF
  _QWORD *v44; // [rsp+80h] [rbp+50h]
  char v45; // [rsp+88h] [rbp+58h]

  v44 = a3;
  v6 = a5;
  v7 = a6;
  *a4 = 0;
  v10 = (_QWORD *)(a2 + 40);
  v43 = 0;
  v11 = *(_QWORD **)(a2 + 40);
  v41 = 0LL;
  v45 = 0;
  v14 = 0;
  *a3 = 0LL;
  v15 = (_QWORD *)(a1 + 5128);
  *v6 = 0LL;
  *v7 = 0;
  if ( v11 != (_QWORD *)(a2 + 40) )
  {
    do
    {
      v16 = v11 - 1;
      v17 = v11[2] - *v15;
      if ( !v17 )
        v17 = v11[3] - *(_QWORD *)(a1 + 5136);
      v18 = v11 - 1;
      v19 = v11 - 1;
      if ( !v17 )
        break;
      v11 = (_QWORD *)*v11;
      v16 = 0LL;
      v18 = 0LL;
      v19 = 0LL;
    }
    while ( v11 != v10 );
    if ( v18 )
    {
      *v6 = v19[7];
      *a4 = 1;
      *v7 = 1;
      *a3 = v16;
      return v14;
    }
  }
  Pool = (_QWORD *)RaidAllocatePool(64LL, 112LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v42 = Pool;
  v21 = Pool;
  if ( !Pool
    || (v22 = Pool + 1,
        v22[1] = v22,
        *v22 = v22,
        *(_DWORD *)v21 = 112,
        *(_OWORD *)(v21 + 3) = *(_OWORD *)v15,
        v23 = (_DWORD *)RaidAllocatePool(64LL, 360LL, 1145266514LL, *(_QWORD *)(a1 + 8)),
        (v24 = v23) == 0LL) )
  {
    v14 = -1073741670;
    goto LABEL_45;
  }
  *v23 = 1145917490;
  v25 = v23 + 80;
  v23[1] = 4097;
  v23[2] = 320;
  ObfReferenceObject(*(PVOID *)(a1 + 8));
  *((_QWORD *)v24 + 2) = a1;
  *(_OWORD *)(v24 + 18) = *(_OWORD *)(a1 + 384);
  *(_OWORD *)(v24 + 22) = *(_OWORD *)(a1 + 400);
  *(_OWORD *)(v24 + 26) = *(_OWORD *)(a1 + 416);
  *(_OWORD *)(v24 + 30) = *(_OWORD *)(a1 + 432);
  *(_OWORD *)(v24 + 34) = *(_OWORD *)(a1 + 448);
  *(_OWORD *)(v24 + 38) = *(_OWORD *)(a1 + 464);
  *(_OWORD *)(v24 + 42) = *(_OWORD *)(a1 + 480);
  *(_OWORD *)(v24 + 46) = *(_OWORD *)(a1 + 496);
  *(_OWORD *)(v24 + 50) = *(_OWORD *)(a1 + 512);
  *(_OWORD *)(v24 + 54) = *(_OWORD *)(a1 + 528);
  *(_OWORD *)(v24 + 58) = *(_OWORD *)(a1 + 544);
  *(_OWORD *)(v24 + 62) = *(_OWORD *)(a1 + 560);
  *(_OWORD *)(v24 + 66) = *(_OWORD *)(a1 + 576);
  *(_OWORD *)(v24 + 70) = *(_OWORD *)(a1 + 592);
  *((_DWORD *)v21 + 11) = 320;
  v26 = RaidAllocatePool(64LL, 0x10000LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  if ( v26 )
  {
    v24[12] = 0x10000;
    *((_QWORD *)v24 + 7) = v26;
    v27 = *(_BYTE *)(a1 + 528);
    if ( v27 == 2 || (unsigned __int8)(v27 - 3) <= 1u )
      *((_DWORD *)v21 + 10) |= 1u;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 608) + 184LL) & 0x20) != 0 )
      *((_DWORD *)v21 + 10) |= 2u;
    v28 = *(_QWORD *)(a1 + 608);
    if ( (*(_DWORD *)(v28 + 184) & 0x80u) != 0 && (*(_DWORD *)(v28 + 188) & 2) != 0 )
      *((_WORD *)v24 + 152) = HiberFileHybridPriority;
    else
      *((_WORD *)v24 + 152) = -1;
    if ( *(_BYTE *)(a1 + 4434) )
    {
      v21[8] = *(_QWORD *)(a1 + 896);
      v29 = a1 + 968;
    }
    else
    {
      v21[8] = 0LL;
      v29 = 0LL;
    }
    *((_QWORD *)v24 + 37) = v29;
    v30 = *(_DWORD *)(a1 + 576);
    if ( v30 )
      StorPortGetAdditionalCrashDumpArea(a1, (__int64)(v24 + 18), v30);
    v31 = RaidAdapterCreateDriverInfo(a1, a2, &v41, &v43);
    v32 = v43;
    v14 = v31;
    if ( v31 < 0 )
    {
      v39 = v41;
      goto LABEL_40;
    }
    v33 = *(_QWORD **)(a1 + 5024);
    if ( v33 && (int)PoFxRegisterCrashdumpDevice(*v33) >= 0 )
    {
      *(_BYTE *)v25 = 1;
      v34 = 1;
      *((_QWORD *)v25 + 1) = **(_QWORD **)(a1 + 5024);
    }
    else
    {
      v34 = v45;
    }
    v35 = *(struct _DEVICE_OBJECT **)(a1 + 24);
    *(_WORD *)(a1 + 5088) = 40;
    *(_WORD *)(a1 + 5090) = 1;
    if ( RaidQueryCrashdumpFunctions(v35, (_LARGE_INTEGER)(a1 + 5088)) >= 0
      && (v36 = *(_QWORD *)(a1 + 5120)) != 0
      && *(_QWORD *)(a1 + 5112) )
    {
      *((_QWORD *)v25 + 3) = v36;
      *((_QWORD *)v25 + 4) = *(_QWORD *)(a1 + 5096);
    }
    else
    {
      *(_WORD *)(a1 + 5090) = 0;
      if ( !v34 )
      {
LABEL_38:
        v37 = v41;
        v14 = 0;
        v38 = a5;
        v21[6] = v24;
        v24 = 0LL;
        v21[7] = v37;
        v42 = 0LL;
        *v38 = v37;
        v39 = 0LL;
        v41 = 0LL;
        *a6 = v32;
        *v44 = v21;
        v21 = 0LL;
LABEL_40:
        if ( !v32 && v39 )
          RaidAdapterFreeDriverInfo(&v41);
        if ( !v24 )
          goto LABEL_45;
        goto LABEL_44;
      }
    }
    *((_QWORD *)v25 + 2) = a1 + 4957;
    *((_QWORD *)v24 + 3) = a1 + 4957;
    *((_QWORD *)v24 + 4) = StorDumpAdapterPowerOn;
    *((_QWORD *)v24 + 5) = v25;
    goto LABEL_38;
  }
  v14 = -1073741670;
LABEL_44:
  ExFreePoolWithTag(v24, 0x44436152u);
LABEL_45:
  if ( v21 )
    RaidAdapterFreeDumpInfo(&v42);
  return v14;
}
