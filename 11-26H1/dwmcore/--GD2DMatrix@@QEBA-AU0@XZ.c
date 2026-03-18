/*
 * XREFs of ??GD2DMatrix@@QEBA?AU0@XZ @ 0x180292C64
 * Callers:
 *     ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x180192F2C (-Negate@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall D2DMatrix::operator-(char *a1, _DWORD *a2)
{
  int v2; // xmm0_4
  _DWORD *v3; // rax
  signed __int64 v4; // rcx
  __int64 v5; // r8

  v2 = *(_DWORD *)a1;
  v3 = a2 + 1;
  v4 = a1 - (char *)a2;
  v5 = 15LL;
  *a2 = v2 ^ _xmm;
  do
  {
    *v3 = *(_DWORD *)((char *)v3 + v4) ^ _xmm;
    ++v3;
    --v5;
  }
  while ( v5 );
  return a2;
}
