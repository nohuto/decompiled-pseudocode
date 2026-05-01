/*
 * XREFs of wil::details::ScopeExitFn__lambda_2459da577323dd94bc9459a794b2d076___::_ScopeExitFn__lambda_2459da577323dd94bc9459a794b2d076___ @ 0x1802CCCD4
 * Callers:
 *     _VirtualDesktopDataSource::Initialize_::_1_::dtor$1 @ 0x1806C7785 (_VirtualDesktopDataSource--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     ?UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ @ 0x1804801A4 (-UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::ScopeExitFn__lambda_2459da577323dd94bc9459a794b2d076___::_ScopeExitFn__lambda_2459da577323dd94bc9459a794b2d076___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    VirtualDesktopDataSource::UninitializeInternal(*(VirtualDesktopDataSource **)a1);
  }
}
