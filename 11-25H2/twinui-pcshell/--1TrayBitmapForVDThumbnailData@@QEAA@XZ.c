/*
 * XREFs of ??1TrayBitmapForVDThumbnailData@@QEAA@XZ @ 0x180538D48
 * Callers:
 *     ??1GetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAA@XZ @ 0x180538D00 (--1GetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$CTSmartObj@PEAUHFONT__@@V?$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ @ 0x18020F5A0 (-Release@-$CTSmartObj@PEAUHFONT__@@V-$CAutoHandle_Policy@PEAUHFONT__@@@@@@QEAAXXZ.c)
 */

void __fastcall TrayBitmapForVDThumbnailData::~TrayBitmapForVDThumbnailData(TrayBitmapForVDThumbnailData *this)
{
  CTSmartObj<HFONT__ *,CAutoHandle_Policy<HFONT__ *>>::Release((void **)this + 2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 1);
}
