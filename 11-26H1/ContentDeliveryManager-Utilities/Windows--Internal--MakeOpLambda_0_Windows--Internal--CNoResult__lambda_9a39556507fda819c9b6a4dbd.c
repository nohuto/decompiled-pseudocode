/*
 * XREFs of Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_9a39556507fda819c9b6a4dbd5757ff2___ @ 0x180047FC4
 * Callers:
 *     ?EnableLockScreenRotationAsync@ContentManagementService@ContentManagement@@UEAAJEPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18004F4F0 (-EnableLockScreenRotationAsync@ContentManagementService@ContentManagement@@UEAAJEPEAPEAUIAsyncAc.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800219B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180021C08 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??0?$ComPtr@VContentManagementService@ContentManagement@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x18004AED4 (--0-$ComPtr@VContentManagementService@ContentManagement@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

char *__fastcall Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_9a39556507fda819c9b6a4dbd5757ff2___(
        __int64 a1)
{
  char *v2; // rbx

  v2 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return 0LL;
  *(_QWORD *)v2 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  Microsoft::WRL::ComPtr<ContentManagement::ContentManagementService>::ComPtr<ContentManagement::ContentManagementService>(
    v2 + 8,
    a1);
  v2[16] = *(_BYTE *)(a1 + 8);
  *(_QWORD *)v2 = off_1800C77C0;
  *((_DWORD *)v2 + 6) = 0;
  `eh vector constructor iterator'(
    v2 + 32,
    8uLL,
    1,
    (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  *((_DWORD *)v2 + 6) = 0;
  return v2;
}
