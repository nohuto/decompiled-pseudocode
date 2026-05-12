/*
 * XREFs of sub_140046420 @ 0x140046420
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_140069778 @ 0x140069778 (sub_140069778.c)
 *     sub_14006A7D4 @ 0x14006A7D4 (sub_14006A7D4.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_140046420(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  __int64 v6; // rdx
  void *v7; // rcx
  unsigned int v8; // ebp
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  unsigned int i; // edi
  unsigned __int64 v18; // rcx

  v2 = 0;
  v4 = 0LL;
  if ( !(unsigned int)sub_1400567A0(a1, a2) )
  {
    v8 = 28 * a2[5] + 12;
    v9 = sub_140069778();
    v7 = *(void **)(a1 + 5624);
    if ( v9 )
    {
      if ( v7 )
      {
        ExFreePoolWithTag(v7, 0x72436152u);
        *(_QWORD *)(a1 + 5624) = 0LL;
      }
    }
    else if ( v7 )
    {
LABEL_10:
      memmove(v7, a2, v8);
      goto LABEL_11;
    }
    v10 = sub_1400143E0(64LL, v8, 1917018450LL, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 5624) = v10;
    v7 = (void *)v10;
    if ( !v10 )
      goto LABEL_12;
    goto LABEL_10;
  }
  v2 = sub_14006A7D4(a1 + 5616, a2, 0LL);
  if ( v2 )
    goto LABEL_13;
LABEL_11:
  v4 = a1 + 5632;
  *(_DWORD *)(a1 + 5632) = a2[4];
  v11 = *(_QWORD *)(a1 + 8);
  v12 = (unsigned __int64)*(unsigned int *)(a1 + 5632) << 6;
  *(_DWORD *)(a1 + 5648) = 0;
  *(_BYTE *)(a1 + 5636) = 0;
  v13 = sub_1400143E0(64LL, v12, 1917018450LL, v11);
  *(_QWORD *)(a1 + 5640) = v13;
  if ( !v13 )
  {
LABEL_12:
    v2 = -1056964605;
LABEL_13:
    if ( (unsigned int)sub_1400567A0(v7, v6) )
    {
      v14 = *(void **)(a1 + 5616);
      if ( v14 )
      {
        ExFreePoolWithTag(v14, 0x72436152u);
        *(_QWORD *)(a1 + 5616) = 0LL;
      }
    }
    v15 = *(void **)(a1 + 5624);
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0x72436152u);
      *(_QWORD *)(a1 + 5624) = 0LL;
    }
    v16 = *(void **)(v4 + 8);
    if ( v16 )
      ExFreePoolWithTag(v16, 0x72436152u);
    return v2;
  }
  for ( i = 0; i < *(_DWORD *)v4; ++i )
  {
    v18 = *(_QWORD *)(v4 + 8) + ((unsigned __int64)i << 6);
    *(_DWORD *)(v18 + 44) = 0;
    *(_DWORD *)v18 = i;
    InitializeSListHead((PSLIST_HEADER)(v18 + 48));
  }
  return v2;
}
