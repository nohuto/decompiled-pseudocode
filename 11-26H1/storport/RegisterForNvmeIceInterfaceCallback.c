/*
 * XREFs of RegisterForNvmeIceInterfaceCallback @ 0x140187A60
 * Callers:
 *     <none>
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     AddNvmeIceInterfaceToList @ 0x14007067C (AddNvmeIceInterfaceToList.c)
 *     RemoveNvmeIceInterfaceFromList @ 0x140071D84 (RemoveNvmeIceInterfaceFromList.c)
 *     GetNvmeIceInterface @ 0x140187688 (GetNvmeIceInterface.c)
 */

__int64 __fastcall RegisterForNvmeIceInterfaceCallback(char *NotificationStructure, PVOID Context)
{
  int v2; // ebx
  _QWORD *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  PVOID *i; // rbx
  int NvmeIceInterface; // eax
  int v9; // eax
  __int64 v10; // rax
  _QWORD *v12; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v4 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
    ExAcquireResourceExclusiveLite(&NvmeIceListLock, 1u);
  v5 = *(_QWORD *)(NotificationStructure + 20) - *(_QWORD *)&GUID_DEVINTERFACE_NVME_ICE.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(NotificationStructure + 28) - *(_QWORD *)GUID_DEVINTERFACE_NVME_ICE.Data4;
  if ( !v5 )
  {
    v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
    if ( !v6 )
      v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
    if ( v6 )
    {
      v10 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
      if ( !v10 )
        v10 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
      if ( !v10 )
      {
        v9 = RemoveNvmeIceInterfaceFromList(*((PCUNICODE_STRING *)NotificationStructure + 5));
        goto LABEL_21;
      }
    }
    else
    {
      if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
      {
        for ( i = (PVOID *)NvmeIceList; i != &NvmeIceList; i = (PVOID *)*i )
        {
          if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 3), *((PCUNICODE_STRING *)NotificationStructure + 5), 1u) )
          {
            v2 = 0;
            goto LABEL_22;
          }
        }
      }
      NvmeIceInterface = GetNvmeIceInterface(*((struct _UNICODE_STRING **)NotificationStructure + 5), &v12, &v13);
      v4 = v12;
      v2 = NvmeIceInterface;
      if ( NvmeIceInterface >= 0 )
      {
        v9 = AddNvmeIceInterfaceToList(*((PCUNICODE_STRING *)NotificationStructure + 5), v12, v13);
LABEL_21:
        v2 = v9;
      }
    }
  }
LABEL_22:
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
    ExReleaseResourceLite(&NvmeIceListLock);
  if ( v2 < 0 && v4 )
    ExFreePoolWithTag(v4, 0x72436152u);
  return (unsigned int)v2;
}
