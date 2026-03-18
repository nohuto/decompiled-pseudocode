/*
 * XREFs of MiBadRefCount @ 0x1405067A4
 * Callers:
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402E8BF0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiRemoveLockedPageCharge @ 0x14031D180 (MiRemoveLockedPageCharge.c)
 *     MiDeleteNonPagedPoolPte @ 0x140363600 (MiDeleteNonPagedPoolPte.c)
 *     MiReadyLargePageToFree @ 0x1403C5920 (MiReadyLargePageToFree.c)
 *     MiFreeInitializationCode @ 0x140AC9178 (MiFreeInitializationCode.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiBadRefCount(__int64 a1)
{
  KeBugCheckEx(
    0x4Eu,
    0x9AuLL,
    (a1 + 0x220000000000LL) / 48,
    *(_BYTE *)(a1 + 34) & 7,
    (unsigned __int16)*(_DWORD *)(a1 + 32));
}
