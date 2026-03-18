/*
 * XREFs of ShouldSetNoOwner @ 0x14014BCD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShouldSetNoOwner(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  int v4; // ecx

  if ( (*(_BYTE *)(a1 + 808) & 0x30) != 0 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v3 = *(_QWORD *)(a2 + 24);
  if ( a2 == *(_QWORD *)(v3 + 112) )
    return 0LL;
  if ( a2 == *(_QWORD *)(*(_QWORD *)(v3 + 8) + 24LL) )
    return 0LL;
  v4 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 236LL);
  result = 1LL;
  if ( v4 == 1 || v4 == 2 || v4 == 16 )
    return 0LL;
  return result;
}
