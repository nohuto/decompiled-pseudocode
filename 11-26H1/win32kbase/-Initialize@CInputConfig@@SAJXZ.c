/*
 * XREFs of ?Initialize@CInputConfig@@SAJXZ @ 0x14017FDA4
 * Callers:
 *     InitializeInputComponents @ 0x14021B770 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RegisterCoreMsgProviderPreferences @ 0x14017FE40 (RegisterCoreMsgProviderPreferences.c)
 *     ?Initialize@CEResourceLock@@QEAA_NXZ @ 0x1401B5C70 (-Initialize@CEResourceLock@@QEAA_NXZ.c)
 *     ??0CInputConfig@@AEAA@XZ @ 0x1401BDFA8 (--0CInputConfig@@AEAA@XZ.c)
 */

__int64 __fastcall CInputConfig::Initialize(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  CInputConfig *v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  CInputConfig *v8; // rbx

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  if ( !CEResourceLock::Initialize((CEResourceLock *)(UserSessionState + 18688)) )
    return 3221225495LL;
  v4 = (CInputConfig *)Win32AllocPoolZInitImpl(256LL, 0x5E8uLL, 0x496E436Fu);
  v8 = v4 ? CInputConfig::CInputConfig(v4) : 0LL;
  *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 18680) = v8;
  if ( !v8 )
    return 3221225495LL;
  RegisterCoreMsgProviderPreferences(
    6,
    0,
    1,
    0,
    (__int64)lambda_ebe346d30a668a9733c532f644f5367b_::_lambda_invoker_cdecl_);
  return 0LL;
}
