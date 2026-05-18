/*
 * XREFs of sub_18004D3C4 @ 0x18004D3C4
 * Callers:
 *     sub_180037C30 @ 0x180037C30 (sub_180037C30.c)
 * Callees:
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001BD20 @ 0x18001BD20 (sub_18001BD20.c)
 *     sub_18001D620 @ 0x18001D620 (sub_18001D620.c)
 *     sub_180027AF0 @ 0x180027AF0 (sub_180027AF0.c)
 *     sub_18004D138 @ 0x18004D138 (sub_18004D138.c)
 *     sub_18004D168 @ 0x18004D168 (sub_18004D168.c)
 *     sub_18004D198 @ 0x18004D198 (sub_18004D198.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004D3C4(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax
  volatile signed __int32 *v5; // rcx

  sub_18001BD20(a1 + 18664);
  v2 = *(_QWORD *)(a1 + 18656);
  if ( v2 )
    sub_180010EC8(v2);
  v3 = *(_QWORD *)(a1 + 18640);
  if ( v3 )
    sub_180010EC8(v3);
  sub_180027AF0((void **)(a1 + 18608));
  sub_18004D168((void **)(a1 + 18592));
  sub_18004D138((void **)(a1 + 18576));
  sub_18004D198((void **)(a1 + 18560));
  sub_1800129D0(a1 + 18528);
  sub_1800129D0(a1 + 18496);
  sub_18000BFA4(a1 + 2104, 32LL, 512LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18001D620((void **)(a1 + 2088));
  sub_18000BFA4(a1 + 32, 32LL, 64LL, (void (__fastcall *)(__int64))sub_180011E30);
  result = sub_18001D620((void **)(a1 + 16));
  v5 = *(volatile signed __int32 **)(a1 + 8);
  if ( v5 )
    return sub_180010F00(v5);
  return result;
}
