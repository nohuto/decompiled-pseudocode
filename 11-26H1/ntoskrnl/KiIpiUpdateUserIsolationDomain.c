/*
 * XREFs of KiIpiUpdateUserIsolationDomain @ 0x1405F93D0
 * Callers:
 *     <none>
 * Callees:
 *     KiSetUserIsolationDomainThreadUnsafe @ 0x1404CD340 (KiSetUserIsolationDomainThreadUnsafe.c)
 */

void __fastcall KiIpiUpdateUserIsolationDomain(__int64 a1, __int64 a2, __int64 *a3)
{
  KiSetUserIsolationDomainThreadUnsafe(a2, *a3);
}
