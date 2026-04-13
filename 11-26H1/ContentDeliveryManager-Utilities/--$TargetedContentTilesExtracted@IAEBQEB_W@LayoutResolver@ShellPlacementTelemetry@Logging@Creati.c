/*
 * XREFs of ??$TargetedContentTilesExtracted@IAEBQEB_W@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAX$$QEAIAEBQEB_W@Z @ 0x1800AD2A4
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800B0210 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@_W@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@_W@@@Z @ 0x180003CE0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@_W@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAPEBU_tlgProvider_t@@XZ @ 0x180056298 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::TargetedContentTilesExtracted<unsigned int,wchar_t const * const &>(
        __int64 a1,
        int *a2,
        __int64 a3)
{
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // r9
  int v7; // edx
  const GUID *v8; // r8
  const wchar_t *v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  v5 = CreativeFramework::Logging::ShellPlacementLogging::Provider(a1);
  if ( *(_DWORD *)v5 > 5u )
  {
    v7 = *a2;
    v10 = &Src;
    v8 = (const GUID *)(*(_QWORD *)(a1 + 272) + 8LL);
    LODWORD(v11) = v7;
    LODWORD(v5) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>>(
                    (__int64)v5,
                    byte_180168B39,
                    v8,
                    v6,
                    (__int64)&v11,
                    &v10);
  }
  return (int)v5;
}
