/*
 * XREFs of KiDpcTimerCallbackEpilogue @ 0x140339500
 * Callers:
 *     KiExpireTimer2 @ 0x140338F88 (KiExpireTimer2.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall KiDpcTimerCallbackEpilogue(unsigned int *a1, __int64 a2, ULONG_PTR a3, unsigned int a4)
{
  ULONG_PTR result; // rax

  if ( *a1 != *(_DWORD *)(a2 + 484) )
    KeBugCheckEx(0xC7u, a4, a3, *a1, *(unsigned int *)(a2 + 484));
  result = *(char *)(a2 + 562);
  if ( *((_BYTE *)a1 + 4) != (_BYTE)result )
    KeBugCheckEx(0x1F9u, a3, result, a4, 0LL);
  return result;
}
