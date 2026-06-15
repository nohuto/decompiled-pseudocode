/*
 * XREFs of std::_Func_impl_no_alloc__lambda_cdb0f08b28984f73e7eac4a3e56158cb__void_::_Do_call @ 0x1800D6390
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18007B7DC (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_cdb0f08b28984f73e7eac4a3e56158cb__void_::_Do_call(
        __int64 a1,
        void *a2)
{
  wil::details::ResetEvent(*(wil::details **)(*(_QWORD *)(a1 + 8) + 336LL), a2);
  CAudioStream::PublishAudioEffects(*(CAudioStream **)(a1 + 8));
}
