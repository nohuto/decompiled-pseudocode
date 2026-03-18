/*
 * XREFs of ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1402E0D98
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140005D0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1402E0C6C (-SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?WriteSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1402ECCA0 (-WriteSettings@InteractiveControlSettings@@QEAAJXZ.c)
 */

__int64 __fastcall InteractiveControlManager::SetExternalParameters(
        InteractiveControlManager *this,
        struct tagINTERACTIVECTRL_PARAMETERS *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // edi
  int v7; // ebx
  int v8; // eax
  const char *v10; // [rsp+68h] [rbp+38h] BYREF

  v4 = a3;
  if ( (unsigned int)dword_14039BBF8 > 4 )
  {
    v10 = "InteractiveControlManager::SetExternalParameters entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BBF8,
      (__int64)&unk_14036B10F,
      a3,
      a4,
      &v10);
  }
  if ( a2 )
  {
    v8 = *(_DWORD *)a2;
    *((_DWORD *)this + 25) = *(_DWORD *)a2;
    v7 = InteractiveControlManager::SetDeviceHapticsMode((__int64)this, (__int64)a2, v8 == 0, a4);
    if ( v7 < 0 && (unsigned int)dword_14039BBF8 > 2 )
    {
      v10 = "Function failed.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_14039BBF8,
        (__int64)&unk_14036B06D,
        a3,
        a4,
        &v10);
    }
    if ( v4 )
    {
      v7 = InteractiveControlSettings::WriteSettings((InteractiveControlManager *)((char *)this + 84));
      if ( v7 < 0 && (unsigned int)dword_14039BBF8 > 2 )
      {
        v10 = "Function failed.";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)&dword_14039BBF8,
          (__int64)&unk_14036B06D,
          a3,
          a4,
          &v10);
      }
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( (unsigned int)dword_14039BBF8 > 4 )
  {
    v10 = "InteractiveControlManager::SetExternalParameters exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14039BBF8,
      (__int64)&unk_14036B034,
      a3,
      a4,
      &v10);
  }
  return (unsigned int)v7;
}
