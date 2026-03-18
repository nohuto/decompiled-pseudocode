/*
 * XREFs of CmpGetContextForSiloNoRef @ 0x140A30C60
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x1407EED58 (PspDeleteExternalServerSiloState.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x140A30A64 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmLockKeyForWrite @ 0x140A30B0C (CmLockKeyForWrite.c)
 *     CmGetRootKeyObjectForSilo @ 0x140A31970 (CmGetRootKeyObjectForSilo.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x14040B340 (PsGetPermanentSiloContext.c)
 */

unsigned __int64 __fastcall CmpGetContextForSiloNoRef(__int64 a1)
{
  unsigned __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  PsGetPermanentSiloContext(a1, CmpSiloContextSlot, &v2);
  return v2;
}
