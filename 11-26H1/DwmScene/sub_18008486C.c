/*
 * XREFs of sub_18008486C @ 0x18008486C
 * Callers:
 *     sub_1800509C4 @ 0x1800509C4 (sub_1800509C4.c)
 *     sub_1800BA5F4 @ 0x1800BA5F4 (sub_1800BA5F4.c)
 * Callees:
 *     sub_180028D1C @ 0x180028D1C (sub_180028D1C.c)
 */

__int64 __fastcall sub_18008486C(__int64 a1)
{
  sub_180028D1C(a1);
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::DeviceVertexLayout::`vftable';
  return a1;
}
