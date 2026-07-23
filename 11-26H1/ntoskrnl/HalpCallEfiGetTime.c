/*
 * XREFs of HalpCallEfiGetTime @ 0x1405893AC
 * Callers:
 *     HalEfiGetTime @ 0x1405359D4 (HalEfiGetTime.c)
 *     HalEfiSetTime @ 0x1405890C8 (HalEfiSetTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpCallEfiGetTime(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, _QWORD))*HalEfiRuntimeServicesTable)(a1, 0LL);
}
