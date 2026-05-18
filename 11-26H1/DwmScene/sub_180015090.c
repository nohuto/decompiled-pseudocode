/*
 * XREFs of sub_180015090 @ 0x180015090
 * Callers:
 *     sub_180014ED4 @ 0x180014ED4 (sub_180014ED4.c)
 *     sub_180049E40 @ 0x180049E40 (sub_180049E40.c)
 * Callees:
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_180015090(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::MeshInstance `RTTI Type Descriptor',
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
