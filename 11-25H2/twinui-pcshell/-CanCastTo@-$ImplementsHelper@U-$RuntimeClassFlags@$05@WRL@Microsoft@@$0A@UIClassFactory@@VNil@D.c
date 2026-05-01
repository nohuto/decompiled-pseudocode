/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$05@WRL@Microsoft@@$0A@UIClassFactory@@VNil@Details@23@V5623@V5623@V5623@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801C8F40
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$05@WRL@Microsoft@@$0A@$0A@$0A@UIClassFactory@@VNil@Details@23@V5623@V5623@V5623@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802DD8E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$05@WRL@Microsoft@@$0A@$0A@$0A@UIClassFa.c)
 *     ??$CreateClassFactory@VXamlLauncherFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1804493B0 (--$CreateClassFactory@VXamlLauncherFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<6>,0,IClassFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != 1
    || a2[1] != *(_DWORD *)&GUID_00000001_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000001_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000001_0000_0000_c000_000000000046.Data4[4] )
  {
    return 2147500034LL;
  }
  *a3 = a1;
  return 0LL;
}
