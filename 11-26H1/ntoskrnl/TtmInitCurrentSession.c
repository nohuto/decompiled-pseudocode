/*
 * XREFs of TtmInitCurrentSession @ 0x1409F5CD4
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     TtmiUpdateActiveTerminalCount @ 0x1407EC64C (TtmiUpdateActiveTerminalCount.c)
 *     TtmiLogSessionDeviceAssignmentPolicySet @ 0x1407EFEE4 (TtmiLogSessionDeviceAssignmentPolicySet.c)
 *     TtmiCreateTerminal @ 0x1407F15A8 (TtmiCreateTerminal.c)
 *     TtmiLogInitCurrentSessionStart @ 0x1409F5F14 (TtmiLogInitCurrentSessionStart.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 *     TtmiLogInitCurrentSessionStop @ 0x1409F6818 (TtmiLogInitCurrentSessionStop.c)
 *     TtmpAcquireSessionLock @ 0x1409F68CC (TtmpAcquireSessionLock.c)
 *     PoRegisterPowerSettingCallback @ 0x140B080C0 (PoRegisterPowerSettingCallback.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 TtmInitCurrentSession()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  int SessionId; // edi
  unsigned int v4; // edi
  __int64 v5; // rdx
  _DWORD *Pool2; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  int v9; // eax
  int DeferredContext; // [rsp+40h] [rbp+8h] BYREF

  TtmiLogInitCurrentSessionStart();
  SessionId = TtmiGetSessionId(v1, v0, v2);
  TtmpAcquireSessionLock();
  if ( PspSiloMonitorLock.InitialStack )
  {
    v4 = -1073741637;
    v5 = 1207LL;
LABEL_3:
    TtmiLogError("TtmInitCurrentSession", v5, 0xFFFFFFFFLL, v4);
    goto LABEL_13;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
  v7 = (__int64)Pool2;
  if ( !Pool2 )
  {
    v4 = -1073741670;
    v5 = 1216LL;
    goto LABEL_3;
  }
  Pool2[2] = 1;
  *Pool2 = SessionId;
  v8 = Pool2 + 10;
  v8[1] = v8;
  *v8 = v8;
  *(_QWORD *)(v7 + 88) = v7 + 80;
  *(_QWORD *)(v7 + 80) = v7 + 80;
  *(_QWORD *)(v7 + 64) = v7 + 72;
  *(_DWORD *)(v7 + 56) = 32;
  *(_QWORD *)(v7 + 112) = 0LL;
  *(_QWORD *)(v7 + 104) = v7 + 96;
  *(_QWORD *)(v7 + 96) = v7 + 96;
  *(_DWORD *)(v7 + 120) = 1;
  *(_QWORD *)(v7 + 136) = v7 + 128;
  *(_QWORD *)(v7 + 128) = v7 + 128;
  *(_QWORD *)(v7 + 152) = v7 + 144;
  *(_QWORD *)(v7 + 144) = v7 + 144;
  *(_QWORD *)(v7 + 168) = v7 + 160;
  *(_QWORD *)(v7 + 160) = v7 + 160;
  *(_QWORD *)(v7 + 184) = v7 + 176;
  *(_QWORD *)(v7 + 176) = v7 + 176;
  *(_DWORD *)(v7 + 4) |= 0x800u;
  TtmiLogSessionDeviceAssignmentPolicySet(1);
  *(_DWORD *)(v7 + 224) = 0;
  *(_QWORD *)(v7 + 208) = TtmpSessionWorker;
  *(_QWORD *)(v7 + 216) = v7;
  *(_QWORD *)(v7 + 192) = 0LL;
  *(_DWORD *)(v7 + 4) |= 8u;
  *(_DWORD *)(v7 + 76) = 1;
  v9 = TtmiCreateTerminal(v7, 0x1F0003u, 0, (_QWORD *)(v7 + 24), &DeferredContext, (_QWORD *)(v7 + 32));
  v4 = v9;
  if ( v9 >= 0 )
  {
    TtmiUpdateActiveTerminalCount((_DWORD *)v7, 0, 0);
    *(_BYTE *)(v7 + 240) = 1;
    if ( PoRegisterPowerSettingCallback(
           0LL,
           &GUID_VIDEO_DIM_TIMEOUT,
           (PPOWER_SETTING_CALLBACK)TtmpTerminal0PowerSettingCallback,
           (PVOID)v7,
           (PVOID *)(v7 + 248)) >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    if ( PoRegisterPowerSettingCallback(
           0LL,
           &GUID_CONSOLE_VIDEO_TIMEOUT,
           (PPOWER_SETTING_CALLBACK)TtmpTerminal0PowerSettingCallback,
           (PVOID)v7,
           (PVOID *)(v7 + 256)) >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    *(_QWORD *)(v7 + 272) = 0LL;
    v4 = 0;
    *(_QWORD *)(v7 + 280) = 0LL;
    PspSiloMonitorLock.InitialStack = (void *)v7;
  }
  else
  {
    TtmiLogError("TtmInitCurrentSession", 1289LL, (unsigned int)v9, (unsigned int)v9);
    ExFreePoolWithTag((PVOID)v7, 0x536D7454u);
  }
LABEL_13:
  ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
  KeLeaveCriticalRegion();
  TtmiLogInitCurrentSessionStop(v4);
  return v4;
}
