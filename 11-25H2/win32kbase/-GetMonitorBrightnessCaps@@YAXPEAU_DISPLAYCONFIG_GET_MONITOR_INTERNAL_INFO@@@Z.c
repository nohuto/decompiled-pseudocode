/*
 * XREFs of ?GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x1401178EC
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6DD8 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x14004E440 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall GetMonitorBrightnessCaps(struct _DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO *a1)
{
  _DWORD *v1; // rsi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  __int64 v4; // rcx
  __int64 DxgkWin32kInterface; // rax
  IRP *v6; // rax
  NTSTATUS Status; // eax
  __int64 v8; // rdx
  unsigned int v9; // edx
  _DWORD *OutputBuffer; // rbx
  int v11; // r14d
  __int64 v12; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v15; // [rsp+B0h] [rbp+30h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+B8h] [rbp+38h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+C0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+48h] BYREF

  DeviceObject = 0LL;
  v1 = (_DWORD *)((char *)a1 + 592);
  Object = 0LL;
  AttachedDeviceReference = 0LL;
  memset((char *)a1 + 592, 0, 0x13CuLL);
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v4);
  if ( (*(int (__fastcall **)(char *, _QWORD, PVOID *, PDEVICE_OBJECT *))(DxgkWin32kInterface + 456))(
         (char *)a1 + 8,
         *((unsigned int *)a1 + 4),
         &Object,
         &DeviceObject) < 0 )
    goto LABEL_7;
  if ( !DeviceObject )
    goto LABEL_10;
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  if ( !AttachedDeviceReference )
  {
LABEL_8:
    if ( !AttachedDeviceReference )
      goto LABEL_10;
    goto LABEL_9;
  }
  Timeout.QuadPart = 0LL;
  IoStatusBlock = 0LL;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = IoBuildDeviceIoControlRequest(
         0x230C00u,
         AttachedDeviceReference,
         0LL,
         0,
         &Timeout,
         8u,
         0,
         &Event,
         &IoStatusBlock);
  if ( !v6 )
    goto LABEL_7;
  Status = IofCallDriver(AttachedDeviceReference, v6);
  if ( Status == 259 )
  {
    while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
      ;
    Status = IoStatusBlock.Status;
  }
  if ( Status < 0 )
    goto LABEL_7;
  v9 = (int)Timeout.LowPart > 2
     ? BYTE4(Timeout.QuadPart) & 4 | v1[78] & 0xFFFFFFE0 | (8 * (BYTE4(Timeout.QuadPart) & 3)) | 2
     : BYTE4(Timeout.QuadPart) & 4 | v1[78] & 0xFFFFFFE0 | (8 * (BYTE4(Timeout.QuadPart) & 3)) | 1;
  v1[78] = v9;
  OutputBuffer = (_DWORD *)PALLOCMEM(208LL, 1886221383LL);
  if ( OutputBuffer )
  {
    v11 = GreDeviceIoControlImpl(AttachedDeviceReference, 0x230C04u, 0LL, 0, OutputBuffer, 0xD0u, &v15, 0, 0);
    if ( v11 >= 0 )
    {
      v8 = 0LL;
      if ( (v1[78] & 2) != 0 )
      {
        v1[75] = OutputBuffer[1];
        v1[76] = OutputBuffer[2];
        v1[77] = OutputBuffer[3];
        if ( OutputBuffer[2] )
        {
          do
          {
            v12 = 3 * v8;
            v8 = (unsigned int)(v8 + 1);
            v1[v12 + 27] = OutputBuffer[v12 + 4];
            v1[v12 + 28] = OutputBuffer[v12 + 5];
            v1[v12 + 29] = OutputBuffer[v12 + 6];
          }
          while ( (unsigned int)v8 < OutputBuffer[2] );
        }
      }
      else
      {
        v1[26] = *((unsigned __int8 *)OutputBuffer + 4);
        if ( *((_BYTE *)OutputBuffer + 4) )
        {
          do
          {
            *((_BYTE *)v1 + v8) = *((_BYTE *)OutputBuffer + v8 + 5);
            v8 = (unsigned int)(v8 + 1);
          }
          while ( (unsigned int)v8 < *((unsigned __int8 *)OutputBuffer + 4) );
        }
      }
    }
    GreDeleteFastMutex((char *)OutputBuffer);
    if ( v11 < 0 )
    {
LABEL_7:
      memset(v1, 0, 0x13CuLL);
      goto LABEL_8;
    }
  }
LABEL_9:
  ObfDereferenceObject(AttachedDeviceReference);
LABEL_10:
  if ( Object )
    ObfDereferenceObject(Object);
}
