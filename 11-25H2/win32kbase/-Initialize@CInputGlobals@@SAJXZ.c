/*
 * XREFs of ?Initialize@CInputGlobals@@SAJXZ @ 0x14014A5E0
 * Callers:
 *     InitializeInputComponents @ 0x14018C900 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0CInputGlobals@@AEAA@XZ @ 0x14014A64C (--0CInputGlobals@@AEAA@XZ.c)
 */

__int64 CInputGlobals::Initialize(void)
{
  CInputGlobals *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  CInputGlobals *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v0 = (CInputGlobals *)Win32AllocPoolZInitImpl(256LL, 0x98uLL, 0x67697355u);
  v3 = 0LL;
  if ( v0 )
    v3 = CInputGlobals::CInputGlobals(v0);
  *(_QWORD *)(W32GetUserSessionState(v2, v1) + 3056) = v3;
  return *(_QWORD *)(W32GetUserSessionState(v5, v4) + 3056) == 0LL ? 0xC0000017 : 0;
}
