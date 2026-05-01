/*
 * XREFs of ?GetUserAssistWorker@UserAssistImpl@@YAPEAUIShellUserAssist@@AEBU_GUID@@@Z @ 0x1802A1784
 * Callers:
 *     ?GetCachedUserAssist@UserAssistImpl@@YAJPEAPEAUIShellUserAssist@@@Z @ 0x1802A16EC (-GetCachedUserAssist@UserAssistImpl@@YAJPEAPEAUIShellUserAssist@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IShellUserAssist *__fastcall UserAssistImpl::GetUserAssistWorker(UserAssistImpl *this, const struct _GUID *a2)
{
  struct IShellUserAssist *result; // rax
  signed __int64 v3; // rcx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = (__int64)this;
  result = UserAssistImpl::g_cachedUserAssist;
  if ( !UserAssistImpl::g_cachedUserAssist )
  {
    v4 = 0LL;
    if ( CoCreateInstance(
           &GUID_dd313e04_feff_11d1_8ecd_0000f87a470c,
           0LL,
           0x403u,
           &GUID_49b36d57_5fd2_45a7_981b_06028d577a47,
           (LPVOID *)&v4) < 0 )
    {
      v3 = -1LL;
      v4 = -1LL;
    }
    else
    {
      SHPinDllOfCLSID(&GUID_dd313e04_feff_11d1_8ecd_0000f87a470c);
      v3 = v4;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&UserAssistImpl::g_cachedUserAssist, v3, 0LL)
      && v4 != -1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    result = UserAssistImpl::g_cachedUserAssist;
  }
  if ( result == (struct IShellUserAssist *)-1LL )
    return 0LL;
  return result;
}
