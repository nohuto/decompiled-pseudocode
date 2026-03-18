/*
 * XREFs of MiReleaseScrubPacket @ 0x14087DD58
 * Callers:
 *     MiInitializeScrubPacket @ 0x14087DA14 (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x14087DE40 (MiScrubMemoryWorker.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x14028F5E0 (MiDeleteUltraThreadContext.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseScrubPacket(__int64 a1)
{
  void *v2; // rcx

  MiDeleteUltraThreadContext(a1 + 48);
  v2 = *(void **)(a1 + 176);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
