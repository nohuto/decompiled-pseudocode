/*
 * XREFs of sub_180049850 @ 0x180049850
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180026A6C @ 0x180026A6C (sub_180026A6C.c)
 *     sub_18004B290 @ 0x18004B290 (sub_18004B290.c)
 *     sub_18005DA8C @ 0x18005DA8C (sub_18005DA8C.c)
 *     sub_1800D3F84 @ 0x1800D3F84 (sub_1800D3F84.c)
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180049850(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int128 v15; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-20h]
  __int64 v18; // [rsp+58h] [rbp-18h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h]

  v6 = _RTDynamicCast(
         *a3,
         0LL,
         &Spectre::Engine::RendererResource `RTTI Type Descriptor',
         &Spectre::Engine::Material `RTTI Type Descriptor',
         0);
  if ( v6 )
  {
    v7 = a3[1];
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    *(_QWORD *)&v15 = v6;
    v8 = a3[1];
    *((_QWORD *)&v15 + 1) = v8;
  }
  else
  {
    v15 = 0LL;
    v8 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    v6 = 0LL;
  }
  v9 = sub_180012C40(&v16, &v15);
  sub_18004B290(v10, v9);
  v11 = (_QWORD *)sub_180026A6C(v6, &v18);
  v12 = (_QWORD *)sub_18005DA8C(*v11, &v16);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v12 + 72LL))(
    *v12,
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(a1 + 16));
  if ( v17 )
    sub_180010EC8(v17);
  if ( v19 )
    sub_180010EC8(v19);
  sub_1800D3F84(a2);
  if ( v8 )
    sub_180010EC8(v8);
  v13 = a3[1];
  if ( v13 )
    sub_180010EC8(v13);
  return a2;
}
