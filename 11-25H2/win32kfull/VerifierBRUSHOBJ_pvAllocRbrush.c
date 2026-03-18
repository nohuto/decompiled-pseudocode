/*
 * XREFs of VerifierBRUSHOBJ_pvAllocRbrush @ 0x140331DF0
 * Callers:
 *     <none>
 * Callees:
 *     BRUSHOBJ_pvAllocRbrush @ 0x140214490 (BRUSHOBJ_pvAllocRbrush.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x140331D44 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PVOID __fastcall VerifierBRUSHOBJ_pvAllocRbrush(BRUSHOBJ *pbo, __int64 cj)
{
  ULONG v2; // ebx

  v2 = cj;
  if ( (unsigned int)VerifierRandomFailure((int)pbo, cj) )
    return 0LL;
  else
    return BRUSHOBJ_pvAllocRbrush(pbo, v2);
}
