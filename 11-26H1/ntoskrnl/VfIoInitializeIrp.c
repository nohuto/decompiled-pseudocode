/*
 * XREFs of VfIoInitializeIrp @ 0x140C4B964
 * Callers:
 *     IoReuseIrp @ 0x140267BC0 (IoReuseIrp.c)
 *     IovInitializeIrp @ 0x140C4DF0C (IovInitializeIrp.c)
 * Callees:
 *     ViErrorReport1 @ 0x14064927C (ViErrorReport1.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140C3FD80 (VfIrpDatabaseEntryReleaseLock.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140C4BF94 (VfIrpDatabaseEntryFindAndLock.c)
 */

void __fastcall VfIoInitializeIrp(__int64 a1, const void *a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi

  v6 = VfIrpDatabaseEntryFindAndLock(a1);
  v7 = v6;
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 240) )
      ViErrorReport1(0x310u, a2, (const void *)a1);
    if ( !a3 && (*(_DWORD *)(v7 + 56) & 0x200000) != 0 && (*(_BYTE *)(a1 + 71) & 1) != 0 )
      ViErrorReport1(0x20Du, a2, (const void *)a1);
    if ( (*(_DWORD *)(a1 + 16) & 8) != 0 || (*(_DWORD *)(v7 + 56) & 0x1000) != 0 )
      ViErrorReport1(0x311u, a2, (const void *)a1);
    VfIrpDatabaseEntryReleaseLock(v7);
  }
}
