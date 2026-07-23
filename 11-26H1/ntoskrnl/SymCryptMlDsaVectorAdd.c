/*
 * XREFs of SymCryptMlDsaVectorAdd @ 0x1405734F4
 * Callers:
 *     SymCryptMlDsaSignEx @ 0x14055FD94 (SymCryptMlDsaSignEx.c)
 *     SymCryptMlDsakeyComputeT @ 0x140573A5C (SymCryptMlDsakeyComputeT.c)
 * Callees:
 *     SymCryptMlDsaPolyElementAdd @ 0x1405722C4 (SymCryptMlDsaPolyElementAdd.c)
 */

__int64 __fastcall SymCryptMlDsaVectorAdd(_BYTE *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax

  v3 = 0;
  if ( *a1 )
  {
    do
    {
      SymCryptMlDsaPolyElementAdd(
        (__int64)&a1[1024 * (unsigned __int64)v3 + 8],
        (_DWORD *)(((unsigned __int64)v3 << 10) + a2 + 8),
        ((unsigned __int64)v3 << 10) + a3 + 8);
      result = (unsigned __int8)*a1;
      ++v3;
    }
    while ( v3 < (unsigned int)result );
  }
  return result;
}
