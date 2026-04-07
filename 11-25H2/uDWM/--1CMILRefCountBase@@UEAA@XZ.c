/*
 * XREFs of ??1CMILRefCountBase@@UEAA@XZ @ 0x18008698C
 * Callers:
 *     ??1CDWMDXGIAdapter@@EEAA@XZ @ 0x180074C38 (--1CDWMDXGIAdapter@@EEAA@XZ.c)
 *     ??1CDWMDXGIEnumeration@@MEAA@XZ @ 0x180076B8C (--1CDWMDXGIEnumeration@@MEAA@XZ.c)
 *     ??_GCMILRefCountBase@@UEAAPEAXI@Z @ 0x1800EA190 (--_GCMILRefCountBase@@UEAAPEAXI@Z.c)
 *     _CDWMDXGIAdapter::CDWMDXGIAdapter_::_1_::dtor$0 @ 0x1800EC10D (_CDWMDXGIAdapter--CDWMDXGIAdapter_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILRefCountBase::~CMILRefCountBase(CMILRefCountBase *this)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
