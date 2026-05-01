/*
 * XREFs of ?CreateData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@3456@AEBU7RemoteSystemData@@@Z @ 0x1806251AC
 * Callers:
 *     ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x18062CB54 (-UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@W.c)
 * Callees:
 *     ??$make@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@W4CloudPCState@3456@AEAV?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@winrt@@YA?A_PAEBUhstring@0@$$QEAW4CloudPCState@Shell@Internal@Windows@0@AEAV?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@Z @ 0x180620E7C (--$make@URemoteSystem@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@W4CloudPCState@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Frontline@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18062AC70 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Frontline@@@details@wil@@QEAAX.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::CreateData(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *v4; // rdi
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v7 = a1;
  v4 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Frontline>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Frontline>::GetImpl'::`2'::impl,
    a2);
  v5 = *(unsigned __int16 *)(a3 + 24);
  if ( v5 == 0xFFFF )
    v5 = 2;
  LODWORD(v7) = v5;
  v8 = *(_DWORD *)(a3 + 8);
  winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystem,winrt::hstring const &,enum winrt::Windows::Internal::Shell::CloudPCState,std::chrono::duration<int,std::ratio<60,1>> &>(
    v4,
    a3,
    (__int64)&v8,
    (int *)&v7);
  return v4;
}
