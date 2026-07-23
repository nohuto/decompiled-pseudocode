/*
 * XREFs of PopUsbErrorWNFNotificationCallback @ 0x1407DDD30
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PopBatteryQueueWork @ 0x1404DA29C (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x1409C4360 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopUsbErrorWNFNotificationCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdx
  int v5; // edi
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  BOOL v8; // ebx
  char v10; // [rsp+30h] [rbp-89h] BYREF
  int v11; // [rsp+34h] [rbp-85h] BYREF
  int v12; // [rsp+38h] [rbp-81h] BYREF
  int v13; // [rsp+40h] [rbp-79h] BYREF
  int v14; // [rsp+44h] [rbp-75h] BYREF
  int v15; // [rsp+48h] [rbp-71h] BYREF
  int v16; // [rsp+4Ch] [rbp-6Dh] BYREF
  __int64 v17; // [rsp+50h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+60h] [rbp-59h] BYREF
  int *v19; // [rsp+80h] [rbp-39h]
  __int64 v20; // [rsp+88h] [rbp-31h]
  int *v21; // [rsp+90h] [rbp-29h]
  __int64 v22; // [rsp+98h] [rbp-21h]
  int *v23; // [rsp+A0h] [rbp-19h]
  __int64 v24; // [rsp+A8h] [rbp-11h]
  int *v25; // [rsp+B0h] [rbp-9h]
  __int64 v26; // [rsp+B8h] [rbp-1h]
  char *v27; // [rsp+C0h] [rbp+7h]
  __int64 v28; // [rsp+C8h] [rbp+Fh]
  __int64 *v29; // [rsp+D0h] [rbp+17h]
  __int64 v30; // [rsp+D8h] [rbp+1Fh]
  char v31[8]; // [rsp+E0h] [rbp+27h] BYREF
  int v32; // [rsp+E8h] [rbp+2Fh]

  v12 = a4;
  v11 = 12;
  v5 = ExQueryWnfStateData(a1, &v12, v31, &v11);
  if ( v5 >= 0 )
  {
    if ( v11 == 12 )
    {
      v8 = v32 == 1;
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopWeakChargerLock, v4, v6, v7);
      PopWeakChargerNotificationUsbStack = v8;
      PopBatteryQueueWork(0x40u);
      PopReleaseRwLock((struct _KTHREAD *)&PopWeakChargerLock);
    }
    else
    {
      v5 = 128;
    }
  }
  if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
  {
    v13 = v5;
    v19 = &v13;
    v14 = PopWeakChargerCompositeState;
    v30 = 8LL;
    v21 = &v14;
    v15 = PopWeakChargerNotificationBatteryMiniport;
    v23 = &v15;
    v16 = PopWeakChargerNotificationUsbStack;
    v25 = &v16;
    v10 = PopWeakChargerMeasured;
    v27 = &v10;
    v29 = &v17;
    v20 = 4LL;
    v22 = 4LL;
    v24 = 4LL;
    v26 = 4LL;
    v28 = 1LL;
    v17 = 0x1000000LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)byte_14004DBC9, 0LL, 0LL, 8u, &v18);
  }
  return (unsigned int)v5;
}
