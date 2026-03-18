/*
 * XREFs of GreCreatePen @ 0x1400E3538
 * Callers:
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x140241C3C (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     GreExtCreatePen @ 0x1400E35BC (GreExtCreatePen.c)
 */

__int64 __fastcall GreCreatePen(unsigned int a1, int a2, int a3, __int64 a4)
{
  if ( a1 <= 4 || a1 - 5 <= 1 )
    return GreExtCreatePen(a1, a2, 0, a3, 0LL, 0LL, 0, 0LL, 0, 1, a4);
  EngSetLastError(0x57u);
  return 0LL;
}
