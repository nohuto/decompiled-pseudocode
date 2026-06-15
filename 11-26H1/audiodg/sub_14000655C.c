/*
 * XREFs of sub_14000655C @ 0x14000655C
 * Callers:
 *     sub_140005E9C @ 0x140005E9C (sub_140005E9C.c)
 *     sub_140006060 @ 0x140006060 (sub_140006060.c)
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 * Callees:
 *     sub_14001FC5C @ 0x14001FC5C (sub_14001FC5C.c)
 *     sub_140026C6C @ 0x140026C6C (sub_140026C6C.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

LARGE_INTEGER *__fastcall sub_14000655C(LARGE_INTEGER *a1, LARGE_INTEGER a2, const char *a3, __int64 a4)
{
  LARGE_INTEGER *v4; // r12

  v4 = a1 + 2;
  a1->QuadPart = 0LL;
  a1[1].QuadPart = 0LL;
  a1[2].QuadPart = 0LL;
  memset(&a1[3], 0, 0x40uLL);
  memset(&a1[11], 0, 0x80uLL);
  a1[29] = a2;
  sub_14001FC5C((_DWORD)a1 + 24, 64, (_DWORD)a1 + 216, (_DWORD)a1 + 224, 0, "%s", a3);
  sub_14001FC5C(a1[27].QuadPart, a1[28].QuadPart, 0, 0, 0, "-Start");
  sub_140026C6C(
    &a1[11],
    128LL,
    "{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    *(_DWORD *)a4,
    *(unsigned __int16 *)(a4 + 4),
    *(unsigned __int16 *)(a4 + 6),
    *(unsigned __int8 *)(a4 + 8),
    *(unsigned __int8 *)(a4 + 9),
    *(unsigned __int8 *)(a4 + 10),
    *(unsigned __int8 *)(a4 + 11),
    *(unsigned __int8 *)(a4 + 12),
    *(unsigned __int8 *)(a4 + 13),
    *(unsigned __int8 *)(a4 + 14),
    *(unsigned __int8 *)(a4 + 15));
  QueryPerformanceCounter(a1);
  QueryPerformanceFrequency(v4);
  return a1;
}
