/*
 * XREFs of ??$MakeAndInitialize@VSwitchItemThumbnailElement@@UIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Z @ 0x1804AD77C
 * Callers:
 *     ?RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z @ 0x1804AE5CC (-RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SwitchItemThumbnailElement@@QEAA@XZ @ 0x1804ADAEC (--0SwitchItemThumbnailElement@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SwitchItemThumbnailElement@@QEAAJAEBUThumbnailSizeMetrics@@PEAUISwitchThumbnailFactory@@PEAUISwitchItem@@@Z @ 0x1804C18E8 (-RuntimeClassInitialize@SwitchItemThumbnailElement@@QEAAJAEBUThumbnailSizeMetrics@@PEAUISwitchTh.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SwitchItemThumbnailElement,IMultitaskingViewElement,ThumbnailSizeMetrics const &,ISwitchThumbnailFactory * const &,ISwitchItem * const &>(
        _QWORD *a1,
        const struct ThumbnailSizeMetrics *a2,
        struct ISwitchThumbnailFactory **a3,
        struct ISwitchItem **a4)
{
  void *v8; // rax
  int v9; // edi
  SwitchItemThumbnailElement *v10; // rbx
  void *v12; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0x270uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v8;
  if ( v8 )
  {
    v10 = SwitchItemThumbnailElement::SwitchItemThumbnailElement((SwitchItemThumbnailElement *)v8);
    v12 = 0LL;
    v9 = SwitchItemThumbnailElement::RuntimeClassInitialize(v10, a2, *a3, *a4);
    if ( v9 >= 0 )
    {
      v9 = (**(__int64 (__fastcall ***)(SwitchItemThumbnailElement *, GUID *, _QWORD *))v10)(
             v10,
             &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
             a1);
      (*(void (__fastcall **)(SwitchItemThumbnailElement *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    else if ( v10 )
    {
      (*(void (__fastcall **)(SwitchItemThumbnailElement *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v12);
  return (unsigned int)v9;
}
