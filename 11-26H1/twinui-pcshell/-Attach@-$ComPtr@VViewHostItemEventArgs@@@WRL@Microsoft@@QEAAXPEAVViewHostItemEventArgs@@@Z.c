/*
 * XREFs of ?Attach@?$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@QEAAXPEAVViewHostItemEventArgs@@@Z @ 0x180402580
 * Callers:
 *     ??$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAVViewHostItemEventArgs@@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$QEAPEAUIPropertySet@Collections@Foundation@8@@Z @ 0x180400584 (--$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holographic@Shell@Int.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIApplicationViewChangeListener@@UIAppViewListener@56789@UIWindowSnappingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803FC3B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ViewHostItemEventArgs>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,IWindowSnappingEvents,Microsoft::WRL::FtmBase>::Release(v4);
  *a1 = a2;
  return result;
}
