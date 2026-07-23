/*
 * XREFs of SymCryptMlDsaPolyElementSub @ 0x14057282C
 * Callers:
 *     SymCryptMlDsaVectorSub @ 0x1405739F4 (SymCryptMlDsaVectorSub.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMlDsaPolyElementSub(_DWORD *a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r9
  __int64 v4; // r11
  __int64 v5; // r8
  __int64 result; // rax

  v3 = a1;
  v4 = 256LL;
  v5 = a3 - (_QWORD)a1;
  do
  {
    result = *(unsigned int *)((char *)v3 + a2 - (_QWORD)a1);
    *(_DWORD *)((char *)v3 + v5) = *v3 + ((((unsigned __int64)(unsigned int)*v3 - result) >> 32) & 0x7FE001) - result;
    ++v3;
    --v4;
  }
  while ( v4 );
  return result;
}
