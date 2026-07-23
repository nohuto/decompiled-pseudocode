/*
 * XREFs of MiIncrementVmFaultCount @ 0x140445910
 * Callers:
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MiIncrementVmFaultCount(__int64 a1, unsigned int a2)
{
  unsigned __int8 result; // al

  _InterlockedAdd((volatile signed __int32 *)(a1 + 4), a2);
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    _InterlockedAdd(&dword_140E37A00, a2);
  result = dword_140E36240;
  if ( !dword_140E36240 )
  {
    result = (*(_DWORD *)(a1 + 184) & 0xF) - 1;
    dword_140E36240 = result <= 3u;
  }
  __addgsdword(0x2E90u, a2);
  return result;
}
