/*
 * XREFs of ExpFindEmptyEntry @ 0x14042E2E4
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x1402C3C28 (ExpAcquireSharedStarveExclusive.c)
 *     ExpAcquireResourceSharedLite @ 0x1402FEE28 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14042D7E0 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpExpandResourceOwnerTable @ 0x14042E344 (ExpExpandResourceOwnerTable.c)
 */

_QWORD *__fastcall ExpFindEmptyEntry(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // r9
  _QWORD *v4; // r8
  _QWORD *result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = (_QWORD *)(v2 + 16LL * *(unsigned int *)(v2 + 8));
    v4 = (_QWORD *)(v2 + 16);
    while ( *v4 )
    {
      v4 += 2;
      if ( v4 == v3 )
        goto LABEL_6;
    }
    result = v4;
    KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)((_DWORD)v4 - *(_DWORD *)(a1 + 16)) >> 4;
  }
  else
  {
LABEL_6:
    ExpExpandResourceOwnerTable(a1, a2);
    return 0LL;
  }
  return result;
}
