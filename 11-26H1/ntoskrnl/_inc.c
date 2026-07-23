/*
 * XREFs of _inc @ 0x140540B50
 * Callers:
 *     ReadString @ 0x140540840 (ReadString.c)
 *     _input_s @ 0x140540B80 (_input_s.c)
 * Callees:
 *     xHalTimerQueryRtcErrors @ 0x1405BABB0 (xHalTimerQueryRtcErrors.c)
 */

__int64 __fastcall inc(__int64 a1)
{
  if ( --*(_DWORD *)(a1 + 8) < 0 )
    return (unsigned int)xHalTimerQueryRtcErrors();
  else
    return *(unsigned __int8 *)(*(_QWORD *)a1)++;
}
