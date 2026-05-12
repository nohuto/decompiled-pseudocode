/*
 * XREFs of RaidBusEnumeratorIssueReportLuns @ 0x14000D450
 * Callers:
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x14000CA30 (RaidBusEnumeratorGetLunListFromTarget.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x14000CE10 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidAllocateSrb @ 0x1400384D0 (RaidAllocateSrb.c)
 *     RaidLogAllocationFailure @ 0x140095610 (RaidLogAllocationFailure.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     RaidPrepareSrbForReuse @ 0x1401B3970 (RaidPrepareSrbForReuse.c)
 *     RaidInitializeReportLunsSrb @ 0x1401B47B0 (RaidInitializeReportLunsSrb.c)
 */

__int64 __fastcall RaidBusEnumeratorIssueReportLuns(int **a1, int a2, __int64 a3, _DWORD *a4, unsigned __int8 **a5)
{
  int *v5; // r12
  int *v7; // rcx
  unsigned __int8 v8; // bl
  __int64 v9; // r14
  IRP *v10; // rcx
  int *v11; // rcx
  __int64 v12; // r12
  __int64 Pool2; // rax
  struct _MDL *v14; // rcx
  unsigned int v15; // ebp
  PMDL Mdl; // rax
  int *v17; // r13
  unsigned __int64 v18; // rsi
  size_t v19; // r14
  int *v20; // r12
  int v21; // eax
  __int64 v22; // r12
  int *v23; // rax
  __int64 result; // rax
  int *v25; // rax
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int8 *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 Srb; // rax
  unsigned int v33; // edx
  unsigned int v34; // r8d
  __int64 v35; // rcx
  __int64 Pool; // rax
  PIRP Irp; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // r9

  v5 = *a1;
  v7 = a1[10];
  v8 = a2;
  v9 = (unsigned int)*a4;
  if ( v7 )
  {
    RaidPrepareSrbForReuse(v7);
  }
  else
  {
    if ( *v5 == 1314275652 )
    {
      v31 = (__int64)v5 + 274;
    }
    else if ( *v5 == 1094997074 )
    {
      v31 = (__int64)v5 + 482;
    }
    else
    {
      v31 = 98LL;
    }
    Srb = RaidAllocateSrb(*((_QWORD *)v5 + 1), 0LL, *(unsigned __int8 *)v31, 1LL);
    a1[10] = (int *)Srb;
    if ( !Srb )
      return 3221225495LL;
  }
  if ( !a1[11] )
  {
    Pool = RaidAllocatePool(64LL, 18LL, 1314087250LL, *((_QWORD *)v5 + 1));
    a1[11] = (int *)Pool;
    if ( !Pool )
      return 3221225495LL;
  }
  v10 = (IRP *)a1[8];
  if ( v10 )
  {
    IoReuseIrp(v10, -1073741823);
  }
  else
  {
    Irp = IoAllocateIrp(1, 0);
    a1[8] = (int *)&Irp->Type;
    if ( !Irp )
      return 3221225495LL;
  }
  v11 = a1[12];
  if ( v11 )
    ExFreePoolWithTag(v11, 0x6C526152u);
  v12 = *((_QWORD *)v5 + 1);
  Pool2 = ExAllocatePool2(64LL, v9, 1817338194LL);
  if ( !Pool2 && v12 )
  {
    RaidLogAllocationFailure(v12, 64, v9, 1817338194, 0x80000000);
    a1[12] = 0LL;
    return 3221225495LL;
  }
  a1[12] = (int *)Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v14 = (struct _MDL *)a1[9];
  *((_DWORD *)a1 + 26) = v9;
  if ( v14 )
    IoFreeMdl(v14);
  v15 = 0;
  Mdl = IoAllocateMdl(a1[12], *((_DWORD *)a1 + 26), 0, 0, 0LL);
  a1[9] = (int *)Mdl;
  if ( !Mdl )
    return 3221225495LL;
  v17 = a1[12];
  v18 = (unsigned __int64)a1[10];
  v19 = (unsigned int)*a4;
  memset_0(v17, 0, v19);
  v20 = *a1;
  v21 = **a1;
  if ( v21 == 1314275652 )
  {
    v22 = (__int64)v20 + 274;
  }
  else if ( v21 == 1094997074 )
  {
    v22 = (__int64)v20 + 482;
  }
  else
  {
    v22 = 98LL;
  }
  RaidInitializeReportLunsSrb(v18, v8, BYTE1(a2), BYTE2(a2), (__int64)v17, v19, *(_BYTE *)v22);
  if ( *(_BYTE *)v22 == 1 )
  {
    *(_DWORD *)(v18 + 24) |= 0x80110u;
    v33 = 0;
    v34 = *(_DWORD *)(v18 + 56);
    *(_QWORD *)(v18 + 104) = 0LL;
    *(_QWORD *)(v18 + 64) = a1[12];
    *(_DWORD *)(v18 + 60) = v19;
    if ( v34 )
    {
      while ( 1 )
      {
        v35 = *(unsigned int *)(v18 + 4LL * v33 + 120);
        if ( (unsigned int)v35 >= 0x80 )
        {
          v38 = *(unsigned int *)(v18 + 16);
          if ( (unsigned int)v35 <= (unsigned int)v38 )
          {
            v39 = *(unsigned int *)(v18 + 4LL * v33 + 120);
            if ( *(_DWORD *)(v35 + v18) == 64 && v35 + 40 <= v38 )
              break;
          }
        }
        if ( ++v33 >= v34 )
          goto LABEL_18;
      }
      *(_QWORD *)(v39 + v18 + 16) = a1[11];
      *(_BYTE *)(v39 + v18 + 9) = 18;
    }
  }
  else
  {
    *(_QWORD *)(v18 + 56) = 0LL;
    *(_QWORD *)(v18 + 32) = a1[11];
    *(_BYTE *)(v18 + 11) = 18;
    v23 = a1[12];
    *(_DWORD *)(v18 + 12) |= 0x80110u;
    *(_QWORD *)(v18 + 24) = v23;
    *(_DWORD *)(v18 + 16) = v19;
  }
LABEL_18:
  result = RaidBusEnumeratorIssueSynchronousRequest(a1, a3, (__int64)(a1 + 8), v18);
  if ( (int)result >= 0 )
  {
    v25 = *a1;
    v26 = **a1;
    if ( v26 == 1314275652 )
    {
      v27 = (__int64)v25 + 274;
    }
    else if ( v26 == 1094997074 )
    {
      v27 = (__int64)v25 + 482;
    }
    else
    {
      v27 = 98LL;
    }
    v28 = 64LL;
    if ( *(_BYTE *)v27 != 1 )
      v28 = 24LL;
    v29 = *(unsigned __int8 **)(v28 + v18);
    v30 = v29[3] | ((v29[2] | (((*v29 << 8) | (unsigned int)v29[1]) << 8)) << 8);
    if ( (unsigned int)v30 >= (int)v30 + 8 )
    {
      return 3221225860LL;
    }
    else
    {
      if ( (unsigned int)*a4 < (unsigned __int64)(v30 + 8) )
      {
        *a4 = v30 + 8;
        v15 = -1073741789;
      }
      result = v15;
      *a5 = v29;
    }
  }
  else if ( (_DWORD)result == -1073741789 )
  {
    return 3221225486LL;
  }
  return result;
}
