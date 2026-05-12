/*
 * XREFs of CompareRoutine @ 0x14006EF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareRoutine(struct _RTL_GENERIC_TABLE *Table, _DWORD *FirstStruct, _DWORD *SecondStruct)
{
  unsigned int v3; // ecx
  unsigned int v4; // edx

  v3 = FirstStruct[1];
  v4 = SecondStruct[1];
  if ( v3 == v4 )
    return 2LL;
  else
    return v3 >= v4;
}
