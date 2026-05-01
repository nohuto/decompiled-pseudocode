/*
 * XREFs of ?v_SplashScreenSet@UwpWindowWrapper@@EEAAXXZ @ 0x1801B6CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0___ @ 0x1801B6F28 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0.c)
 */

void __fastcall UwpWindowWrapper::v_SplashScreenSet(UwpWindowWrapper *this)
{
  __m128 v1; // xmm2
  __m128 *v2; // rbx
  bool v3; // zf
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __m128 *v8; // [rsp+28h] [rbp-20h]
  __m128 v9; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 696));
  v2 = (__m128 *)((char *)this - 8);
  v3 = *((_BYTE *)this + 564) == 0;
  v9 = v1;
  if ( v3
    && (v2[45].m128_f32[0] != v1.m128_f32[0]
     || v2[45].m128_f32[1] != _mm_shuffle_ps(v1, v1, 85).m128_f32[0]
     || v2[45].m128_f32[2] != _mm_shuffle_ps(v1, v1, 170).m128_f32[0]
     || v2[45].m128_f32[3] != _mm_shuffle_ps(v1, v1, 255).m128_f32[0])
    && v2[18].m128_u64[1] )
  {
    *(_QWORD *)v7 = (char *)this - 8;
    v8 = &v9;
    CurrentThreadId = GetCurrentThreadId();
    v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0___(
           v5,
           CurrentThreadId,
           v7);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1B7,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v6,
        v7[0]);
    v1 = v9;
  }
  v2[44] = v1;
}
