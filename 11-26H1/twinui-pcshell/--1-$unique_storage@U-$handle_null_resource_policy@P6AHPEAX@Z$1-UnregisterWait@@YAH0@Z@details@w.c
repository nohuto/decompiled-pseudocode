/*
 * XREFs of ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?UnregisterWait@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180660330
 * Callers:
 *     ??1ProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18066035C (--1ProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int UnregisterWait(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int UnregisterWait(void *)>>(
        void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
  {
    if ( v1 != (void *)-1LL )
      return UnregisterWait(v1);
  }
  return result;
}
