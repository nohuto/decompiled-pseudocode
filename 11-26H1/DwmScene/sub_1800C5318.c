/*
 * XREFs of sub_1800C5318 @ 0x1800C5318
 * Callers:
 *     sub_1800C63E0 @ 0x1800C63E0 (sub_1800C63E0.c)
 *     sub_1800C8130 @ 0x1800C8130 (sub_1800C8130.c)
 *     sub_1800C8650 @ 0x1800C8650 (sub_1800C8650.c)
 * Callees:
 *     sub_1800160E4 @ 0x1800160E4 (sub_1800160E4.c)
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 */

_QWORD *__fastcall sub_1800C5318(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::DeviceTexture `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::TextureD3D11 `RTTI Type Descriptor',
         0);
  if ( v4 )
  {
    sub_1800160E4(a1, (__int64)a2, v4);
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
