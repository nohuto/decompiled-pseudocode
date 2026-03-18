/*
 * XREFs of VidSchiCleanupQueuedCommand @ 0x140058ED0
 * Callers:
 *     VidSchFlushAdapter @ 0x1400C1D50 (VidSchFlushAdapter.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiCleanupPacket_PriorityTable @ 0x1400C458C (VidSchiCleanupPacket_PriorityTable.c)
 */

void __fastcall VidSchiCleanupQueuedCommand(__int64 a1)
{
  struct _ERESOURCE *v1; // rdi
  char v3; // al
  _BYTE v4[56]; // [rsp+20h] [rbp-38h] BYREF

  v1 = (struct _ERESOURCE *)(a1 + 1256);
  if ( (*(_DWORD *)(a1 + 2824) & 2) != 0 )
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1256), 1u);
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v4, (unsigned __int64 *)(a1 + 2016), 1, 0);
  *(_BYTE *)(a1 + 3284) |= 1u;
  AcquireSpinLock::Release((AcquireSpinLock *)v4);
  VidSchiCleanupPacket_PriorityTable(a1);
  v3 = *(_BYTE *)(a1 + 3284);
  if ( (v3 & 2) == 0 )
    *(_BYTE *)(a1 + 3284) = v3 & 0xFE;
  if ( (*(_DWORD *)(a1 + 2824) & 2) != 0 )
    ExReleaseResourceLite(v1);
  AcquireSpinLock::Release((AcquireSpinLock *)v4);
}
