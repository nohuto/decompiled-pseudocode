/*
 * XREFs of ?Initialize@CInputConfig@@SAJXZ @ 0x1401448FC
 * Callers:
 *     InitializeInputComponents @ 0x14018C900 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RegisterCoreMsgProviderPreferences @ 0x140144A70 (RegisterCoreMsgProviderPreferences.c)
 *     ??0CInputConfig@@AEAA@XZ @ 0x14019EAAC (--0CInputConfig@@AEAA@XZ.c)
 *     ?Initialize@CEResourceLock@@QEAA_NXZ @ 0x1401F788C (-Initialize@CEResourceLock@@QEAA_NXZ.c)
 */

__int64 __fastcall CInputConfig::Initialize(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  CInputConfig *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  CInputConfig *v6; // rbx

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !CEResourceLock::Initialize((CEResourceLock *)(UserSessionState + 18640)) )
    return 3221225495LL;
  v3 = (CInputConfig *)Win32AllocPoolZInitImpl(256LL, 0x5E8uLL, 0x496E436Fu);
  v6 = v3 ? CInputConfig::CInputConfig(v3) : 0LL;
  *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18632) = v6;
  if ( !v6 )
    return 3221225495LL;
  RegisterCoreMsgProviderPreferences(
    6,
    0,
    1,
    0,
    (__int64)lambda_ebe346d30a668a9733c532f644f5367b_::_lambda_invoker_cdecl_);
  return 0LL;
}
