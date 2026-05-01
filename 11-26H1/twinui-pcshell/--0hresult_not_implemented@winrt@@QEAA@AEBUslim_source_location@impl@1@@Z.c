/*
 * XREFs of ??0hresult_not_implemented@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180335304
 * Callers:
 *     ?ActivateInstance@?$DesktopSnapLayoutManagerT@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@U1implementation@34567@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEBA?AUIInspectable@Foundation@67@XZ @ 0x18033552C (-ActivateInstance@-$DesktopSnapLayoutManagerT@UDesktopSnapLayoutManager@factory_implementation@S.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1803179C8 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 */

winrt::hresult_not_implemented *__fastcall winrt::hresult_not_implemented::hresult_not_implemented(
        winrt::hresult_not_implemented *this,
        const struct winrt::impl::slim_source_location *a2)
{
  winrt::hresult_error::hresult_error((__int64)this, winrt::impl::error_not_implemented, (unsigned int *)a2);
  return this;
}
