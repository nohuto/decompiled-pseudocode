/*
 * XREFs of ??1CStoryboard@@UEAA@XZ @ 0x180065AD8
 * Callers:
 *     ??_GCCrossFade@@UEAAPEAXI@Z @ 0x180065AA0 (--_GCCrossFade@@UEAAPEAXI@Z.c)
 *     ??1CGroupingStoryboard@@UEAA@XZ @ 0x1800C6774 (--1CGroupingStoryboard@@UEAA@XZ.c)
 *     ??1CVirtualDesktopSwitch@@UEAA@XZ @ 0x1800C67F0 (--1CVirtualDesktopSwitch@@UEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180065BD0 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CStoryboard::~CStoryboard(void **this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 12);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(this + 10);
  CBaseObject::~CBaseObject((CBaseObject *)this);
}
