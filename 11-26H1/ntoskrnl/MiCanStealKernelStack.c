/*
 * XREFs of MiCanStealKernelStack @ 0x14040A394
 * Callers:
 *     MiJumpStackTarget @ 0x1403E7E30 (MiJumpStackTarget.c)
 *     MiSwapStackPage @ 0x140409E34 (MiSwapStackPage.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x14040AE80 (MiGetLeafPfnBuddy.c)
 */

__int64 __fastcall MiCanStealKernelStack(__int64 a1, __int16 a2)
{
  __int16 v2; // r10
  __int64 v3; // r9
  unsigned __int64 v4; // rdx
  unsigned int v5; // r8d

  v2 = a2;
  v3 = a1;
  v4 = (a1 + 0x220000000000LL) / 48;
  if ( v4 > qword_140E2D920 )
    return 0LL;
  v5 = 0;
  if ( ((*(_QWORD *)(48 * v4 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0
    || ((*(_QWORD *)(a1 + 40) >> 60) & 7) != 2
    || (byte_140E2D809 & 1) == 0 && ((MiGetLeafPfnBuddy(a1, 1LL) + 32) & 0xFFFFFFFFFFFFFFDFuLL) == 0 )
  {
    return 0LL;
  }
  if ( (*(_BYTE *)(v3 + 34) & 7) != 6 || (unsigned __int16)*(_DWORD *)(v3 + 32) != v2 )
    return 0LL;
  LOBYTE(v5) = *(int *)(v3 + 32) >= 0;
  return v5;
}
