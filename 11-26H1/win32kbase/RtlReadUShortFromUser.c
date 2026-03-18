/*
 * XREFs of RtlReadUShortFromUser @ 0x1402D21DC
 * Callers:
 *     DrvEnumDisplaySettings @ 0x14013BA10 (DrvEnumDisplaySettings.c)
 *     RtlReadUShortFromUser$thunk$44378091108827265 @ 0x14024E070 (RtlReadUShortFromUser$thunk$44378091108827265.c)
 *     RtlWideStringLengthFromUser @ 0x1402D2278 (RtlWideStringLengthFromUser.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1401C9244 (ProbeForRead_0.c)
 */

__int64 __fastcall RtlReadUShortFromUser(unsigned __int16 *a1)
{
  ProbeForRead_0(a1, 2uLL, 1u);
  return *a1;
}
