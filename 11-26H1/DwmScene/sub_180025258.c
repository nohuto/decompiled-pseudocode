/*
 * XREFs of sub_180025258 @ 0x180025258
 * Callers:
 *     sub_180024C48 @ 0x180024C48 (sub_180024C48.c)
 *     sub_1800587B0 @ 0x1800587B0 (sub_1800587B0.c)
 * Callees:
 *     sub_1800160E4 @ 0x1800160E4 (sub_1800160E4.c)
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 */

_QWORD *__fastcall sub_180025258(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::Camera `RTTI Type Descriptor',
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
