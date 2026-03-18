/*
 * XREFs of SmmIommuCreateDomain @ 0x140285398
 * Callers:
 *     SmmIommuSwitchToGpuVaIoMmu @ 0x140285400 (SmmIommuSwitchToGpuVaIoMmu.c)
 *     SmmIommuSwitchToTranslation @ 0x140285730 (SmmIommuSwitchToTranslation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SmmIommuCreateDomain(char a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))qword_1401695E0)(
           a1 != 0 ? 3 : 0,
           0LL,
           0LL,
           0LL,
           a2);
}
