/*
 * XREFs of MiReleaseScrubPacket @ 0x140884158
 * Callers:
 *     MiInitializeScrubPacket @ 0x140883E14 (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x140884240 (MiScrubMemoryWorker.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x14028EB40 (MiDeleteUltraThreadContext.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseScrubPacket(__int64 a1)
{
  void *v2; // rcx

  MiDeleteUltraThreadContext(a1 + 48);
  v2 = *(void **)(a1 + 176);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
