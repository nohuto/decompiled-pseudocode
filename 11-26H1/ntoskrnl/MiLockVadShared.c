/*
 * XREFs of MiLockVadShared @ 0x14027E8D0
 * Callers:
 *     MiObtainReferencedVadEx @ 0x1402D0160 (MiObtainReferencedVadEx.c)
 *     MiUserFault @ 0x1403A3140 (MiUserFault.c)
 *     MiReturnLockedVadOrNextVa @ 0x14044E7E0 (MiReturnLockedVadOrNextVa.c)
 *     MiCleanCfg @ 0x1404C4044 (MiCleanCfg.c)
 *     MiHotPatchProcess @ 0x140870248 (MiHotPatchProcess.c)
 *     NtAreMappedFilesTheSame @ 0x140961230 (NtAreMappedFilesTheSame.c)
 *     MmIsFileMapped @ 0x1409706E8 (MmIsFileMapped.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140A7CF90 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140B05F14 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 */

int __fastcall MiLockVadShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int64 *v4; // rsi
  LegacyAutoBoost *v6; // rbx
  int result; // eax

  --*(_WORD *)(a1 + 486);
  v4 = (signed __int64 *)(a2 + 40);
  v6 = (LegacyAutoBoost *)KeAbPreAcquire(a2 + 40, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v6, (struct _KTHREAD *)v4);
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v6 + 33) |= 2u;
    else
      *((_BYTE *)v6 + 10) = 1;
  }
  result = *(_DWORD *)(a1 + 1448) | 0x4000;
  *(_DWORD *)(a1 + 1448) = result;
  return result;
}
