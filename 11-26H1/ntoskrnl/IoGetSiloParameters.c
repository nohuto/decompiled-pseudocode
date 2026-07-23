/*
 * XREFs of IoGetSiloParameters @ 0x1404608C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetSiloParameters(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 208);
  if ( result )
    return *(_QWORD *)(result + 64);
  return result;
}
