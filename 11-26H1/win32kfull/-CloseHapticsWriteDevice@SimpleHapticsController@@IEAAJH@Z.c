/*
 * XREFs of ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1402FFD78
 * Callers:
 *     ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1402FFEA0 (-DeInitialize@SimpleHapticsController@@QEAAJXZ.c)
 *     ?HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z @ 0x1402FFFBC (-HapticsDeviceNotifyWorker@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAV1@@Z.c)
 *     ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x140300A60 (-OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140003F20 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

__int64 __fastcall SimpleHapticsController::CloseHapticsWriteDevice(SimpleHapticsController *this, int a2)
{
  unsigned int v2; // edi
  void *v4; // rcx
  void *v5; // rcx
  NTSTATUS v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  NTSTATUS v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  const char *v15; // [rsp+50h] [rbp+8h] BYREF
  NTSTATUS v16; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
  {
    v4 = (void *)*((_QWORD *)this + 4);
    if ( v4 )
    {
      IoUnregisterPlugPlayNotification(v4);
      *((_QWORD *)this + 4) = 0LL;
    }
  }
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v5 )
  {
    IoStatusBlock = 0LL;
    v6 = ZwCancelIoFile(v5, &IoStatusBlock);
    if ( v6 < 0 && (unsigned int)dword_1403AAAA0 > 2 )
    {
      v16 = v6;
      v15 = "Function failed.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1403AAAA0,
        (__int64)&unk_14037A175,
        v7,
        v8,
        (void **)&v15,
        (__int64)&v16);
    }
    v9 = ZwClose(*((HANDLE *)this + 3));
    v2 = v9;
    if ( v9 < 0 && (unsigned int)dword_1403AAAA0 > 2 )
    {
      v16 = v9;
      v15 = "Function failed.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1403AAAA0,
        (__int64)&unk_14037A1AC,
        v10,
        v11,
        (void **)&v15,
        (__int64)&v16);
    }
    *((_QWORD *)this + 3) = 0LL;
  }
  v12 = (void *)*((_QWORD *)this + 7);
  if ( v12 )
  {
    ObfDereferenceObject(v12);
    *((_QWORD *)this + 7) = 0LL;
  }
  return v2;
}
