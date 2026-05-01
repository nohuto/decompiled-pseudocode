/*
 * XREFs of ??1?$CWeakRefSource@VCSwitchItemElement@@@WeakReference@@QEAA@XZ @ 0x1802C76F4
 * Callers:
 *     ??1MultitaskingViewGestureHandler@@UEAA@XZ @ 0x180090AF8 (--1MultitaskingViewGestureHandler@@UEAA@XZ.c)
 *     ??1CAltTabViewHost@@UEAA@XZ @ 0x1804AD1B4 (--1CAltTabViewHost@@UEAA@XZ.c)
 *     ??1CPPIAllUpViewHost@@UEAA@XZ @ 0x1804AF56C (--1CPPIAllUpViewHost@@UEAA@XZ.c)
 *     ??1SwitchItemFilteredCollection@@UEAA@XZ @ 0x1804B3180 (--1SwitchItemFilteredCollection@@UEAA@XZ.c)
 *     ??1CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804B5380 (--1CMultitaskingViewElementBase@@QEAA@XZ.c)
 *     ??1CSwitchItemElement@@UEAA@XZ @ 0x1804B5464 (--1CSwitchItemElement@@UEAA@XZ.c)
 *     ??1CMultitaskingViewFrame@@UEAA@XZ @ 0x1804B9470 (--1CMultitaskingViewFrame@@UEAA@XZ.c)
 *     ??1CVirtualDesktopBarElement@@UEAA@XZ @ 0x1804B955C (--1CVirtualDesktopBarElement@@UEAA@XZ.c)
 *     ??1SwitchItemThumbnailElement@@UEAA@XZ @ 0x1804BF7B4 (--1SwitchItemThumbnailElement@@UEAA@XZ.c)
 *     ??1CSwitchItemGrid@@UEAA@XZ @ 0x1804C5BF4 (--1CSwitchItemGrid@@UEAA@XZ.c)
 *     ??1CScrollViewerHost@@UEAA@XZ @ 0x1804C8558 (--1CScrollViewerHost@@UEAA@XZ.c)
 *     ??1CScrollButtonContainer@@UEAA@XZ @ 0x1804D7A3C (--1CScrollButtonContainer@@UEAA@XZ.c)
 *     _MultitaskingViewGestureHandler::MultitaskingViewGestureHandler_::_1_::dtor$11 @ 0x1806D521B (_MultitaskingViewGestureHandler--MultitaskingViewGestureHandler_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WeakReference::CWeakRefSource<CSwitchItemElement>::~CWeakRefSource<CSwitchItemElement>(__int64 *a1)
{
  if ( *a1 )
    *(_QWORD *)(*a1 + 16) = 0LL;
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
