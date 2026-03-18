/*
 * XREFs of PsFreeSiloContextSlot @ 0x1407EE620
 * Callers:
 *     VrpRegistryUnload @ 0x1408A5460 (VrpRegistryUnload.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     PspStorageFreeSlot @ 0x1407FFAF4 (PspStorageFreeSlot.c)
 *     PspGetNextSilo @ 0x140959E18 (PspGetNextSilo.c)
 *     PspStorageGetObject @ 0x140A7E904 (PspStorageGetObject.c)
 */

__int64 __fastcall PsFreeSiloContextSlot(unsigned int a1)
{
  __int64 i; // rcx
  __int64 NextSilo; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx

  for ( i = 0LL; ; i = v4 )
  {
    NextSilo = PspGetNextSilo(i, 0LL);
    v4 = NextSilo;
    if ( !NextSilo )
      break;
    v5 = *(_QWORD *)(NextSilo + 1536);
    if ( v5 )
    {
      if ( (int)PspStorageGetObject(v5) >= 0 )
      {
        ObfDereferenceObject(0LL);
        KeBugCheckEx(0x199u, *(_QWORD *)(v4 + 1536), 0LL, 0LL, 0LL);
      }
    }
  }
  return PspStorageFreeSlot(a1);
}
