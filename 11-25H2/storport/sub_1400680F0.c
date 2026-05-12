/*
 * XREFs of sub_1400680F0 @ 0x1400680F0
 * Callers:
 *     sub_140004890 @ 0x140004890 (sub_140004890.c)
 *     sub_140005A20 @ 0x140005A20 (sub_140005A20.c)
 *     sub_140008510 @ 0x140008510 (sub_140008510.c)
 *     sub_140008DD0 @ 0x140008DD0 (sub_140008DD0.c)
 *     sub_140009524 @ 0x140009524 (sub_140009524.c)
 *     sub_140009700 @ 0x140009700 (sub_140009700.c)
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_140009C20 @ 0x140009C20 (sub_140009C20.c)
 *     sub_14000A824 @ 0x14000A824 (sub_14000A824.c)
 *     sub_14000AC80 @ 0x14000AC80 (sub_14000AC80.c)
 *     sub_14000B4E0 @ 0x14000B4E0 (sub_14000B4E0.c)
 *     sub_14000B920 @ 0x14000B920 (sub_14000B920.c)
 *     sub_14000BAE0 @ 0x14000BAE0 (sub_14000BAE0.c)
 *     sub_14000BD54 @ 0x14000BD54 (sub_14000BD54.c)
 *     sub_14000CB10 @ 0x14000CB10 (sub_14000CB10.c)
 *     sub_14000FC20 @ 0x14000FC20 (sub_14000FC20.c)
 *     sub_14000FFA8 @ 0x14000FFA8 (sub_14000FFA8.c)
 *     sub_140014200 @ 0x140014200 (sub_140014200.c)
 *     sub_14001A620 @ 0x14001A620 (sub_14001A620.c)
 *     sub_14002D0D0 @ 0x14002D0D0 (sub_14002D0D0.c)
 *     sub_140032E5C @ 0x140032E5C (sub_140032E5C.c)
 *     sub_140033C18 @ 0x140033C18 (sub_140033C18.c)
 *     sub_14003BD50 @ 0x14003BD50 (sub_14003BD50.c)
 *     sub_140040510 @ 0x140040510 (sub_140040510.c)
 *     sub_140040F7C @ 0x140040F7C (sub_140040F7C.c)
 *     sub_1400465E0 @ 0x1400465E0 (sub_1400465E0.c)
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     sub_140052634 @ 0x140052634 (sub_140052634.c)
 *     sub_140053E9C @ 0x140053E9C (sub_140053E9C.c)
 *     sub_1400544B8 @ 0x1400544B8 (sub_1400544B8.c)
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 *     sub_14006B460 @ 0x14006B460 (sub_14006B460.c)
 *     sub_14006BBD0 @ 0x14006BBD0 (sub_14006BBD0.c)
 *     CompletionFunction @ 0x140079310 (CompletionFunction.c)
 *     sub_1400938AC @ 0x1400938AC (sub_1400938AC.c)
 *     sub_140095F04 @ 0x140095F04 (sub_140095F04.c)
 *     sub_14009641C @ 0x14009641C (sub_14009641C.c)
 *     sub_14013B0FC @ 0x14013B0FC (sub_14013B0FC.c)
 *     sub_14017869C @ 0x14017869C (sub_14017869C.c)
 *     sub_140179544 @ 0x140179544 (sub_140179544.c)
 *     sub_140179C98 @ 0x140179C98 (sub_140179C98.c)
 *     sub_1401AA480 @ 0x1401AA480 (sub_1401AA480.c)
 *     sub_1401AA590 @ 0x1401AA590 (sub_1401AA590.c)
 *     sub_1401AB4D8 @ 0x1401AB4D8 (sub_1401AB4D8.c)
 *     sub_1401AED30 @ 0x1401AED30 (sub_1401AED30.c)
 *     sub_1401AF864 @ 0x1401AF864 (sub_1401AF864.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 sub_1400680F0(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))qword_1401685A0)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           va1,
           8LL,
           0LL);
}
