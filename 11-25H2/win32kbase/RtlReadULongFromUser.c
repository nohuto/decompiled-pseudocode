/*
 * XREFs of RtlReadULongFromUser @ 0x1402C906C
 * Callers:
 *     RtlReadULongFromUser$thunk$16789519765233612629 @ 0x140246030 (RtlReadULongFromUser$thunk$16789519765233612629.c)
 *     WmsgpConnect @ 0x1402CA7F4 (WmsgpConnect.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1401A4EE6 (ProbeForRead_0.c)
 */

__int64 __fastcall RtlReadULongFromUser(unsigned int *a1)
{
  ProbeForRead_0(a1, 4uLL, 1u);
  return *a1;
}
