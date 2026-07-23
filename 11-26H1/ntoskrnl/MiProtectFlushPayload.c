/*
 * XREFs of MiProtectFlushPayload @ 0x1403134BC
 * Callers:
 *     MiProtectGoodCitizen @ 0x140313438 (MiProtectGoodCitizen.c)
 *     MiProtectPrivateMemory @ 0x1403136E8 (MiProtectPrivateMemory.c)
 *     MiProtectValidPte @ 0x140313A6C (MiProtectValidPte.c)
 * Callees:
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
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
