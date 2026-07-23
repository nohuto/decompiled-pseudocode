/*
 * XREFs of HalpInitNonBusHandler @ 0x140CB3C00
 * Callers:
 *     HalpPciInitSystem @ 0x140BF15C0 (HalpPciInitSystem.c)
 * Callees:
 *     <none>
 */

char (__fastcall *HalpInitNonBusHandler())(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, char a5)
{
  char (__fastcall *result)(__int64, __int64, _QWORD *, _QWORD *, char); // rax

  off_140E00828[0] = (void (__fastcall __noreturn *)())HalpTranslateBusAddress;
  off_140E00830[0] = (void (__fastcall __noreturn *)())xHalAllocatePmcCounterSet;
  result = HalpFindBusAddressTranslation;
  qword_140E00840 = (__int64)HalpFindBusAddressTranslation;
  return result;
}
