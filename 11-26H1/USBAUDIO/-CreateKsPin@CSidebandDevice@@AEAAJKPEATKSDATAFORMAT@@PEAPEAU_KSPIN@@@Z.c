/*
 * XREFs of ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x14000FA54
 * Callers:
 *     ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140007438 (-StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z @ 0x140005BE8 (-GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x140007068 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     memmove @ 0x14001C7C0 (memmove.c)
 */

__int64 __fastcall CSidebandDevice::CreateKsPin(
        CSidebandDevice *this,
        unsigned int a2,
        union KSDATAFORMAT *Src,
        struct _KSPIN **a4)
{
  struct $58C2C1BF6568EE28BD9B872E6BA03976 *v4; // rsi
  union KSDATAFORMAT *v6; // r12
  unsigned int v7; // r13d
  char v9; // di
  __int64 v10; // rdx
  int FilterInstance; // ebx
  int v12; // r8d
  PVOID DeviceExtension; // r9
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  PDEVICE_OBJECT v15; // rcx
  __int64 Pool2; // rax
  int v17; // edx
  int v18; // r8d
  struct _KSPIN *ObjectFromFileObject; // rax
  int v20; // edx
  int v21; // r8d
  __int64 v22; // rdx
  void *ConnectionHandle; // [rsp+58h] [rbp-9h] BYREF
  PVOID Object; // [rsp+60h] [rbp-1h] BYREF
  HANDLE FilterHandle; // [rsp+68h] [rbp+7h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v27; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v28; // [rsp+88h] [rbp+27h]
  unsigned int v29; // [rsp+E0h] [rbp+7Fh] BYREF

  v29 = -1;
  ConnectionHandle = 0LL;
  v4 = 0LL;
  v27 = 0LL;
  FilterHandle = 0LL;
  v6 = Src;
  v7 = a2;
  v9 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (LOBYTE(Src) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(Src) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)Src )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, a2, (_DWORD)Src, WPP_GLOBAL_Control->DeviceExtension);
  *a4 = 0LL;
  FilterInstance = CSidebandDevice::GetFilterInstance(this, &FilterHandle);
  if ( FilterInstance >= 0 )
  {
    FilterInstance = CSidebandDevice::GetPinFromEpIndex(this, v7, &v29, &v27);
    if ( FilterInstance >= 0 )
    {
      Pool2 = ExAllocatePool2(64LL, v6->FormatSize + 72LL, 929200197LL);
      v4 = (struct $58C2C1BF6568EE28BD9B872E6BA03976 *)Pool2;
      if ( !Pool2 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v10) = 0;
        }
        if ( (_BYTE)v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v10, v12, WPP_GLOBAL_Control->DeviceExtension);
        }
        FilterInstance = -1073741664;
        goto LABEL_65;
      }
      v28 = 0LL;
      *(_QWORD *)(Pool2 + 56) = 0LL;
      *(GUID *)Pool2 = GUID_1a8766a0_62ce_11cf_a5d6_28db04c10000;
      *(_DWORD *)(Pool2 + 64) = 0x40000000;
      *(_QWORD *)(Pool2 + 16) = v28;
      *(GUID *)(Pool2 + 24) = GUID_4747b320_62ce_11cf_a5d6_28db04c10000;
      *(_DWORD *)(Pool2 + 68) = 1;
      v28 = 0LL;
      *(_QWORD *)(Pool2 + 40) = 0LL;
      *(_DWORD *)(Pool2 + 48) = v29;
      memmove((void *)(Pool2 + 72), v6, v6->FormatSize);
      FilterInstance = KsCreatePin(FilterHandle, v4, 0xC0000000, &ConnectionHandle);
      if ( FilterInstance >= 0 )
      {
        Object = 0LL;
        FilterInstance = ObReferenceObjectByHandle(
                           ConnectionHandle,
                           0x1F01FFu,
                           (POBJECT_TYPE)IoFileObjectType,
                           0,
                           &Object,
                           0LL);
        if ( FilterInstance >= 0 )
        {
          ZwClose(ConnectionHandle);
          ObjectFromFileObject = (struct _KSPIN *)KsGetObjectFromFileObject((PFILE_OBJECT)Object);
          *a4 = ObjectFromFileObject;
          if ( ObjectFromFileObject )
          {
            KsAddItemToObjectBag(ObjectFromFileObject->Bag, v4, ExFreePool);
            v22 = (__int64)*a4;
            *(_BYTE *)(*(_QWORD *)(v22 + 16) + 47LL) = 1;
            v10 = *(_QWORD *)(v22 + 16);
            *(_QWORD *)(v10 + 48) = Object;
          }
          else
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
              || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
            {
              LOBYTE(v20) = 0;
            }
            if ( (_BYTE)v20 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v21) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v20,
                v21,
                WPP_GLOBAL_Control->DeviceExtension);
            }
            ObfDereferenceObject(Object);
            FilterInstance = -1073741275;
          }
        }
        else
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v17) = 0;
          }
          if ( (_BYTE)v17 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v18) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_d(
              WPP_GLOBAL_Control->AttachedDevice,
              v17,
              v18,
              WPP_GLOBAL_Control->DeviceExtension);
          }
          ZwClose(ConnectionHandle);
        }
        goto LABEL_65;
      }
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v10) = 0;
      }
      LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v10 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_65;
    }
    else
    {
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v10) = 0;
      }
      LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v10 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_65;
    }
    DeviceExtension = v15->DeviceExtension;
    AttachedDevice = v15->AttachedDevice;
    goto LABEL_20;
  }
  LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
    AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
LABEL_20:
    WPP_RECORDER_AND_TRACE_SF_d((_DWORD)AttachedDevice, v10, v12, (_DWORD)DeviceExtension);
  }
LABEL_65:
  if ( FilterHandle )
    ZwClose(FilterHandle);
  if ( FilterInstance < 0 && v4 )
    ExFreePool(v4);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v9 = 0;
  if ( (_BYTE)v10 || v9 )
  {
    LOBYTE(v12) = v9;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v10, v12, WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)FilterInstance;
}
