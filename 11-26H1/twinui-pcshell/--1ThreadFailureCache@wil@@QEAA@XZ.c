/*
 * XREFs of ??1ThreadFailureCache@wil@@QEAA@XZ @ 0x180639164
 * Callers:
 *     ??R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ @ 0x180639208 (--R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ.c)
 *     __lambda_711bfd1af15e27d1f27b55343e53885b_::operator()_::_1_::dtor$1 @ 0x180703309 (__lambda_711bfd1af15e27d1f27b55343e53885b_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 */

void __fastcall wil::ThreadFailureCache::~ThreadFailureCache(volatile signed __int32 **this)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(this + 22));
  wil::details::shared_buffer::reset(this + 20);
}
