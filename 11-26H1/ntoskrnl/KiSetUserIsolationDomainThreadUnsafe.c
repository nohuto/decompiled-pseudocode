/*
 * XREFs of KiSetUserIsolationDomainThreadUnsafe @ 0x1404CD340
 * Callers:
 *     KiAdjustUserIsolationDomainThread @ 0x1404CCE24 (KiAdjustUserIsolationDomainThread.c)
 *     KiIpiUpdateUserIsolationDomain @ 0x1405F93D0 (KiIpiUpdateUserIsolationDomain.c)
 * Callees:
 *     <none>
 */

void __fastcall KiSetUserIsolationDomainThreadUnsafe(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1816) = a2;
  if ( a2 )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Fu);
  else
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x1Fu);
}
