/*
 * XREFs of MiLocateLowestConflictingVad @ 0x140467400
 * Callers:
 *     MiExpandVadBitMap @ 0x140963274 (MiExpandVadBitMap.c)
 *     MiUpdateVadBits @ 0x1409634A8 (MiUpdateVadBits.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x140467458 (MiCheckForConflictingVad.c)
 *     MiGetPreviousVad @ 0x1404674B8 (MiGetPreviousVad.c)
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
