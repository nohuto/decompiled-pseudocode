/*
 * XREFs of sub_140039760 @ 0x140039760
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14004982C @ 0x14004982C (sub_14004982C.c)
 *     sub_140049894 @ 0x140049894 (sub_140049894.c)
 *     sub_140054C80 @ 0x140054C80 (sub_140054C80.c)
 */

__int64 __fastcall sub_140039760(__int64 a1, _DWORD *a2)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( dword_1400E9840 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) )
    {
      sub_140049894(&dword_1400E9840);
      if ( dword_1400E9840 == -1 )
      {
        dword_1400E9844 = sub_140054C80(a1 - 16);
        sub_14004982C(&dword_1400E9840);
      }
    }
    *a2 = dword_1400E9844;
    return 0LL;
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      124,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\aposerviceprovider.cpp",
      -2147467261);
    return 2147500035LL;
  }
}
