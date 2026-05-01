/*
 * XREFs of ??$?4AEBUSize@Foundation@Windows@winrt@@$0A@@?$optional@USize@Foundation@Windows@winrt@@@std@@QEAAAEAV01@AEBUSize@Foundation@Windows@winrt@@@Z @ 0x18035A46C
 * Callers:
 *     ?SetMaximumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBUSize@Foundation@56@@Z @ 0x18035C410 (-SetMaximumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AE.c)
 *     ?SetMinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBUSize@Foundation@56@@Z @ 0x18035C548 (-SetMinimumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::optional<winrt::Windows::Foundation::Size>::operator=<winrt::Windows::Foundation::Size const &,0>(
        __int64 a1,
        int *a2)
{
  int v2; // xmm0_4
  int v3; // xmm1_4
  __int64 result; // rax

  v2 = *a2;
  v3 = a2[1];
  if ( !*(_BYTE *)(a1 + 8) )
    *(_BYTE *)(a1 + 8) = 1;
  *(_DWORD *)a1 = v2;
  result = a1;
  *(_DWORD *)(a1 + 4) = v3;
  return result;
}
