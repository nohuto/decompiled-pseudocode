/*
 * XREFs of MiStartBackgroundZeroTimer @ 0x1407137F4
 * Callers:
 *     MiSelectBestZeroingProcessor @ 0x1402F59A4 (MiSelectBestZeroingProcessor.c)
 *     MiReduceZeroingThreads @ 0x1405211AC (MiReduceZeroingThreads.c)
 * Callees:
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
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
