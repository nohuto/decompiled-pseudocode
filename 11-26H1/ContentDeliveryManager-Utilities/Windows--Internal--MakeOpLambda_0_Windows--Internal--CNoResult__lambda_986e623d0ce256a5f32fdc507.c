/*
 * XREFs of Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_986e623d0ce256a5f32fdc507965e6c2___ @ 0x180047F14
 * Callers:
 *     ?ResolveLayoutBindingsAsync@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x1800578C0 (-ResolveLayoutBindingsAsync@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAP.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800219B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180021C08 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??0?$ComPtr@VContentManagementService@ContentManagement@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x18004AED4 (--0-$ComPtr@VContentManagementService@ContentManagement@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

// Hidden C++ exception states: #wind=3
_DWORD *__fastcall Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_986e623d0ce256a5f32fdc507965e6c2___(
        __int64 a1)
{
  _DWORD *v2; // rbx
  __int64 v3; // rcx

  v2 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return 0LL;
  *(_QWORD *)v2 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  Microsoft::WRL::ComPtr<ContentManagement::ContentManagementService>::ComPtr<ContentManagement::ContentManagementService>(
    v2 + 2,
    a1);
  *(_QWORD *)(v3 + 8) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(v3 + 16) = 0;
  *(_BYTE *)(a1 + 16) = 1;
  *(_QWORD *)v2 = off_1800C6FA0;
  v2[8] = 0;
  `eh vector constructor iterator'(
    v2 + 10,
    8uLL,
    1,
    (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  v2[8] = 0;
  return v2;
}
