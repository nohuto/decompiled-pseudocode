/*
 * XREFs of MiDecrementCloneHeaderCount @ 0x140506AAC
 * Callers:
 *     MiDrainCrossPartitionUsage @ 0x1406F51F0 (MiDrainCrossPartitionUsage.c)
 *     MiFreeCloneDescriptor @ 0x140B46704 (MiFreeCloneDescriptor.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

int __fastcall MiDecrementCloneHeaderCount(__int64 a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  signed __int64 v3; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2136), 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  v3 = v1 - 1;
  if ( v2 )
  {
    if ( v3 )
      __fastfail(0xEu);
    LODWORD(v3) = KeSetEvent(*(PRKEVENT *)(a1 + 3168), 0, 0);
  }
  return v3;
}
