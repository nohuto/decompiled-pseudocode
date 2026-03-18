/*
 * XREFs of HalpCallEfiGetTime @ 0x140586E8C
 * Callers:
 *     HalEfiGetTime @ 0x140533554 (HalEfiGetTime.c)
 *     HalEfiSetTime @ 0x140586BA8 (HalEfiSetTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpCallEfiGetTime(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, _QWORD))*HalEfiRuntimeServicesTable)(a1, 0LL);
}
