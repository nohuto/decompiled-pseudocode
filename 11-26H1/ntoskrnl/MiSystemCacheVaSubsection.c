/*
 * XREFs of MiSystemCacheVaSubsection @ 0x140460620
 * Callers:
 *     MmHardFaultBytesRequired @ 0x140A74460 (MmHardFaultBytesRequired.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSystemCacheVaSubsection(__int64 a1)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (*(_QWORD *)(a1 + 24) & 1) == 0 )
    return *(_QWORD *)(a1 + 24);
  return result;
}
