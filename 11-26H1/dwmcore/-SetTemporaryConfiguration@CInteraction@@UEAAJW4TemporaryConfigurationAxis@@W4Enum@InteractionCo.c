/*
 * XREFs of ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1800E6080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1800E4F30 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1800E5E6C (-NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConf.c)
 *     ?WakeMTForMidmanipulationUpdateIfNecessary@CManipulationManager@@QEAAXXZ @ 0x1800E5F9C (-WakeMTForMidmanipulationUpdateIfNecessary@CManipulationManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteraction::SetTemporaryConfiguration(__int64 a1, int a2, int a3, unsigned __int8 a4, int a5)
{
  __int64 v5; // r14
  int v6; // r15d
  __int64 v7; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // ebx
  int updated; // eax
  CManipulationManager *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // esi
  int v20; // [rsp+50h] [rbp-20h] BYREF
  int v21; // [rsp+54h] [rbp-1Ch] BYREF
  int v22; // [rsp+58h] [rbp-18h] BYREF
  __int64 v23; // [rsp+60h] [rbp-10h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+30h] BYREF

  v5 = a1 - 72;
  v6 = a4;
  v7 = *(_QWORD *)(a1 - 72 + 24);
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  v10 = *(_QWORD *)(v7 + 640);
  if ( v10 && ((*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10), (v12 = *(_QWORD *)(v7 + 640)) != 0) )
  {
    v13 = a5;
    updated = CManipulationManager::NotifyUpdateTemporaryConfiguration(v11, v5, a2, a3, v6, a5);
    v18 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x2C1u, 0LL);
    }
    else
    {
      if ( (unsigned int)dword_1803DC880 > 4 && (qword_1803DC890 & 2) != 0 )
      {
        v15 = (CManipulationManager *)(qword_1803DC898 & 2);
        if ( v15 == (CManipulationManager *)qword_1803DC898 )
        {
          LODWORD(v24) = v13;
          v20 = v6;
          v21 = a3;
          v22 = a2;
          v23 = v5;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)v15,
            byte_1803B2EEC,
            v16,
            v17,
            (__int64)&v23,
            (__int64)&v22,
            (__int64)&v21,
            (__int64)&v20,
            (__int64)&v24);
        }
      }
      CManipulationManager::WakeMTForMidmanipulationUpdateIfNecessary(v15);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    v18 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x2BAu, 0LL);
  }
  return v18;
}
