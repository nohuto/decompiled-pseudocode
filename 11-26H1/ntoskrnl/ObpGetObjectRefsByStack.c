/*
 * XREFs of ObpGetObjectRefsByStack @ 0x140AB7A04
 * Callers:
 *     ObpInitializeObjectRefsByStack @ 0x1407C7DF8 (ObpInitializeObjectRefsByStack.c)
 *     ObpObjectRefsByStackAddTrace @ 0x140AB76B0 (ObpObjectRefsByStackAddTrace.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ObpGetObjectRefsByStack(__int64 a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*((_QWORD *)&ObpStackTraceLock.SavedApcState.ApcListHead[1].Flink->Flink
                           + (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191);
        result && *result != a1;
        result = (_QWORD *)result[1] )
  {
    ;
  }
  return result;
}
