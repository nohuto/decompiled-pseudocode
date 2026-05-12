/*
 * XREFs of RaidReleaseNvmeIceKeyResources @ 0x140071CF8
 * Callers:
 *     RaidUnitProcessBusyRequest @ 0x140012A1C (RaidUnitProcessBusyRequest.c)
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 *     RaUnitAsyncError @ 0x140016430 (RaUnitAsyncError.c)
 *     RaidUnitCompleteRequest @ 0x140017760 (RaidUnitCompleteRequest.c)
 *     RaidUnitCompleteResetRequest @ 0x140024200 (RaidUnitCompleteResetRequest.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall RaidReleaseNvmeIceKeyResources(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rax

  if ( *(_DWORD *)(a2 + 800) != -1 )
  {
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
      v4 = *(_QWORD *)(a1 + 3608);
    else
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 6256LL);
    if ( _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v4 + 72) + 72LL * *(unsigned int *)(a2 + 800) + 36)) < 0 )
      KeBugCheckEx(0x176u, 2uLL, 1uLL, a2, v4 + 56);
  }
  return 0LL;
}
