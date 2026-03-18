/*
 * XREFs of ParseInteger @ 0x140039534
 * Callers:
 *     ParseArg @ 0x140006850 (ParseArg.c)
 * Callees:
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall ParseInteger(const void **a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // rsi
  __int64 v5; // rbx

  v3 = (_QWORD *)(a2 + 16);
  *(_WORD *)(a2 + 2) = 1;
  *(_QWORD *)(a2 + 16) = 0LL;
  v5 = a3;
  memmove((void *)(a2 + 16), *a1, a3);
  *a1 = (char *)*a1 + v5;
  if ( (gDebugger & 0xD0) != 0 )
    ConPrintf("0x%I64x", *v3);
  return 0LL;
}
