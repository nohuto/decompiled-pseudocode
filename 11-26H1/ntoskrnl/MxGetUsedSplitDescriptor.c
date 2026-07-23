/*
 * XREFs of MxGetUsedSplitDescriptor @ 0x140CFD3BC
 * Callers:
 *     MxInsertUsedRegionsInLoaderTree @ 0x140CFDC88 (MxInsertUsedRegionsInLoaderTree.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

_OWORD *__fastcall MxGetUsedSplitDescriptor(__int64 a1, _OWORD *a2)
{
  ULONG_PTR v2; // r8
  _OWORD *result; // rax

  v2 = *(unsigned int *)(a1 + 1744);
  if ( (unsigned int)v2 >= 5 )
    KeBugCheckEx(0x1Au, 0x62001uLL, v2, 0LL, 0LL);
  *(_DWORD *)(a1 + 1744) = v2 + 1;
  result = (_OWORD *)(a1 + 48 * v2 + 1752);
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  return result;
}
