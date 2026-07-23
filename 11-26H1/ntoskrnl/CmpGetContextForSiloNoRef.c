/*
 * XREFs of CmpGetContextForSiloNoRef @ 0x140A4BBC0
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x1407F48B8 (PspDeleteExternalServerSiloState.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x140A4B9C4 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmLockKeyForWrite @ 0x140A4BA6C (CmLockKeyForWrite.c)
 *     CmGetRootKeyObjectForSilo @ 0x140A4C8D0 (CmGetRootKeyObjectForSilo.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x140404430 (PsGetPermanentSiloContext.c)
 */

unsigned __int64 __fastcall CmpGetContextForSiloNoRef(__int64 a1)
{
  unsigned __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  PsGetPermanentSiloContext(a1, CmpSiloContextSlot, &v2);
  return v2;
}
