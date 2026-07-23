/*
 * XREFs of SymCryptMlDsaGetInternalParamsFromParams @ 0x140571C28
 * Callers:
 *     SymCryptMlDsakeyAllocate @ 0x1405606F0 (SymCryptMlDsakeyAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMlDsaGetInternalParamsFromParams(int a1, __int64 **a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // ecx
  __int64 *v5; // rax

  v2 = 0;
  if ( !a1 )
    return 32785;
  v3 = a1 - 1;
  if ( !v3 )
  {
    v5 = SymCryptMlDsaInternalParams44;
    goto LABEL_9;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v5 = SymCryptMlDsaInternalParams65;
    goto LABEL_9;
  }
  if ( v4 == 1 )
  {
    v5 = SymCryptMlDsaInternalParams87;
LABEL_9:
    *a2 = v5;
    return v2;
  }
  return 32782;
}
