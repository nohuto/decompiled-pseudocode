/*
 * XREFs of CmpAllocateParseContext @ 0x140938880
 * Callers:
 *     CmCreateKey @ 0x140936900 (CmCreateKey.c)
 *     CmOpenKey @ 0x140937170 (CmOpenKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char *CmpAllocateParseContext()
{
  char *result; // rax
  char *v1; // rbx

  result = (char *)CmpAllocatePool(0x40uLL);
  v1 = result;
  if ( result )
  {
    memset_0(result, 0, 0x60uLL);
    *(_OWORD *)(v1 + 100) = 0LL;
    *(_OWORD *)(v1 + 116) = 0LL;
    *(_QWORD *)(v1 + 132) = 0LL;
    *((_DWORD *)v1 + 35) = 0;
    memset_0(v1 + 160, 0, 0xE0uLL);
    *((_DWORD *)v1 + 24) = -1;
    *((_QWORD *)v1 + 19) = v1 + 144;
    *((_QWORD *)v1 + 18) = v1 + 144;
    memset_0(v1 + 384, 0, 0x50uLL);
    return v1;
  }
  return result;
}
