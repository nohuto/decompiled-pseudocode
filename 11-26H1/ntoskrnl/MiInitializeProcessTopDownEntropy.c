/*
 * XREFs of MiInitializeProcessTopDownEntropy @ 0x140A094D8
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140A08138 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 */

_QWORD *__fastcall MiInitializeProcessTopDownEntropy(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  _QWORD *result; // rax

  v2 = 0LL;
  if ( *(_QWORD *)(a1 + 872) <= 0x100000000uLL )
    v2 = *(_QWORD *)(a1 + 872);
  v4 = (-(__int64)((*(_DWORD *)(a1 + 1532) & 1) != 0) & 0x9FFFF0000LL) + 0x7FF600000000LL;
  if ( (*(_DWORD *)(a1 + 1872) & 0x40) == 0 )
  {
    if ( v2 )
      v2 -= (unsigned __int8)ExGenRandom(1, a2) << 16;
    v4 -= (unsigned int)ExGenRandom(1, a2) << 16;
  }
  result = *(_QWORD **)(a1 + 1040);
  if ( v2 )
    result[136] = v4;
  else
    v2 = v4;
  result[118] = v2;
  result[127] = v2;
  return result;
}
