/*
 * XREFs of ??1ServiceModule@Internal@Windows@@UEAA@XZ @ 0x1800D76B0
 * Callers:
 *     ??_EServiceModule@Internal@Windows@@UEAAPEAXI@Z @ 0x1800D7B04 (--_EServiceModule@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$OutOfProcModuleBase@VServiceModule@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800D7380 (--1-$OutOfProcModuleBase@VServiceModule@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ.c)
 */

void __fastcall Windows::Internal::ServiceModule::~ServiceModule(
        Windows::Internal::ServiceModule *this,
        __int64 a2,
        const unsigned __int16 *a3,
        bool a4)
{
  Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::ServiceModule>::~OutOfProcModuleBase<Windows::Internal::ServiceModule>(
    (Windows::Internal::ServiceModule *)((char *)this + 40),
    a2,
    a3,
    a4);
  Windows::Internal::ServiceModuleBase::~ServiceModuleBase(this);
}
