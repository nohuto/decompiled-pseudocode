/*
 * XREFs of MiStartBackgroundZeroTimer @ 0x14070EAF4
 * Callers:
 *     MiSelectBestZeroingProcessor @ 0x1403E8AC4 (MiSelectBestZeroingProcessor.c)
 *     MiReduceZeroingThreads @ 0x14051EB08 (MiReduceZeroingThreads.c)
 * Callees:
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 */

__int64 __fastcall MiStartBackgroundZeroTimer(__int64 a1)
{
  unsigned __int16 v1; // dx
  __int64 result; // rax

  ++*(_DWORD *)(a1 + 156);
  if ( !*(_BYTE *)(a1 + 160) )
  {
    v1 = *(_WORD *)(a1 + 152);
    *(_BYTE *)(a1 + 160) = 1;
    result = MiOneMillisecond.QuadPart;
    if ( v1 < 0x3E8u )
      *(_WORD *)(a1 + 152) = ++v1;
    if ( *(_WORD *)(a1 + 154) < v1 )
      *(_WORD *)(a1 + 154) = v1;
    if ( v1 < 0x3E8u )
      return KiSetTimerEx(a1 + 88, MiOneMillisecond.QuadPart * v1, 0, 0, 0LL);
  }
  return result;
}
