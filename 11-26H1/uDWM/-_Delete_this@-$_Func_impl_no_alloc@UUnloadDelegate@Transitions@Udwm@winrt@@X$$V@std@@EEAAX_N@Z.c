/*
 * XREFs of ?_Delete_this@?$_Func_impl_no_alloc@UUnloadDelegate@Transitions@Udwm@winrt@@X$$V@std@@EEAAX_N@Z @ 0x1800DDCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc<winrt::Udwm::Transitions::UnloadDelegate,void,>::_Delete_this(
        __int64 *a1,
        char a2)
{
  __int64 *v4; // rcx

  v4 = a1 + 1;
  if ( *v4 )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(v4);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
}
