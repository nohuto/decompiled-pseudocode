/*
 * XREFs of CcUnpinDataForThread @ 0x14078CD90
 * Callers:
 *     <none>
 * Callees:
 *     CcUnpinFileDataEx @ 0x1402C11D0 (CcUnpinFileDataEx.c)
 *     ExReleaseResourceForThreadLite @ 0x140494B10 (ExReleaseResourceForThreadLite.c)
 *     CcUnpinData @ 0x140A4E110 (CcUnpinData.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __stdcall CcUnpinDataForThread(PVOID Bcb, ERESOURCE_THREAD ResourceThreadId)
{
  char *v2; // rbx
  PVOID *i; // rdi

  v2 = (char *)Bcb;
  if ( ((unsigned __int8)Bcb & 1) != 0 )
  {
    v2 = (char *)((unsigned __int64)Bcb & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_9:
    CcUnpinFileDataEx(v2, 1, 0);
    return;
  }
  if ( *(_WORD *)Bcb != 762 )
  {
    ExReleaseResourceForThreadLite((PERESOURCE)((char *)Bcb + 72), ResourceThreadId);
    goto LABEL_9;
  }
  for ( i = (PVOID *)((char *)Bcb + 16); *i; ++i )
    CcUnpinData(*i);
  ExFreePoolWithTag(v2, 0);
}
