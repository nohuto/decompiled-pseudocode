/*
 * XREFs of sub_180057244 @ 0x180057244
 * Callers:
 *     sub_1800579C0 @ 0x1800579C0 (sub_1800579C0.c)
 *     sub_1800BC4A0 @ 0x1800BC4A0 (sub_1800BC4A0.c)
 *     unknown_libname_46 @ 0x1800DBEBF (unknown_libname_46.c)
 *     sub_1800E4AFD @ 0x1800E4AFD (sub_1800E4AFD.c)
 * Callees:
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180057244(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = a1[165];
  if ( v2 )
    sub_180010EC8(v2);
  sub_18000BFA4(
    (__int64)(a1 + 148),
    16LL,
    8LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  v3 = a1[141];
  if ( v3 )
    sub_180010EC8(v3);
  sub_18000BFA4(
    (__int64)(a1 + 95),
    16LL,
    15LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  v4 = a1[93];
  if ( v4 )
    sub_180010EC8(v4);
  v5 = a1[91];
  if ( v5 )
    sub_180010EC8(v5);
  v6 = a1[89];
  if ( v6 )
    sub_180010EC8(v6);
  sub_18000BFA4(
    (__int64)(a1 + 56),
    16LL,
    16LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18000BFA4(
    (__int64)(a1 + 24),
    16LL,
    16LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  return sub_18000BFA4(
           (__int64)a1,
           16LL,
           12LL,
           (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
}
