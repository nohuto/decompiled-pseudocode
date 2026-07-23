/*
 * XREFs of ExpPoolPhase1Init @ 0x1406D7B28
 * Callers:
 *     ExpPoolMgrRegisterPool @ 0x14084D700 (ExpPoolMgrRegisterPool.c)
 *     ExpPoolMgrPhase1Init @ 0x140CEDD38 (ExpPoolMgrPhase1Init.c)
 * Callees:
 *     RtlpHpHeapEnableLFH @ 0x14063B88C (RtlpHpHeapEnableLFH.c)
 */

__int64 __fastcall ExpPoolPhase1Init(__int64 a1)
{
  unsigned int i; // edi
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 4));
  if ( (_InterlockedAnd((volatile signed __int32 *)(a1 + 4), 0xFFFFFFFE) & 1) == 0 )
    NT_ASSERT("Flags.RequirePhase1Init == 1");
  for ( i = 0; i < *(_DWORD *)(a1 + 72); ++i )
  {
    result = RtlpHpHeapEnableLFH(*(_QWORD *)(a1 + 16 * (i + 5LL)));
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}
