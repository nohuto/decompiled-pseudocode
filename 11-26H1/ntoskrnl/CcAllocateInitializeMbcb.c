/*
 * XREFs of CcAllocateInitializeMbcb @ 0x1403A08D8
 * Callers:
 *     CcSetDirtyInMask @ 0x14039F350 (CcSetDirtyInMask.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 */

_QWORD *CcAllocateInitializeMbcb()
{
  _QWORD *result; // rax
  _QWORD *v1; // rdx
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  result = ExAllocatePoolWithTag((POOL_TYPE)1536, 0xC0uLL, 0x624D6343u);
  v1 = result;
  if ( result )
  {
    *(_WORD *)result = 763;
    v2 = result + 2;
    result[7] = result + 2;
    v3 = result + 6;
    *v3 = v2;
    *v2 = v3;
    v2[1] = v3;
    v1[11] = v1 + 12;
    result = v1;
    *((_DWORD *)v1 + 18) = -1;
    v1[5] = -1LL;
  }
  return result;
}
