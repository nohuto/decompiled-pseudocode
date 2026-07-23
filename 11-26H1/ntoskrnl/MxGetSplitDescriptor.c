/*
 * XREFs of MxGetSplitDescriptor @ 0x140CFD36C
 * Callers:
 *     MxCreateFreePageNode @ 0x140CFBE0C (MxCreateFreePageNode.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall MxGetSplitDescriptor(__int64 a1, _OWORD *a2)
{
  __int64 v2; // r9
  _OWORD *result; // rax

  v2 = *(unsigned int *)(a1 + 200);
  if ( (unsigned int)v2 >= 0x20 )
    return 0LL;
  *(_DWORD *)(a1 + 200) = v2 + 1;
  result = (_OWORD *)(a1 + 48 * v2 + 208);
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  return result;
}
