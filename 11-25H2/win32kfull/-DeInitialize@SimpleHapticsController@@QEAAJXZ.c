/*
 * XREFs of ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1402F0754
 * Callers:
 *     ??_GSimpleHapticsController@@QEAAPEAXI@Z @ 0x1402ECEFC (--_GSimpleHapticsController@@QEAAPEAXI@Z.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1402ED240 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402ED638 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140005D0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1402F0630 (-CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z.c)
 */

__int64 __fastcall SimpleHapticsController::DeInitialize(SimpleHapticsController *this)
{
  unsigned int v2; // eax
  __int64 v3; // r8
  __int64 v4; // r9
  void *v5; // rcx
  unsigned int v6; // edi
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  const char *v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = SimpleHapticsController::CloseHapticsWriteDevice(this, 1);
  v5 = (void *)*((_QWORD *)this + 10);
  v6 = v2;
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)this + 10) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 8);
  if ( v7 )
  {
    Win32FreePool(v7);
    *((_QWORD *)this + 8) = 0LL;
    *((_WORD *)this + 36) = 0;
  }
  v8 = (void *)*((_QWORD *)this + 2);
  if ( v8 )
  {
    Win32FreePool(v8);
    *((_QWORD *)this + 2) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 1);
  if ( v9 )
  {
    Win32FreePool(v9);
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( (unsigned int)dword_14039BC30 > 4 )
  {
    v11 = "SimpleHapticsController::DeInitialize";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BC30,
      (__int64)&unk_14036BB27,
      v3,
      v4,
      &v11);
  }
  return v6;
}
