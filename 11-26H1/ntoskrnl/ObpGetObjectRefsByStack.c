/*
 * XREFs of ObpGetObjectRefsByStack @ 0x140AB6664
 * Callers:
 *     ObpInitializeObjectRefsByStack @ 0x1407C4D98 (ObpInitializeObjectRefsByStack.c)
 *     ObpObjectRefsByStackAddTrace @ 0x140AB6310 (ObpObjectRefsByStackAddTrace.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ObpGetObjectRefsByStack(__int64 a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*((_QWORD *)qword_140F13228 + (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191);
        result && *result != a1;
        result = (_QWORD *)result[1] )
  {
    ;
  }
  return result;
}
