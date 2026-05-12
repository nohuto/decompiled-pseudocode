/*
 * XREFs of NvmeAuthKeyTableCompareRoutine @ 0x140075E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeAuthKeyTableCompareRoutine(
        struct _RTL_GENERIC_TABLE *Table,
        _DWORD *FirstStruct,
        _DWORD *SecondStruct)
{
  unsigned int v3; // ecx
  unsigned int v4; // r8d

  v3 = SecondStruct[1];
  v4 = FirstStruct[1];
  if ( v4 == v3 )
    return 2LL;
  else
    return v4 >= v3;
}
