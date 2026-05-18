/*
 * XREFs of sub_180082980 @ 0x180082980
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180082750 @ 0x180082750 (sub_180082750.c)
 */

__int64 *__fastcall sub_180082980(__int64 a1, __int64 *a2, int a3, int a4, int a5, int a6, int a7)
{
  __int64 v7; // rbx
  int v11; // ebx
  __int64 v12; // rax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v7 = *(_QWORD *)(a1 + 112);
  if ( v7 )
    v11 = *(_DWORD *)(v7 + 32);
  else
    v11 = -1;
  v12 = sub_18001C514(40LL);
  if ( v12 )
  {
    *(_DWORD *)(v12 + 16) = a5;
    *(_DWORD *)(v12 + 20) = a7;
    *(_DWORD *)(v12 + 24) = a6;
    *(_QWORD *)v12 = &Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc::`vftable';
    *(_DWORD *)(v12 + 8) = a3;
    *(_DWORD *)(v12 + 12) = a4;
    *(_DWORD *)(v12 + 32) = v11;
  }
  v14 = 0LL;
  *a2 = v12;
  sub_180082750(&v14);
  return a2;
}
