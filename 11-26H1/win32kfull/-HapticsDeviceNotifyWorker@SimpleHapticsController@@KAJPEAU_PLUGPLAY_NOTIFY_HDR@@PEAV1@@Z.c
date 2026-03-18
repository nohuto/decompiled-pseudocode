/*
 * XREFs of ?HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z @ 0x1402FFFBC
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f___ @ 0x1402FFBFC (W32AttachToProcessAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f___.c)
 *     W32AttachToSessionAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f___ @ 0x1402FFCB0 (W32AttachToSessionAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f___.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140003F20 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400F790C (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400F79BC (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1401E21C0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1402FFD78 (-CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z.c)
 *     ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x140300A60 (-OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ.c)
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
  void *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v19[272]; // [rsp+30h] [rbp-D0h] BYREF
  const char *v20; // [rsp+160h] [rbp+60h] BYREF
  const char *v21; // [rsp+168h] [rbp+68h] BYREF

  v4 = 0;
  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v19);
  EnterCrit(1LL, 0LL);
  v7 = InteractiveControlManager::Instance(v6, v5);
  if ( v7 && a2 )
  {
    v9 = (__int64 *)((char *)v7 + 40);
    v10 = v9 + 5;
    while ( 1 )
    {
      if ( v9 == v10 )
        goto LABEL_34;
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
      v16 = *(_QWORD *)((char *)a1 + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
      if ( !v16 )
        v16 = *(_QWORD *)((char *)a1 + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
      if ( v16 )
      {
        v17 = *(_QWORD *)((char *)a1 + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
        if ( !v17 )
          v17 = *(_QWORD *)((char *)a1 + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
        if ( v17 )
          goto LABEL_33;
        if ( (unsigned int)dword_1403AAAA0 > 4 )
        {
          v20 = "SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_REMOVE_COMPLETE";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (__int64)&dword_1403AAAA0,
            byte_14037A001,
            0LL,
            0LL,
            (void **)&v20);
        }
        v12 = SimpleHapticsController::CloseHapticsWriteDevice(a2, 1);
        v4 = v12;
        if ( v12 >= 0 || (unsigned int)dword_1403AAAA0 <= 2 )
          goto LABEL_33;
        v15 = &unk_14037A030;
      }
      else
      {
        if ( (unsigned int)dword_1403AAAA0 > 4 )
        {
          v20 = "SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_REMOVE_CANCELLED";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (__int64)&dword_1403AAAA0,
            byte_140379F9B,
            0LL,
            0LL,
            (void **)&v20);
        }
        v12 = SimpleHapticsController::OpenHapticsDevice(a2);
        v4 = v12;
        if ( v12 >= 0 || (unsigned int)dword_1403AAAA0 <= 2 )
          goto LABEL_33;
        v15 = &unk_140379FCA;
      }
    }
    else
    {
      if ( (unsigned int)dword_1403AAAA0 > 4 )
      {
        v20 = "SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_QUERY_REMOVE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (__int64)&dword_1403AAAA0,
          byte_14037A0D8,
          0LL,
          0LL,
          (void **)&v20);
      }
      v12 = SimpleHapticsController::CloseHapticsWriteDevice(a2, 0);
      v4 = v12;
      if ( v12 >= 0 || (unsigned int)dword_1403AAAA0 <= 2 )
        goto LABEL_33;
      v15 = &unk_14037A107;
    }
    LODWORD(v20) = v12;
    v21 = "Function failed.";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1403AAAA0,
      (__int64)v15,
      v13,
      v14,
      (void **)&v21,
      (__int64)&v20);
LABEL_33:
    UserSessionSwitchLeaveCrit(v8);
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v19);
    return v4;
  }
LABEL_34:
  if ( (unsigned int)dword_1403AAAA0 > 4 )
  {
    v20 = "SimpleHapticsController::HapticsDeviceNotify device no longer valid";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (__int64)&dword_1403AAAA0,
      byte_14037A0A9,
      0LL,
      0LL,
      (void **)&v20);
  }
  UserSessionSwitchLeaveCrit(v8);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v19);
  return 0LL;
}
