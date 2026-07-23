/*
 * XREFs of KiSrcuReadUnlockIpi @ 0x1405F83C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSrcuReadUnlock @ 0x1405F7B80 (KeSrcuReadUnlock.c)
 */

void __fastcall KiSrcuReadUnlockIpi(__int64 a1, __int64 a2, _DWORD *a3)
{
  KeSrcuReadUnlock(a2, a3);
}
