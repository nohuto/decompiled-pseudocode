/*
 * XREFs of ??1ViewEventRegistration@@QEAA@XZ @ 0x1800F0818
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UViewEventRegistration@@@std@@EEAAXXZ @ 0x1800F0C30 (-_Destroy@-$_Ref_count_obj2@UViewEventRegistration@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065220 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F0B54 (--1String@Internal@Windows@@QEAA@XZ.c)
 */

void __fastcall ViewEventRegistration::~ViewEventRegistration(ViewEventRegistration *this)
{
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)this + 3);
  Windows::Internal::String::~String((ViewEventRegistration *)((char *)this + 8));
  Windows::Internal::String::~String(this);
}
