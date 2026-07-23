/*
 * XREFs of SymCryptFdefIntAddUint32 @ 0x1405676CC
 * Callers:
 *     SymCryptIntAddUint32 @ 0x14055E618 (SymCryptIntAddUint32.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SymCryptFdefIntAddUint32(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r9d
  unsigned __int64 result; // rax
  _DWORD *v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r8
  unsigned __int64 v8; // rax

  v3 = 16 * *(_DWORD *)(a3 + 4);
  result = a2;
  if ( v3 )
  {
    v5 = (_DWORD *)(a3 + 32);
    v6 = a1 - a3;
    v7 = v3;
    do
    {
      v8 = *(unsigned int *)((char *)v5 + v6) + result;
      *v5++ = v8;
      result = HIDWORD(v8);
      --v7;
    }
    while ( v7 );
  }
  return result;
}
