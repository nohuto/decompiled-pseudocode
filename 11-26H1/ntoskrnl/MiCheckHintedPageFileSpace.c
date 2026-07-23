/*
 * XREFs of MiCheckHintedPageFileSpace @ 0x14046ABBC
 * Callers:
 *     MiFindFreePageFileSpace @ 0x1403FEF30 (MiFindFreePageFileSpace.c)
 * Callees:
 *     RtlLengthCurrentClearRunForward @ 0x14046AC48 (RtlLengthCurrentClearRunForward.c)
 */

__int64 __fastcall MiCheckHintedPageFileSpace(__int64 a1, unsigned int a2, int a3, char a4)
{
  __int64 v4; // rsi
  int v7; // ebx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 80);
  if ( _bittest64(*(const signed __int64 **)(v4 + 32), a2) )
    return 0LL;
  if ( _bittest64(*(const signed __int64 **)(v4 + 16), a2) )
    return 0LL;
  v7 = a4 & 0x40;
  if ( (unsigned int)RtlLengthCurrentClearRunForward(v4 + 24, a2) != a3 && !v7 )
    return 0LL;
  result = RtlLengthCurrentClearRunForward(v4 + 8, a2);
  if ( (_DWORD)result != a3 && !v7 )
    return 0LL;
  return result;
}
