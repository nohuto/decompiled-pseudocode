/*
 * XREFs of MiRevokeExecuteTail @ 0x1404C4970
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x140329040 (MiFlushTbList.c)
 *     MiReleaseProcessorFlushList @ 0x1403613C0 (MiReleaseProcessorFlushList.c)
 */

__int64 __fastcall MiRevokeExecuteTail(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 184);
  if ( v2 )
  {
    MiFlushTbList(v2);
    MiReleaseProcessorFlushList();
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  return 0LL;
}
