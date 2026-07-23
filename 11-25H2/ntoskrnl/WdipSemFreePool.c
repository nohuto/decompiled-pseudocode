/*
 * XREFs of WdipSemFreePool @ 0x140793420
 * Callers:
 *     WdipSemShutdown @ 0x140792DAC (WdipSemShutdown.c)
 * Callees:
 *     InitializeSListHead @ 0x140460EA0 (InitializeSListHead.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void WdipSemFreePool()
{
  PVOID *v0; // rax
  _QWORD *v1; // rcx
  _SLIST_HEADER *v2; // rbx
  __int64 v3; // rdi

  v0 = (PVOID *)WdipSemPool;
  v1 = *(_QWORD **)WdipSemPool;
  if ( *((PVOID **)WdipSemPool + 1) != &WdipSemPool )
LABEL_2:
    __fastfail(3u);
  while ( 1 )
  {
    if ( (PVOID *)v1[1] != v0 )
      goto LABEL_2;
    WdipSemPool = v1;
    v1[1] = &WdipSemPool;
    if ( v0 == &WdipSemPool )
      break;
    ExFreePoolWithTag(v0, 0);
    v0 = (PVOID *)WdipSemPool;
    if ( *((PVOID **)WdipSemPool + 1) != &WdipSemPool )
      goto LABEL_2;
    v1 = *(_QWORD **)WdipSemPool;
  }
  dword_140E28930 = 0;
  v2 = &SListHead;
  qword_140E28938 = 0LL;
  v3 = 6LL;
  do
  {
    InitializeSListHead(v2++);
    --v3;
  }
  while ( v3 );
}
