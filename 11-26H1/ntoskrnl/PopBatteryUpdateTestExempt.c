/*
 * XREFs of PopBatteryUpdateTestExempt @ 0x1407DB65C
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x140495490 (IoCancelIrp.c)
 *     PopBatteryQueueWork @ 0x1404DA29C (PopBatteryQueueWork.c)
 *     Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline @ 0x1404DA8A4 (Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopBatteryTestExemptPolicyRegKeyAccess @ 0x1407DB50C (PopBatteryTestExemptPolicyRegKeyAccess.c)
 *     PopPowerAdapterReinitialize @ 0x1407DD830 (PopPowerAdapterReinitialize.c)
 *     PopBatteryWaitTag @ 0x140B65670 (PopBatteryWaitTag.c)
 */

__int64 __fastcall PopBatteryUpdateTestExempt(unsigned __int8 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v4; // ebx
  __int64 v5; // rbx
  __int64 *v6; // rdi
  __int64 *v7; // rcx
  __int64 **v8; // rax
  char *v9; // rdx
  __int64 v10; // rbx
  __int64 i; // rbx
  __int64 *j; // rbx
  int v14; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15[2]; // [rsp+38h] [rbp-38h] BYREF
  int *v16; // [rsp+58h] [rbp-18h]
  __int64 v17; // [rsp+60h] [rbp-10h]

  v4 = a1;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB, a2, a3, a4);
  if ( PopBatteryTestExemptPolicy != v4 )
  {
    PopBatteryTestExemptPolicy = v4;
    PopBatteryTestExemptPolicyRegKeyAccess(1);
    if ( PopBatteryTestExemptPolicy )
    {
      v5 = qword_140F10650;
      if ( (__int64 *)qword_140F10650 != &qword_140F10650 )
      {
        while ( 1 )
        {
          v6 = *(__int64 **)v5;
          if ( (*(_DWORD *)(v5 + 48) & 0x10) == 0 )
            break;
          if ( (unsigned int)dword_140E07560 > 5 )
          {
            v9 = &byte_14004E87F;
LABEL_11:
            v14 = *(_DWORD *)(v5 + 44);
            v17 = 4LL;
            v16 = &v14;
            tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)v9, 0LL, 0LL, 3u, v15);
          }
LABEL_12:
          v5 = (__int64)v6;
          if ( v6 == &qword_140F10650 )
            goto LABEL_13;
        }
        IoCancelIrp(*(PIRP *)(v5 - 8));
        KeWaitForSingleObject((PVOID)(v5 + 16), Executive, 0, 0, 0LL);
        v7 = *(__int64 **)v5;
        if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v8 = *(__int64 ***)(v5 + 8), *v8 != (__int64 *)v5) )
          __fastfail(3u);
        *v8 = v7;
        v7[1] = (__int64)v8;
        *(_QWORD *)v5 = 0LL;
        --dword_140F10634;
        byte_140F10638 = 1;
        if ( (unsigned int)dword_140E07560 <= 5 )
          goto LABEL_12;
        v9 = byte_14004E923;
        goto LABEL_11;
      }
LABEL_13:
      if ( qword_140F108D0 )
      {
        if ( (unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline() )
        {
          v10 = qword_140F108D0;
          if ( *(_DWORD *)(qword_140F108D0 + 128) == 1 )
          {
            IoCancelIrp(*(PIRP *)(qword_140F108D0 + 56));
            KeWaitForSingleObject((PVOID)(v10 + 104), Executive, 0, 0, 0LL);
            qword_140F108D0 = 0LL;
            if ( (unsigned int)dword_140E07560 > 5 )
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140E07560,
                (unsigned __int8 *)byte_14004E8AD,
                0LL,
                0LL,
                2u,
                v15);
          }
        }
      }
    }
    else
    {
      for ( i = qword_140F10640; (__int64 *)i != &qword_140F10640; i = *(_QWORD *)i )
      {
        if ( (*(_DWORD *)(i + 112) & 0x10) == 0 && !*(_QWORD *)(i + 64) )
        {
          PopBatteryWaitTag(i);
          if ( (unsigned int)dword_140E07560 > 5 )
          {
            v14 = *(_DWORD *)(i + 108);
            v17 = 4LL;
            v16 = &v14;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E07560,
              (unsigned __int8 *)word_14004E7D2,
              0LL,
              0LL,
              3u,
              v15);
          }
        }
      }
      for ( j = (__int64 *)qword_140F108C0; j != &qword_140F108C0; j = (__int64 *)*j )
        PopPowerAdapterReinitialize(j);
    }
    PopBatteryQueueWork(8u);
  }
  PopReleaseRwLock((struct _KTHREAD *)&PopCB);
  return 0LL;
}
