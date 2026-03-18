/*
 * XREFs of NVMeControllerFreeLocalCommand @ 0x14001D2D0
 * Callers:
 *     NVMeControllerDeleteLocalCommandPool @ 0x140011950 (NVMeControllerDeleteLocalCommandPool.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x14000FA50 (NVMeFreeDmaBuffer.c)
 */

__int64 __fastcall NVMeControllerFreeLocalCommand(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 96) )
      NVMeFreeDmaBuffer(a1, 4232LL, (__int64 *)(a2 + 96), *(_QWORD *)(a2 + 104));
    return StorPortExtendedFunction(1LL, a1, a2, a4);
  }
  return result;
}
