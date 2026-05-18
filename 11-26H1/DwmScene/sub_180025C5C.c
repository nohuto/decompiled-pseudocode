/*
 * XREFs of sub_180025C5C @ 0x180025C5C
 * Callers:
 *     sub_180018B60 @ 0x180018B60 (sub_180018B60.c)
 *     sub_180025FD0 @ 0x180025FD0 (sub_180025FD0.c)
 *     sub_1800BADE4 @ 0x1800BADE4 (sub_1800BADE4.c)
 *     sub_1800DBAEB @ 0x1800DBAEB (sub_1800DBAEB.c)
 *     sub_1800E4939 @ 0x1800E4939 (sub_1800E4939.c)
 * Callees:
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001850C @ 0x18001850C (sub_18001850C.c)
 *     sub_180024D50 @ 0x180024D50 (sub_180024D50.c)
 *     sub_180025B10 @ 0x180025B10 (sub_180025B10.c)
 *     sub_180025B90 @ 0x180025B90 (sub_180025B90.c)
 *     sub_180025C28 @ 0x180025C28 (sub_180025C28.c)
 *     sub_180025E1C @ 0x180025E1C (sub_180025E1C.c)
 *     sub_180027018 @ 0x180027018 (sub_180027018.c)
 *     sub_18006BBB0 @ 0x18006BBB0 (sub_18006BBB0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180025C5C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax
  volatile signed __int32 *v8; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::RenderDevice::`vftable';
  sub_180027018();
  sub_180025C28(a1 + 4096);
  sub_180025B10((_QWORD *)(a1 + 3992));
  v2 = *(_QWORD *)(a1 + 3856);
  if ( v2 )
  {
    sub_180024D50(v2, *(_QWORD *)(a1 + 3864));
    sub_18000E26C(*(void **)(a1 + 3856), (*(_QWORD *)(a1 + 3872) - *(_QWORD *)(a1 + 3856)) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)(a1 + 3856) = 0LL;
    *(_QWORD *)(a1 + 3864) = 0LL;
    *(_QWORD *)(a1 + 3872) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 3848);
  if ( v3 )
    sub_180010EC8(v3);
  sub_18000BFA4(a1 + 1280, 40LL, 64LL, (void (__fastcall *)(__int64))sub_180025B00);
  sub_18006BBB0(a1 + 1056);
  sub_18006BBB0(a1 + 832);
  sub_18006BBB0(a1 + 608);
  v4 = *(_QWORD *)(a1 + 600);
  if ( v4 )
    sub_180010EC8(v4);
  sub_180025E1C((void **)(a1 + 496));
  sub_18001850C(a1 + 288);
  v5 = *(_QWORD *)(a1 + 280);
  if ( v5 )
    sub_180010EC8(v5);
  v6 = *(_QWORD *)(a1 + 248);
  if ( v6 )
  {
    sub_1800130CC(v6, *(_QWORD *)(a1 + 256));
    sub_18000E26C(*(void **)(a1 + 248), (*(_QWORD *)(a1 + 264) - *(_QWORD *)(a1 + 248)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 248) = 0LL;
    *(_QWORD *)(a1 + 256) = 0LL;
    *(_QWORD *)(a1 + 264) = 0LL;
  }
  sub_180014244(a1 + 208);
  sub_180014244(a1 + 176);
  sub_180014244(a1 + 144);
  sub_180014244(a1 + 112);
  sub_180014244(a1 + 80);
  result = sub_180025B90(a1 + 24);
  v8 = *(volatile signed __int32 **)(a1 + 16);
  if ( v8 )
    return sub_180010F00(v8);
  return result;
}
