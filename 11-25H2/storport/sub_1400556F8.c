/*
 * XREFs of sub_1400556F8 @ 0x1400556F8
 * Callers:
 *     sub_140004890 @ 0x140004890 (sub_140004890.c)
 *     sub_140005A20 @ 0x140005A20 (sub_140005A20.c)
 *     sub_1400081BC @ 0x1400081BC (sub_1400081BC.c)
 *     sub_140008510 @ 0x140008510 (sub_140008510.c)
 *     sub_1400088AC @ 0x1400088AC (sub_1400088AC.c)
 *     sub_140008DD0 @ 0x140008DD0 (sub_140008DD0.c)
 *     sub_140008EE0 @ 0x140008EE0 (sub_140008EE0.c)
 *     sub_140009524 @ 0x140009524 (sub_140009524.c)
 *     sub_140009700 @ 0x140009700 (sub_140009700.c)
 *     sub_140009D88 @ 0x140009D88 (sub_140009D88.c)
 *     sub_14000A824 @ 0x14000A824 (sub_14000A824.c)
 *     sub_14000AC80 @ 0x14000AC80 (sub_14000AC80.c)
 *     sub_14000B4E0 @ 0x14000B4E0 (sub_14000B4E0.c)
 *     sub_14000B920 @ 0x14000B920 (sub_14000B920.c)
 *     sub_14000BAE0 @ 0x14000BAE0 (sub_14000BAE0.c)
 *     sub_14000BCD0 @ 0x14000BCD0 (sub_14000BCD0.c)
 *     sub_14000BD54 @ 0x14000BD54 (sub_14000BD54.c)
 *     sub_14000CB10 @ 0x14000CB10 (sub_14000CB10.c)
 *     sub_14000CE18 @ 0x14000CE18 (sub_14000CE18.c)
 *     sub_14000FC20 @ 0x14000FC20 (sub_14000FC20.c)
 *     sub_1400160C0 @ 0x1400160C0 (sub_1400160C0.c)
 *     sub_140018EE0 @ 0x140018EE0 (sub_140018EE0.c)
 *     sub_140019004 @ 0x140019004 (sub_140019004.c)
 *     sub_140019650 @ 0x140019650 (sub_140019650.c)
 *     sub_14001A620 @ 0x14001A620 (sub_14001A620.c)
 *     sub_140022EC0 @ 0x140022EC0 (sub_140022EC0.c)
 *     sub_14002B390 @ 0x14002B390 (sub_14002B390.c)
 *     sub_14002D0D0 @ 0x14002D0D0 (sub_14002D0D0.c)
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 *     sub_140033C18 @ 0x140033C18 (sub_140033C18.c)
 *     sub_14003EC20 @ 0x14003EC20 (sub_14003EC20.c)
 *     sub_140040510 @ 0x140040510 (sub_140040510.c)
 *     sub_14004EEC0 @ 0x14004EEC0 (sub_14004EEC0.c)
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 *     sub_14006B460 @ 0x14006B460 (sub_14006B460.c)
 *     sub_14006BBD0 @ 0x14006BBD0 (sub_14006BBD0.c)
 *     sub_140077C80 @ 0x140077C80 (sub_140077C80.c)
 *     CompletionFunction @ 0x140079310 (CompletionFunction.c)
 *     sub_140095F04 @ 0x140095F04 (sub_140095F04.c)
 *     sub_140099564 @ 0x140099564 (sub_140099564.c)
 *     sub_1400A1750 @ 0x1400A1750 (sub_1400A1750.c)
 *     sub_1400A24F0 @ 0x1400A24F0 (sub_1400A24F0.c)
 *     sub_140178FA0 @ 0x140178FA0 (sub_140178FA0.c)
 *     sub_1401AA480 @ 0x1401AA480 (sub_1401AA480.c)
 *     sub_1401AA590 @ 0x1401AA590 (sub_1401AA590.c)
 *     sub_1401AED30 @ 0x1401AED30 (sub_1401AED30.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 sub_1400556F8(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va1; // [rsp+90h] [rbp+28h]
  va_list va2; // [rsp+98h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))qword_1401685A0)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2,
           4LL,
           0LL);
}
