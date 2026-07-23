/*
 * XREFs of MiLockVadShared @ 0x14027DE40
 * Callers:
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 *     MiReturnLockedVadOrNextVa @ 0x140446910 (MiReturnLockedVadOrNextVa.c)
 *     MiCleanCfg @ 0x1404BD924 (MiCleanCfg.c)
 *     MiHotPatchProcess @ 0x1408765A8 (MiHotPatchProcess.c)
 *     MmIsFileMapped @ 0x1409BCA98 (MmIsFileMapped.c)
 *     NtAreMappedFilesTheSame @ 0x140A06AE0 (NtAreMappedFilesTheSame.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140A82E00 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140B08044 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
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
