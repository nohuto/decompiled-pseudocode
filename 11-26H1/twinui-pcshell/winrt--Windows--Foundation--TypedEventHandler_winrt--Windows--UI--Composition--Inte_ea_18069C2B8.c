/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs_::TypedEventHandler_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs___lambda_00799cc444f9312ab8cc556666836ecb___ @ 0x18069C2B8
 * Callers:
 *     ?SetupTaskbarOffsetTrigger@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXAEBUGestureAnimationData@Input@UI@WindowsUdk@7@W4ShellView@4UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x18069D704 (-SetupTaskbarOffsetTrigger@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Inte.c)
 * Callees:
 *     _lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_ @ 0x1800B7AEC (_lambda_00799cc444f9312ab8cc556666836ecb_--__lambda_00799cc444f9312ab8cc556666836ecb_.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x18028AE60 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs_::TypedEventHandler_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs___lambda_00799cc444f9312ab8cc556666836ecb___(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  char *v7; // [rsp+30h] [rbp+8h]

  v7 = (char *)operator new(0x40uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 8));
  v4 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(v5 + 16) = v4;
  *(_QWORD *)(v5 + 24) = *(_QWORD *)(a2 + 8);
  *(_OWORD *)(v5 + 32) = *(_OWORD *)(a2 + 16);
  *(_DWORD *)(v5 + 48) = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(v5 + 52) = *(_QWORD *)(a2 + 36);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v5 = off_18075F9D0;
  *a1 = v5;
  lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_((__int64 *)a2);
  return a1;
}
