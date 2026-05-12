/*
 * XREFs of RaidAdapterSendCryptoOperationSynchronously @ 0x140071250
 * Callers:
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x140071020 (RaidAdapterProgramCryptoKeyRoutine.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x14000EF30 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     Feature_BrFixSteelixUfsIceRegression__private_IsEnabledDeviceUsageNoInline @ 0x140070B48 (Feature_BrFixSteelixUfsIceRegression__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall RaidAdapterSendCryptoOperationSynchronously(_QWORD *a1, __int64 a2, _WORD *a3)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 result; // rax
  __int64 v7; // rcx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-18h] BYREF

  IsEnabledDeviceUsageNoInline = Feature_BrFixSteelixUfsIceRegression__private_IsEnabledDeviceUsageNoInline();
  if ( !a1[711] && (!IsEnabledDeviceUsageNoInline || !a1[710]) || !RaidIsAdapterControlSupported((__int64)(a1 + 47), 18) )
    return 3221225659LL;
  if ( *a3 != 1 || a3[1] != 40 )
    return 3221225485LL;
  result = RaCallMiniportAdapterControl((__int64)(a1 + 47));
  if ( (_DWORD)result )
  {
    v7 = a1[2];
    *(_OWORD *)BugCheckParameter2 = 0LL;
    RaidDriverGetName(v7, (__int64)BugCheckParameter2);
    KeBugCheckEx(0xF0u, 4uLL, BugCheckParameter2[1], 1uLL, 0LL);
  }
  return result;
}
