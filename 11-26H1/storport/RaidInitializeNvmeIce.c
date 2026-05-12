/*
 * XREFs of RaidInitializeNvmeIce @ 0x1400719CC
 * Callers:
 *     RaidAdapterGetNvmeIceCapabilities @ 0x1401877EC (RaidAdapterGetNvmeIceCapabilities.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorEtwNVMeICEInterfaceEvent @ 0x1400B1A5C (StorEtwNVMeICEInterfaceEvent.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall RaidInitializeNvmeIce(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 *v3; // rbp
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  char v8; // al
  unsigned int v9; // r13d
  int v10; // eax
  unsigned int v11; // r12d
  size_t v12; // r15
  void *v13; // rcx
  void *Pool; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // r15d
  __int64 v19; // rcx
  unsigned int j; // ebp
  __int64 v21; // r12
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rax
  void *v25; // rcx
  unsigned int i; // esi
  __int64 v27; // r14
  void *v28; // rcx
  unsigned int v30; // [rsp+60h] [rbp+8h]

  v3 = (unsigned __int16 *)(a2 + 12);
  v6 = 0;
  v7 = 0;
  if ( *(_DWORD *)(a2 + 12) != 1 )
    goto LABEL_43;
  v8 = *(_BYTE *)(a2 + 5);
  if ( (v8 & 1) != 0 )
  {
    v9 = 3;
  }
  else if ( (v8 & 2) != 0 )
  {
    v9 = 7;
  }
  else
  {
    if ( (v8 & 4) == 0 )
      goto LABEL_43;
    v9 = 15;
  }
  v10 = *(unsigned __int16 *)(a2 + 22);
  v11 = *(unsigned __int16 *)(a2 + 8) << 10;
  v30 = v11;
  v12 = (unsigned int)(28 * v10 + 12);
  if ( (unsigned int)(28 * v10) >= 0xFFFFFFF4 )
    goto LABEL_43;
  v13 = *(void **)(a1 + 5688);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x72436152u);
    *(_QWORD *)(a1 + 5688) = 0LL;
  }
  Pool = (void *)RaidAllocatePool(64LL, v12, 1917018450LL, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 5688) = Pool;
  if ( !Pool )
  {
    v6 = -1056964605;
LABEL_44:
    v25 = *(void **)(a1 + 5688);
    if ( v25 )
    {
      ExFreePoolWithTag(v25, 0x72436152u);
      *(_QWORD *)(a1 + 5688) = 0LL;
    }
    if ( *(_QWORD *)(a3 + 72) )
    {
      for ( i = 0; i < *(_DWORD *)(a3 + 56); ++i )
      {
        v27 = *(_QWORD *)(a3 + 72);
        v28 = *(void **)(v27 + 72LL * i + 48);
        if ( v28 )
        {
          ExFreePoolWithTag(v28, 0x72436152u);
          *(_QWORD *)(v27 + 72LL * i + 48) = 0LL;
        }
      }
      ExFreePoolWithTag(*(PVOID *)(a3 + 72), 0x72436152u);
      *(_QWORD *)(a3 + 72) = 0LL;
    }
    return v6;
  }
  memmove(Pool, v3, v12);
  if ( !*(_QWORD *)(a3 + 72) )
  {
    v15 = v3[4];
    *(_BYTE *)(a3 + 64) &= ~1u;
    *(_DWORD *)(a3 + 56) = v15;
    v16 = *(unsigned int *)(a3 + 56);
    *(_DWORD *)(a3 + 80) = 0;
    if ( (unsigned __int64)(72 * v16) <= 0xFFFFFFFF )
    {
      v17 = RaidAllocatePool(64LL, (unsigned int)(72 * v16), 1917018450LL, *(_QWORD *)(a1 + 8));
      *(_QWORD *)(a3 + 72) = v17;
      if ( !v17 )
      {
LABEL_16:
        v6 = -1056964605;
        goto LABEL_44;
      }
      v18 = 0;
      if ( v3[5] )
      {
        do
        {
          v19 = 14LL * v18;
          if ( *(_DWORD *)&v3[v19 + 14] == 1 )
          {
            if ( *(_DWORD *)&v3[v19 + 12] == 1 )
            {
              StorEtwNVMeICEInterfaceEvent(
                a1,
                a3,
                -1056964602,
                (unsigned int)L"NVMe ICE interface has invalid 128-bit key size for XTS-AES.",
                3);
            }
            else if ( *(_DWORD *)&v3[v19 + 12] == 2 && v7 <= 0x10 )
            {
              v7 = 16;
            }
          }
          else if ( *(_DWORD *)&v3[v19 + 14] == 3 )
          {
            if ( (*(_DWORD *)&v3[v19 + 12] == 1 || *(_DWORD *)&v3[v19 + 12] == 2) && v7 <= 0x20 )
              v7 = 32;
          }
          else if ( *(_DWORD *)&v3[v19 + 14] == 4 && *(_DWORD *)&v3[v19 + 12] == 1 )
          {
            v7 = 64;
          }
          ++v18;
        }
        while ( v18 < v3[5] );
        if ( v7 )
        {
          for ( j = 0; j < *(_DWORD *)(a3 + 56); ++j )
          {
            v21 = *(_QWORD *)(a3 + 72);
            v22 = 9LL * j;
            *(_BYTE *)(v21 + 8 * v22 + 68) &= ~1u;
            *(_DWORD *)(v21 + 8 * v22) = j;
            v23 = RaidAllocatePool(64LL, v7 + 16, 1917018450LL, *(_QWORD *)(a1 + 8));
            *(_QWORD *)(v21 + 72LL * j + 48) = v23;
            if ( !v23 )
              goto LABEL_16;
          }
          v11 = v30;
          *(_DWORD *)(a3 + 60) = v7;
          goto LABEL_39;
        }
      }
    }
LABEL_43:
    v6 = -1056964602;
    goto LABEL_44;
  }
LABEL_39:
  v24 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 112) |= 0x10u;
  *(_QWORD *)(a1 + 6256) = a3;
  if ( v9 > *(_DWORD *)(v24 + 152) )
    *(_DWORD *)(v24 + 152) = v9;
  if ( *(_DWORD *)(a1 + 408) > v11 )
    *(_DWORD *)(a1 + 408) = v11;
  return v6;
}
