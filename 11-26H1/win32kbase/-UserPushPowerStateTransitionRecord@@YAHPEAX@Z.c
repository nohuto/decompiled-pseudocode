/*
 * XREFs of ?UserPushPowerStateTransitionRecord@@YAHPEAX@Z @ 0x1401131C0
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1401120B0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserPushPowerStateTransitionRecord(void *a1)
{
  int InputBuffer; // [rsp+30h] [rbp-48h] BYREF
  __int64 v3; // [rsp+34h] [rbp-44h]
  int v4; // [rsp+3Ch] [rbp-3Ch]
  __int64 CurrentProcess; // [rsp+40h] [rbp-38h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-30h]
  void *v7; // [rsp+50h] [rbp-28h]
  __int128 v8; // [rsp+58h] [rbp-20h]

  v3 = 0LL;
  v8 = 0LL;
  v4 = 0;
  InputBuffer = 88;
  v7 = a1;
  CurrentThread = KeGetCurrentThread();
  CurrentProcess = PsGetCurrentProcess(a1);
  return ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x38u, 0LL, 0) >= 0;
}
