/*
 * XREFs of USBHwGetOffloadCapability @ 0x140035788
 * Callers:
 *     USBDeviceGetOffloadCapability @ 0x1400351C0 (USBDeviceGetOffloadCapability.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     USBD_CloseHandle @ 0x140019DBC (USBD_CloseHandle.c)
 *     USBD_CreateHandle @ 0x140019E3C (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x14001A27C (USBD_QueryUsbCapability.c)
 */

__int64 __fastcall USBHwGetOffloadCapability(__int64 a1, int *a2, ULONG a3)
{
  int v3; // esi
  struct _DEVICE_OBJECT *v5; // rdx
  struct _DEVICE_OBJECT *v6; // rcx
  const GUID *v7; // rdx
  NTSTATUS v8; // edi
  ULONG v9; // r8d
  PDEVICE_OBJECT v10; // r10
  bool v11; // bl
  NTSTATUS v12; // eax
  int v13; // edx
  bool v14; // bl
  __int64 result; // rax
  int OutputBuffer; // [rsp+70h] [rbp+8h] BYREF
  ULONG ResultLength; // [rsp+78h] [rbp+10h] BYREF
  USBD_HANDLE USBDHandle; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  USBDHandle = 0LL;
  OutputBuffer = 0;
  v5 = *(struct _DEVICE_OBJECT **)(a1 + 40);
  v6 = *(struct _DEVICE_OBJECT **)(a1 + 24);
  ResultLength = 0;
  v8 = USBD_CreateHandle(v6, v5, a3, 0x38627845u, &USBDHandle);
  if ( v8 >= 0 )
  {
    v12 = USBD_QueryUsbCapability(USBDHandle, v7, v9, (PUCHAR)&OutputBuffer, &ResultLength);
    v8 = v12;
    if ( v12 >= 0 )
    {
      LODWORD(v7) = ResultLength;
      if ( ResultLength == 4 )
      {
        LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v7,
            v9,
            WPP_GLOBAL_Control->DeviceExtension);
        }
        if ( OutputBuffer )
        {
          if ( OutputBuffer == 1 )
          {
            v3 = 1;
          }
          else if ( OutputBuffer == 2 )
          {
            v3 = 2;
          }
        }
      }
      else
      {
        v8 = -1073741823;
        v10 = WPP_GLOBAL_Control;
        v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          goto LABEL_9;
      }
    }
    else
    {
      if ( v12 != -1073741637 && v12 != -1073741822 )
      {
        v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( v14 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = v14;
          LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v13, v9, WPP_GLOBAL_Control->DeviceExtension);
        }
      }
      v8 = 0;
    }
  }
  else
  {
    v10 = WPP_GLOBAL_Control;
    v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
LABEL_9:
      LOBYTE(v7) = v11;
      WPP_RECORDER_AND_TRACE_SF_d(v10->AttachedDevice, (_DWORD)v7, v9, v10->DeviceExtension);
    }
  }
  if ( USBDHandle )
    USBD_CloseHandle(USBDHandle);
  result = (unsigned int)v8;
  *a2 = v3;
  return result;
}
