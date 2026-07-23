/*
 * XREFs of CmpAttachContextToSilo @ 0x140A4BD68
 * Callers:
 *     CmpGetOrCreateContextForSiloNoRef @ 0x140A4B9C4 (CmpGetOrCreateContextForSiloNoRef.c)
 * Callees:
 *     PsInsertPermanentSiloContextEx @ 0x140A4BD94 (PsInsertPermanentSiloContextEx.c)
 */

__int64 __fastcall CmpAttachContextToSilo(__int64 a1, __int64 a2)
{
  int inserted; // ecx
  __int64 result; // rax

  inserted = PsInsertPermanentSiloContextEx(a1, (unsigned int)CmpSiloContextSlot, a2, 0LL);
  result = 0LL;
  if ( inserted < 0 )
    return (unsigned int)inserted;
  return result;
}
