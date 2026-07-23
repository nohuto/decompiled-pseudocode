/*
 * XREFs of FsRtlNotifyVolumeEventEx @ 0x140AE4160
 * Callers:
 *     FsRtlNotifyVolumeEvent @ 0x1407935A0 (FsRtlNotifyVolumeEvent.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PnpGetRelatedTargetDevice @ 0x14049B114 (PnpGetRelatedTargetDevice.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14049DEB0 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IoReportTargetDeviceChange @ 0x140AE42C0 (IoReportTargetDeviceChange.c)
 */

NTSTATUS __stdcall FsRtlNotifyVolumeEventEx(
        PFILE_OBJECT FileObject,
        ULONG EventCode,
        PTARGET_DEVICE_CUSTOM_NOTIFICATION Event)
{
  struct _DEVICE_OBJECT *v4; // rsi
  NTSTATUS RelatedTargetDevice; // ebp
  ULONG v7; // ebx
  ULONG v8; // ebx
  ULONG v9; // ebx
  ULONG v10; // ebx
  ULONG v11; // ebx
  ULONG v12; // ebx
  GUID v13; // xmm0
  GUID v15; // xmm0
  ULONG v16; // ebx
  ULONG v17; // ebx
  ULONG v18; // ebx
  ULONG v19; // ebx
  ULONG v20; // ebx
  __int64 v21; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0LL;
  v21 = 0LL;
  RelatedTargetDevice = PnpGetRelatedTargetDevice(FileObject, &v21);
  if ( RelatedTargetDevice < 0 )
    return RelatedTargetDevice;
  if ( v21 )
    v4 = *(struct _DEVICE_OBJECT **)(v21 + 32);
  if ( EventCode > 8 )
  {
    v16 = EventCode - 9;
    if ( !v16 )
    {
      v13 = GUID_IO_VOLUME_WEARING_OUT;
      goto LABEL_13;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      v13 = GUID_IO_VOLUME_FORCE_CLOSED;
      goto LABEL_13;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      v13 = GUID_IO_VOLUME_INFO_MAKE_COMPAT;
      goto LABEL_13;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      v13 = GUID_IO_VOLUME_PREPARING_EJECT;
      goto LABEL_13;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      v13 = GUID_IO_VOLUME_CHANGE_SIZE;
      goto LABEL_13;
    }
    if ( v20 == 1 )
    {
      v13 = GUID_IO_VOLUME_BACKGROUND_FORMAT;
      goto LABEL_13;
    }
    goto LABEL_32;
  }
  if ( EventCode == 8 )
  {
    v13 = GUID_IO_VOLUME_WORM_NEAR_FULL;
    goto LABEL_13;
  }
  v7 = EventCode - 1;
  if ( !v7 )
  {
    v15 = GUID_IO_VOLUME_DISMOUNT;
LABEL_17:
    Event->Event = v15;
    IoReportTargetDeviceChange(v4, Event);
    goto LABEL_14;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v15 = GUID_IO_VOLUME_DISMOUNT_FAILED;
    goto LABEL_17;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v15 = GUID_IO_VOLUME_LOCK;
    goto LABEL_17;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v15 = GUID_IO_VOLUME_LOCK_FAILED;
    goto LABEL_17;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v15 = GUID_IO_VOLUME_UNLOCK;
    goto LABEL_17;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v13 = GUID_IO_VOLUME_MOUNT;
LABEL_13:
    Event->Event = v13;
    IoReportTargetDeviceChangeAsynchronous(v4, Event, 0LL, 0LL);
LABEL_14:
    ObfDereferenceObject(v4);
    return RelatedTargetDevice;
  }
  if ( v12 == 1 )
  {
    v13 = GUID_IO_VOLUME_NEED_CHKDSK;
    goto LABEL_13;
  }
LABEL_32:
  ObfDereferenceObject(v4);
  return -1073741811;
}
