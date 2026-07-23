/*
 * XREFs of KeFindBiasedSetMember @ 0x140414460
 * Callers:
 *     NtGetCurrentProcessorNumber @ 0x140B1E710 (NtGetCurrentProcessorNumber.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindBiasedSetMember(unsigned __int64 a1, unsigned __int64 a2)
{
  int v2; // r8d
  unsigned __int64 v3; // r11
  int i; // edx
  unsigned __int64 v5; // rax

  v2 = 0;
  v3 = a1;
  for ( i = a2 % (unsigned int)__popcnt(a1) + 1; i; --i )
  {
    _BitScanForward64(&v5, v3);
    v2 += v5 + 1;
    v3 >>= (unsigned __int8)v5 + 1;
  }
  return (unsigned int)(v2 - 1);
}
