/*
 * XREFs of ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x140300A60
 * Callers:
 *     ?HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z @ 0x1402FFFBC (-HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z.c)
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x140300258 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140003F20 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1402FFD78 (-CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z.c)
 */

__int64 __fastcall SimpleHapticsController::OpenHapticsDevice(SimpleHapticsController *this)
{
  unsigned int v1; // ebx
  void **v2; // rsi
  PVOID *NotificationEntry; // r14
  NTSTATUS v5; // eax
  PVOID v6; // r8
  __int64 v7; // r9
  void *v8; // rdx
  void *v9; // rcx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+17h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+67h] BYREF
  const char *v13; // [rsp+C0h] [rbp+6Fh] BYREF

  v1 = 0;
  v2 = (void **)((char *)this + 24);
  if ( !*((_QWORD *)this + 3) && !*((_QWORD *)this + 7) )
  {
    NotificationEntry = (PVOID *)((char *)this + 32);
    if ( !*((_QWORD *)this + 4) )
    {
      ObjectAttributes.ObjectName = (PUNICODE_STRING)this;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
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
        if ( (unsigned int)dword_1403AAAA0 > 2 )
        {
          v8 = &unk_14037A251;
LABEL_13:
          LODWORD(Object) = v5;
          v13 = "Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1403AAAA0,
            (__int64)v8,
            (__int64)v6,
            v7,
            (void **)&v13,
            (__int64)&Object);
          goto LABEL_14;
        }
        goto LABEL_14;
      }
      v9 = *v2;
      Object = 0LL;
      v5 = ObReferenceObjectByHandle(v9, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
      v6 = Object;
      v1 = v5;
      *((_QWORD *)this + 7) = Object;
      if ( v5 < 0 )
      {
        if ( (unsigned int)dword_1403AAAA0 > 2 )
        {
          v8 = &unk_14037A288;
          goto LABEL_13;
        }
LABEL_14:
        SimpleHapticsController::CloseHapticsWriteDevice(this, 1);
        return v1;
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
        if ( (unsigned int)dword_1403AAAA0 > 2 )
        {
          v8 = &unk_14037A13E;
          goto LABEL_13;
        }
        goto LABEL_14;
      }
    }
  }
  return v1;
}
