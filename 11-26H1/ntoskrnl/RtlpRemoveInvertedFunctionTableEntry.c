/*
 * XREFs of RtlpRemoveInvertedFunctionTableEntry @ 0x14040E9B8
 * Callers:
 *     RtlRemoveInvertedFunctionTable @ 0x14040D21C (RtlRemoveInvertedFunctionTable.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 */

unsigned __int64 __fastcall RtlpRemoveInvertedFunctionTableEntry(__int64 a1, int a2)
{
  unsigned __int64 result; // rax

  _InterlockedIncrement(&dword_141200028);
  result = (unsigned int)PsInvertedFunctionTable[0];
  if ( PsInvertedFunctionTable[0] != 2 )
    result = (unsigned __int64)memmove(
                                 &PsInvertedFunctionTable[4 * a2 + 4 + 2 * a2],
                                 &PsInvertedFunctionTable[4 * (a2 + 1) + 4 + 2 * (a2 + 1)],
                                 24LL * (unsigned int)(PsInvertedFunctionTable[0] - a2 - 1));
  --PsInvertedFunctionTable[0];
  _InterlockedIncrement(&dword_141200028);
  return result;
}
