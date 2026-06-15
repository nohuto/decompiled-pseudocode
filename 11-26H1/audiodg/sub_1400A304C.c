/*
 * XREFs of sub_1400A304C @ 0x1400A304C
 * Callers:
 *     sub_140038E2C @ 0x140038E2C (sub_140038E2C.c)
 *     sub_1400461D0 @ 0x1400461D0 (sub_1400461D0.c)
 *     sub_140046284 @ 0x140046284 (sub_140046284.c)
 *     sub_140046338 @ 0x140046338 (sub_140046338.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall sub_1400A304C(struct _RTL_CRITICAL_SECTION *a1)
{
  DeleteCriticalSection(a1);
  j_j__o_free((__int64)a1);
  return a1;
}
