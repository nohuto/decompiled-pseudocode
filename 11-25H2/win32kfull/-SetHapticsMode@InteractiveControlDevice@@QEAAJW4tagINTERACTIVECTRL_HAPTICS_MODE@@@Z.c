/*
 * XREFs of ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1402EDF04
 * Callers:
 *     ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1402E0C6C (-SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140005D0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z @ 0x1402F1970 (-SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z.c)
 */

__int64 __fastcall InteractiveControlDevice::SetHapticsMode(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // esi
  unsigned __int16 v5; // bp
  __int64 v6; // rdx
  __int64 v7; // rcx
  SimpleHapticsController *v8; // rcx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  const char *v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+58h] [rbp+10h]

  v2 = 0;
  v3 = a2;
  v5 = 2;
  if ( !(_DWORD)a2
    && !*(_DWORD *)(a1 + 64)
    && !*((_DWORD *)InteractiveControlManager::Instance(a1, a2) + 21)
    && *((_DWORD *)InteractiveControlManager::Instance(v7, v6) + 25) )
  {
    v5 = 3;
  }
  v8 = *(SimpleHapticsController **)(a1 + 384);
  if ( v8 )
  {
    v9 = SimpleHapticsController::SetAutoTriggerWaveform(v8, v5);
    v2 = v9;
    if ( v9 >= 0 )
    {
      *(_DWORD *)(a1 + 60) = v3;
    }
    else if ( (unsigned int)dword_14039BBF8 > 2 )
    {
      v14 = v9;
      v13 = "Function failed.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_14039BBF8,
        (__int64)&unk_14036B06D,
        v10,
        v11,
        &v13);
    }
  }
  return v2;
}
