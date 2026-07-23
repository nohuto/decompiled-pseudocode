/*
 * XREFs of WdipSemFreePool @ 0x140826FAC
 * Callers:
 *     WdipSemShutdown @ 0x140826AD4 (WdipSemShutdown.c)
 * Callees:
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void WdipSemFreePool()
{
  PVOID *v0; // rax
  __int64 v1; // rcx
  struct _LIST_ENTRY **p_Blink; // rbx
  __int64 v3; // rdi

  while ( 1 )
  {
    v0 = (PVOID *)WdipSemPool;
    if ( *((PVOID **)WdipSemPool + 1) != &WdipSemPool
      || (v1 = *(_QWORD *)WdipSemPool, *(PVOID *)(*(_QWORD *)WdipSemPool + 8LL) != WdipSemPool) )
    {
      __fastfail(3u);
    }
    WdipSemPool = *(PVOID *)WdipSemPool;
    *(_QWORD *)(v1 + 8) = &WdipSemPool;
    if ( v0 == &WdipSemPool )
      break;
    ExFreePoolWithTag(v0, 0);
  }
  dword_140E285B0 = 0;
  p_Blink = &stru_140E285C0.Header.WaitListHead.Blink;
  qword_140E285B8 = 0LL;
  v3 = 6LL;
  do
  {
    InitializeSListHead((PSLIST_HEADER)p_Blink);
    p_Blink += 2;
    --v3;
  }
  while ( v3 );
}
