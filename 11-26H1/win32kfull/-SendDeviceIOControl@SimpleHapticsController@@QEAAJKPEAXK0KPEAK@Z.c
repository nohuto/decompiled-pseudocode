/*
 * XREFs of ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x140300C20
 * Callers:
 *     ?SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z @ 0x1402FD5B8 (-SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x140300568 (-InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ.c)
 *     ?IntializePreparssedData@SimpleHapticsController@@IEAAJXZ @ 0x140300938 (-IntializePreparssedData@SimpleHapticsController@@IEAAJXZ.c)
 *     ?SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z @ 0x1403010DC (-SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140003F20 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall SimpleHapticsController::SendDeviceIOControl(
        SimpleHapticsController *this,
        ULONG a2,
        void *a3,
        __int64 a4,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        unsigned int *a7)
{
  struct _FILE_OBJECT *v7; // rdi
  ULONG v8; // r15d
  NTSTATUS Status; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v15; // rbx
  PVOID v16; // r14
  PIRP v17; // rax
  IRP *v18; // rsi
  NTSTATUS v19; // ebx
  const char *v21; // [rsp+50h] [rbp-30h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-18h] BYREF
  const char *v24; // [rsp+B0h] [rbp+30h] BYREF

  v7 = (struct _FILE_OBJECT *)*((_QWORD *)this + 7);
  v8 = a4;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( !v7 )
  {
    Status = -1073741436;
    goto LABEL_13;
  }
  ObfReferenceObject(v7);
  if ( (unsigned int)dword_1403AAAA0 > 4 )
  {
    LODWORD(v24) = a2;
    v21 = "SimpleHapticsController::SendDeviceIOControl entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAAA0,
      (__int64)&unk_14037A4E8,
      v12,
      v13,
      (void **)&v21,
      (__int64)&v24);
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v7);
  v15 = RelatedDeviceObject;
  if ( !RelatedDeviceObject
    || (v16 = OutputBuffer,
        v17 = IoBuildDeviceIoControlRequest(
                a2,
                RelatedDeviceObject,
                a3,
                v8,
                OutputBuffer,
                OutputBufferLength,
                0,
                &Event,
                &IoStatusBlock),
        (v18 = v17) == 0LL) )
  {
    Status = -1073741823;
LABEL_13:
    if ( (unsigned int)dword_1403AAAA0 > 2 )
    {
      LODWORD(OutputBuffer) = Status;
      v24 = "SimpleHapticsController::SendDeviceIOControl failed.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1403AAAA0,
        (__int64)&unk_14037A39C,
        (__int64)a3,
        a4,
        (void **)&v24,
        (__int64)&OutputBuffer);
    }
    return (unsigned int)Status;
  }
  v17->Tail.Overlay.CurrentStackLocation[-1].FileObject = v7;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&OutputBuffer);
  v19 = IofCallDriver(v15, v18);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&OutputBuffer);
  if ( v19 == 259 )
  {
    if ( v16 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      if ( a7 )
        *a7 = IoStatusBlock.Information;
    }
  }
  Status = IoStatusBlock.Status;
  ObfDereferenceObject(v7);
  if ( Status < 0 )
    goto LABEL_13;
  return (unsigned int)Status;
}
