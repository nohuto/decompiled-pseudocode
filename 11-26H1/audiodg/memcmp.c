/*
 * XREFs of memcmp @ 0x14004A694
 * Callers:
 *     sub_140018A60 @ 0x140018A60 (sub_140018A60.c)
 *     sub_140028A40 @ 0x140028A40 (sub_140028A40.c)
 *     sub_140028BA0 @ 0x140028BA0 (sub_140028BA0.c)
 *     sub_140029734 @ 0x140029734 (sub_140029734.c)
 *     sub_14003A2F0 @ 0x14003A2F0 (sub_14003A2F0.c)
 *     sub_14003B610 @ 0x14003B610 (sub_14003B610.c)
 *     sub_14004229C @ 0x14004229C (sub_14004229C.c)
 *     sub_14004B130 @ 0x14004B130 (sub_14004B130.c)
 *     sub_140063C84 @ 0x140063C84 (sub_140063C84.c)
 *     sub_140075EEC @ 0x140075EEC (sub_140075EEC.c)
 *     sub_1400790E8 @ 0x1400790E8 (sub_1400790E8.c)
 *     sub_14009F2B0 @ 0x14009F2B0 (sub_14009F2B0.c)
 *     sub_1400A01A0 @ 0x1400A01A0 (sub_1400A01A0.c)
 *     sub_1400A10D0 @ 0x1400A10D0 (sub_1400A10D0.c)
 *     sub_1400AC6D0 @ 0x1400AC6D0 (sub_1400AC6D0.c)
 *     sub_1400ACC20 @ 0x1400ACC20 (sub_1400ACC20.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return __imp_memcmp(Buf1, Buf2, Size);
}
