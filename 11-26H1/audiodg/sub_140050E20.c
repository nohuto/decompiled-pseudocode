/*
 * XREFs of sub_140050E20 @ 0x140050E20
 * Callers:
 *     sub_140051F3C @ 0x140051F3C (sub_140051F3C.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_1400382A0 @ 0x1400382A0 (sub_1400382A0.c)
 *     sub_14004846C @ 0x14004846C (sub_14004846C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140050E20(__int64 a1, _WORD *a2)
{
  HRESULT v3; // ebx
  int v4; // edx
  __int64 v6; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  sub_1400382A0(&v8, a2);
  sub_14004846C((void **)(a1 + 96), &v8);
  sub_14001D96C(&v8);
  if ( !*(_QWORD *)(a1 + 96) )
  {
    v3 = -2147024882;
    v4 = 120;
LABEL_3:
    sub_14000C2A8(
      (int)retaddr,
      v4,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoenvironmentnotificationshandler.cpp",
      v3);
    return (unsigned int)v3;
  }
  v6 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( v6 )
    sub_1400B6010(v6);
  v3 = PSCreateMemoryPropertyStore(&stru_1400C7880, (void **)(a1 + 40));
  if ( v3 < 0 )
  {
    v4 = 122;
    goto LABEL_3;
  }
  return 0LL;
}
