/*
 * XREFs of ?SetPositioningAnchorRect@XamlLauncherState@@UEAAJUtagRECT@@0@Z @ 0x1802A4A80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall XamlLauncherState::SetPositioningAnchorRect(
        XamlLauncherState *this,
        struct tagRECT *a2,
        __m128i *a3)
{
  __int64 v3; // r11
  __m128i v4; // xmm1
  __int64 v5; // r8
  __int64 (__fastcall *v6)(__int64, __int128 *, __int128 *); // r10
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int128 v9; // xmm2
  __int128 v10; // xmm1
  __int128 v12; // [rsp+20h] [rbp-20h] BYREF
  __int128 v13; // [rsp+30h] [rbp-10h] BYREF

  v3 = *((_QWORD *)this + 7);
  v4 = *a3;
  v5 = a3->m128i_i64[0];
  v4.m128i_i64[0] = _mm_srli_si128(v4, 8).m128i_u64[0];
  v6 = *(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v3 + 64LL);
  *(float *)&v12 = (float)(int)v5;
  *((float *)&v12 + 1) = (float)SHIDWORD(v5);
  *((float *)&v12 + 2) = (float)(v4.m128i_i32[0] - v5);
  v7 = *(_QWORD *)&a2->left;
  v8 = *(_QWORD *)&a2->right;
  *((float *)&v12 + 3) = (float)(v4.m128i_i32[1] - HIDWORD(v5));
  v9 = v12;
  *(float *)&v12 = (float)(int)v7;
  *((float *)&v12 + 1) = (float)SHIDWORD(v7);
  *((float *)&v12 + 2) = (float)(v8 - v7);
  *((float *)&v12 + 3) = (float)(HIDWORD(v8) - HIDWORD(v7));
  v10 = v12;
  v12 = v9;
  v13 = v10;
  return v6(v3, &v13, &v12);
}
