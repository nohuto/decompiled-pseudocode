/*
 * XREFs of ?decrement_strong@?$weak_ref@$0A@$00@impl@winrt@@QEAAIXZ @ 0x1802C3090
 * Callers:
 *     ?subtract_final_reference@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@IEAAIXZ @ 0x1800E7220 (-subtract_final_reference@-$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExpl.c)
 *     ?subtract_final_reference@?$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@impl@winrt@@IEAAIXZ @ 0x18044FC80 (-subtract_final_reference@-$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@.c)
 * Callees:
 *     ?Release@?$weak_ref@$0A@$00@impl@winrt@@UEAAIXZ @ 0x18044CDB0 (-Release@-$weak_ref@$0A@$00@impl@winrt@@UEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::weak_ref<0,1>::decrement_strong(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 6);
  if ( !v1 )
    winrt::impl::weak_ref<0,1>::Release((void *)a1);
  return v1;
}
