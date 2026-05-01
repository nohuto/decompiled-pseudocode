/*
 * XREFs of ??$ExperienceManager_UpdateWindowPosition_Params@AEAHAEAH@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXAEAH0@Z @ 0x18038F998
 * Callers:
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180395120 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180097A14 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?Provider@QuickConnectLoggingProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180392EA4 (-Provider@QuickConnectLoggingProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::ExperienceManager_UpdateWindowPosition_Params<int &,int &>(
        __int64 a1,
        int *a2,
        int *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+58h] [rbp+20h] BYREF

  v6 = QuickConnectLoggingProvider::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v6, 0x200000000000LL);
    if ( (_BYTE)v6 )
    {
      v8 = *(_QWORD *)(a1 + 272);
      v10 = *a3;
      v11 = *a2;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     v7,
                     byte_1807F693E,
                     (const GUID *)(v8 + 8),
                     v7,
                     (__int64)&v11,
                     (__int64)&v10);
    }
  }
  return (char)v6;
}
