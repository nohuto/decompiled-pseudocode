/*
 * XREFs of sub_140101670 @ 0x140101670
 * Callers:
 *     sub_14000FC20 @ 0x14000FC20 (sub_14000FC20.c)
 *     sub_14010F090 @ 0x14010F090 (sub_14010F090.c)
 * Callees:
 *     sub_140118950 @ 0x140118950 (sub_140118950.c)
 */

__int64 __fastcall sub_140101670(__int64 a1, IRP *a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax

  if ( (unsigned int)(*(_DWORD *)(a1 + 96) - 5) > 1 )
  {
    result = sub_140118950();
    v3 = result;
    if ( (_DWORD)result == 259 )
      return result;
  }
  else
  {
    v3 = -1073741810;
  }
  a2->IoStatus.Status = v3;
  a2->IoStatus.Information = 0LL;
  IofCompleteRequest(a2, 0);
  return v3;
}
