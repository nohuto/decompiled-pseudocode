/*
 * XREFs of StorChildAdapterPdoPnpQueryIdIrp @ 0x14012F1F8
 * Callers:
 *     StorChildAdapterPdoPnpIrp @ 0x14012EFE0 (StorChildAdapterPdoPnpIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall StorChildAdapterPdoPnpQueryIdIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  ULONG v3; // edi
  unsigned int Length; // esi
  NTSTATUS DevicePropertyData; // ebx
  __int64 v8; // rcx
  void *Data; // rsi
  ULONG v10; // ecx
  __int64 v11; // rax
  const WCHAR *v12; // rdx
  __int64 Pool; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING v16; // [rsp+50h] [rbp-10h] BYREF
  ULONG RequiredSize; // [rsp+98h] [rbp+38h] BYREF
  ULONG Type; // [rsp+A0h] [rbp+40h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  DestinationString = 0LL;
  v16 = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length <= 2 )
  {
    v11 = *(_QWORD *)(a1 + 72);
    if ( v11 )
    {
      if ( *(_DWORD *)v11 == 1094997074 )
      {
        v12 = *(const WCHAR **)(v11 + 4784);
LABEL_21:
        RtlInitUnicodeString(&DestinationString, v12);
        DevicePropertyData = 0;
        Pool = RaidAllocatePool(
                 256LL,
                 DestinationString.Length + (Length != 0 ? 50 : 48),
                 1229218130LL,
                 *(_QWORD *)(a1 + 8));
        Data = (void *)Pool;
        if ( !Pool )
          goto LABEL_8;
        *(_OWORD *)Pool = *(_OWORD *)L"STORPORT\\CHILD_ADAPTER_";
        *(_OWORD *)(Pool + 16) = *(_OWORD *)L"\\CHILD_ADAPTER_";
        *(_QWORD *)(Pool + 32) = *(_QWORD *)L"DAPTER_";
        *(_DWORD *)(Pool + 40) = *(_DWORD *)L"ER_";
        *(_WORD *)(Pool + 44) = aStorportChildA[22];
        v16.Buffer = (wchar_t *)(Pool + 46);
        v16.Length = DestinationString.Length;
        v16.MaximumLength = DestinationString.Length;
        RtlUpcaseUnicodeString(&v16, &DestinationString, 0);
        goto LABEL_25;
      }
      if ( *(_DWORD *)v11 == 1314275652 )
      {
        v12 = *(const WCHAR **)(v11 + 1032);
        goto LABEL_21;
      }
    }
    DevicePropertyData = -1073741811;
    goto LABEL_24;
  }
  if ( Length != 3 )
  {
    DevicePropertyData = -1073741637;
LABEL_24:
    Data = 0LL;
    goto LABEL_25;
  }
  v8 = *(_QWORD *)(a1 + 72);
  RequiredSize = 0;
  Type = 0;
  if ( IoGetDevicePropertyData(
         *(PDEVICE_OBJECT *)(v8 + 32),
         &DEVPKEY_Device_InstanceId,
         0,
         0,
         0,
         0LL,
         &RequiredSize,
         &Type) != -1073741789
    || RequiredSize > 0x190 )
  {
    DevicePropertyData = -1073741823;
    goto LABEL_24;
  }
  Data = (void *)RaidAllocatePool(256LL, RequiredSize, 1229218130LL, *(_QWORD *)(a1 + 8));
  if ( !Data )
  {
LABEL_8:
    DevicePropertyData = -1073741801;
    goto LABEL_24;
  }
  DevicePropertyData = IoGetDevicePropertyData(
                         *(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 72) + 32LL),
                         &DEVPKEY_Device_InstanceId,
                         0,
                         0,
                         RequiredSize,
                         Data,
                         &RequiredSize,
                         &Type);
  if ( DevicePropertyData < 0 )
  {
    ExFreePoolWithTag(Data, 0x49446152u);
    goto LABEL_24;
  }
  v10 = RequiredSize;
  if ( (RequiredSize & 0xFFFFFFFE) != 0 )
  {
    do
    {
      if ( *((_WORD *)Data + v3) == 92 )
      {
        *((_WORD *)Data + v3) = 95;
        v10 = RequiredSize;
      }
      ++v3;
    }
    while ( v3 < v10 >> 1 );
  }
LABEL_25:
  a2->IoStatus.Information = (unsigned __int64)Data;
  a2->IoStatus.Status = DevicePropertyData;
  IofCompleteRequest(a2, 0);
  return (unsigned int)DevicePropertyData;
}
