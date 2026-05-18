/*
 * XREFs of sub_1800826C4 @ 0x1800826C4
 * Callers:
 *     sub_180046548 @ 0x180046548 (sub_180046548.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180038A14 @ 0x180038A14 (sub_180038A14.c)
 *     sub_180081C90 @ 0x180081C90 (sub_180081C90.c)
 *     sub_180082750 @ 0x180082750 (sub_180082750.c)
 */

_QWORD *__fastcall sub_1800826C4(_QWORD *a1, int a2)
{
  __int64 v4; // rax
  _QWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  sub_180081C90(a1, 11, 5);
  *a1 = &Spectre::Engine::VertexBuffer::`vftable';
  v4 = sub_18001C514(40LL);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_DWORD *)(v4 + 24) = 0;
    *(_QWORD *)v4 = &Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc::`vftable';
    *(_DWORD *)(v4 + 32) = a2;
  }
  else
  {
    v4 = 0LL;
  }
  v6 = (_QWORD *)v4;
  sub_180038A14(a1 + 14, (__int64 *)&v6);
  sub_180082750(&v6);
  return a1;
}
