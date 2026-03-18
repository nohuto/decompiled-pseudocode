/*
 * XREFs of ?HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z @ 0x1402F0868
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f___ @ 0x1402F04C8 (W32AttachToProcessAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f___.c)
 *     W32AttachToSessionAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f___ @ 0x1402F057C (W32AttachToSessionAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f___.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140005D0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x14020A778 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14021B760 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14023E998 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1402F0630 (-CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z.c)
 *     ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x1402F1308 (-OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ.c)
 */

__int64 __fastcall SimpleHapticsController::HapticsDeviceNotifyWorker(
        struct _PLUGPLAY_NOTIFY_HDR *a1,
        struct SimpleHapticsController *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct InteractiveControlManager *v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  _BYTE v18[272]; // [rsp+30h] [rbp-D0h] BYREF
  const char *v19; // [rsp+160h] [rbp+60h] BYREF
  const char *v20; // [rsp+168h] [rbp+68h] BYREF

  v4 = 0;
  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v18);
  EnterCrit(1LL, 0LL);
  v7 = InteractiveControlManager::Instance(v6, v5);
  if ( v7 && a2 )
  {
    v9 = (__int64 *)((char *)v7 + 40);
    v10 = v9 + 5;
    while ( 1 )
    {
      if ( v9 == v10 )
        goto LABEL_33;
      v8 = *v9;
      if ( *v9 )
      {
        if ( *(struct SimpleHapticsController **)(v8 + 384) == a2 )
          break;
      }
      ++v9;
    }
    v11 = *(_QWORD *)((char *)a1 + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
    if ( !v11 )
      v11 = *(_QWORD *)((char *)a1 + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
    if ( v11 )
    {
      v15 = *(_QWORD *)((char *)a1 + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
      if ( !v15 )
        v15 = *(_QWORD *)((char *)a1 + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
      if ( v15 )
      {
        v16 = *(_QWORD *)((char *)a1 + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
        if ( !v16 )
          v16 = *(_QWORD *)((char *)a1 + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
        if ( v16 )
          goto LABEL_32;
        if ( (unsigned int)dword_14039BC30 > 4 )
        {
          v19 = "SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_REMOVE_COMPLETE";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (__int64)&dword_14039BC30,
            byte_14036BAB6,
            0LL,
            0LL,
            (void **)&v19);
        }
        v12 = SimpleHapticsController::CloseHapticsWriteDevice(a2, 1);
        v4 = v12;
        if ( v12 >= 0 || (unsigned int)dword_14039BC30 <= 2 )
          goto LABEL_32;
      }
      else
      {
        if ( (unsigned int)dword_14039BC30 > 4 )
        {
          v19 = "SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_REMOVE_CANCELLED";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (__int64)&dword_14039BC30,
            byte_14036BAB6,
            0LL,
            0LL,
            (void **)&v19);
        }
        v12 = SimpleHapticsController::OpenHapticsDevice(a2);
        v4 = v12;
        if ( v12 >= 0 || (unsigned int)dword_14039BC30 <= 2 )
          goto LABEL_32;
      }
    }
    else
    {
      if ( (unsigned int)dword_14039BC30 > 4 )
      {
        v19 = "SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_QUERY_REMOVE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (__int64)&dword_14039BC30,
          byte_14036BAB6,
          0LL,
          0LL,
          (void **)&v19);
      }
      v12 = SimpleHapticsController::CloseHapticsWriteDevice(a2, 0);
      v4 = v12;
      if ( v12 >= 0 || (unsigned int)dword_14039BC30 <= 2 )
        goto LABEL_32;
    }
    LODWORD(v19) = v12;
    v20 = "Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BC30,
      (__int64)&unk_14036BA7F,
      v13,
      v14,
      &v20);
LABEL_32:
    UserSessionSwitchLeaveCrit(v8);
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v18);
    return v4;
  }
LABEL_33:
  if ( (unsigned int)dword_14039BC30 > 4 )
  {
    v19 = "SimpleHapticsController::HapticsDeviceNotify device no longer valid";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (__int64)&dword_14039BC30,
      byte_14036BAB6,
      0LL,
      0LL,
      (void **)&v19);
  }
  UserSessionSwitchLeaveCrit(v8);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v18);
  return 0LL;
}
