/*
 * XREFs of sub_18008F3D0 @ 0x18008F3D0
 * Callers:
 *     sub_18006B814 @ 0x18006B814 (sub_18006B814.c)
 *     sub_18006BA64 @ 0x18006BA64 (sub_18006BA64.c)
 * Callees:
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180025874 @ 0x180025874 (sub_180025874.c)
 *     sub_18008F0C0 @ 0x18008F0C0 (sub_18008F0C0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008F3D0(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx

  sub_18008F0C0((__int64 *)a1, *(char **)a2, *(char **)(a2 + 8));
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  sub_180012C40((_QWORD *)(a1 + 32), (_QWORD *)(a2 + 32));
  sub_180025874(a1 + 48);
  sub_180012AC4(v4);
  Mtx_unlock((_Mtx_t)(a1 + 48));
  return a1;
}
