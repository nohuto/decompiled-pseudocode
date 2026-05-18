/*
 * XREFs of sub_1800BF218 @ 0x1800BF218
 * Callers:
 *     sub_1800BF920 @ 0x1800BF920 (sub_1800BF920.c)
 *     sub_1800C5A60 @ 0x1800C5A60 (sub_1800C5A60.c)
 *     sub_1800CCD60 @ 0x1800CCD60 (sub_1800CCD60.c)
 *     sub_1800CCEE0 @ 0x1800CCEE0 (sub_1800CCEE0.c)
 *     sub_1800CE050 @ 0x1800CE050 (sub_1800CE050.c)
 * Callees:
 *     sub_1800160E4 @ 0x1800160E4 (sub_1800160E4.c)
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 */

_QWORD *__fastcall sub_1800BF218(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::CommandList `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::CommandListD3D11 `RTTI Type Descriptor',
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
