/*
 * XREFs of sub_140055C18 @ 0x140055C18
 * Callers:
 *     sub_14001ACB8 @ 0x14001ACB8 (sub_14001ACB8.c)
 *     sub_14001C790 @ 0x14001C790 (sub_14001C790.c)
 *     sub_140029920 @ 0x140029920 (sub_140029920.c)
 *     sub_140030B40 @ 0x140030B40 (sub_140030B40.c)
 *     sub_140031178 @ 0x140031178 (sub_140031178.c)
 *     sub_14003AAE8 @ 0x14003AAE8 (sub_14003AAE8.c)
 *     sub_140041560 @ 0x140041560 (sub_140041560.c)
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     sub_1400544B8 @ 0x1400544B8 (sub_1400544B8.c)
 *     StorPortReady @ 0x140056290 (StorPortReady.c)
 *     sub_140069314 @ 0x140069314 (sub_140069314.c)
 *     sub_1400699FC @ 0x1400699FC (sub_1400699FC.c)
 *     sub_140091480 @ 0x140091480 (sub_140091480.c)
 *     sub_140091624 @ 0x140091624 (sub_140091624.c)
 *     sub_140092628 @ 0x140092628 (sub_140092628.c)
 *     sub_140093E0C @ 0x140093E0C (sub_140093E0C.c)
 *     sub_1400977C0 @ 0x1400977C0 (sub_1400977C0.c)
 *     sub_140098650 @ 0x140098650 (sub_140098650.c)
 *     sub_14009D8DC @ 0x14009D8DC (sub_14009D8DC.c)
 *     sub_1401B1AF4 @ 0x1401B1AF4 (sub_1401B1AF4.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 sub_140055C18(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, _QWORD))qword_1401685A0)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           0LL);
}
