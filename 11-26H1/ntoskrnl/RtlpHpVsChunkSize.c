/*
 * XREFs of RtlpHpVsChunkSize @ 0x14063D98C
 * Callers:
 *     RtlpSizeHeapInternal @ 0x1406205D4 (RtlpSizeHeapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsChunkSize(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v4; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int16 v8; // ax
  int v9; // edx

  v4 = a2 - 16;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && (a2 & 0xFFF) == 0 )
    v4 = a2 - 32;
  if ( !(BYTE2(PspTlsContext.Timer.Period) ^ (unsigned __int8)(BYTE6(v4) ^ HIWORD(*(_QWORD *)v4))) )
    return -1LL;
  v7 = 16 * (WORD1(v4) ^ *(unsigned __int16 *)&PspTlsContext.Timer.TimerType ^ WORD1(*(_QWORD *)v4)) - 16;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && ((v4 + 32) & 0xFFF) == 0 )
    v7 = 16 * (WORD1(v4) ^ *(unsigned __int16 *)&PspTlsContext.Timer.TimerType ^ WORD1(*(_QWORD *)v4)) - 32;
  v6 = (unsigned int)v7;
  if ( (*(_DWORD *)(v4 + 8) & 0x100) != 0 )
  {
    v8 = *(_WORD *)(v7 + a2 - 2);
    if ( (v8 & 0x8000u) == 0 )
      v6 = (unsigned int)v7 - (unsigned __int64)(v8 & 0x1FFF);
    else
      v6 = (unsigned int)v7 - 1LL;
    v9 = (v8 >> 14) & 1;
  }
  else
  {
    v9 = 0;
  }
  if ( a4 )
    *a4 = v9;
  return v6;
}
