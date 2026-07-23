/*
 * XREFs of MiDereferenceSlabIdentity @ 0x14070B6A4
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140ABF9A0 (MmCreateProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x140B41970 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDereferenceSlabIdentity(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  result = a2;
  if ( _InterlockedDecrement64((volatile signed __int64 *)(a1 + 8LL * a2 + 21528)) <= -1 )
    __fastfail(0xEu);
  return result;
}
