/*
 * XREFs of ??1SvcHostModule@Internal@Windows@@UEAA@XZ @ 0x1800D7708
 * Callers:
 *     ??_ESvcHostModule@Internal@Windows@@UEAAPEAXI@Z @ 0x1800D7B40 (--_ESvcHostModule@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800D73D0 (--1-$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ.c)
 */

void __fastcall Windows::Internal::SvcHostModule::~SvcHostModule(
        Windows::Internal::SvcHostModule *this,
        __int64 a2,
        const unsigned __int16 *a3,
        bool a4)
{
  Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::SvcHostModule>::~OutOfProcModuleBase<Windows::Internal::SvcHostModule>(
    (Windows::Internal::SvcHostModule *)((char *)this + 40),
    a2,
    a3,
    a4);
  Windows::Internal::ServiceModuleBase::~ServiceModuleBase(this);
}
