/*
 * XREFs of sub_180028E98 @ 0x180028E98
 * Callers:
 *     sub_180027BC8 @ 0x180027BC8 (sub_180027BC8.c)
 *     sub_180027C54 @ 0x180027C54 (sub_180027C54.c)
 *     sub_180028FA0 @ 0x180028FA0 (sub_180028FA0.c)
 *     sub_1800D9232 @ 0x1800D9232 (sub_1800D9232.c)
 * Callees:
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 */

void **__fastcall sub_180028E98(__int64 a1)
{
  void **result; // rax

  *(_QWORD *)a1 = &Spectre::Engine::RendererResource::`vftable';
  _InterlockedDecrement64((volatile signed __int64 *)&unk_1801C85B0 + 20 * *(int *)(a1 + 48));
  _InterlockedDecrement(&dword_1801C855C[*(int *)(a1 + 44)]);
  _InterlockedAdd64((volatile signed __int64 *)&unk_1801C85F0 + 20 * *(int *)(a1 + 56), -*(_QWORD *)(a1 + 64));
  sub_1800129D0(a1 + 8);
  result = &Spectre::Engine::IVisitable::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::IVisitable::`vftable';
  return result;
}
