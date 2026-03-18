/*
 * XREFs of KiDetermineImportOptimizationEnablement @ 0x1405F201C
 * Callers:
 *     KiInitializeBootStructures @ 0x140BF5890 (KiInitializeBootStructures.c)
 * Callees:
 *     KiIsSafeBoot @ 0x1405F22E4 (KiIsSafeBoot.c)
 *     KiIsWinPEBoot @ 0x1405F2434 (KiIsWinPEBoot.c)
 */

__int64 __fastcall KiDetermineImportOptimizationEnablement(__int64 a1)
{
  __int64 result; // rax

  result = KiIsSafeBoot();
  if ( (_BYTE)result
    || (result = KiIsWinPEBoot(a1), (_BYTE)result)
    || (result = *(_QWORD *)(a1 + 240), (*(_DWORD *)(result + 132) & 0x1000) != 0) )
  {
    KiFeatureSettings |= 0x20000u;
  }
  return result;
}
