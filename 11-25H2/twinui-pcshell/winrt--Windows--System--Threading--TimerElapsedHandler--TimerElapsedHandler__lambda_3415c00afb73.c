/*
 * XREFs of winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_3415c00afb736d6d54203eb8c7c58983___ @ 0x180577D00
 * Callers:
 *     ?UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18057FC10 (-UpdateLaunchSnappedBehavior@CShellSnapComponent@@AEAAXAEAV-$unique_any_t@V-$unique_storage@U-$r.c)
 * Callees:
 *     ??0resume_apartment_context@impl@winrt@@QEAA@$$QEAU012@@Z @ 0x180190D30 (--0resume_apartment_context@impl@winrt@@QEAA@$$QEAU012@@Z.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x1802921A4 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     _lambda_3415c00afb736d6d54203eb8c7c58983_::__lambda_3415c00afb736d6d54203eb8c7c58983_ @ 0x180579D94 (_lambda_3415c00afb736d6d54203eb8c7c58983_--__lambda_3415c00afb736d6d54203eb8c7c58983_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_3415c00afb736d6d54203eb8c7c58983___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD *v6; // r8
  char *v8; // [rsp+30h] [rbp+8h]

  v8 = (char *)operator new(0x28uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v8 + 8));
  v4 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(v5 + 16) = v4;
  winrt::impl::resume_apartment_context::resume_apartment_context(v5 + 24, a2 + 1);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v6 = off_18072E1B8;
  *a1 = v6;
  lambda_3415c00afb736d6d54203eb8c7c58983_::__lambda_3415c00afb736d6d54203eb8c7c58983_(a2);
  return a1;
}
