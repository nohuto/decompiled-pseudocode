/*
 * XREFs of ??1SharedTargetWithHandle@SystemCursors@@QEAA@XZ @ 0x1800FA9A4
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VSharedTargetWithHandle@SystemCursors@@@std@@EEAAXXZ @ 0x1800FD160 (-_Destroy@-$_Ref_count_obj2@VSharedTargetWithHandle@SystemCursors@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180092180 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 */

void __fastcall SystemCursors::SharedTargetWithHandle::~SharedTargetWithHandle(
        SystemCursors::SharedTargetWithHandle *this)
{
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 2);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 1);
}
