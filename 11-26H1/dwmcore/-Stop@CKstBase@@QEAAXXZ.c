/*
 * XREFs of ?Stop@CKstBase@@QEAAXXZ @ 0x1802950BC
 * Callers:
 *     ??1CGlobalInputManager@@UEAA@XZ @ 0x180294644 (--1CGlobalInputManager@@UEAA@XZ.c)
 *     ??1CKstBase@@QEAA@XZ @ 0x180294E40 (--1CKstBase@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180150EAC (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$?9V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@0@$$T@Z @ 0x18018F3C4 (--$-9V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?SignalReset@DWM@KST@InputTraceLogging@@SAXXZ @ 0x180294F5C (-SignalReset@DWM@KST@InputTraceLogging@@SAXXZ.c)
 */

void __fastcall CKstBase::Stop(CKstBase *this)
{
  void *v2; // rdx

  InputTraceLogging::KST::DWM::SignalReset();
  if ( wil::operator!=<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((_QWORD *)this + 2) )
  {
    wil::details::SetEvent(*((wil::details **)this + 4), v2);
    WaitForSingleObject(*((HANDLE *)this + 2), 0xFFFFFFFF);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 2,
      0LL);
  }
}
