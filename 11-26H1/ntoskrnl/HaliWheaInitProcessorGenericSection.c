/*
 * XREFs of HaliWheaInitProcessorGenericSection @ 0x14044B548
 * Callers:
 *     HalpWheaInitProcessorGenericSection @ 0x14044B4F0 (HalpWheaInitProcessorGenericSection.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14044BB30 (HalpGetCpuVendor.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HaliWheaInitProcessorGenericSection(_QWORD *a1)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 InitialApicId; // rcx
  __int64 v21; // rcx

  memset_0(a1, 0, 0xC0uLL);
  *a1 |= 0x43uLL;
  _RAX = 1LL;
  *((_BYTE *)a1 + 9) = 2;
  __asm { cpuid }
  a1[2] = (unsigned int)_RAX;
  if ( (unsigned __int8)HalpGetCpuVendor(_RCX, _RDX, v7, v8) == 2 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x1A )
    {
      _RAX = 26LL;
      __asm { cpuid }
      if ( (_DWORD)_RAX )
      {
        v21 = a1[2];
        *a1 |= 0x2000uLL;
        a1[2] = __PAIR64__(_RAX, v21);
      }
    }
  }
  InitialApicId = KeGetCurrentPrcb()->InitialApicId;
  *a1 |= 0x100uLL;
  a1[19] = InitialApicId;
  return 0LL;
}
