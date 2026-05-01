/*
 * XREFs of ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x1802C3D14
 * Callers:
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x1800F33CC (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x18020E9BC (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x1803831E0 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x1803876F0 (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x1803C1440 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1MeetNowExperienceManager@@UEAA@XZ @ 0x1803C14F0 (--1MeetNowExperienceManager@@UEAA@XZ.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x180468C54 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     _CVirtualTouchpadExperienceManager::CVirtualTouchpadExperienceManager_::_1_::dtor$7 @ 0x1806CF7B8 (_CVirtualTouchpadExperienceManager--CVirtualTouchpadExperienceManager_--_1_--dtor$7.c)
 *     _CVirtualTouchpadExperienceManager::CVirtualTouchpadExperienceManager_::_1_::dtor$8 @ 0x1806CF7D1 (_CVirtualTouchpadExperienceManager--CVirtualTouchpadExperienceManager_--_1_--dtor$8.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$20 @ 0x1806E6E2C (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$20.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$21 @ 0x1806E6E45 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$21.c)
 *     _MeetNowExperienceManager::MeetNowExperienceManager_::_1_::dtor$6 @ 0x1806E8740 (_MeetNowExperienceManager--MeetNowExperienceManager_--_1_--dtor$6.c)
 *     _MeetNowExperienceManager::MeetNowExperienceManager_::_1_::dtor$7 @ 0x1806E8756 (_MeetNowExperienceManager--MeetNowExperienceManager_--_1_--dtor$7.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$22 @ 0x1806EEB07 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$22.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$23 @ 0x1806EEB20 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$23.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$24 @ 0x1806EEB39 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$24.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$25 @ 0x1806EEB52 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$25.c)
 * Callees:
 *     <none>
 */

void __fastcall CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper(
        CExperienceManagerAnimationHelper *this)
{
  volatile signed __int32 **v1; // rbx
  __int64 v2; // rcx

  v1 = (volatile signed __int32 **)((char *)this + 24);
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    DestroyWindow(*(HWND *)(v2 + 24));
  Microsoft::WRL::ComPtr<CExperienceManagerAnimationHelper::DummyWindow>::InternalRelease(v1);
}
