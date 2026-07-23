/*
 * XREFs of MiPfCompleteCoalescedIo @ 0x1404B367C
 * Callers:
 *     MmWaitForCacheManagerPrefetch @ 0x1403A1408 (MmWaitForCacheManagerPrefetch.c)
 *     MiPfCompletePrefetchIos @ 0x1403A19F0 (MiPfCompletePrefetchIos.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiPfCompleteInPageSupport @ 0x1403A1878 (MiPfCompleteInPageSupport.c)
 *     MiRetardMdl @ 0x1404FDE4C (MiRetardMdl.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfCompleteCoalescedIo(ULONG_PTR BugCheckParameter4, void *a2)
{
  unsigned int v2; // ebp
  unsigned int *v5; // r14
  ULONG_PTR v6; // r9
  ULONG_PTR v7; // r8
  ULONG_PTR *v8; // rsi
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ecx

  v2 = 0;
  KeWaitForSingleObject((PVOID)(BugCheckParameter4 + 32), WrPageIn, 0, 0, 0LL);
  v5 = (unsigned int *)(BugCheckParameter4 + 80);
  if ( _bittest16((const signed __int16 *)(BugCheckParameter4 + 282), 9u) )
  {
    MiRetardMdl(BugCheckParameter4 + 272);
    *v5 = -1073741670;
    *(_QWORD *)(BugCheckParameter4 + 88) = 0LL;
  }
  if ( (*(_BYTE *)(BugCheckParameter4 + 282) & 1) != 0 )
    MmUnmapLockedPages(*(PVOID *)(BugCheckParameter4 + 296), (PMDL)(BugCheckParameter4 + 272));
  if ( (*v5 & 0x80000000) == 0 )
  {
    v6 = *(unsigned int *)(BugCheckParameter4 + 312);
    v7 = *(_QWORD *)(BugCheckParameter4 + 88);
    if ( v7 != v6 )
      KeBugCheckEx(0x7Au, 5uLL, v7, v6, BugCheckParameter4);
  }
  else
  {
    v2 = *v5;
  }
  v8 = (ULONG_PTR *)(BugCheckParameter4 + 16);
  while ( 1 )
  {
    v9 = *v8;
    if ( (ULONG_PTR *)*v8 == v8 )
      break;
    if ( *(ULONG_PTR **)(v9 + 8) != v8 || (v10 = *(_QWORD *)v9, *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9) )
      __fastfail(3u);
    *v8 = v10;
    *(_QWORD *)(v10 + 8) = v8;
    *(_DWORD *)(v9 + 80) = *v5;
    if ( (*v5 & 0x80000000) != 0 )
      v11 = 0LL;
    else
      v11 = *(unsigned int *)(v9 + 184);
    *(_QWORD *)(v9 + 88) = v11;
    KeSetEvent((PRKEVENT)(v9 + 32), 0, 0);
    v12 = MiPfCompleteInPageSupport(v9, a2);
    if ( ((v12 + 0x80000000) & 0x80000000) == 0 && v12 != -1073740748 )
      v2 = v12;
  }
  ExFreePoolWithTag((PVOID)BugCheckParameter4, 0);
  return v2;
}
