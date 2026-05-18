/*
 * XREFs of sub_180084110 @ 0x180084110
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18004744C @ 0x18004744C (sub_18004744C.c)
 */

__int64 *__fastcall sub_180084110(__int64 a1, __int64 *a2, int a3, int a4, int a5, int a6)
{
  int v9; // ebx
  __int64 v10; // rax

  if ( a6 == 23 || a6 == 24 )
    v9 = ((a3 + 1) & 0xFFFFFFFE) * sub_18004744C(a6);
  else
    v9 = a3 * sub_18004744C(a6);
  v10 = sub_18001C514(32LL);
  if ( v10 )
  {
    *(_DWORD *)(v10 + 8) = a3;
    *(_QWORD *)v10 = &Spectre::Engine::ArrayBufferDesc::`vftable';
    *(_DWORD *)(v10 + 24) = a5;
    *(_DWORD *)(v10 + 12) = v9;
    *(_DWORD *)(v10 + 16) = a4;
    *(_DWORD *)(v10 + 20) = a6;
  }
  *a2 = v10;
  return a2;
}
