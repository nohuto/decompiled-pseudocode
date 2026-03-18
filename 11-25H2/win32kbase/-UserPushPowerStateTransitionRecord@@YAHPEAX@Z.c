/*
 * XREFs of ?UserPushPowerStateTransitionRecord@@YAHPEAX@Z @ 0x1400EA5E8
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1400E9120 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserPushPowerStateTransitionRecord(void *a1)
{
  _DWORD InputBuffer[4]; // [rsp+30h] [rbp-48h] BYREF
  __int64 CurrentProcess; // [rsp+40h] [rbp-38h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-30h]
  void *v5; // [rsp+50h] [rbp-28h]
  __int128 v6; // [rsp+58h] [rbp-20h]

  InputBuffer[1] = 0;
  InputBuffer[3] = 0;
  InputBuffer[2] = 0;
  v6 = 0LL;
  InputBuffer[0] = 88;
  v5 = a1;
  CurrentThread = KeGetCurrentThread();
  CurrentProcess = PsGetCurrentProcess();
  return ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x38u, 0LL, 0) >= 0;
}
