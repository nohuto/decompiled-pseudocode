/*
 * XREFs of sub_18009683C @ 0x18009683C
 * Callers:
 *     sub_180096950 @ 0x180096950 (sub_180096950.c)
 *     sub_1800970E0 @ 0x1800970E0 (sub_1800970E0.c)
 *     sub_1800DE5C5 @ 0x1800DE5C5 (sub_1800DE5C5.c)
 * Callees:
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009683C(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *a1 = &Spectre::Engine::RenderTargetState::`vftable';
  v2 = a1[54];
  if ( v2 )
    sub_180010EC8(v2);
  v3 = a1[52];
  if ( v3 )
    sub_180010EC8(v3);
  v4 = a1[50];
  if ( v4 )
    sub_180010EC8(v4);
  sub_18000BFA4(
    (__int64)(a1 + 33),
    16LL,
    8LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18000BFA4(
    (__int64)(a1 + 17),
    16LL,
    8LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  return sub_18000BFA4(
           (__int64)(a1 + 1),
           16LL,
           8LL,
           (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
}
