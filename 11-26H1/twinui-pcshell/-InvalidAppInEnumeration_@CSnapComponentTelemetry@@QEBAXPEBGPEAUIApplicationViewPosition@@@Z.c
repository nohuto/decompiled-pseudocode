/*
 * XREFs of ?InvalidAppInEnumeration_@CSnapComponentTelemetry@@QEBAXPEBGPEAUIApplicationViewPosition@@@Z @ 0x1805A4FC0
 * Callers:
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18006E57C (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV-$deque@UtagRE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x18000F0A4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@-$_tlgW.c)
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x18005B8F0 (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18006F3C0 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSnapComponentTelemetry::InvalidAppInEnumeration_(
        CSnapComponentTelemetry *this,
        enum _TABLETMODESTATE *a2,
        struct IApplicationViewPosition *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD v11[6]; // [rsp+60h] [rbp+17h] BYREF
  const unsigned __int16 *v12; // [rsp+78h] [rbp+2Fh] BYREF
  __int64 v13; // [rsp+80h] [rbp+37h] BYREF
  unsigned __int16 *v14[2]; // [rsp+88h] [rbp+3Fh] BYREF

  v11[0] = 0;
  TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)v11, a2);
  v5 = *(_QWORD *)a3;
  *(_OWORD *)v14 = 0LL;
  (*(void (__fastcall **)(struct IApplicationViewPosition *, unsigned __int16 **))(v5 + 24))(a3, v14);
  v7 = WindowManagementLogging::Provider(v6);
  v8 = (__int64)v7;
  if ( *(_DWORD *)v7 > 5u )
  {
    if ( tlgKeywordOn((__int64)v7, 0x400000000000LL) )
    {
      v11[3] = v14[1];
      v11[4] = HIDWORD(v14[0]);
      v11[1] = v11[0];
      v11[5] = v14[0];
      v11[2] = HIDWORD(v14[1]);
      v12 = SQM::CensorAppID((LPCWSTR)a2, (const unsigned __int16 *)HIDWORD(v14[1]));
      v13 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v8,
        (__int64)&unk_18082355C,
        v9,
        v10,
        (__int64)&v13,
        &v12);
    }
  }
}
