/*
 * XREFs of sub_14000C2F8 @ 0x14000C2F8
 * Callers:
 *     sub_14000A8A0 @ 0x14000A8A0 (sub_14000A8A0.c)
 *     sub_14000ACA0 @ 0x14000ACA0 (sub_14000ACA0.c)
 *     sub_14000AFD0 @ 0x14000AFD0 (sub_14000AFD0.c)
 *     sub_14000B7C0 @ 0x14000B7C0 (sub_14000B7C0.c)
 *     sub_14000BF70 @ 0x14000BF70 (sub_14000BF70.c)
 *     sub_14000C2D0 @ 0x14000C2D0 (sub_14000C2D0.c)
 *     sub_14000CB10 @ 0x14000CB10 (sub_14000CB10.c)
 *     sub_14002B8B0 @ 0x14002B8B0 (sub_14002B8B0.c)
 *     sub_14002BDD0 @ 0x14002BDD0 (sub_14002BDD0.c)
 *     sub_140031EE0 @ 0x140031EE0 (sub_140031EE0.c)
 *     sub_1400350A0 @ 0x1400350A0 (sub_1400350A0.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

void __fastcall sub_14000C2F8(__int64 a1)
{
  EnterCriticalSection(*(LPCRITICAL_SECTION *)a1);
  *(_BYTE *)(a1 + 8) = 1;
}
