/*
 * XREFs of sub_140008C08 @ 0x140008C08
 * Callers:
 *     sub_140008AB0 @ 0x140008AB0 (sub_140008AB0.c)
 *     sub_14000AFD0 @ 0x14000AFD0 (sub_14000AFD0.c)
 *     sub_14000B7C0 @ 0x14000B7C0 (sub_14000B7C0.c)
 *     sub_1400100C4 @ 0x1400100C4 (sub_1400100C4.c)
 *     sub_1400101A8 @ 0x1400101A8 (sub_1400101A8.c)
 *     sub_140010230 @ 0x140010230 (sub_140010230.c)
 *     sub_140018580 @ 0x140018580 (sub_140018580.c)
 *     sub_14001C940 @ 0x14001C940 (sub_14001C940.c)
 *     sub_140028E18 @ 0x140028E18 (sub_140028E18.c)
 *     sub_140029590 @ 0x140029590 (sub_140029590.c)
 *     sub_140029B30 @ 0x140029B30 (sub_140029B30.c)
 *     sub_140033344 @ 0x140033344 (sub_140033344.c)
 *     sub_1400346B4 @ 0x1400346B4 (sub_1400346B4.c)
 *     sub_140045B10 @ 0x140045B10 (sub_140045B10.c)
 *     sub_14004FC98 @ 0x14004FC98 (sub_14004FC98.c)
 *     sub_140054D80 @ 0x140054D80 (sub_140054D80.c)
 *     sub_14005AC94 @ 0x14005AC94 (sub_14005AC94.c)
 *     sub_14005B75C @ 0x14005B75C (sub_14005B75C.c)
 *     sub_14005C89C @ 0x14005C89C (sub_14005C89C.c)
 *     sub_14005D708 @ 0x14005D708 (sub_14005D708.c)
 *     sub_14005FDB0 @ 0x14005FDB0 (sub_14005FDB0.c)
 *     sub_1400607A0 @ 0x1400607A0 (sub_1400607A0.c)
 *     sub_140067874 @ 0x140067874 (sub_140067874.c)
 *     sub_14006D4A0 @ 0x14006D4A0 (sub_14006D4A0.c)
 *     sub_14006D820 @ 0x14006D820 (sub_14006D820.c)
 *     sub_14006E6C0 @ 0x14006E6C0 (sub_14006E6C0.c)
 *     sub_1400747DC @ 0x1400747DC (sub_1400747DC.c)
 *     sub_14007DE90 @ 0x14007DE90 (sub_14007DE90.c)
 *     sub_140081650 @ 0x140081650 (sub_140081650.c)
 *     sub_140081AE0 @ 0x140081AE0 (sub_140081AE0.c)
 *     sub_140082DA0 @ 0x140082DA0 (sub_140082DA0.c)
 *     sub_140084E2C @ 0x140084E2C (sub_140084E2C.c)
 *     sub_140085904 @ 0x140085904 (sub_140085904.c)
 *     sub_14008DBD0 @ 0x14008DBD0 (sub_14008DBD0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140008C08(void **a1, void *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    CoTaskMemFree(v2);
}
