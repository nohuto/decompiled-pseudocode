/*
 * XREFs of sub_140035D98 @ 0x140035D98
 * Callers:
 *     sub_140035C34 @ 0x140035C34 (sub_140035C34.c)
 *     sub_1401B259C @ 0x1401B259C (sub_1401B259C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140035D98(__int64 a1)
{
  int v1; // ecx

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
  return v1 == 315460 || v1 == 315464;
}
