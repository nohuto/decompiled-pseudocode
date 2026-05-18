/*
 * XREFs of sub_1800601DC @ 0x1800601DC
 * Callers:
 *     sub_18005F6C4 @ 0x18005F6C4 (sub_18005F6C4.c)
 *     sub_180086880 @ 0x180086880 (sub_180086880.c)
 * Callees:
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800601DC(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::ShadowMapCamera `RTTI Type Descriptor',
         0);
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v4 )
  {
    v5 = a2[1];
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    *a1 = v4;
    a1[1] = a2[1];
  }
  return a1;
}
