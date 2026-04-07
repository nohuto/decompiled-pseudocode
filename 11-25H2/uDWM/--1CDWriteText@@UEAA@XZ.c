/*
 * XREFs of ??1CDWriteText@@UEAA@XZ @ 0x18006310C
 * Callers:
 *     ??_GCDWriteText@@UEAAPEAXI@Z @ 0x1800630C0 (--_GCDWriteText@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800295E8 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180063EA4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 */

void __fastcall CDWriteText::~CDWriteText(CDWriteText *this)
{
  std::wstring::~wstring((char *)this + 192);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 22);
  CSpriteVisual::~CSpriteVisual(this);
}
