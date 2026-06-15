/*
 * XREFs of ??_GCAudioServiceModule@@UEAAPEAXI@Z @ 0x1800D7980
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@UEAA@XZ @ 0x1800D72D8 (--1-$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@UEAA@XZ.c)
 */

CAudioServiceModule *__fastcall CAudioServiceModule::`scalar deleting destructor'(CAudioServiceModule *this, char a2)
{
  *(_QWORD *)this = &CAudioServiceModule::`vftable';
  ATL::CAtlExeModuleT<CAudioServiceModule>::~CAtlExeModuleT<CAudioServiceModule>(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
