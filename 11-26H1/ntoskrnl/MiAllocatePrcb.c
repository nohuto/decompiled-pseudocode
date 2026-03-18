/*
 * XREFs of MiAllocatePrcb @ 0x14070DEAC
 * Callers:
 *     MmInitializeProcessor @ 0x140C0013C (MmInitializeProcessor.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 */

__int64 __fastcall MiAllocatePrcb(int a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  _DWORD *v3; // rcx

  result = ExAllocatePoolMm(64LL, 0xB070uLL, 1833986381, a1 | 0x80000000);
  if ( result )
  {
    v2 = 2LL;
    v3 = (_DWORD *)(result + 12244);
    *(_DWORD *)(result + 344) = 2;
    do
    {
      *v3 = 512;
      v3 += 5150;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
