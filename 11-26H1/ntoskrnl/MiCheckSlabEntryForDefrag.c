/*
 * XREFs of MiCheckSlabEntryForDefrag @ 0x14070AC04
 * Callers:
 *     MiFindDefragmentSlabEntriesHelper @ 0x14070BBE0 (MiFindDefragmentSlabEntriesHelper.c)
 *     MiFindDefragmentSlabEntriesHelperByIdentity @ 0x14070BC80 (MiFindDefragmentSlabEntriesHelperByIdentity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckSlabEntryForDefrag(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // r11d
  unsigned int v4; // r8d
  int v5; // eax
  int v6; // edx
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // eax

  v3 = a2[21] + a2[22];
  v4 = 0;
  if ( !v3 )
    return 0LL;
  if ( v3 >= *(_DWORD *)(a1 + 76) )
    return 0LL;
  v5 = a2[23];
  if ( (v5 & 0x200) != 0 )
    return 0LL;
  v6 = *(_DWORD *)(a1 + 84);
  if ( (v6 & 0x10) != 0 && (v5 & 1) == 0 )
  {
    v7 = *(_QWORD *)(a1 + 40);
    if ( !v7 )
      goto LABEL_8;
    if ( *(_DWORD *)(v7 + 84) + *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL) < v3 )
    {
      v6 = *(_DWORD *)(a1 + 84);
LABEL_8:
      v8 = *(_DWORD *)(a1 + 76) >> 1;
      *(_QWORD *)(a1 + 40) = a2;
      if ( v3 >= v8 )
        *(_DWORD *)(a1 + 84) = v6 | 0x20;
    }
  }
  if ( !*(_QWORD *)(a1 + 56) )
  {
    v9 = *(_QWORD *)(a1 + 48);
    if ( !v9 || v9 == *(_QWORD *)(a1 + 40) || *(_DWORD *)(v9 + 84) + *(_DWORD *)(*(_QWORD *)(a1 + 48) + 88LL) > v3 )
    {
      v10 = *(_DWORD *)(a1 + 76) >> 2;
      *(_QWORD *)(a1 + 48) = a2;
      if ( v3 <= v10 && a2 != *(_DWORD **)(a1 + 40) )
        *(_DWORD *)(a1 + 84) |= 0x40u;
    }
  }
  LOBYTE(v4) = (*(_BYTE *)(a1 + 84) & 0x60) == 96;
  return v4;
}
