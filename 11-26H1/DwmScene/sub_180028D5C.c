/*
 * XREFs of sub_180028D5C @ 0x180028D5C
 * Callers:
 *     sub_180028D1C @ 0x180028D1C (sub_180028D1C.c)
 *     sub_180028DF4 @ 0x180028DF4 (sub_180028DF4.c)
 * Callees:
 *     sub_1800143C0 @ 0x1800143C0 (sub_1800143C0.c)
 */

__int64 __fastcall sub_180028D5C(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi

  v3 = a3;
  *(_QWORD *)a1 = &Spectre::Engine::RendererResource::`vftable';
  v5 = a2;
  sub_1800143C0(a1 + 8);
  *(_DWORD *)(a1 + 40) = 3;
  *(_DWORD *)(a1 + 44) = v5;
  *(_DWORD *)(a1 + 48) = v3;
  *(_DWORD *)(a1 + 56) = v3;
  *(_QWORD *)(a1 + 64) = 0LL;
  _InterlockedAdd64((volatile signed __int64 *)&unk_1801C85F0 + 20 * v3, 0LL);
  _InterlockedIncrement(&dword_1801C855C[v5]);
  _InterlockedIncrement64((volatile signed __int64 *)&unk_1801C85B0 + 20 * *(int *)(a1 + 48));
  return a1;
}
