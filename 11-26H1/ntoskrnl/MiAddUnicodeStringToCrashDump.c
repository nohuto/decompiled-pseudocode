/*
 * XREFs of MiAddUnicodeStringToCrashDump @ 0x1406FAF64
 * Callers:
 *     MiAddPartitionToCrashDump @ 0x1406FABBC (MiAddPartitionToCrashDump.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 */

__int64 __fastcall MiAddUnicodeStringToCrashDump(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  unsigned __int64 v7; // rsi

  v4 = *(unsigned __int16 *)(a2 + 2);
  if ( (_WORD)v4 )
  {
    v5 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFF000uLL;
    v6 = (unsigned int)v4;
    v7 = v5 + (((*(_QWORD *)(a2 + 8) & 0xFFFLL) + v4 + 4095) & 0xFFFFFFFFFFFFF000uLL);
    while ( v5 < v7 )
    {
      if ( !MmIsAddressValidEx(v5) )
        return 3221225473LL;
      v5 += 4096LL;
    }
    MiAddRangeToCrashDump(a1, *(_QWORD *)(a2 + 8), v6, 0);
  }
  return 0LL;
}
