/*
 * XREFs of SymCryptMlDsaPolyElementAdd @ 0x1405722C4
 * Callers:
 *     SymCryptMlDsaMatrixVectorMontMul @ 0x140571EAC (SymCryptMlDsaMatrixVectorMontMul.c)
 *     SymCryptMlDsaVectorAdd @ 0x1405734F4 (SymCryptMlDsaVectorAdd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMlDsaPolyElementAdd(__int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v3; // r9
  __int64 v4; // rbx
  __int64 result; // rax

  v3 = a2;
  v4 = 256LL;
  do
  {
    result = (unsigned int)(*v3 + *(_DWORD *)((char *)v3 + a1 - (_QWORD)a2));
    *(_DWORD *)((char *)v3++ + a3 - (_QWORD)a2) = result - (((unsigned __int64)(8380416 - result) >> 32) & 0x7FE001);
    --v4;
  }
  while ( v4 );
  return result;
}
