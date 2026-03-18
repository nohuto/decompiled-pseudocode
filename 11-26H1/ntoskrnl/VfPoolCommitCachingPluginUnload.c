/*
 * XREFs of VfPoolCommitCachingPluginUnload @ 0x140C43F20
 * Callers:
 *     <none>
 * Callees:
 *     ExConfigurePoolCommitCaching @ 0x1406D2710 (ExConfigurePoolCommitCaching.c)
 */

void __fastcall __noreturn VfPoolCommitCachingPluginUnload(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  ExConfigurePoolCommitCaching(0, a2, a3, a4);
}
