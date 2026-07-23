/*
 * XREFs of ExCreateCallback @ 0x140AFD610
 * Callers:
 *     HvlPhase2Initialize @ 0x1405BB378 (HvlPhase2Initialize.c)
 *     DifExCreateCallbackWrapper @ 0x1406541A0 (DifExCreateCallbackWrapper.c)
 *     HaliInitPowerManagement @ 0x1407883A0 (HaliInitPowerManagement.c)
 *     HalpMiscInitializeKsr @ 0x140788BE8 (HalpMiscInitializeKsr.c)
 *     IoRegisterBootDriverCallback @ 0x1407A46F0 (IoRegisterBootDriverCallback.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407BD330 (KeRegisterProcessorChangeCallback.c)
 *     ExInitLicenseCallback @ 0x14083E088 (ExInitLicenseCallback.c)
 *     KiFilterFiberContext @ 0x140C86D10 (KiFilterFiberContext.c)
 *     IopInitializeSessionNotifications @ 0x140CC4ECC (IopInitializeSessionNotifications.c)
 *     PiCslInitialize @ 0x140CCD6B0 (PiCslInitialize.c)
 *     PiKsrNotifyInitialize @ 0x140CCD930 (PiKsrNotifyInitialize.c)
 *     PopSetupKsrCallbacks @ 0x140CD7A4C (PopSetupKsrCallbacks.c)
 *     PopUmpoInitializeChannel @ 0x140CDB714 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140CDB990 (PopUmpoInitializeMonitorChannel.c)
 *     SshpAlpcInitialize @ 0x140CDDA0C (SshpAlpcInitialize.c)
 *     EtwpInitializeKsrSupport @ 0x140CE850C (EtwpInitializeKsrSupport.c)
 *     ExpInitializeCallbacks @ 0x140CEC404 (ExpInitializeCallbacks.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     ExpUnlockCallbackListExclusive @ 0x1404D5EE0 (ExpUnlockCallbackListExclusive.c)
 *     ExpLockCallbackListExclusive @ 0x1404FEBCC (ExpLockCallbackListExclusive.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 */

NTSTATUS __stdcall ExCreateCallback(
        PCALLBACK_OBJECT *CallbackObject,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN Create,
        BOOLEAN AllowMultipleCallbacks)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int128 v7; // xmm0
  __int128 v9; // xmm1
  ULONG v10; // eax
  __int128 v11; // xmm0
  POBJECT_TYPE v12; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  NTSTATUS inserted; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  char *v19; // rbx
  _QWORD *SListFaultAddress; // rax
  struct _LIST_ENTRY ***v21; // rcx
  PVOID *Object; // [rsp+20h] [rbp-39h]
  PVOID v23; // [rsp+50h] [rbp-9h] BYREF
  __int128 v24; // [rsp+58h] [rbp-1h] BYREF
  __int128 v25; // [rsp+68h] [rbp+Fh]
  __int128 v26; // [rsp+78h] [rbp+1Fh]
  HANDLE Handle; // [rsp+C8h] [rbp+6Fh] BYREF

  v24 = 0LL;
  *(_QWORD *)&v26 = 0LL;
  v25 = 0LL;
  DWORD2(v26) = 0;
  CurrentThread = KeGetCurrentThread();
  v7 = *(_OWORD *)&ObjectAttributes->Length;
  v9 = *(_OWORD *)&ObjectAttributes->ObjectName;
  v10 = ObjectAttributes->Attributes | 0x200;
  Handle = 0LL;
  v24 = v7;
  v23 = 0LL;
  v11 = *(_OWORD *)&ObjectAttributes->SecurityDescriptor;
  v25 = v9;
  DWORD2(v25) = v10;
  v26 = v11;
  if ( (_QWORD)v9 )
  {
    v12 = ExCallbackObjectType;
    CurrentSilo = PsGetCurrentSilo();
    inserted = ObOpenObjectByNameEx((__int64)&v24, (__int64)v12, 0, 0LL, 0, 0LL, (__int64)CurrentSilo, &Handle);
    if ( inserted >= 0 )
    {
LABEL_3:
      v23 = 0LL;
      inserted = ObReferenceObjectByHandle(Handle, 0, ExCallbackObjectType, 0, &v23, 0LL);
      ZwClose(Handle);
      if ( inserted >= 0 )
        *CallbackObject = (PCALLBACK_OBJECT)v23;
      return inserted;
    }
  }
  else
  {
    inserted = -1073741823;
  }
  if ( Create )
  {
    inserted = ObCreateObjectEx(0, ExCallbackObjectType, (__int64)&v24, 0, (__int64)Object, 56, 0, 0, &v23, 0LL);
    if ( inserted >= 0 )
    {
      v19 = (char *)v23;
      *(_DWORD *)v23 = 1819042115;
      v19[32] = AllowMultipleCallbacks;
      *((_QWORD *)v19 + 3) = v19 + 16;
      *((_QWORD *)v19 + 2) = v19 + 16;
      *((_QWORD *)v19 + 1) = 0LL;
      ExpLockCallbackListExclusive((__int64)CurrentThread, v16, v17, v18);
      SListFaultAddress = stru_140EFF2C0.SListFaultAddress;
      v21 = (struct _LIST_ENTRY ***)(v19 + 40);
      if ( *(struct _KTHREAD **)stru_140EFF2C0.SListFaultAddress != (struct _KTHREAD *)&stru_140EFF2C0.Header.WaitListHead.Blink )
        __fastfail(3u);
      *v21 = &stru_140EFF2C0.Header.WaitListHead.Blink;
      *((_QWORD *)v19 + 6) = SListFaultAddress;
      *SListFaultAddress = v21;
      stru_140EFF2C0.SListFaultAddress = v19 + 40;
      ExpUnlockCallbackListExclusive((__int64)CurrentThread);
      inserted = ObInsertObjectEx(v19, 0LL, 1, 0, 0, 0LL, &Handle);
      if ( inserted >= 0 )
        goto LABEL_3;
    }
  }
  return inserted;
}
