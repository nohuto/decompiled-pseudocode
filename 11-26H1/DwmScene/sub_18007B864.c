/*
 * XREFs of sub_18007B864 @ 0x18007B864
 * Callers:
 *     sub_18007AEA8 @ 0x18007AEA8 (sub_18007AEA8.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18007ACE8 @ 0x18007ACE8 (sub_18007ACE8.c)
 */

__int64 __fastcall sub_18007B864(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    sub_18007ACE8(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
    return sub_18000E26C(*(void **)(a1 + 8), 40LL * *(_QWORD *)(a1 + 16));
  }
  return result;
}
