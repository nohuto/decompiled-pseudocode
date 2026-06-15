/*
 * XREFs of sub_140094650 @ 0x140094650
 * Callers:
 *     sub_140094710 @ 0x140094710 (sub_140094710.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140094650(__int64 a1)
{
  *(_QWORD *)a1 = off_1400BF368;
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
