/*
 * XREFs of ?FlushInteresting@TwoFingerDragRecognizer@@UEAAXW4GestureType@@@Z @ 0x1801BAFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwoFingerDragRecognizer::FlushInteresting(__int64 a1, __int16 a2)
{
  __int64 result; // rax

  if ( (a2 & 0x2000) != 0 )
  {
    *(_QWORD *)(a1 + 60) = *(_QWORD *)(a1 + 52);
    result = 65534LL;
    *(_WORD *)(a1 + 16) &= ~1u;
  }
  if ( (a2 & 0x400) != 0 )
  {
    result = 65531LL;
    *(_WORD *)(a1 + 16) &= ~4u;
  }
  return result;
}
