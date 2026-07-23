/*
 * XREFs of MiLocateLowestConflictingVad @ 0x140460B50
 * Callers:
 *     MiExpandVadBitMap @ 0x140A090FC (MiExpandVadBitMap.c)
 *     MiUpdateVadBits @ 0x140A09330 (MiUpdateVadBits.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x140460BA8 (MiCheckForConflictingVad.c)
 *     MiGetPreviousVad @ 0x140460C08 (MiGetPreviousVad.c)
 */

__int64 __fastcall MiLocateLowestConflictingVad(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r11

  result = MiCheckForConflictingVad();
  if ( result )
  {
    do
      result = MiGetPreviousVad(result);
    while ( result
         && (((*(unsigned int *)(result + 28) | ((unsigned __int64)*(unsigned __int8 *)(result + 33) << 32)) << 12) | 0xFFF) >= a2 );
    return v4;
  }
  return result;
}
