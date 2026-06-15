/*
 * XREFs of sub_140033C9C @ 0x140033C9C
 * Callers:
 *     sub_140033CBC @ 0x140033CBC (sub_140033CBC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140033C9C(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v3 )
    return sub_140033CBC();
  return result;
}
