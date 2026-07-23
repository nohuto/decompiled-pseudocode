/*
 * XREFs of TtmpStartCallout @ 0x1407EBC1C
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x1407EAE10 (TtmiSessionDeviceListWorker.c)
 *     TtmpCallAssignedToTerminal @ 0x1407EB0E0 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetBuiltinPanelState @ 0x1407EB17C (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x1407EB1FC (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1407EB2AC (TtmpCallSetInputMode.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1407EBE74 (TtmpUpdatePrimaryDisplayWnf.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     TtmpCalloutArmWatchdog @ 0x1407EB34C (TtmpCalloutArmWatchdog.c)
 *     TtmpGetCalloutTagFromCalloutType @ 0x1407EB718 (TtmpGetCalloutTagFromCalloutType.c)
 *     TtmpGetConfigOverride @ 0x1407EB770 (TtmpGetConfigOverride.c)
 *     TtmiLogCalloutStart @ 0x1407EE084 (TtmiLogCalloutStart.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 */

__int64 __fastcall TtmpStartCallout(__int64 a1, int *a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  $049C98A54D102DFA3CEF8B5D683B5064 *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v13; // ebx
  unsigned int CalloutTagFromCalloutType; // eax
  __int64 result; // rax
  int InputBuffer; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v17[132]; // [rsp+34h] [rbp-84h] BYREF
  int v18; // [rsp+C0h] [rbp+8h] BYREF
  volatile int v19; // [rsp+D8h] [rbp+20h] BYREF

  if ( !TtmpDeviceCalloutTimeoutsSet )
  {
    v18 = 0;
    v10 = &SshpBlockerCollections.512;
    v19 = 0;
    v11 = 6LL;
    do
    {
      if ( TtmpGetConfigOverride(a1, *(const WCHAR **)&v10[-2].ThreadFlags2, &v19) == 1 )
        v10->ThreadFlags2 = v19;
      v10 += 6;
      --v11;
    }
    while ( v11 );
    if ( TtmpGetConfigOverride(a1, L"TtmDeviceCalloutCrashEnabled", &v18) == 1 && v18 )
      TtmpDeviceCalloutCrashDumpEnabled = 1;
    TtmpDeviceCalloutTimeoutsSet = 1;
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  v12 = 0LL;
  *(_DWORD *)(a1 + 16) = a4;
  while ( 1 )
  {
    if ( (unsigned int)v12 >= 6 )
    {
      v13 = 30000;
      goto LABEL_17;
    }
    if ( *(_DWORD *)&SshpBlockerCollections.WaitBlockFill11[24 * v12 + 176] == a4 )
      break;
    v12 = (unsigned int)(v12 + 1);
  }
  v13 = *((_DWORD *)&SshpBlockerCollections.ThreadFlags2 + 6 * v12);
  if ( !v13 )
    goto LABEL_20;
LABEL_17:
  memset_0(v17, 0, 0x5CuLL);
  InputBuffer = 21;
  if ( NtPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, (PVOID)(a1 + 24), 8u) >= 0
    && *(_QWORD *)(a1 + 24) )
  {
    TtmpCalloutArmWatchdog(a1, *a2, v13, a5);
  }
LABEL_20:
  ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
  KeLeaveCriticalRegion();
  CalloutTagFromCalloutType = TtmpGetCalloutTagFromCalloutType(a4);
  TtmiLogCalloutStart(*(unsigned int *)(a3 + 16), *(_QWORD *)(a3 + 24), CalloutTagFromCalloutType, a6);
  result = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(a1 + 32) = MEMORY[0xFFFFF78000000008];
  return result;
}
