/*
 * XREFs of NvmeControllerInitHostMemoryBuffer @ 0x1400F5474
 * Callers:
 *     NvmeControllerInitPhase2 @ 0x1400F5A18 (NvmeControllerInitPhase2.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorpAllocateHostMemoryBuffer @ 0x140051374 (StorpAllocateHostMemoryBuffer.c)
 *     StorpFreeHostMemoryBuffer @ 0x140058A68 (StorpFreeHostMemoryBuffer.c)
 *     NvmeControllerSetHostMemoryBuffer @ 0x1400D0214 (NvmeControllerSetHostMemoryBuffer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeControllerInitHostMemoryBuffer(union _SLIST_HEADER *a1, char a2)
{
  unsigned int v2; // ebp
  char v3; // r12
  unsigned __int64 Alignment; // rax
  int v6; // r15d
  unsigned int v7; // r9d
  unsigned int v8; // edx
  unsigned __int64 Region; // rax
  unsigned int v10; // eax
  union _SLIST_HEADER *v11; // r14
  unsigned int v12; // r13d
  int v13; // esi
  int v14; // esi
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ecx
  _DWORD *Pool; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned int *v21; // r10
  void *v22; // rcx
  size_t HighAddress; // [rsp+30h] [rbp-168h]
  unsigned int v26[3]; // [rsp+54h] [rbp-144h] BYREF
  __int64 Src[16]; // [rsp+60h] [rbp-138h] BYREF
  __int64 v28[16]; // [rsp+E0h] [rbp-B8h] BYREF

  v2 = 0;
  v3 = 0;
  v26[0] = 8;
  if ( a1[75].Alignment )
  {
    v3 = 1;
    v11 = a1 + 8;
    goto LABEL_22;
  }
  Alignment = a1[37].Alignment;
  v6 = 0;
  v7 = *(_DWORD *)(Alignment + 276) << 12;
  v8 = *(_DWORD *)(Alignment + 272) << 12;
  if ( v8 )
  {
    Region = a1[65].Region;
    if ( !Region )
    {
LABEL_10:
      v11 = a1 + 8;
      v12 = 1 << (((*(_DWORD *)(a1[57].Region + 20) >> 7) & 0xF) + 12);
      if ( (unsigned int)StorpAllocateHostMemoryBuffer(
                           *(_QWORD *)(a1[8].Alignment + 408) + 16LL,
                           v7,
                           v8,
                           0LL,
                           v12,
                           0LL,
                           (PHYSICAL_ADDRESS)0x7FFFFFFFFFFFFFFFLL,
                           0LL,
                           (__int64)v28,
                           v26) )
      {
        v13 = -1073741670;
        goto LABEL_25;
      }
      v2 = v26[0];
      if ( v26[0] > 8 )
        v2 = 8;
      v14 = 16 * v2;
      memset_0(Src, 0, 16 * v2);
      if ( v2 )
      {
        v15 = 0LL;
        v16 = v2;
        do
        {
          v17 = v28[v15 / 2 + 1];
          v6 += v17;
          Src[v15 / 2] = v28[v15 / 2];
          v15 += 4LL;
          v26[v15 + 1] = v17 / v12;
          --v16;
        }
        while ( v16 );
      }
      Pool = (_DWORD *)RaidAllocatePool(72LL, (unsigned int)(v14 + 8), 1213096274LL, *(_QWORD *)(v11->Alignment + 8));
      a1[75].Alignment = (unsigned __int64)Pool;
      if ( !Pool )
      {
        v13 = -1073741670;
LABEL_23:
        if ( v2 )
          StorpFreeHostMemoryBuffer(*(_QWORD *)(v11->Alignment + 408) + 16LL, v19, v20);
        goto LABEL_25;
      }
      *Pool = v6;
      memmove((void *)(a1[75].Alignment + 8), Src, 16 * v2);
      *(_DWORD *)(a1[75].Alignment + 4) = v14;
LABEL_22:
      v21 = (unsigned int *)a1[75].Alignment;
      LODWORD(HighAddress) = v21[1];
      v13 = NvmeControllerSetHostMemoryBuffer(a1, a2, 1u, v3, *v21, v21 + 2, HighAddress);
      if ( v13 >= 0 )
        return (unsigned int)v13;
      goto LABEL_23;
    }
    v10 = *(_DWORD *)(Region + 84);
    if ( v10 )
    {
      if ( v10 != -1 )
      {
        v8 = v10;
        if ( (v10 & 0xFFF) != 0 )
          v8 = (v10 + 4095) & 0xFFFFF000;
        if ( v8 < v7 )
          v8 = v7;
      }
      goto LABEL_10;
    }
  }
  v13 = -1073741637;
LABEL_25:
  v22 = (void *)a1[75].Alignment;
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0x484E6152u);
    a1[75].Alignment = 0LL;
  }
  return (unsigned int)v13;
}
