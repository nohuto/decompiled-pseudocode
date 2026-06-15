/*
 * XREFs of sub_14002C360 @ 0x14002C360
 * Callers:
 *     sub_14002C234 @ 0x14002C234 (sub_14002C234.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_14002C360(GUID *a1)
{
  HRESULT Guid; // eax
  unsigned int v2; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  Guid = CoCreateGuid(a1 + 2);
  v2 = Guid;
  if ( Guid >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 13, (int)"avcore\\audiocore\\server\\audiodg\\exe\\aposerviceprovider.cpp", Guid);
  return v2;
}
