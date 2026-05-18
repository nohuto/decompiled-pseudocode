/*
 * XREFs of sub_1800C52A0 @ 0x1800C52A0
 * Callers:
 *     sub_1800C5A60 @ 0x1800C5A60 (sub_1800C5A60.c)
 *     sub_1800C5DF0 @ 0x1800C5DF0 (sub_1800C5DF0.c)
 *     sub_1800C68A0 @ 0x1800C68A0 (sub_1800C68A0.c)
 *     sub_1800C8130 @ 0x1800C8130 (sub_1800C8130.c)
 *     sub_1800C8650 @ 0x1800C8650 (sub_1800C8650.c)
 *     sub_1800C8CD8 @ 0x1800C8CD8 (sub_1800C8CD8.c)
 *     sub_1800CD010 @ 0x1800CD010 (sub_1800CD010.c)
 *     sub_1800CD210 @ 0x1800CD210 (sub_1800CD210.c)
 * Callees:
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800C52A0(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::RenderDevice `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::RenderDeviceD3D11 `RTTI Type Descriptor',
         0);
  if ( v4 )
  {
    *a1 = v4;
    a1[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
