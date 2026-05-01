/*
 * XREFs of ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18018E830
 * Callers:
 *     ??1CQueryKnownGameList@@UEAA@XZ @ 0x18018E7AC (--1CQueryKnownGameList@@UEAA@XZ.c)
 *     _anonymous_namespace_::DeleteAndCloseFileHandle @ 0x1805EF624 (_anonymous_namespace_--DeleteAndCloseFileHandle.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(
        void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 != (void *)-1LL )
  {
    if ( v1 )
      return CloseHandle(v1);
  }
  return result;
}
