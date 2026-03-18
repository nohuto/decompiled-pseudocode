/*
 * XREFs of ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18013223C
 * Callers:
 *     ?WaitForWork@CScheduler@@QEAAXPEAUIMessageLoopExtensions@@@Z @ 0x18002F990 (-WaitForWork@CScheduler@@QEAAXPEAUIMessageLoopExtensions@@@Z.c)
 *     ?StartWorkerThread@CComputeScribbleScheduler@@AEAAJXZ @ 0x18025D220 (-StartWorkerThread@CComputeScribbleScheduler@@AEAAJXZ.c)
 *     ?Start@CKstBase@@AEAAJPEBG@Z @ 0x180294F94 (-Start@CKstBase@@AEAAJPEBG@Z.c)
 *     ??4DDisplayTaskPoolResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x18029D19C (--4DDisplayTaskPoolResources@@QEAAAEAU0@$$QEAU0@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

_QWORD *__fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
        _QWORD *a1,
        _QWORD *a2)
{
  if ( a1 != a2 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      a1,
      *a2);
    *a2 = 0LL;
  }
  return a1;
}
