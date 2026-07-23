/*
 * XREFs of PspProcessQosChangeNotificationInsertList @ 0x140618118
 * Callers:
 *     PspEnqueueProcessQosChangeNotification @ 0x140518208 (PspEnqueueProcessQosChangeNotification.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     Feature_DefaultQosDeletingProcesses__private_IsEnabledDeviceUsageNoInline @ 0x140617CAC (Feature_DefaultQosDeletingProcesses__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PspProcessQosChangeNotificationInsertList(char *Object, _QWORD *a2)
{
  _QWORD *v2; // rbx
  int v5; // [rsp+30h] [rbp-68h] BYREF
  __int64 v6; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-58h] BYREF
  int *v8; // [rsp+60h] [rbp-38h]
  __int64 v9; // [rsp+68h] [rbp-30h]
  __int64 *v10; // [rsp+70h] [rbp-28h]
  __int64 v11; // [rsp+78h] [rbp-20h]

  v2 = Object + 2104;
  if ( *((_QWORD *)Object + 263) == 1LL )
  {
    if ( (unsigned int)Feature_DefaultQosDeletingProcesses__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !ObReferenceObjectSafeWithTag((__int64)Object, 0x71447350u) )
        return;
      *v2 = *a2;
      *a2 = v2;
    }
    else
    {
      *v2 = *a2;
      *a2 = v2;
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
    }
    if ( *(_DWORD *)&SshpBlockerCollections.SavedApcStateFill[40] > 5u
      && tlgKeywordOn((__int64)&SshpBlockerCollections.SavedApcStateFill[40], 1LL) )
    {
      v5 = *((_DWORD *)Object + 116);
      v9 = 4LL;
      v8 = &v5;
      v6 = 0x1000000LL;
      v10 = &v6;
      v11 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&SshpBlockerCollections.SavedApcStateFill[40],
        (unsigned __int8 *)byte_14005361F,
        0LL,
        0LL,
        4u,
        &v7);
    }
  }
}
