/*
 * XREFs of __security_check_cookie @ 0x140032780
 * Callers:
 *     sub_1400012F0 @ 0x1400012F0 (sub_1400012F0.c)
 *     sub_140001B40 @ 0x140001B40 (sub_140001B40.c)
 *     sub_140003700 @ 0x140003700 (sub_140003700.c)
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140004AF0 @ 0x140004AF0 (sub_140004AF0.c)
 *     sub_140006B50 @ 0x140006B50 (sub_140006B50.c)
 *     sub_1400073E0 @ 0x1400073E0 (sub_1400073E0.c)
 *     sub_140008590 @ 0x140008590 (sub_140008590.c)
 *     sub_1400095E0 @ 0x1400095E0 (sub_1400095E0.c)
 *     sub_14000B930 @ 0x14000B930 (sub_14000B930.c)
 *     sub_14000BA00 @ 0x14000BA00 (sub_14000BA00.c)
 *     sub_14000BEE0 @ 0x14000BEE0 (sub_14000BEE0.c)
 *     sub_14000C770 @ 0x14000C770 (sub_14000C770.c)
 *     sub_14000EBE0 @ 0x14000EBE0 (sub_14000EBE0.c)
 *     sub_14000F840 @ 0x14000F840 (sub_14000F840.c)
 *     sub_14000FB60 @ 0x14000FB60 (sub_14000FB60.c)
 *     sub_1400130E0 @ 0x1400130E0 (sub_1400130E0.c)
 *     sub_140014D70 @ 0x140014D70 (sub_140014D70.c)
 *     sub_1400181B0 @ 0x1400181B0 (sub_1400181B0.c)
 *     sub_140019450 @ 0x140019450 (sub_140019450.c)
 *     sub_14001A0DC @ 0x14001A0DC (sub_14001A0DC.c)
 *     sub_14001A2D4 @ 0x14001A2D4 (sub_14001A2D4.c)
 *     sub_14001AAE8 @ 0x14001AAE8 (sub_14001AAE8.c)
 *     sub_14001AFAC @ 0x14001AFAC (sub_14001AFAC.c)
 *     sub_14001D2F0 @ 0x14001D2F0 (sub_14001D2F0.c)
 *     sub_14001E95C @ 0x14001E95C (sub_14001E95C.c)
 *     sub_14001ED94 @ 0x14001ED94 (sub_14001ED94.c)
 *     sub_14001F398 @ 0x14001F398 (sub_14001F398.c)
 *     sub_14001F8F8 @ 0x14001F8F8 (sub_14001F8F8.c)
 *     sub_1400217C8 @ 0x1400217C8 (sub_1400217C8.c)
 *     sub_140022D58 @ 0x140022D58 (sub_140022D58.c)
 *     sub_140022F24 @ 0x140022F24 (sub_140022F24.c)
 *     sub_140028860 @ 0x140028860 (sub_140028860.c)
 *     sub_140029830 @ 0x140029830 (sub_140029830.c)
 *     sub_14002C324 @ 0x14002C324 (sub_14002C324.c)
 *     sub_14002E2D0 @ 0x14002E2D0 (sub_14002E2D0.c)
 *     sub_14002EBF8 @ 0x14002EBF8 (sub_14002EBF8.c)
 *     sub_14002EE7C @ 0x14002EE7C (sub_14002EE7C.c)
 *     sub_140031208 @ 0x140031208 (sub_140031208.c)
 *     sub_1400316E0 @ 0x1400316E0 (sub_1400316E0.c)
 *     sub_14003190C @ 0x14003190C (sub_14003190C.c)
 *     sub_14003202C @ 0x14003202C (sub_14003202C.c)
 *     sub_14003241C @ 0x14003241C (sub_14003241C.c)
 *     sub_14003263C @ 0x14003263C (sub_14003263C.c)
 *     sub_1400472AC @ 0x1400472AC (sub_1400472AC.c)
 *     sub_140049168 @ 0x140049168 (sub_140049168.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
