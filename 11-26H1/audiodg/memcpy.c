/*
 * XREFs of memcpy @ 0x14004A6A0
 * Callers:
 *     sub_140006BCC @ 0x140006BCC (sub_140006BCC.c)
 *     sub_14000DB20 @ 0x14000DB20 (sub_14000DB20.c)
 *     sub_1400219B0 @ 0x1400219B0 (sub_1400219B0.c)
 *     sub_1400263C8 @ 0x1400263C8 (sub_1400263C8.c)
 *     sub_140026844 @ 0x140026844 (sub_140026844.c)
 *     sub_14002C450 @ 0x14002C450 (sub_14002C450.c)
 *     sub_140038358 @ 0x140038358 (sub_140038358.c)
 *     sub_140038A9C @ 0x140038A9C (sub_140038A9C.c)
 *     sub_14003CFA0 @ 0x14003CFA0 (sub_14003CFA0.c)
 *     sub_140043B74 @ 0x140043B74 (sub_140043B74.c)
 *     sub_140048AD0 @ 0x140048AD0 (sub_140048AD0.c)
 *     sub_140048CF0 @ 0x140048CF0 (sub_140048CF0.c)
 *     sub_14004B520 @ 0x14004B520 (sub_14004B520.c)
 *     sub_140058C44 @ 0x140058C44 (sub_140058C44.c)
 *     sub_14005F2B0 @ 0x14005F2B0 (sub_14005F2B0.c)
 *     sub_140067874 @ 0x140067874 (sub_140067874.c)
 *     sub_14006C760 @ 0x14006C760 (sub_14006C760.c)
 *     sub_14006D4A0 @ 0x14006D4A0 (sub_14006D4A0.c)
 *     sub_14006D820 @ 0x14006D820 (sub_14006D820.c)
 *     sub_14006E6C0 @ 0x14006E6C0 (sub_14006E6C0.c)
 *     sub_14008C1A0 @ 0x14008C1A0 (sub_14008C1A0.c)
 *     sub_14008E414 @ 0x14008E414 (sub_14008E414.c)
 *     sub_14008EBD4 @ 0x14008EBD4 (sub_14008EBD4.c)
 *     sub_14008ED14 @ 0x14008ED14 (sub_14008ED14.c)
 *     sub_140092180 @ 0x140092180 (sub_140092180.c)
 *     sub_140092BB0 @ 0x140092BB0 (sub_140092BB0.c)
 *     sub_140097200 @ 0x140097200 (sub_140097200.c)
 *     sub_140097700 @ 0x140097700 (sub_140097700.c)
 *     sub_1400997E0 @ 0x1400997E0 (sub_1400997E0.c)
 *     sub_14009AB10 @ 0x14009AB10 (sub_14009AB10.c)
 *     sub_14009BE40 @ 0x14009BE40 (sub_14009BE40.c)
 *     sub_14009EE00 @ 0x14009EE00 (sub_14009EE00.c)
 *     sub_1400A4B50 @ 0x1400A4B50 (sub_1400A4B50.c)
 *     sub_1400AA1A8 @ 0x1400AA1A8 (sub_1400AA1A8.c)
 *     sub_1400AA844 @ 0x1400AA844 (sub_1400AA844.c)
 *     sub_1400AC6D0 @ 0x1400AC6D0 (sub_1400AC6D0.c)
 *     sub_1400ACC20 @ 0x1400ACC20 (sub_1400ACC20.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}
