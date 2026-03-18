/*
 * XREFs of PopSpoilBatteryEstimate @ 0x140A3C3E0
 * Callers:
 *     PopSpoilEstimatesOnPowerStateTransitionWorker @ 0x1407D23C0 (PopSpoilEstimatesOnPowerStateTransitionWorker.c)
 *     PopUpdateConsoleDisplayState @ 0x140A3CD5C (PopUpdateConsoleDisplayState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     PopBatteryQueueWork @ 0x1404E0BBC (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopSpoilBatteryEstimate(int a1, unsigned __int8 a2)
{
  int v2; // ebx
  unsigned int v4; // r8d
  const char *v5; // r9
  NTSTATUS result; // eax
  int v7; // [rsp+30h] [rbp-68h] BYREF
  int v8; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-58h] BYREF
  int *v10; // [rsp+60h] [rbp-38h]
  __int64 v11; // [rsp+68h] [rbp-30h]
  int *v12; // [rsp+70h] [rbp-28h]
  __int64 v13; // [rsp+78h] [rbp-20h]

  v2 = a2;
  v4 = (unsigned __int8)(1 << a1);
  if ( a2 )
    _InterlockedOr(&PopEstimateSpoilerMask, v4);
  else
    _InterlockedAnd(&PopEstimateSpoilerMask, ~v4);
  PopBatteryQueueWork(4u);
  v5 = "indefinitely";
  if ( !(_BYTE)v2 )
    v5 = "temporarily";
  result = DbgPrintEx(0x92u, 3u, "Battery estimates spoiled %s by %d; mask=%x\n", v5, a1, PopEstimateSpoilerMask);
  if ( (unsigned int)dword_140E07598 > 5 )
  {
    v7 = v2;
    v10 = &v7;
    v11 = 4LL;
    v12 = &v8;
    v8 = a1;
    v13 = 4LL;
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140E07598,
             (unsigned __int8 *)&dword_14004DB8C,
             0LL,
             0LL,
             4u,
             &v9);
  }
  return result;
}
