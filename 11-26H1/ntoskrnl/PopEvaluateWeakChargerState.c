/*
 * XREFs of PopEvaluateWeakChargerState @ 0x1407DCC2C
 * Callers:
 *     PopBatteryWorker @ 0x1407DB910 (PopBatteryWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     Feature_SuppressNotificationsNoBattery__private_IsEnabledDeviceUsageNoInline @ 0x14060F8A0 (Feature_SuppressNotificationsNoBattery__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopEvaluateWeakChargerState(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int16 v5; // r14
  NTSTATUS updated; // esi
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  unsigned __int8 v10; // r8
  char v11; // bl
  char v12; // r8
  unsigned __int8 Buffer; // [rsp+48h] [rbp-C0h] BYREF
  char Buffer_1; // [rsp+49h] [rbp-BFh] BYREF
  char v16; // [rsp+4Ah] [rbp-BEh] BYREF
  char v17; // [rsp+4Bh] [rbp-BDh] BYREF
  int v18; // [rsp+4Ch] [rbp-BCh] BYREF
  int v19; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+54h] [rbp-B4h] BYREF
  int v21; // [rsp+58h] [rbp-B0h] BYREF
  int v22; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+78h] [rbp-90h] BYREF
  char *p_Buffer_1; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  int *v28; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  int *v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  char *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  char *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  int *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  int *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  int *v40; // [rsp+108h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+8h]
  __int64 *v42; // [rsp+118h] [rbp+10h]
  __int64 v43; // [rsp+120h] [rbp+18h]
  __int64 *v44; // [rsp+128h] [rbp+20h]
  __int64 v45; // [rsp+130h] [rbp+28h]

  v5 = a2;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopWeakChargerLock, a2, a3, a4);
  updated = 0;
  Buffer = 0;
  if ( (unsigned int)Feature_SuppressNotificationsNoBattery__private_IsEnabledDeviceUsageNoInline() && !dword_140F10634 )
    goto LABEL_21;
  if ( PopWeakChargerNotificationUsbStack == -1 )
    v7 = PopWeakChargerNotificationBatteryMiniport != -1;
  else
    v7 = PopWeakChargerNotificationBatteryMiniport == -1 ? 2 : 3;
  if ( !a1 )
    goto LABEL_21;
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( PopWeakChargerNotificationBatteryMiniport == 1 )
    {
      v10 = Buffer;
LABEL_15:
      v10 |= 1u;
LABEL_18:
      Buffer = v10;
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( PopWeakChargerNotificationUsbStack )
    {
      v10 = Buffer | 2;
      goto LABEL_18;
    }
    goto LABEL_21;
  }
  if ( v9 != 1 )
  {
LABEL_21:
    v10 = Buffer;
    goto LABEL_22;
  }
  v10 = Buffer;
  if ( PopWeakChargerNotificationUsbStack )
  {
    v10 = Buffer | 2;
    Buffer |= 2u;
  }
  if ( PopWeakChargerNotificationBatteryMiniport == 1 )
    goto LABEL_15;
LABEL_22:
  if ( PopWeakChargerCompositeState == v10 )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    updated = ZwUpdateWnfStateData(&WNF_PO_RECONCILED_WEAK_CHARGER, &Buffer, 1u, 0LL, 0LL, 0, 0);
    PopWeakChargerCompositeState = Buffer;
  }
  if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
  {
    Buffer_1 = v12;
    p_Buffer_1 = &Buffer_1;
    v20 = PopWeakChargerNotificationBatteryMiniport;
    v27 = 1LL;
    v28 = &v20;
    v21 = PopWeakChargerNotificationUsbStack;
    v30 = &v21;
    v16 = PopWeakChargerMeasured;
    v32 = &v16;
    v34 = &v17;
    v36 = &v19;
    v22 = dword_140F10634;
    v38 = &v22;
    v40 = &v18;
    v42 = &v23;
    v44 = &v24;
    v29 = 4LL;
    v31 = 4LL;
    v33 = 1LL;
    v17 = a1;
    v35 = 1LL;
    LOWORD(v19) = v5;
    v37 = 2LL;
    v39 = 4LL;
    LOBYTE(v18) = v11;
    v41 = 1LL;
    LODWORD(v23) = updated;
    v43 = 4LL;
    v24 = 0x1000000LL;
    v45 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07560,
      (unsigned __int8 *)byte_14004EB0D,
      0LL,
      0LL,
      0xCu,
      &v25);
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopWeakChargerLock);
}
