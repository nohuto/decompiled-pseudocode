/*
 * XREFs of MiGetValidAwePartitionId @ 0x1404F0104
 * Callers:
 *     MiGetPageProtection @ 0x1402E8264 (MiGetPageProtection.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall MiGetValidAwePartitionId(unsigned __int64 a1)
{
  unsigned __int64 v1; // rcx

  if ( (a1 & 1) == 0 && qword_140E2D8C0 && (a1 & 0x10) == 0 )
    a1 &= qword_140E2D8C8;
  v1 = (a1 >> 12) & 0xFFFFFFFFFFLL;
  if ( v1 <= qword_140E2D920 && ((*(_QWORD *)(48 * v1 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    return (*(_QWORD *)(48 * v1 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FF;
  else
    return 0;
}
