/*
 * XREFs of sub_180095500 @ 0x180095500
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003AC0C @ 0x18003AC0C (sub_18003AC0C.c)
 */

__int64 __fastcall sub_180095500(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 68) = 1;
  sub_18003AC0C((_QWORD *)(a1 + 8), (_QWORD *)(a1 + 40));
  result = *(unsigned int *)(a1 + 64);
  *(_DWORD *)(a1 + 56) = result;
  return result;
}
