/*
 * XREFs of ??1CStoryboard@@UEAA@XZ @ 0x18005894C
 * Callers:
 *     ??_ECLauncherLaunch@@UEAAPEAXI@Z @ 0x180058810 (--_ECLauncherLaunch@@UEAAPEAXI@Z.c)
 *     ??_ECSlideInAppBar@@UEAAPEAXI@Z @ 0x180058850 (--_ECSlideInAppBar@@UEAAPEAXI@Z.c)
 *     ??_GCLauncherDismiss@@UEAAPEAXI@Z @ 0x180058890 (--_GCLauncherDismiss@@UEAAPEAXI@Z.c)
 *     ??_GCGrowPanel@@UEAAPEAXI@Z @ 0x1800588D0 (--_GCGrowPanel@@UEAAPEAXI@Z.c)
 *     ??_GCCrossFade@@UEAAPEAXI@Z @ 0x180058910 (--_GCCrossFade@@UEAAPEAXI@Z.c)
 *     ??1CGroupingStoryboard@@UEAA@XZ @ 0x1800C0408 (--1CGroupingStoryboard@@UEAA@XZ.c)
 *     ??1CVirtualDesktopSwitch@@UEAA@XZ @ 0x1800C0490 (--1CVirtualDesktopSwitch@@UEAA@XZ.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CStoryboard::~CStoryboard(CStoryboard *this)
{
  CBitmapSourceArray::~CBitmapSourceArray((void **)this + 12);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 10);
  CBaseObject::~CBaseObject(this);
}
