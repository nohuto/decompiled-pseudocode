/*
 * XREFs of sub_1800369D4 @ 0x1800369D4
 * Callers:
 *     sub_180033900 @ 0x180033900 (sub_180033900.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_18001FF74 @ 0x18001FF74 (sub_18001FF74.c)
 *     sub_180020074 @ 0x180020074 (sub_180020074.c)
 *     sub_180024D18 @ 0x180024D18 (sub_180024D18.c)
 *     sub_18002D7EC @ 0x18002D7EC (sub_18002D7EC.c)
 *     sub_180030C74 @ 0x180030C74 (sub_180030C74.c)
 *     sub_18003197C @ 0x18003197C (sub_18003197C.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_180033D5C @ 0x180033D5C (sub_180033D5C.c)
 *     sub_180034028 @ 0x180034028 (sub_180034028.c)
 *     sub_180034428 @ 0x180034428 (sub_180034428.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800369D4(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // ecx
  float v8; // xmm0_4
  float v9; // xmm1_4
  __int64 v10; // r14
  unsigned int v12; // eax
  __int64 v13; // [rsp+40h] [rbp-79h] BYREF
  volatile signed __int32 *v14; // [rsp+48h] [rbp-71h]
  __int64 v15; // [rsp+50h] [rbp-69h] BYREF
  __int64 v16; // [rsp+58h] [rbp-61h]
  __int64 v17; // [rsp+60h] [rbp-59h] BYREF
  __int64 v18; // [rsp+68h] [rbp-51h]
  __int64 v19[4]; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v20[8]; // [rsp+90h] [rbp-29h] BYREF
  _QWORD v21[4]; // [rsp+D0h] [rbp+17h] BYREF

  v2 = sub_180012C40(&v15, (_QWORD *)(a1 + 464));
  sub_18001FF74(
    v20,
    v2,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    640,
    (__int64)"UpdateFrameTime",
    (__int64)"UpdateFrameTime");
  sub_180011CC4(v21, "UpdateFrameTime");
  v3 = sub_180033D5C(a1, &v17);
  sub_1800162D0(&v13, v3);
  sub_180030C74(v19, (__int64)&v13);
  if ( v14 )
    sub_180010F00(v14);
  if ( v18 )
    sub_180010EC8(v18);
  sub_1800129D0((__int64)v21);
  sub_180034028((__int64)&v15, a1);
  if ( v15 )
    v4 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 328LL))(v15, &v13);
  else
    v4 = 0x8000000000000000uLL;
  v5 = *(_QWORD *)(a1 + 928);
  if ( v5 == 0x8000000000000000uLL || v4 == 0x8000000000000000uLL )
    v6 = 0LL;
  else
    v6 = v4 - v5;
  v7 = *(_DWORD *)(a1 + 960);
  if ( v7 )
  {
    if ( v7 == 1 )
      *(_DWORD *)(a1 + 936) = *(_DWORD *)(a1 + 956);
  }
  else
  {
    v8 = sub_18002D7EC(v6);
    *(float *)(a1 + 936) = v8;
    v9 = *(float *)(a1 + 952);
    if ( v8 > v9 )
      *(float *)(a1 + 936) = v9;
  }
  v10 = sub_180033D14(a1, 1);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801C96D8, 0LL)
    || (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1801C97F8, 0LL) )
  {
    *(float *)(a1 + 4LL * *(unsigned int *)(a1 + 1072) + 992) = sub_180024D18(v6);
    *(_DWORD *)(a1 + 1072) = (*(_DWORD *)(a1 + 1072) + 1) % 0x14u;
    v12 = *(_DWORD *)(a1 + 1076) + 1;
    if ( v12 > 0x14 )
      v12 = 20;
    *(_DWORD *)(a1 + 1076) = v12;
    sub_180034428();
  }
  *(_QWORD *)(a1 + 928) = v4;
  *(_DWORD *)(a1 + 368) = *(_DWORD *)(a1 + 936);
  if ( v16 )
    sub_180010EC8(v16);
  sub_18003197C((__int64)v19);
  return sub_180020074((__int64)v20);
}
