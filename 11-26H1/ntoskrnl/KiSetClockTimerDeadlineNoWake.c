/*
 * XREFs of KiSetClockTimerDeadlineNoWake @ 0x1404E0500
 * Callers:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x1403364D0 (-KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KiSetClockTimerDeadlineNoWake(__int64 a1)
{
  NTSTATUS result; // eax
  char v2; // [rsp+30h] [rbp-68h] BYREF
  int v3; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-58h] BYREF
  int *v5; // [rsp+60h] [rbp-38h]
  __int64 v6; // [rsp+68h] [rbp-30h]
  char *v7; // [rsp+70h] [rbp-28h]
  __int64 v8; // [rsp+78h] [rbp-20h]

  *(_BYTE *)(a1 + 38436) &= ~2u;
  if ( (unsigned int)dword_140E06F90 > 5 )
  {
    v8 = 1LL;
    v3 = 4;
    v6 = 4LL;
    v5 = &v3;
    v2 = 0;
    v7 = &v2;
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140E06F90,
             (unsigned __int8 *)&byte_1400493A7,
             0LL,
             0LL,
             4u,
             &v4);
  }
  return result;
}
