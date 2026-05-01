/*
 * XREFs of ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x180142568
 * Callers:
 *     ?ParseArgs@UndockedSearchAppExperienceManager@@AEAA?AUWwwFormUrlDecoder@Foundation@Windows@winrt@@AEBUhstring@5@@Z @ 0x180142454 (-ParseArgs@UndockedSearchAppExperienceManager@@AEAA-AUWwwFormUrlDecoder@Foundation@Windows@winrt.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x18023B458 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z @ 0x18028FEA0 (-SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z.c)
 *     ?CreateTriggerForFlickScaleAnimtion@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@0M@Z @ 0x1804A5628 (-CreateTriggerForFlickScaleAnimtion@CAppThumbnailWindow@@AEAA-AUCompositionAnimationTriggerValue.c)
 *     ?CreateTriggerToCacheScalar@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@0@Z @ 0x1804A5AF0 (-CreateTriggerToCacheScalar@CAppThumbnailWindow@@AEAA-AUCompositionAnimationTriggerValuePartner@.c)
 *     ?SetupDragScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z @ 0x1804A78F4 (-SetupDragScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z.c)
 *     ?TryOpenFileMappingHandleForWindow@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@_JAEBUhstring@winrt@@@Z @ 0x180651EB0 (-TryOpenFileMappingHandleForWindow@Util@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_re.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800306AC (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     memcpy_s_2 @ 0x1801426C8 (memcpy_s_2.c)
 */

volatile signed __int32 *__fastcall winrt::operator+(volatile signed __int32 *a1, const void *a2, __int64 *a3)
{
  __int64 v4; // rax
  const WCHAR *v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rbx
  winrt::impl *v9; // rcx
  rsize_t v10; // rbx
  struct winrt::impl::shared_hstring_header *v11; // rdi
  volatile signed __int32 *v13; // [rsp+20h] [rbp-28h] BYREF

  v13 = a1;
  v4 = *a3;
  if ( *a3 )
  {
    v6 = *(const WCHAR **)(v4 + 16);
    v7 = *(unsigned int *)(v4 + 4);
  }
  else
  {
    v6 = &pvData;
    v7 = 0LL;
  }
  v8 = std::_WChar_traits<wchar_t>::length((__int64)a2);
  v9 = (winrt::impl *)(unsigned int)(v8 + v7);
  if ( (_DWORD)v9 )
  {
    v10 = 2 * v8;
    v11 = winrt::impl::precreate_hstring_on_heap(v9);
    memcpy_s_2(*((void *const *)v11 + 2), v10, a2, v10);
    memcpy_s_2((void *const)(v10 + *((_QWORD *)v11 + 2)), 2 * v7, v6, 2 * v7);
    v13 = 0LL;
    *(_QWORD *)a1 = v11;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
  }
  return a1;
}
