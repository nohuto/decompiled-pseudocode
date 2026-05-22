/*
 * XREFs of ??0DWMLegacyInputTarget@@IEAA@KKK_K@Z @ 0x180029BA8
 * Callers:
 *     ?Create@DWMLegacyInputTarget@@SAJKKK_KPEAPEAUIInputTarget@@@Z @ 0x1800291E4 (-Create@DWMLegacyInputTarget@@SAJKKK_KPEAPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?PopulateInputSiteFromWindowId@DWMLegacyInputTarget@@AEAAXXZ @ 0x18002B7C0 (-PopulateInputSiteFromWindowId@DWMLegacyInputTarget@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
DWMLegacyInputTarget *__fastcall DWMLegacyInputTarget::DWMLegacyInputTarget(
        DWMLegacyInputTarget *this,
        int a2,
        int a3,
        int a4,
        unsigned __int64 a5)
{
  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 10) = 1;
  *(_QWORD *)this = &DWMLegacyInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &DWMLegacyInputTarget::`vftable'{for `IInputTarget2'};
  *((_QWORD *)this + 2) = &DWMLegacyInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 3) = &DWMLegacyInputTarget::`vftable'{for `IInputSiteTarget'};
  *((_QWORD *)this + 4) = &DWMLegacyInputTarget::`vftable'{for `RefCountedObject'};
  *((_DWORD *)this + 12) = a2;
  *((_DWORD *)this + 13) = a3;
  *((_DWORD *)this + 14) = a4;
  *((_QWORD *)this + 8) = a5;
  *((_QWORD *)this + 9) = 0LL;
  DWMLegacyInputTarget::PopulateInputSiteFromWindowId(this);
  return this;
}
