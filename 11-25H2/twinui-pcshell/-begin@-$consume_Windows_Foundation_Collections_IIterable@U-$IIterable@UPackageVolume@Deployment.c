/*
 * XREFs of ?begin@?$consume_Windows_Foundation_Collections_IIterable@U?$IIterable@UPackageVolume@Deployment@Management@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackageVolume@Deployment@Management@45@@impl@winrt@@QEBA@XZ @ 0x1805B76A4
 * Callers:
 *     LockScreenWidgetPackageHelperBase::GetVolumeToInstallPackageAsync$_ResumeCoro$1 @ 0x1805AEE70 (LockScreenWidgetPackageHelperBase--GetVolumeToInstallPackageAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$get_begin_iterator@U?$IIterable@UPackageVolume@Deployment@Management@Windows@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA?AU?$IIterator@UPackageVolume@Deployment@Management@Windows@winrt@@@Collections@Foundation@Windows@1@AEBU?$IIterable@UPackageVolume@Deployment@Management@Windows@winrt@@@3451@@Z @ 0x1805A1804 (--$get_begin_iterator@U-$IIterable@UPackageVolume@Deployment@Management@Windows@winrt@@@Collecti.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Management::Deployment::PackageVolume>,winrt::Windows::Management::Deployment::PackageVolume>::begin(
        __int64 *a1,
        _QWORD *a2)
{
  winrt::impl::get_begin_iterator<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Management::Deployment::PackageVolume>,0>(
    a2,
    a1);
  return a2;
}
