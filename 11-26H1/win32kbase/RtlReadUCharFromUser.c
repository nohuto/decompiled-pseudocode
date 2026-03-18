/*
 * XREFs of RtlReadUCharFromUser @ 0x1402D212C
 * Callers:
 *     ?UserCaptureSid@@YAJPEAXDPEAPEAX@Z @ 0x14018D850 (-UserCaptureSid@@YAJPEAXDPEAPEAX@Z.c)
 *     RtlReadUCharFromUser$thunk$9616555523636242751 @ 0x14024E040 (RtlReadUCharFromUser$thunk$9616555523636242751.c)
 * Callees:
 *     ProbeForRead_0 @ 0x1401C9244 (ProbeForRead_0.c)
 */

char __fastcall RtlReadUCharFromUser(volatile void *a1)
{
  ProbeForRead_0(a1, 1uLL, 1u);
  return *(_BYTE *)a1;
}
