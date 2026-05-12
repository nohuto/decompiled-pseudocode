/*
 * XREFs of sub_140068DC0 @ 0x140068DC0
 * Callers:
 *     sub_14001DAE0 @ 0x14001DAE0 (sub_14001DAE0.c)
 * Callees:
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 */

__int64 __fastcall sub_140068DC0(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 result; // rax

  *a4 = 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 1 )
    return sub_1400229C8(*(_BYTE *)(a2 + 3));
  *(_QWORD *)(a3 + 32) = *(_QWORD *)(a1 + 40);
  result = 0LL;
  *(_BYTE *)(a3 + 93) = 1;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  return result;
}
