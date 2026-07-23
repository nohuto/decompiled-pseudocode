/*
 * XREFs of MiDiscardVirtualMemoryTail @ 0x1406F3FE0
 * Callers:
 *     <none>
 * Callees:
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 */

__int64 __fastcall MiDiscardVirtualMemoryTail(__int64 a1, __int64 a2)
{
  ULONG_PTR *v2; // rbx
  ULONG_PTR v3; // r8

  v2 = *(ULONG_PTR **)(a1 + 184);
  v3 = *v2;
  if ( *v2 )
  {
    if ( *(_DWORD *)(v3 + 28) )
      MiFreeWsleList(*(_QWORD *)(a1 + 32), a2, v3, 8u);
    MiReleaseProcessorFlushList();
    *v2 = 0LL;
  }
  return 0LL;
}
