/*
 * XREFs of ?EnsureBamExemption@CProcess@@IEAAXXZ @ 0x18001580C
 * Callers:
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180014080 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 * Callees:
 *     ?CancelDeferredBamExemptionRelease@CProcess@@IEAAXXZ @ 0x1800158A0 (-CancelDeferredBamExemptionRelease@CProcess@@IEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800158F0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

void __fastcall CProcess::EnsureBamExemption(CProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  _QWORD *v3; // rsi
  __int64 v4; // rbx

  CProcess::CancelDeferredBamExemptionRelease(this);
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 536);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 536));
  v3 = (_QWORD *)((char *)this + 576);
  if ( !*((_QWORD *)this + 72) || *v3 == -1LL )
  {
    v4 = *((_QWORD *)this + 19);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v3,
      0LL);
    NtAcquireProcessActivityReference(v3, v4, 0LL);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
