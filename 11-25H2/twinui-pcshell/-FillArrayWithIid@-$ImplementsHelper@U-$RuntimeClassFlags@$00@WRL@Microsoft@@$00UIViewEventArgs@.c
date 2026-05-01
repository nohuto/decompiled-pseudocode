/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18040D910
 * Callers:
 *     ?FillArrayWithIid@?$Implements@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18040D8E0 (-FillArrayWithIid@-$Implements@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIViewEventArgs@ViewManag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Microsoft::WRL::FtmBase>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_96c11dea_68de_44ef_a7f7_3aa869663d57;
  result = (unsigned int)(v3 + 1);
  *a2 = result;
  return result;
}
