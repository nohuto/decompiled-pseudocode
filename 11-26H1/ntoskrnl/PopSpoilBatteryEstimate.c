/*
 * XREFs of PopSpoilBatteryEstimate @ 0x1409F7E00
 * Callers:
 *     PopSpoilEstimatesOnPowerStateTransitionWorker @ 0x1407D5460 (PopSpoilEstimatesOnPowerStateTransitionWorker.c)
 *     PopUpdateConsoleDisplayState @ 0x1409F877C (PopUpdateConsoleDisplayState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     PopBatteryQueueWork @ 0x1404DA29C (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
  if ( (unsigned int)dword_140E07560 > 5 )
  {
    v7 = v2;
    v10 = &v7;
    v11 = 4LL;
    v12 = &v8;
    v8 = a1;
    v13 = 4LL;
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140E07560,
             (unsigned __int8 *)byte_14004E323,
             0LL,
             0LL,
             4u,
             &v9);
  }
  return result;
}
