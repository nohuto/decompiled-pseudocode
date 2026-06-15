/*
 * XREFs of sub_140066264 @ 0x140066264
 * Callers:
 *     sub_140082A00 @ 0x140082A00 (sub_140082A00.c)
 *     sub_1400861E0 @ 0x1400861E0 (sub_1400861E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140066264(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)(a1 + 12) = 0;
  if ( !*(_DWORD *)(a1 + 8) )
    *(_QWORD *)(a1 + 160) = 0LL;
  return result;
}
