/*
 * XREFs of ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18013A340
 * Callers:
 *     ?RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180028850 (-RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800295CC (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 *     ?SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z @ 0x180139BB0 (-SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z.c)
 *     ?Create@JsonGameMruManager@@SA?AV?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@E@Z @ 0x180139E90 (-Create@JsonGameMruManager@@SA-AV-$unique_ptr@VJsonGameMruManager@@U-$default_delete@VJsonGameMr.c)
 *     ?DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18013AFC8 (-DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___ @ 0x1802655E0 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Storag.c)
 *     ??0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180280140 (--0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?GetJsonStorageFile@JsonGameMruManager@@AEBA?AUStorageFile@Storage@Windows@winrt@@XZ @ 0x180299DD0 (-GetJsonStorageFile@JsonGameMruManager@@AEBA-AUStorageFile@Storage@Windows@winrt@@XZ.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x18033080C (-await_resume@-$await_adapter@U-$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Found.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x180330894 (-await_resume@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@$00@impl@winrt@@QE.c)
 *     ?await_resume@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x1803308DC (-await_resume@-$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x180339EFC (-await_resume@-$await_adapter@U-$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsU.c)
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_ @ 0x1803403F0 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncAction_winrt--Windows--Foundatio.c)
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_ @ 0x180340680 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncAction_winrt--Windo_ea_180340680.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x18053B130 (-await_resume@-$await_adapter@U-$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt.c)
 *     ?perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18057FCA0 (-perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAX.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x18058336C (-await_resume@-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Sto.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x1805C291C (-await_resume@-$await_adapter@U-$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Win.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805D6690 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasDelayedInitial.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805D8C60 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x1805DAEF0 (-await_resume@-$await_adapter@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Manage.c)
 *     ?get@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@34@@impl@winrt@@QEBA@XZ @ 0x1805DC3A4 (-get@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UAppInstallItem@InstallCont.c)
 *     _anonymous_namespace_::TryLoadLogoImageStream @ 0x1805EBEC8 (_anonymous_namespace_--TryLoadLogoImageStream.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x1805EC9E4 (-await_resume@-$await_adapter@U-$IAsyncOperation@U-$IReference@_N@Foundation@Windows@winrt@@@Fou.c)
 *     _anonymous_namespace_::GetWicBitmapFromStreamReference @ 0x1805EFE88 (_anonymous_namespace_--GetWicBitmapFromStreamReference.c)
 *     ?get@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@U?$IVectorView@UAppInfo@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@U?$IVectorView@UAppInfo@ApplicationModel@Windows@winrt@@@Collections@234@@impl@winrt@@QEBA@XZ @ 0x180642E74 (-get@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@U-$IVectorView@UAppInfo@App.c)
 *     ?unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180643930 (-unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPE.c)
 *     ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x18064F3BC (-ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA-AUIBuffer@Streams@Storage@Windows@winr.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x1806533B4 (-await_resume@-$await_adapter@U-$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@$00@im.c)
 *     _lambda_77e78c927b00fdc94620a558442d73ef_::operator()_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs_ @ 0x180655F14 (_lambda_77e78c927b00fdc94620a558442d73ef_--operator()_winrt--Windows--Internal--Shell--RemoteSys.c)
 *     _lambda_57788f35bdd9b54a58cb4d12640be97c_::operator() @ 0x1806597D0 (_lambda_57788f35bdd9b54a58cb4d12640be97c_--operator().c)
 *     ?HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x180668F70 (-HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt.c)
 *     ?HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x18066BAF0 (-HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@win.c)
 *     _lambda_5dd99ac34d6bd03dd8b88786cad3764c_::operator() @ 0x180670CA4 (_lambda_5dd99ac34d6bd03dd8b88786cad3764c_--operator().c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1803179A0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 */

void __fastcall winrt::impl::check_status_canceled(winrt::impl *this, __int64 a2)
{
  const struct winrt::impl::slim_source_location *v2; // rax
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( (_DWORD)this == 2 )
  {
    v2 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(v4, a2);
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v2);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
}
