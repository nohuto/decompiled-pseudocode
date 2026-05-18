/*
 * XREFs of sub_180081E90 @ 0x180081E90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 */

__int64 *__fastcall sub_180081E90(__int64 a1, __int64 *a2, int a3, int a4, int a5, int a6, int a7)
{
  __int64 v10; // rax

  v10 = sub_18001C514(32LL);
  if ( v10 )
  {
    *(_DWORD *)(v10 + 8) = a3;
    *(_QWORD *)v10 = &Spectre::Engine::ArrayBufferDesc::`vftable';
    *(_DWORD *)(v10 + 16) = a5;
    *(_DWORD *)(v10 + 20) = a7;
    *(_DWORD *)(v10 + 24) = a6;
    *(_DWORD *)(v10 + 12) = a4;
  }
  *a2 = v10;
  return a2;
}
