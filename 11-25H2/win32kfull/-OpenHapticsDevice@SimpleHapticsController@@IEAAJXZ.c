/*
 * XREFs of ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x1402F1308
 * Callers:
 *     ?HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z @ 0x1402F0868 (-HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z.c)
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1402F0B04 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140005D0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1402F0630 (-CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z.c)
 */

__int64 __fastcall SimpleHapticsController::OpenHapticsDevice(SimpleHapticsController *this)
{
  unsigned int v1; // ebx
  void **v2; // rsi
  PVOID *NotificationEntry; // r14
  NTSTATUS v5; // eax
  PVOID v6; // r8
  __int64 v7; // r9
  void *v8; // rcx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+17h] BYREF
  PVOID EventCategoryData; // [rsp+B8h] [rbp+67h] BYREF
  const char *v12; // [rsp+C0h] [rbp+6Fh] BYREF

  v1 = 0;
  v2 = (void **)((char *)this + 24);
  if ( !*((_QWORD *)this + 3) && !*((_QWORD *)this + 7) )
  {
    NotificationEntry = (PVOID *)((char *)this + 32);
    if ( !*((_QWORD *)this + 4) )
    {
      *(&ObjectAttributes.Length + 1) = 0;
      memset(&ObjectAttributes.Attributes + 1, 0, 20);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)this;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 512;
      v5 = ZwCreateFile(
             (PHANDLE)this + 3,
             2u,
             &ObjectAttributes,
             (PIO_STATUS_BLOCK)((char *)this + 40),
             0LL,
             0x80u,
             3u,
             3u,
             0x40000000u,
             0LL,
             0);
      v1 = v5;
      if ( v5 < 0 )
      {
        if ( (unsigned int)dword_14039BC30 > 2 )
          goto LABEL_12;
        goto LABEL_13;
      }
      v8 = *v2;
      EventCategoryData = 0LL;
      v5 = ObReferenceObjectByHandle(v8, 0, (POBJECT_TYPE)IoFileObjectType, 0, &EventCategoryData, 0LL);
      v6 = EventCategoryData;
      v1 = v5;
      *((_QWORD *)this + 7) = EventCategoryData;
      if ( v5 < 0 )
      {
        if ( (unsigned int)dword_14039BC30 > 2 )
          goto LABEL_12;
        goto LABEL_13;
      }
      v5 = IoRegisterPlugPlayNotification(
             EventCategoryTargetDeviceChange,
             0,
             v6,
             gpWin32kDriverObject,
             (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)SimpleHapticsController::HapticsDeviceNotify,
             this,
             NotificationEntry);
      v1 = v5;
      if ( v5 < 0 )
      {
        if ( (unsigned int)dword_14039BC30 > 2 )
        {
LABEL_12:
          LODWORD(EventCategoryData) = v5;
          v12 = "Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (__int64)&dword_14039BC30,
            (__int64)&unk_14036BA7F,
            (__int64)v6,
            v7,
            &v12);
        }
LABEL_13:
        SimpleHapticsController::CloseHapticsWriteDevice(this, 1);
      }
    }
  }
  return v1;
}
