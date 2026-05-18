/*
 * XREFs of sub_1800961F4 @ 0x1800961F4
 * Callers:
 *     sub_1800962E0 @ 0x1800962E0 (sub_1800962E0.c)
 *     sub_1800970E0 @ 0x1800970E0 (sub_1800970E0.c)
 *     sub_1800DE57D @ 0x1800DE57D (sub_1800DE57D.c)
 * Callees:
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800961F4(_QWORD *a1)
{
  *a1 = &Spectre::Engine::VertexBufferState::`vftable';
  sub_18000BFA4(
    (__int64)(a1 + 61),
    16LL,
    15LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18000BFA4(
    (__int64)(a1 + 31),
    16LL,
    15LL,
    (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  return sub_18000BFA4(
           (__int64)(a1 + 1),
           16LL,
           15LL,
           (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
}
