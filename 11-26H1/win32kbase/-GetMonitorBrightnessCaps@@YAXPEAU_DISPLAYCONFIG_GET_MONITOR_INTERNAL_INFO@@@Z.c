/*
 * XREFs of ?GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x14015863C
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400FB88C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x140027570 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall GetMonitorBrightnessCaps(struct _DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO *a1)
{
  _DWORD *v1; // rsi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 DxgkWin32kInterface; // rax
  IRP *v7; // rax
  NTSTATUS Status; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edx
  _DWORD *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r14d
  __int64 v17; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v20; // [rsp+B0h] [rbp+30h] BYREF
  __int64 OutputBuffer; // [rsp+B8h] [rbp+38h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+C0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+48h] BYREF

  v1 = (_DWORD *)((char *)a1 + 592);
  DeviceObject = 0LL;
  Object = 0LL;
  AttachedDeviceReference = 0LL;
  memset((char *)a1 + 592, 0, 0x13CuLL);
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v5, v4);
  if ( (*(int (__fastcall **)(char *, _QWORD, PVOID *, PDEVICE_OBJECT *))(DxgkWin32kInterface + 456))(
         (char *)a1 + 8,
         *((unsigned int *)a1 + 4),
         &Object,
         &DeviceObject) < 0 )
    goto LABEL_2;
  if ( DeviceObject )
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
    if ( !AttachedDeviceReference )
    {
LABEL_3:
      if ( !AttachedDeviceReference )
        goto LABEL_5;
      goto LABEL_4;
    }
    OutputBuffer = 0LL;
    IoStatusBlock = 0LL;
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v7 = IoBuildDeviceIoControlRequest(
           0x230C00u,
           AttachedDeviceReference,
           0LL,
           0,
           &OutputBuffer,
           8u,
           0,
           &Event,
           &IoStatusBlock);
    if ( v7 )
    {
      Status = IofCallDriver(AttachedDeviceReference, v7);
      if ( Status == 259 )
      {
        while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
          ;
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        v11 = (int)OutputBuffer > 2
            ? BYTE4(OutputBuffer) & 4 | v1[78] & 0xFFFFFFE0 | (8 * (BYTE4(OutputBuffer) & 3)) | 2
            : BYTE4(OutputBuffer) & 4 | v1[78] & 0xFFFFFFE0 | (8 * (BYTE4(OutputBuffer) & 3)) | 1;
        v1[78] = v11;
        v12 = (_DWORD *)PALLOCMEM(208LL, 1886221383LL, v9, v10);
        if ( !v12 )
          goto LABEL_4;
        v16 = GreDeviceIoControlImpl(AttachedDeviceReference, 0x230C04u, 0LL, 0, v12, 0xD0u, &v20, 0, 0);
        if ( v16 >= 0 )
        {
          v13 = 0LL;
          if ( (v1[78] & 2) != 0 )
          {
            v1[75] = v12[1];
            v1[76] = v12[2];
            v1[77] = v12[3];
            if ( v12[2] )
            {
              do
              {
                v17 = 3 * v13;
                v13 = (unsigned int)(v13 + 1);
                v1[v17 + 27] = v12[v17 + 4];
                v1[v17 + 28] = v12[v17 + 5];
                v1[v17 + 29] = v12[v17 + 6];
              }
              while ( (unsigned int)v13 < v12[2] );
            }
          }
          else
          {
            v1[26] = *((unsigned __int8 *)v12 + 4);
            if ( *((_BYTE *)v12 + 4) )
            {
              do
              {
                *((_BYTE *)v1 + v13) = *((_BYTE *)v12 + v13 + 5);
                v13 = (unsigned int)(v13 + 1);
              }
              while ( (unsigned int)v13 < *((unsigned __int8 *)v12 + 4) );
            }
          }
        }
        GreDeleteFastMutex((char *)v12, v13, v14, v15);
        if ( v16 >= 0 )
        {
LABEL_4:
          ObfDereferenceObject(AttachedDeviceReference);
          goto LABEL_5;
        }
      }
    }
LABEL_2:
    memset(v1, 0, 0x13CuLL);
    goto LABEL_3;
  }
LABEL_5:
  if ( Object )
    ObfDereferenceObject(Object);
}
