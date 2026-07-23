/*
 * XREFs of SymCryptFdefModDivPow2 @ 0x14056E448
 * Callers:
 *     SymCryptModDivPow2 @ 0x14055EA10 (SymCryptModDivPow2.c)
 * Callees:
 *     SymCryptFdefModDivSmallPow2 @ 0x14056E4C8 (SymCryptFdefModDivSmallPow2.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

_UNKNOWN **__fastcall SymCryptFdefModDivPow2(__int64 a1, const void *a2, unsigned int a3, void *a4)
{
  _UNKNOWN **result; // rax
  unsigned int v6; // esi
  unsigned int v8; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v6 = a3;
  if ( a3 )
  {
    do
    {
      v8 = v6;
      if ( v6 > 0x40 )
        v8 = 64;
      result = (_UNKNOWN **)SymCryptFdefModDivSmallPow2(a1, a2, v8, a4);
      a2 = a4;
      v6 -= v8;
    }
    while ( v6 );
  }
  else if ( a2 != a4 )
  {
    return (_UNKNOWN **)memmove(a4, a2, *(unsigned int *)(a1 + 16));
  }
  return result;
}
