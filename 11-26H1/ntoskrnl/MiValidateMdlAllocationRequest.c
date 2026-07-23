/*
 * XREFs of MiValidateMdlAllocationRequest @ 0x14052943C
 * Callers:
 *     MiAllocatePagesForMdl @ 0x14034AA0C (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiInitializeDemandCoalesceContext @ 0x140206BB0 (MiInitializeDemandCoalesceContext.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiValidateMdlAllocationRequest(
        int *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7,
        int a8,
        signed int a9,
        __int64 a10)
{
  signed int v14; // r10d
  int *v15; // rcx
  int v16; // eax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r11
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 *v24; // rdx
  unsigned __int64 v25; // r8
  int v27; // edx

  memset_0(a1, 0, 0x98uLL);
  v14 = a9;
  v15 = a1 + 37;
  if ( (a9 & 0x400000) != 0 )
  {
    v16 = 26;
    v14 = a9 & 0xFFBFFFFF;
    *v15 = 26;
  }
  else
  {
    v16 = 2;
  }
  if ( (v14 & 0x100) != 0 )
  {
    if ( (ULONG *)a2 != &MiSystemPartition )
      return 3221225485LL;
    *v15 = v16 | 8;
  }
  if ( (*(_DWORD *)(a2 + 4) & 0x10) != 0 )
    *v15 |= 2u;
  v17 = a3 >> 12;
  v18 = a4 >> 12;
  if ( v18 < qword_140E2D920 )
  {
    if ( v18 < *(_QWORD *)(a2 + 22280) )
      goto LABEL_14;
  }
  else
  {
    v18 = qword_140E2D920;
  }
  if ( !v17 )
    v14 |= 0x10000u;
LABEL_14:
  if ( (a5 & 0xFFF) != 0 )
    return 3221225485LL;
  v19 = a5 >> 12;
  if ( ((v19 - 1) & v19) != 0 )
  {
    if ( (v14 & 0x40) != 0 )
      return 3221225485LL;
    v19 = 0LL;
  }
  if ( (v14 & 0x400) != 0 )
  {
    if ( (v14 & 0x370) != 0 || (v14 & 0x10001) != 0x10001 || ((a7 - 1) & 0xFFFFFFFD) != 0 )
      return 3221225485LL;
    a1[37] |= 0x10u;
  }
  *((_QWORD *)a1 + 6) = 1LL;
  v20 = 1LL;
  if ( v14 < 0 )
  {
    if ( (v14 & 0x1000) != 0 )
    {
      *((_QWORD *)a1 + 6) = 16LL;
      v20 = 16LL;
LABEL_31:
      if ( (v14 & 4) != 0 )
        return 3221225485LL;
      a1[37] |= 2u;
      goto LABEL_33;
    }
    if ( (v14 & 0x1000000) != 0 )
    {
      v20 = 512LL;
    }
    else
    {
      if ( (v14 & 0x2000000) == 0 )
        goto LABEL_31;
      v20 = 0x40000LL;
    }
    *((_QWORD *)a1 + 6) = v20;
    goto LABEL_31;
  }
LABEL_33:
  v21 = a6;
  if ( a6 > 4294963200LL * v20 )
  {
    if ( (v14 & 4) != 0 )
      return 3221225485LL;
    v21 = 4294963200LL * v20;
    if ( (v14 & 0x60) != 0 && v20 == 1 && v19 )
      v21 = (4294963200LL * v20) & ~((v19 << 12) - 1);
  }
  v22 = (unsigned __int64)(v21 + 4095) >> 12;
  if ( (v14 & 0x40) != 0 )
  {
    if ( (v17 & 0xFFFFFFFFFFEFFFFFuLL) != 0 || v18 < *(_QWORD *)(a2 + 22280) )
      return 3221225485LL;
    v23 = 0;
    v24 = MiPageSizes;
    while ( v19 != *v24 )
    {
      ++v23;
      ++v24;
      if ( v23 >= 3 )
      {
        if ( v23 == 3 )
          return 3221225485LL;
        break;
      }
    }
    if ( v22 % v19 && ((v14 & 4) != 0 || v22 < v19) )
      return 3221225485LL;
  }
  *((_QWORD *)a1 + 5) = (~*(_DWORD *)(a2 + 4) & 0x10LL) << 6;
  v25 = *(_QWORD *)(a2 + 22528) - *((_QWORD *)a1 + 5);
  if ( (__int64)v25 <= 0 )
    return 3221225485LL;
  if ( v22 > v25 )
  {
    if ( (v14 & 4) != 0 )
      return 3221225626LL;
    if ( (v14 & 0x40) != 0 )
    {
      if ( v25 % v19 && v25 < v19 )
        return 3221225626LL;
    }
    else if ( (v14 & 0x20) == 0 || !v19 )
    {
LABEL_59:
      if ( !v25 || v25 < v19 )
        return 3221225626LL;
      goto LABEL_63;
    }
    v25 &= ~(v19 - 1);
    goto LABEL_59;
  }
  v25 = v22;
  if ( !v22 )
    return 3221225485LL;
LABEL_63:
  v27 = a1[37];
  a1[15] = a8;
  *((_QWORD *)a1 + 9) = a10;
  *(_QWORD *)a1 = a2;
  a1[14] = v14;
  *((_QWORD *)a1 + 1) = v17;
  *((_QWORD *)a1 + 2) = v18;
  *((_QWORD *)a1 + 3) = v19;
  a1[36] = a7;
  *((_QWORD *)a1 + 4) = v25;
  if ( (v27 & 2) == 0 && (v14 & 0x10000) == 0 )
  {
    v27 |= 2u;
    a1[37] = v27;
  }
  if ( KeGetCurrentIrql() == 2 )
  {
    v27 |= 4u;
    a1[37] = v27;
  }
  if ( (v14 & 0x40) != 0 )
  {
    if ( a7 == 3 )
    {
      a1[36] = 1;
      a1[37] = v27 | 0x20;
    }
    MiInitializeDemandCoalesceContext((_QWORD *)a1 + 10, v19, v25 / v19, 1);
  }
  return 0LL;
}
