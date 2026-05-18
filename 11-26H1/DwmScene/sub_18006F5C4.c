/*
 * XREFs of sub_18006F5C4 @ 0x18006F5C4
 * Callers:
 *     sub_18002A298 @ 0x18002A298 (sub_18002A298.c)
 * Callees:
 *     sub_18002A448 @ 0x18002A448 (sub_18002A448.c)
 *     sub_18006F450 @ 0x18006F450 (sub_18006F450.c)
 *     sub_18006F538 @ 0x18006F538 (sub_18006F538.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18006F5C4(_QWORD *a1)
{
  __int64 *v2; // rbx
  unsigned __int64 v3; // rcx

  *a1 = &Spectre::Engine::GpuProfilingGrapher::`vftable';
  v2 = a1 + 1;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  v3 = 0x86BCA1AF286BCA1BuLL * ((__int64)a1[2] >> 3);
  if ( v3 <= 0xF0 )
  {
    if ( v3 < 0xF0 )
    {
      if ( 0x86BCA1AF286BCA1BuLL * (v2[2] >> 3) >= 0xF0 )
        v2[1] = sub_18006F538(v2[1], 240 - v3);
      else
        sub_18006F450(v2);
    }
  }
  else
  {
    sub_18002A448(36480LL, v2[1]);
    v2[1] = 36480LL;
  }
  return a1;
}
