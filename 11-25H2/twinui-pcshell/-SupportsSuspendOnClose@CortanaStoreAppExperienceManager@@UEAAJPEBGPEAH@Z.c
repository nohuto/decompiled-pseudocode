/*
 * XREFs of ?SupportsSuspendOnClose@CortanaStoreAppExperienceManager@@UEAAJPEBGPEAH@Z @ 0x180399C60
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800AD16C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?SupportsSuspendOnClose@ConversationalAgentHelpers@@YA_NAEBUhstring@winrt@@@Z @ 0x1801DB860 (-SupportsSuspendOnClose@ConversationalAgentHelpers@@YA_NAEBUhstring@winrt@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaStoreAppExperienceManager::SupportsSuspendOnClose(
        CortanaStoreAppExperienceManager *this,
        const unsigned __int16 *a2,
        int *a3)
{
  const struct winrt::hstring *v4; // rdx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v8; // [rsp+48h] [rbp+20h] BYREF

  try
  {
    winrt::hstring::hstring((winrt::hstring *)&v8, a2);
    *a3 = (unsigned __int8)ConversationalAgentHelpers::SupportsSuspendOnClose((ConversationalAgentHelpers *)&v8, v4);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x26F,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                           v5);
  }
  return result;
}
