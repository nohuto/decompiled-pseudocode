/*
 * XREFs of ?FallBackToBDD@@YA_NXZ @ 0x180008B84
 * Callers:
 *     ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x18000BEAC (-ShouldRestartSession@@YA_NU_FILETIME@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@54@Z @ 0x18000114C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U2@@-$_.c)
 *     _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues @ 0x18000B7D0 (_unnamed_type_gDwmInitTelemetryAggregator_--ReportAggregatedValues.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x18000C490 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool FallBackToBDD(void)
{
  int v0; // ebx
  HMODULE LibraryW; // rax
  HMODULE v2; // rdi
  FARPROC ProcAddress; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v10[5]; // [rsp+58h] [rbp-28h] BYREF
  int v11; // [rsp+A0h] [rbp+20h] BYREF
  int v12; // [rsp+A8h] [rbp+28h] BYREF
  GUID *v13; // [rsp+B0h] [rbp+30h] BYREF
  GUID *v14; // [rsp+B8h] [rbp+38h] BYREF

  v0 = -1073741823;
  LibraryW = LoadLibraryW(L"gdi32.dll");
  v2 = LibraryW;
  if ( LibraryW )
  {
    ProcAddress = GetProcAddress(LibraryW, "D3DKMTEscape");
    if ( ProcAddress )
    {
      v10[1] = 1029LL;
      v10[3] = 0LL;
      v10[0] = 0LL;
      v10[2] = 0LL;
      v0 = ((__int64 (__fastcall *)(_QWORD *))ProcAddress)(v10);
      if ( v0 >= 0 )
      {
        LODWORD(qword_18001ADF4) = qword_18001ADF4 + 1;
        v6 = (unsigned int)(HIDWORD(qword_18001ADFC) + 1);
        HIDWORD(qword_18001ADFC) = v6;
        if ( (int)v6 > 10 )
        {
          unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues();
          HIDWORD(qword_18001ADFC) = 0;
        }
        if ( (unsigned int)dword_18001A000 > 5
          && (qword_18001A010 & 0x400000000000LL) != 0
          && (qword_18001A018 & 0x400000000000LL) == qword_18001A018 )
        {
          v12 = v0;
          v13 = &gDwmInitTargetAppSessionGuid;
          v11 = gDwmNumRetriesSoFar;
          v14 = &gDwmInitTelemetryActivityId;
          v9 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v6,
            (__int64)&unk_18001595C,
            v4,
            v5,
            (__int64)&v9,
            (__int64 *)&v14,
            (__int64)&v12,
            (__int64)&v11,
            (__int64 *)&v13);
        }
        v7 = (unsigned int)v0;
        LODWORD(v7) = v0 | 0x10000000;
        TraceLoggingWriteEtw(1LL, v7, (unsigned int)gDwmNumRetriesSoFar);
      }
    }
    FreeLibrary(v2);
  }
  return v0 >= 0;
}
