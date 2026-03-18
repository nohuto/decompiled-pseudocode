/*
 * XREFs of ?LogLongAddFailure@@YAXJJAEAH@Z @ 0x1400C2B28
 * Callers:
 *     bCvtPts @ 0x1400C25C8 (bCvtPts.c)
 * Callees:
 *     ?EngTraceLoggingWrite@@YAXPEBD_K111@Z @ 0x1401F0F10 (-EngTraceLoggingWrite@@YAXPEBD_K111@Z.c)
 */

void __fastcall LogLongAddFailure(int a1, int a2, int *a3)
{
  if ( (unsigned __int64)(a2 + (__int64)a1 + 0x80000000LL) > 0xFFFFFFFF )
  {
    EngTraceLoggingWrite("EMathUNCL", 1uLL, 0LL, 0LL, 0LL);
    *a3 = 0;
  }
}
