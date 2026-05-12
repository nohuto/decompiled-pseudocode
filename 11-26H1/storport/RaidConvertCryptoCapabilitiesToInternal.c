/*
 * XREFs of RaidConvertCryptoCapabilitiesToInternal @ 0x140071578
 * Callers:
 *     AddNvmeIceInterfaceToList @ 0x14007067C (AddNvmeIceInterfaceToList.c)
 *     RaidInitializeCryptoEngine @ 0x140071818 (RaidInitializeCryptoEngine.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall RaidConvertCryptoCapabilitiesToInternal(void **a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  void *v5; // rcx
  unsigned int v6; // ebx
  __int64 Pool; // r8
  ULONG_PTR v11; // r9
  unsigned int v12; // r11d
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r10
  char v18; // al

  v3 = *(unsigned __int16 *)(a2 + 10);
  v5 = *a1;
  v6 = 0;
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x72436152u);
    *a1 = 0LL;
  }
  Pool = RaidAllocatePool(64LL, 16 * (v3 + 1), 1917018450LL, 0LL);
  if ( !Pool )
    return 3238002691LL;
  v11 = a2 + 12;
  *(_WORD *)Pool = *(_WORD *)(a2 + 8);
  v12 = 0;
  *(_WORD *)(Pool + 2) = v3;
  while ( v12 < (unsigned int)v3 )
  {
    v13 = Pool + 16LL * v12;
    if ( !*(_DWORD *)v11 )
      KeBugCheckEx(0x176u, 3uLL, 1uLL, v11, 1uLL);
    if ( *(_DWORD *)(v11 + 4) < (*(_DWORD *)v11 < 2u ? 20 : 25) )
      KeBugCheckEx(0x176u, 3uLL, 1uLL, v11, 2uLL);
    *(_WORD *)(v13 + 16) = *(_WORD *)(v11 + 8);
    *(_WORD *)(Pool + 16LL * v12 + 18) = *(_WORD *)(v11 + 10);
    *(_DWORD *)(Pool + 16LL * v12 + 20) = *(_DWORD *)(v11 + 12);
    if ( a3 && *(_DWORD *)(v11 + 12) == 1 )
    {
      v14 = *(_DWORD *)(v11 + 16);
      if ( v14 == 4 )
      {
        v15 = 3;
      }
      else
      {
        if ( v14 != 3 )
          goto LABEL_33;
        v15 = 1;
      }
      v16 = 8LL;
      v17 = v13 + 16;
    }
    else
    {
      v15 = *(_DWORD *)(v11 + 16);
      v16 = v13 + 16;
      v17 = 8LL;
    }
    *(_DWORD *)(v17 + v16) = v15;
    if ( *(_DWORD *)v11 < 2u )
    {
      *(_WORD *)(v13 + 28) = 64;
    }
    else
    {
      *(_WORD *)(v13 + 28) = *(_WORD *)(v11 + 20);
      *(_BYTE *)(Pool + 16LL * v12 + 30) = *(_BYTE *)(v11 + 24);
    }
    v11 += *(unsigned int *)(v11 + 4);
    ++v12;
  }
  if ( a3 )
  {
    *(_BYTE *)(Pool + 4) = *(_BYTE *)(a3 + 3);
    v18 = *(_BYTE *)(a3 + 1);
    if ( (v18 & 1) != 0 )
    {
      *(_BYTE *)(Pool + 5) = 3;
    }
    else if ( (v18 & 2) != 0 )
    {
      *(_BYTE *)(Pool + 5) = 7;
    }
    else if ( (v18 & 4) != 0 )
    {
      *(_BYTE *)(Pool + 5) = 15;
    }
    else
    {
      if ( (v18 & 8) == 0 )
      {
LABEL_33:
        v6 = -1056964602;
        ExFreePoolWithTag((PVOID)Pool, 0x72436152u);
        return v6;
      }
      *(_BYTE *)(Pool + 5) = 31;
    }
    *(_DWORD *)(Pool + 8) = *(unsigned __int16 *)(a3 + 4) << 10;
    *(_WORD *)(Pool + 6) = *(_WORD *)(a3 + 6);
  }
  else
  {
    *(_BYTE *)(Pool + 4) |= 1u;
  }
  *a1 = (void *)Pool;
  return v6;
}
