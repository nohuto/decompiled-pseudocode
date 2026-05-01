/*
 * XREFs of ??1ViewEventRegistration@@QEAA@XZ @ 0x1800FEFC8
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UViewEventRegistration@@@std@@EEAAXXZ @ 0x18022EEA0 (-_Destroy@-$_Ref_count_obj2@UViewEventRegistration@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A7E0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800FEDD8 (--1String@Internal@Windows@@QEAA@XZ.c)
 */

void __fastcall ViewEventRegistration::~ViewEventRegistration(ViewEventRegistration *this)
{
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)this + 3);
  Windows::Internal::String::~String((HSTRING *)this + 1);
  Windows::Internal::String::~String((HSTRING *)this);
}
