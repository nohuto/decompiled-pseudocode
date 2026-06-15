/*
 * XREFs of ?_Delete_this@?$_Func_impl_no_alloc@V_lambda_719944a900db145257baf03c12c806dc_@@JPEAUIAudioProcessingObject@@U_GUID@@I@std@@EEAAX_N@Z @ 0x18006A960
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc<_lambda_719944a900db145257baf03c12c806dc_,long,IAudioProcessingObject *,_GUID,unsigned int>::_Delete_this(
        void *a1,
        char a2)
{
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
}
