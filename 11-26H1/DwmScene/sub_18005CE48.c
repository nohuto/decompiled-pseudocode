/*
 * XREFs of sub_18005CE48 @ 0x18005CE48
 * Callers:
 *     sub_18004F100 @ 0x18004F100 (sub_18004F100.c)
 * Callees:
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001BD20 @ 0x18001BD20 (sub_18001BD20.c)
 *     sub_18001D620 @ 0x18001D620 (sub_18001D620.c)
 *     sub_18004C0E0 @ 0x18004C0E0 (sub_18004C0E0.c)
 *     sub_18005C374 @ 0x18005C374 (sub_18005C374.c)
 *     sub_18005CCA0 @ 0x18005CCA0 (sub_18005CCA0.c)
 *     sub_1800D5408 @ 0x1800D5408 (sub_1800D5408.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005CE48(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax
  volatile signed __int32 *v5; // rcx

  sub_18001BD20(a1 + 528);
  sub_1800129D0(a1 + 496);
  sub_18005C374((void **)(a1 + 480), a1 + 480);
  sub_1800D5408(a1 + 472);
  v2 = *(_QWORD *)(a1 + 464);
  if ( v2 )
    sub_180010EC8(v2);
  v3 = *(_QWORD *)(a1 + 448);
  if ( v3 )
    sub_180010EC8(v3);
  sub_18005CCA0((void **)(a1 + 416));
  sub_18000BFA4(a1 + 256, 16LL, 10LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18000BFA4(a1 + 96, 16LL, 10LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_18001D620((void **)(a1 + 80));
  sub_18004C0E0((void **)(a1 + 48), a1 + 48);
  result = sub_1800129D0(a1 + 16);
  v5 = *(volatile signed __int32 **)(a1 + 8);
  if ( v5 )
    return sub_180010F00(v5);
  return result;
}
