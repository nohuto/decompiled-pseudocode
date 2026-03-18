/*
 * XREFs of _inc @ 0x14053E6CC
 * Callers:
 *     ReadString @ 0x14053E3C0 (ReadString.c)
 *     _input_s @ 0x14053E6FC (_input_s.c)
 * Callees:
 *     xHalTimerQueryRtcErrors @ 0x1405B8340 (xHalTimerQueryRtcErrors.c)
 */

__int64 __fastcall inc(__int64 a1)
{
  if ( --*(_DWORD *)(a1 + 8) < 0 )
    return (unsigned int)xHalTimerQueryRtcErrors();
  else
    return *(unsigned __int8 *)(*(_QWORD *)a1)++;
}
