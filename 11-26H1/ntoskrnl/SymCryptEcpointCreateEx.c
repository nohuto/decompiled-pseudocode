/*
 * XREFs of SymCryptEcpointCreateEx @ 0x14056436C
 * Callers:
 *     SymCryptEcpointCreate @ 0x14056434C (SymCryptEcpointCreate.c)
 *     SymCryptEcpointGetValue @ 0x14056440C (SymCryptEcpointGetValue.c)
 *     SymCryptEcpointSetValue @ 0x1405645A0 (SymCryptEcpointSetValue.c)
 * Callees:
 *     SymCryptModElementCreate @ 0x14055C584 (SymCryptModElementCreate.c)
 */

_BYTE *__fastcall SymCryptEcpointCreateEx(_BYTE *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _BYTE *v4; // rdi
  _BYTE *v8; // rbx
  int v9; // esi
  __int64 v10; // r15

  v4 = 0LL;
  if ( a2 && a4 )
  {
    v8 = a1 + 32;
    v9 = 0;
    v4 = a1;
    v10 = *(unsigned int *)(a3 + 36);
    while ( SymCryptModElementCreate() )
    {
      v8 += v10;
      if ( ++v9 >= a4 )
      {
        *a1 = 0;
        *((_QWORD *)v4 + 1) = a3;
        return v4;
      }
    }
    return 0LL;
  }
  return v4;
}
