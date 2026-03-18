/*
 * XREFs of ShouldSetNoOwner @ 0x14010EE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShouldSetNoOwner(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edx
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 808) & 0x30) != 0 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v2 = *(_QWORD *)(a2 + 24);
  if ( a2 == *(_QWORD *)(v2 + 112) )
    return 0LL;
  if ( a2 == *(_QWORD *)(*(_QWORD *)(v2 + 8) + 24LL) )
    return 0LL;
  v3 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 236LL);
  result = 1LL;
  if ( (unsigned int)(v3 - 1) <= 1 || v3 == 16 )
    return 0LL;
  return result;
}
