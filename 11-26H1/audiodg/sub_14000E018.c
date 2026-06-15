/*
 * XREFs of sub_14000E018 @ 0x14000E018
 * Callers:
 *     sub_14000D810 @ 0x14000D810 (sub_14000D810.c)
 *     sub_140083CA0 @ 0x140083CA0 (sub_140083CA0.c)
 * Callees:
 *     sub_14000E0B4 @ 0x14000E0B4 (sub_14000E0B4.c)
 *     sub_14000E5B8 @ 0x14000E5B8 (sub_14000E5B8.c)
 */

__int64 __fastcall sub_14000E018(__int64 a1, __int64 a2)
{
  int v4; // ebx

  if ( a2 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
    v4 = sub_14000E0B4(a1, a2, *(unsigned __int16 *)(a1 + 112) ^ 1u);
    if ( v4 >= 0 )
    {
      sub_14000E5B8(a1);
      v4 = sub_14000E0B4(a1, a2, *(unsigned __int16 *)(a1 + 112) ^ 1u);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)v4;
}
