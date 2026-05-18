/*
 * XREFs of sub_180052ED8 @ 0x180052ED8
 * Callers:
 *     sub_180052D3C @ 0x180052D3C (sub_180052D3C.c)
 * Callees:
 *     sub_180025A84 @ 0x180025A84 (sub_180025A84.c)
 */

__int64 __fastcall sub_180052ED8(__int64 a1, __int64 a2, void **a3, __int64 a4)
{
  void *v4; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rax
  void *v10; // rax

  v4 = *a3;
  *(_QWORD *)a1 = &Spectre::Engine::TextureImageSetView::`vftable';
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 16) = a4;
  v7 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = 0LL;
  v8 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = 0LL;
  v9 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a1 + 24) = v9;
  *(_QWORD *)(a1 + 32) = v8;
  *(_QWORD *)(a1 + 40) = v7;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_QWORD *)a1 = &Spectre::Engine::TextureImageSet::`vftable';
  v10 = *a3;
  *a3 = 0LL;
  *(_QWORD *)(a1 + 56) = v10;
  sub_180025A84(a3);
  return a1;
}
