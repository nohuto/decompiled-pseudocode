/*
 * XREFs of ??1CDWriteText@@UEAA@XZ @ 0x18006AF7C
 * Callers:
 *     ??_GCDWriteText@@UEAAPEAXI@Z @ 0x18006AF30 (--_GCDWriteText@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C124 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18000C160 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??1CGraphicsResourceOwner@@IEAA@XZ @ 0x18001B464 (--1CGraphicsResourceOwner@@IEAA@XZ.c)
 */

void __fastcall CDWriteText::~CDWriteText(CDWriteText *this)
{
  std::wstring::~wstring((_QWORD *)this + 29);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 27);
  CGraphicsResourceOwner::~CGraphicsResourceOwner((CDWriteText *)((char *)this + 192));
  CContainerVisual::~CContainerVisual(this);
}
