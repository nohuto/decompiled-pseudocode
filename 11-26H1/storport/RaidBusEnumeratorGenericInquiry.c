/*
 * XREFs of RaidBusEnumeratorGenericInquiry @ 0x14000D870
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x140009CE4 (RaidBusEnumeratorVisitUnit.c)
 * Callees:
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x14000CE10 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorReAllocateDataBufferResource @ 0x140070244 (RaidBusEnumeratorReAllocateDataBufferResource.c)
 *     RaidBusEnumeratorReleaseDataBufferResource @ 0x1400702E8 (RaidBusEnumeratorReleaseDataBufferResource.c)
 *     RaidLogAllocationFailure @ 0x140095610 (RaidLogAllocationFailure.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     RaidPrepareSrbForReuse @ 0x1401B3970 (RaidPrepareSrbForReuse.c)
 *     RaidInitializeInquirySrb @ 0x1401B48C0 (RaidInitializeInquirySrb.c)
 */

__int64 RaidBusEnumeratorGenericInquiry(
        __int64 (__fastcall **a1)(__int64, unsigned __int64, __int64, __int64 *, unsigned int *),
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        ...)
{
  unsigned __int8 v6; // bl
  void *v7; // rcx
  char v8; // r15
  _DWORD *v9; // r14
  IRP *v10; // rcx
  void *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  void *v15; // rcx
  unsigned int v16; // ebp
  _DWORD *v17; // rax
  unsigned __int64 v18; // rsi
  int v19; // r12d
  __int64 v20; // r15
  __int64 v21; // rax
  char v22; // dl
  char v23; // cl
  int DataBufferResource; // ebp
  char *v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rsi
  unsigned int v29; // eax
  unsigned int v30; // ebp
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 Pool2; // rax
  __int64 v34; // rbp
  __int64 v35; // rax
  PMDL Mdl; // rax
  PIRP Irp; // rax
  unsigned int v38; // edx
  unsigned int v39; // r9d
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  char v42; // [rsp+40h] [rbp-58h]
  unsigned int v43[5]; // [rsp+44h] [rbp-54h] BYREF
  char v45; // [rsp+A8h] [rbp+10h]
  __int64 v48; // [rsp+C8h] [rbp+30h] BYREF
  va_list va; // [rsp+C8h] [rbp+30h]
  va_list va1; // [rsp+D0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v48 = va_arg(va1, _QWORD);
  v6 = a3;
  v43[0] = 0;
  v45 = 0;
  v42 = 0;
  LOBYTE(v48) = 0;
  while ( 1 )
  {
    v7 = *(void **)(a2 + 24);
    v8 = 1;
    v9 = *(_DWORD **)a2;
    if ( v7 )
    {
      RaidPrepareSrbForReuse(v7);
      goto LABEL_4;
    }
    if ( *v9 == 1314275652 )
      v26 = (char *)v9 + 274;
    else
      v26 = *v9 == 1094997074 ? (char *)v9 + 482 : (char *)98;
    v27 = *((_QWORD *)v9 + 1);
    if ( *v26 == 1 )
    {
      Pool2 = ExAllocatePool2(64LL, 184LL, 1918067026LL);
      v28 = Pool2;
      if ( !Pool2 && v27 )
      {
        RaidLogAllocationFailure(v27, 64, 184, 1918067026, 0x80000000);
        *(_QWORD *)(a2 + 24) = 0LL;
        goto LABEL_40;
      }
      if ( Pool2 )
      {
        *(_WORD *)Pool2 = 8;
        *(_BYTE *)(Pool2 + 2) = 40;
        *(_DWORD *)(Pool2 + 8) = 1397899864;
        *(_DWORD *)(Pool2 + 12) = 1;
        *(_DWORD *)(Pool2 + 56) = 1;
        *(_QWORD *)(Pool2 + 16) = 184LL;
        *(_WORD *)(Pool2 + 36) = 2;
        *(_DWORD *)(Pool2 + 52) = 128;
        *(_WORD *)(Pool2 + 128) = 1;
        *(_DWORD *)(Pool2 + 132) = 4;
        *(_DWORD *)(Pool2 + 120) = 144;
        *(_QWORD *)(a2 + 24) = Pool2;
        goto LABEL_4;
      }
    }
    else
    {
      v28 = ExAllocatePool2(64LL, 88LL, 1918067026LL);
      if ( !v28 && v27 )
        RaidLogAllocationFailure(v27, 64, 88, 1918067026, 0x80000000);
    }
    *(_QWORD *)(a2 + 24) = v28;
    if ( !v28 )
      goto LABEL_40;
LABEL_4:
    if ( !*(_QWORD *)(a2 + 32) )
    {
      v34 = *((_QWORD *)v9 + 1);
      v35 = ExAllocatePool2(64LL, 18LL, 1314087250LL);
      if ( !v35 && v34 )
      {
        RaidLogAllocationFailure(v34, 64, 18, 1314087250, 0x80000000);
        *(_QWORD *)(a2 + 32) = 0LL;
        goto LABEL_40;
      }
      *(_QWORD *)(a2 + 32) = v35;
      if ( !v35 )
        goto LABEL_40;
      v8 = 0;
    }
    v10 = *(IRP **)(a2 + 8);
    if ( v10 )
    {
      IoReuseIrp(v10, -1073741823);
      goto LABEL_7;
    }
    Irp = IoAllocateIrp(1, 0);
    *(_QWORD *)(a2 + 8) = Irp;
    if ( !Irp )
      break;
LABEL_7:
    v11 = *(void **)(a2 + 40);
    if ( v11 )
    {
      if ( *(_DWORD *)(a2 + 48) >= a5 )
        goto LABEL_9;
      ExFreePoolWithTag(*(PVOID *)(a2 + 40), 0x32316152u);
    }
    v29 = 512;
    if ( a5 >= 0x200 )
      v29 = a5;
    v30 = v29;
    *(_DWORD *)(a2 + 48) = v29;
    v31 = *((_QWORD *)v9 + 1);
    v32 = ExAllocatePool2(64LL, v29, 842096978LL);
    v11 = (void *)v32;
    if ( !v32 && v31 )
    {
      RaidLogAllocationFailure(v31, 64, v30, 842096978, 0x80000000);
      *(_QWORD *)(a2 + 40) = 0LL;
LABEL_45:
      *(_DWORD *)(a2 + 48) = 0;
LABEL_40:
      DataBufferResource = -1073741801;
      goto LABEL_30;
    }
    *(_QWORD *)(a2 + 40) = v32;
    if ( !v32 )
      goto LABEL_45;
LABEL_9:
    v12 = *(_QWORD *)(a2 + 16);
    if ( v12 )
    {
      if ( (*(_BYTE *)(v12 + 10) & 0x20) != 0 )
        MmUnmapLockedPages(*(PVOID *)(v12 + 24), *(PMDL *)(a2 + 16));
      v13 = 0LL;
    }
    else
    {
      v13 = 0LL;
      Mdl = IoAllocateMdl(v11, *(_DWORD *)(a2 + 48), 0, 0, 0LL);
      *(_QWORD *)(a2 + 16) = Mdl;
      if ( !Mdl )
        goto LABEL_40;
      if ( (Mdl->MdlFlags & 0x20) != 0 )
        MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
    }
    v14 = *(_QWORD *)(a2 + 32);
    if ( v14 && v8 )
    {
      *(_OWORD *)v14 = 0LL;
      *(_WORD *)(v14 + 16) = 0;
    }
    v15 = *(void **)(a2 + 40);
    if ( v15 )
      memset_0(v15, 0, *(unsigned int *)(a2 + 48));
    v16 = v43[0];
    v17 = *(_DWORD **)a2;
    v18 = *(_QWORD *)(a2 + 24);
    if ( a5 > v43[0] )
      v16 = a5;
    v19 = *(_DWORD *)a1;
    if ( *v17 == 1314275652 )
    {
      v20 = (__int64)v17 + 274;
    }
    else if ( *v17 == 1094997074 )
    {
      v20 = (__int64)v17 + 482;
    }
    else
    {
      v20 = 98LL;
    }
    RaidInitializeInquirySrb(v18, v6, BYTE1(a3), BYTE2(a3), *(_QWORD *)(a2 + 40), v16, *(_BYTE *)v20);
    if ( *(_BYTE *)v20 == 1 )
    {
      *(_DWORD *)(v18 + 24) |= 0x80110u;
      v38 = 0;
      v39 = *(_DWORD *)(v18 + 56);
      *(_QWORD *)(v18 + 104) = 0LL;
      *(_QWORD *)(v18 + 64) = *(_QWORD *)(a2 + 40);
      *(_DWORD *)(v18 + 60) = v16;
      if ( v39 )
      {
        while ( 1 )
        {
          v40 = *(unsigned int *)(v18 + 4LL * v38 + 120);
          if ( (unsigned int)v40 >= 0x80 )
          {
            v41 = *(unsigned int *)(v18 + 16);
            if ( (unsigned int)v40 <= (unsigned int)v41 && *(_DWORD *)(v40 + v18) == 64 && v40 + 40 <= v41 )
              break;
          }
          if ( ++v38 >= v39 )
            goto LABEL_25;
        }
        v13 = (unsigned int)v40 + v18 + 24;
        *(_QWORD *)((unsigned int)v40 + v18 + 16) = *(_QWORD *)(a2 + 32);
        *(_BYTE *)((unsigned int)v40 + v18 + 9) = 18;
      }
    }
    else
    {
      *(_QWORD *)(v18 + 56) = 0LL;
      v13 = v18 + 72;
      *(_QWORD *)(v18 + 32) = *(_QWORD *)(a2 + 32);
      *(_BYTE *)(v18 + 11) = 18;
      v21 = *(_QWORD *)(a2 + 40);
      *(_DWORD *)(v18 + 12) |= 0x80110u;
      *(_QWORD *)(v18 + 24) = v21;
      *(_DWORD *)(v18 + 16) = v16;
    }
LABEL_25:
    v22 = v19;
    if ( v19 == -1 )
      v22 = 0;
    v23 = *(_BYTE *)(v13 + 1) & 0xFE;
    if ( v19 != -1 )
      v23 = *(_BYTE *)(v13 + 1) | 1;
    *(_BYTE *)(v13 + 1) = v23;
    *(_BYTE *)(v13 + 2) = v22;
    DataBufferResource = RaidBusEnumeratorIssueSynchronousRequest((_QWORD *)a2, a4, a2 + 8, v18);
    if ( DataBufferResource < 0 )
      goto LABEL_30;
    DataBufferResource = a1[1](a2, v18, a4, (__int64 *)va, v43);
    if ( !(_BYTE)v48 )
      goto LABEL_30;
    if ( v45 )
      goto LABEL_30;
    DataBufferResource = RaidBusEnumeratorReAllocateDataBufferResource(a2, a2 + 8, v43[0]);
    if ( DataBufferResource < 0 )
      goto LABEL_30;
    v42 = 1;
    v45 = 1;
  }
  DataBufferResource = -1073741801;
LABEL_30:
  if ( v42 )
    RaidBusEnumeratorReleaseDataBufferResource(a2);
  return (unsigned int)DataBufferResource;
}
