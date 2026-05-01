/*
 * XREFs of ?v_SplashScreenSet@UwpWindowWrapper@@EEAAXXZ @ 0x1801ADAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0___ @ 0x1801ADD70 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 */

void __fastcall UwpWindowWrapper::v_SplashScreenSet(UwpWindowWrapper *this)
{
  __m128 v1; // xmm2
  __m128 *v2; // rdi
  bool v3; // zf
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v6; // rcx
  int v7; // eax
  int v8[4]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 680));
  v2 = (__m128 *)((char *)this - 8);
  v3 = *((_BYTE *)this + 548) == 0;
  *(__m128 *)v8 = v1;
  if ( v3
    && (v2[44].m128_f32[0] != v1.m128_f32[0]
     || v2[44].m128_f32[1] != _mm_shuffle_ps(v1, v1, 85).m128_f32[0]
     || v2[44].m128_f32[2] != _mm_shuffle_ps(v1, v1, 170).m128_f32[0]
     || v2[44].m128_f32[3] != _mm_shuffle_ps(v1, v1, 255).m128_f32[0])
    && v2[18].m128_u64[1] )
  {
    v4 = _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v9, (char *)this - 8, v8);
    CurrentThreadId = GetCurrentThreadId();
    v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0___(
           v6,
           CurrentThreadId,
           v4);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1B7,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v7,
        v8[0]);
    v1 = *(__m128 *)v8;
  }
  v2[43] = v1;
}
