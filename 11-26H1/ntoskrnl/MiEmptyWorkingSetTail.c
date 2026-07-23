/*
 * XREFs of MiEmptyWorkingSetTail @ 0x1404B4C50
 * Callers:
 *     <none>
 * Callees:
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 */

__int64 __fastcall MiEmptyWorkingSetTail(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  ULONG_PTR v3; // r8

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_QWORD *)(v2 + 8);
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 28) )
      MiFreeWsleList(*(_QWORD *)(a1 + 32), a2, v3, *(_DWORD *)v2 & 4);
    MiReleaseProcessorFlushList();
    *(_QWORD *)(v2 + 8) = 0LL;
  }
  return 0LL;
}
