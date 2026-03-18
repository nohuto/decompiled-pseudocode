/*
 * XREFs of UsbhArmHubForWakeDetect @ 0x1400070A0
 * Callers:
 *     UsbhArmHubWakeOnConnect @ 0x140006E74 (UsbhArmHubWakeOnConnect.c)
 *     UsbhFdoSetPowerDx_Action @ 0x14003743C (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     UsbhDisarmHubForWakeDetect @ 0x140007684 (UsbhDisarmHubForWakeDetect.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

LONG __fastcall UsbhArmHubForWakeDetect(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  volatile signed __int32 *DeviceExtension; // rcx
  signed __int32 v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  volatile signed __int32 *v12; // rcx
  signed __int32 v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  volatile signed __int32 *v17; // rcx
  signed __int32 v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rdx
  NTSTATUS v22; // eax
  LONG result; // eax
  volatile signed __int32 *v24; // rcx
  signed __int32 v25; // eax
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rdx

  v5 = FdoExt(DeviceObject, a2, a3, a4);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = (volatile signed __int32 *)DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v7 = _InterlockedExchangeAdd(DeviceExtension + 220, 0xFFFFFFFF);
        v8 = *((_DWORD *)DeviceExtension + 221);
        v9 = *((_QWORD *)DeviceExtension + 111);
        v10 = 32LL * ((v7 - 1) & v8);
        *(_DWORD *)(v10 + v9) = 727144296;
        *(_QWORD *)(v10 + v9 + 8) = 0LL;
        *(_QWORD *)(v10 + v9 + 16) = 0LL;
        *(_QWORD *)(v10 + v9 + 24) = 0LL;
      }
    }
  }
  UsbhEtwLogHubIrpEvent(DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_START, 0, 0);
  while ( 1 )
  {
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 4884), 2, 1);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( DeviceObject )
      {
        v12 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
        if ( v12 )
        {
          v13 = _InterlockedExchangeAdd(v12 + 220, 0xFFFFFFFF);
          v14 = *((_DWORD *)v12 + 221);
          v15 = *((_QWORD *)v12 + 111);
          v16 = 32LL * ((v13 - 1) & v14);
          *(_DWORD *)(v16 + v15) = 2018989928;
          *(_QWORD *)(v16 + v15 + 8) = 0LL;
          *(_QWORD *)(v16 + v15 + 16) = 0LL;
          *(_QWORD *)(v16 + v15 + 24) = v11;
        }
      }
    }
    if ( (_DWORD)v11 == 1 )
      break;
    result = v11 - 2;
    if ( (((_DWORD)v11 - 2) & 0xFFFFFFFD) == 0 )
      return result;
    UsbhDisarmHubForWakeDetect(DeviceObject);
  }
  KeWaitForSingleObject((PVOID)(v5 + 4896), Executive, 0, 0, 0LL);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( DeviceObject )
    {
      v17 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
      if ( v17 )
      {
        v18 = _InterlockedExchangeAdd(v17 + 220, 0xFFFFFFFF);
        v19 = *((_DWORD *)v17 + 221);
        v20 = *((_QWORD *)v17 + 111);
        v21 = 32LL * ((v18 - 1) & v19);
        *(_DWORD *)(v21 + v20) = 1884772200;
        *(_QWORD *)(v21 + v20 + 8) = 0LL;
        *(_QWORD *)(v21 + v20 + 16) = 0LL;
        *(_QWORD *)(v21 + v20 + 24) = 0LL;
      }
    }
  }
  KeResetEvent((PRKEVENT)(v5 + 4896));
  v22 = PoRequestPowerIrp(DeviceObject, 0, *(POWER_STATE *)(v5 + 5036), UsbhFdoWakePoComplete_Action, 0LL, 0LL);
  if ( v22 == 259 )
  {
    result = UsbhLogMask;
    if ( (UsbhLogMask & 0x10) != 0 && DeviceObject )
    {
      v24 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
      if ( v24 )
      {
        v25 = _InterlockedExchangeAdd(v24 + 220, 0xFFFFFFFF);
        v26 = *((_DWORD *)v24 + 221);
        v27 = *((_QWORD *)v24 + 111);
        v28 = (v25 - 1) & v26;
        result = 1297236328;
        v28 *= 32LL;
        *(_DWORD *)(v28 + v27) = 1297236328;
        *(_QWORD *)(v28 + v27 + 8) = 0LL;
        *(_QWORD *)(v28 + v27 + 16) = 0LL;
        *(_QWORD *)(v28 + v27 + 24) = 0LL;
      }
    }
  }
  else
  {
    Log((_DWORD)DeviceObject, 16, 1463896944, v22, 0LL);
    *(_DWORD *)(v5 + 4884) = 1;
    return KeSetEvent((PRKEVENT)(v5 + 4896), 0, 0);
  }
  return result;
}
