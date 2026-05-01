/*
 * XREFs of ?RaiseCPCProviderAppClosedTelemetryEvent@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DisconnectSource@23456@AEBUhstring@6@1_N@Z @ 0x18066E58C
 * Callers:
 *     _lambda_67f0fced1d981ef80ea3a06f45134b83_::operator() @ 0x18066CB60 (_lambda_67f0fced1d981ef80ea3a06f45134b83_--operator().c)
 *     _lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::operator() @ 0x18066CC74 (_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x18066CF40 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseCloudPCConnection.c)
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ @ 0x18064C3D0 (-GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ.c)
 *     ??$CPCProviderAppClose@IHPEBGPEBGAEA_NAEAW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI$$QEAH$$QEAPEBG2AEA_NAEAW4SourceOfDisconnect@0@@Z @ 0x18066C048 (--$CPCProviderAppClose@IHPEBGPEBGAEA_NAEAW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTele.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::RaiseCPCProviderAppClosedTelemetryEvent(
        __int64 a1,
        int a2,
        __int64 a3,
        winrt::hstring *a4,
        BOOL a5)
{
  winrt::hstring *v5; // r8
  const unsigned __int16 *v7; // [rsp+38h] [rbp-18h] BYREF
  const unsigned __int16 *v8; // [rsp+40h] [rbp-10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+10h] BYREF
  int v10; // [rsp+68h] [rbp+18h] BYREF

  v9 = a1;
  a5 = a2 == 1;
  v7 = winrt::hstring::c_str(a4);
  v8 = winrt::hstring::c_str(v5);
  v10 = 0;
  LODWORD(v9) = winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode();
  return CloudPCTelemetryCore::CPCProviderAppClose<unsigned int,int,unsigned short const *,unsigned short const *,bool &,enum CloudPCTelemetryCore::SourceOfDisconnect &>(
           (int *)&v9,
           &v10,
           (__int64 *)&v8,
           (__int64 *)&v7);
}
