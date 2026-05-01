/*
 * XREFs of wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_____::operator_ @ 0x1805CA2B0
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x1805CC3C0 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801D7858 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801E046C (--0last_error_context@wil@@QEAA@XZ.c)
 *     _anonymous_namespace_::DeleteAndCloseFileHandle @ 0x1805CB6B8 (_anonymous_namespace_--DeleteAndCloseFileHandle.c)
 */

void **__fastcall wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle_____::operator_(
        void **a1,
        void **a2)
{
  void *v4; // rsi
  void *v5; // rbp
  char v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 != a2 )
  {
    v4 = *a1;
    v5 = *a2;
    if ( (char *)*a1 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)&v7);
      anonymous_namespace_::DeleteAndCloseFileHandle(v4);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v7);
    }
    *a1 = v5;
    *a2 = (void *)-1LL;
  }
  return a1;
}
