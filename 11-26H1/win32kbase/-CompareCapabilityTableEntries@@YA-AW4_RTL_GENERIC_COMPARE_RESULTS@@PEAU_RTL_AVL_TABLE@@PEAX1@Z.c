/*
 * XREFs of ?CompareCapabilityTableEntries@@YA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_AVL_TABLE@@PEAX1@Z @ 0x1401D4C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareCapabilityTableEntries(
        struct _RTL_AVL_TABLE *Table,
        _DWORD *FirstStruct,
        _DWORD *SecondStruct)
{
  unsigned int v3; // eax
  unsigned int v4; // ecx

  v3 = SecondStruct[10];
  v4 = FirstStruct[10];
  if ( v3 <= v4 )
    return 2 - (unsigned int)(v3 < v4);
  else
    return 0LL;
}
