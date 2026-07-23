/*
 * XREFs of SeQueryTokenTrustLink @ 0x1404957E4
 * Callers:
 *     PsRestoreImpersonation @ 0x140A51550 (PsRestoreImpersonation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustLink(__int64 a1)
{
  return *(_QWORD *)(a1 + 1112);
}
