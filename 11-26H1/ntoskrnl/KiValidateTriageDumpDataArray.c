/*
 * XREFs of KiValidateTriageDumpDataArray @ 0x1405EB538
 * Callers:
 *     IopLiveDumpAddTriageDumpData @ 0x1405CEF80 (IopLiveDumpAddTriageDumpData.c)
 *     KeAddTriageDumpDataBlock @ 0x1405E8760 (KeAddTriageDumpDataBlock.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1405EAF24 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 * Callees:
 *     KiIsAddressRangeValid @ 0x1404AA87C (KiIsAddressRangeValid.c)
 */

bool __fastcall KiValidateTriageDumpDataArray(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // edi
  unsigned int v6; // eax
  unsigned __int64 v7; // rdx
  unsigned int i; // ecx
  unsigned __int64 v9; // rdx

  v5 = 0;
  if ( !KiIsAddressRangeValid(a1, 48LL) )
    return 0;
  v6 = *(_DWORD *)(a1 + 20);
  if ( *(_DWORD *)(a1 + 16) > v6 )
    return 0;
  v7 = 16LL * v6;
  if ( v7 > 0xFFFFFFFF
    || (int)v7 + 48 < (unsigned int)v7
    || !KiIsAddressRangeValid(a1 + 48, v7)
    || !KiIsAddressRangeValid(*(_QWORD *)a1, 16LL)
    || !KiIsAddressRangeValid(*(_QWORD *)(a1 + 8), 16LL)
    || *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1
    || **(_QWORD **)(a1 + 8) != a1
    || a3 && *(_DWORD *)(a1 + 28) > a3 )
  {
    return 0;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
  {
    v9 = *(_QWORD *)(a1 + 16LL * i + 56);
    if ( v9 > 0xFFFFFFFF || (unsigned int)v9 + v5 < v5 )
      return 0;
    v5 += v9;
  }
  return *(_DWORD *)(a1 + 24) == v5 && v5 <= *(_DWORD *)(a1 + 28);
}
