/*
 * XREFs of sub_14002FA30 @ 0x14002FA30
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14002FDD4 @ 0x14002FDD4 (sub_14002FDD4.c)
 *     sub_14002FE6C @ 0x14002FE6C (sub_14002FE6C.c)
 *     sub_14002FFB0 @ 0x14002FFB0 (sub_14002FFB0.c)
 *     sub_140045974 @ 0x140045974 (sub_140045974.c)
 *     sub_140045A08 @ 0x140045A08 (sub_140045A08.c)
 *     sub_14004ED0C @ 0x14004ED0C (sub_14004ED0C.c)
 *     sub_140052540 @ 0x140052540 (sub_140052540.c)
 *     sub_140052748 @ 0x140052748 (sub_140052748.c)
 *     sub_140052AF0 @ 0x140052AF0 (sub_140052AF0.c)
 *     sub_140054680 @ 0x140054680 (sub_140054680.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14002FA30(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // eax
  _QWORD *v9; // rdi
  _QWORD *i; // rbx
  _QWORD *j; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  _QWORD *k; // rbx
  _QWORD *v15; // rdi
  _QWORD *m; // rbx
  _QWORD v18[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v19[32]; // [rsp+30h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v21; // [rsp+88h] [rbp+38h] BYREF
  __int64 v22; // [rsp+90h] [rbp+40h] BYREF
  __int64 v23; // [rsp+98h] [rbp+48h] BYREF

  v22 = 0LL;
  v3 = sub_1400B6010(a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    sub_14000C2A8((int)retaddr, 639, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v3);
    if ( v22 )
      sub_1400B6010(v22);
    return v4;
  }
  v21 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  v23 = v22;
  sub_140054680(a1 + 184, v18, &v23);
  if ( v18[0] != *(_QWORD *)(a1 + 192) )
  {
    v5 = *(_QWORD *)(v18[0] + 24LL);
    v6 = v21;
    v21 = v5;
    if ( v5 )
      sub_1400B6010(v5);
    if ( v6 )
      sub_1400B6010(v6);
    if ( a1 != -144 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
    v7 = sub_140052748(v18, &v22, &v21);
    sub_140052540(v19, v7);
    v8 = sub_14002FFB0(v21);
    v4 = v8;
    if ( v8 >= 0 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
      v9 = *(_QWORD **)(a1 + 88);
      for ( i = (_QWORD *)*v9; i != v9; i = (_QWORD *)*i )
        sub_14002FE6C(i[6], v21);
      if ( a1 != -32 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 248));
      for ( j = *(_QWORD **)(a1 + 288); j; j = (_QWORD *)*j )
        sub_14002FDD4(j[1], v21);
      if ( a1 != -248 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 248));
      v12 = *(_QWORD *)(a1 + 296);
      if ( v12 )
        sub_14004ED0C(v12, v21);
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 312));
      v13 = *(_QWORD **)(a1 + 360);
      for ( k = (_QWORD *)*v13; k != v13; k = (_QWORD *)*k )
        sub_140045A08(k[6], v21);
      if ( a1 != -312 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 312));
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 416));
      v15 = *(_QWORD **)(a1 + 464);
      for ( m = (_QWORD *)*v15; m != v15; m = (_QWORD *)*m )
        sub_140045974(m[6], v21);
      if ( a1 != -416 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 416));
      sub_140052AF0(v19);
      if ( v21 )
        sub_1400B6010(v21);
      if ( v22 )
        sub_1400B6010(v22);
      return 0LL;
    }
    sub_14000C2A8((int)retaddr, 658, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v8);
    sub_140052AF0(v19);
    if ( v21 )
      sub_1400B6010(v21);
    if ( v22 )
      sub_1400B6010(v22);
    return v4;
  }
  sub_14000C2A8((int)retaddr, 645, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", -2147023728);
  if ( a1 != -144 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  if ( v21 )
    sub_1400B6010(v21);
  if ( v22 )
    sub_1400B6010(v22);
  return 2147943568LL;
}
