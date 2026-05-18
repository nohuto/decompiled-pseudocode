/*
 * XREFs of sub_18008286C @ 0x18008286C
 * Callers:
 *     sub_180082920 @ 0x180082920 (sub_180082920.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18004744C @ 0x18004744C (sub_18004744C.c)
 */

__int64 *__fastcall sub_18008286C(__int64 a1, __int64 *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v10; // ebx
  __int64 v11; // rax

  if ( a6 == 23 || a6 == 24 )
    v10 = ((a3 + 1) & 0xFFFFFFFE) * sub_18004744C(a6);
  else
    v10 = a3 * sub_18004744C(a6);
  v11 = sub_18001C514(40LL);
  if ( v11 )
  {
    *(_DWORD *)(v11 + 24) = a5;
    *(_QWORD *)v11 = &Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc::`vftable';
    *(_DWORD *)(v11 + 32) = a7;
    *(_DWORD *)(v11 + 8) = a3;
    *(_DWORD *)(v11 + 12) = v10;
    *(_DWORD *)(v11 + 16) = a4;
    *(_DWORD *)(v11 + 20) = a6;
  }
  *a2 = v11;
  return a2;
}
