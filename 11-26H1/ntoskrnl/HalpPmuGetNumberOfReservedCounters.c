/*
 * XREFs of HalpPmuGetNumberOfReservedCounters @ 0x140582A80
 * Callers:
 *     EmonReleaseProfileResources @ 0x1405986E0 (EmonReleaseProfileResources.c)
 *     EmonReserveProfileResources @ 0x140598AE0 (EmonReserveProfileResources.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 */

__int64 __fastcall HalpPmuGetNumberOfReservedCounters(__int64 a1)
{
  unsigned int v2; // ebx
  ULONG ActiveProcessorCount; // eax
  unsigned __int64 *v4; // r8
  __int64 v5; // r10
  unsigned __int64 v6; // rdx
  int v7; // r9d

  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    v4 = (unsigned __int64 *)(a1 + 32);
    v5 = ActiveProcessorCount;
    do
    {
      v6 = *v4;
      if ( *v4 )
      {
        v7 = 0;
        do
        {
          v7 += v6 & 1;
          v6 >>= 1;
        }
        while ( v6 );
        v2 += v7;
      }
      v4 += 10;
      --v5;
    }
    while ( v5 );
  }
  return v2;
}
