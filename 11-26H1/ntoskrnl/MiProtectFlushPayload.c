/*
 * XREFs of MiProtectFlushPayload @ 0x140311488
 * Callers:
 *     MiProtectGoodCitizen @ 0x140311404 (MiProtectGoodCitizen.c)
 *     MiProtectPrivateMemory @ 0x1403116B4 (MiProtectPrivateMemory.c)
 *     MiProtectValidPte @ 0x140311A38 (MiProtectValidPte.c)
 * Callees:
 *     MiFlushTbList @ 0x140329040 (MiFlushTbList.c)
 *     MiReleaseProcessorFlushList @ 0x1403613C0 (MiReleaseProcessorFlushList.c)
 */

__int64 __fastcall MiProtectFlushPayload(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( a1[7] )
  {
    v2 = a1[9];
    if ( v2 )
    {
      MiFlushTbList(v2);
      result = MiReleaseProcessorFlushList();
      a1[9] = 0LL;
      a1[10] = 0LL;
    }
  }
  return result;
}
