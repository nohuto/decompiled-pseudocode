/*
 * XREFs of sub_18008009C @ 0x18008009C
 * Callers:
 *     sub_18005E3C0 @ 0x18005E3C0 (sub_18005E3C0.c)
 * Callees:
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180027AF0 @ 0x180027AF0 (sub_180027AF0.c)
 *     sub_180078020 @ 0x180078020 (sub_180078020.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008009C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *v8; // rcx
  volatile signed __int32 *v9; // rcx

  sub_18000BFA4(a1 + 496, 16LL, 10LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_180027AF0((void **)(a1 + 480));
  sub_18000BFA4(a1 + 384, 16LL, 6LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18000BFA4(a1 + 192, 32LL, 6LL, (void (__fastcall *)(__int64))sub_180011E30);
  v2 = *(_QWORD *)(a1 + 184);
  if ( v2 )
    sub_180010EC8(v2);
  result = sub_180078020(a1 + 144);
  v4 = *(_QWORD *)(a1 + 104);
  if ( v4 )
    result = sub_180010EC8(v4);
  v5 = *(_QWORD *)(a1 + 88);
  if ( v5 )
    result = sub_180010EC8(v5);
  v6 = *(_QWORD *)(a1 + 72);
  if ( v6 )
    result = sub_180010EC8(v6);
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
    result = sub_180010EC8(v7);
  v8 = *(void **)(a1 + 24);
  if ( v8 )
  {
    result = sub_18000E26C(v8, (*(_QWORD *)(a1 + 40) - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v9 = *(volatile signed __int32 **)(a1 + 8);
  if ( v9 )
    return sub_180010F00(v9);
  return result;
}
