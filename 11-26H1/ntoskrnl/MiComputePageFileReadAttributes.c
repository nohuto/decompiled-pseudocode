/*
 * XREFs of MiComputePageFileReadAttributes @ 0x14037257C
 * Callers:
 *     MiResolvePageFileFault @ 0x140371F8C (MiResolvePageFileFault.c)
 * Callees:
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 *     MiComputeFaultNode @ 0x140372808 (MiComputeFaultNode.c)
 *     MiComputeHardFaultCluster @ 0x14044FB00 (MiComputeHardFaultCluster.c)
 */

__int64 __fastcall MiComputePageFileReadAttributes(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  int v10; // edx
  unsigned int v11; // ecx
  __int64 v12; // rdx
  bool v13; // zf
  int v14; // ecx
  __int64 result; // rax
  __int64 *v16; // rcx
  __int64 PteShadow; // r8
  int v18; // eax
  __int16 v19; // r8
  __int64 v20; // r9

  *(_DWORD *)(a1 + 64) = 2;
  *(_DWORD *)(a1 + 76) = 16;
  *(_DWORD *)(a1 + 80) = 1;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *a2;
  v6 = *(_QWORD *)a1;
  v7 = *(_QWORD *)(a1 + 8);
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    *(_BYTE *)(a1 + 68) |= 0x10u;
    v16 = (__int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v16;
    if ( (unsigned __int64)v16 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v16 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow((unsigned __int64)v16, *v16);
    LOBYTE(v18) = MiIsPrototypePteVadLookup(PteShadow);
    if ( !v18 && (v19 & 0x800) != 0 )
      *(_BYTE *)(a1 + 68) |= 0x20u;
    if ( (*(_BYTE *)(a1 + 68) & 0x20) != 0 || *(_QWORD *)(v20 + 640) )
      *(_DWORD *)(a1 + 76) = 1;
  }
  *(_DWORD *)(a1 + 72) = (v7 >> 5) & 0x1F;
  *(_DWORD *)(a1 + 60) = MiComputeFaultNode(a2, 0LL, a2 + 11);
  v8 = a2[11];
  if ( v8 && (*(unsigned int *)(v8 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 34) << 32)) == 0x7FFFFFFFELL )
  {
    *(_BYTE *)(a1 + 68) |= 0x80u;
    *(_DWORD *)(a1 + 64) |= 5u;
  }
  if ( (v7 & 0x800) != 0 )
  {
    *(_DWORD *)(a1 + 64) |= 1u;
    *(_DWORD *)(a1 + 76) = 1;
  }
  v9 = *(_QWORD *)(a1 + 40);
  v10 = 0;
  if ( (v9 & 8) != 0 )
    LOBYTE(v10) = (unsigned __int16)v9 >> 12 == *(_DWORD *)(v4 + 1300);
  *(_DWORD *)(a1 + 48) = v10 | *(_DWORD *)(a1 + 48) & 0xFFFFFFFE;
  v11 = *(_DWORD *)(a1 + 76);
  if ( v11 != 1 )
  {
    if ( dword_140E360D8 )
    {
      v11 = 1;
      --dword_140E360D8;
      *(_DWORD *)(a1 + 76) = 1;
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 24);
      if ( v12 )
      {
        v14 = *(_DWORD *)(a1 + 48) & 1 | 2;
        if ( (*(_BYTE *)(a1 + 68) & 0x10) == 0 )
          v14 = *(_DWORD *)(a1 + 48) & 1;
        v11 = MiComputeHardFaultCluster(v4, v12, v5, a2[11], v14);
        *(_DWORD *)(a1 + 76) = v11;
      }
      else if ( v5 >= 0x7FFFFFFF0000LL )
      {
        v13 = (*(_BYTE *)(a1 + 68) & 0x10) == 0;
        v11 = 1;
        *(_DWORD *)(a1 + 76) = 1;
        if ( v13 && (v5 < 0xFFFFF68000000000uLL || v5 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          *(_DWORD *)(a1 + 48) |= 4u;
          v11 = 16;
          *(_DWORD *)(a1 + 76) = 16;
        }
      }
    }
  }
  result = *(unsigned int *)(a1 + 48);
  if ( (result & 1) != 0 )
  {
    result = *(unsigned int *)(v4 + 1304);
    if ( v11 > (unsigned int)result )
      *(_DWORD *)(a1 + 76) = result;
  }
  return result;
}
