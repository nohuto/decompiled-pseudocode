/*
 * XREFs of ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x1800BEFC4
 * Callers:
 *     ?UpdateState@MPCCursorManager@@QEAAXXZ @ 0x1800BF0D8 (-UpdateState@MPCCursorManager@@QEAAXXZ.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000DE08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A1010 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z @ 0x1800BEE50 (-MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z.c)
 */

void __fastcall MPCCursorManager::UpdateMouseBinding(MPCCursorManager *this)
{
  struct MPCHolographicInputManager *Instance; // rax
  _BYTE *v3; // rdi
  char v4; // bl
  bool v5; // dl
  unsigned __int8 v6; // zf
  char v7; // al
  const char *v8; // r9
  const char *v9; // r9
  ISMTracing *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Instance = MPCHolographicInputManager::GetInstance();
  v3 = (char *)this + 66;
  v4 = *((_BYTE *)this + 66);
  v5 = (*((_BYTE *)Instance + 3664) & 1) == 0;
  v6 = *((_BYTE *)this + 56) == 0;
  *((_BYTE *)this + 65) = v5;
  if ( v6 || !v5 )
  {
    if ( !v4 )
      goto LABEL_15;
    if ( !(unsigned int)NtMITDisableMouseIntercept() )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x140,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
        v9);
    *v3 = 0;
    goto LABEL_13;
  }
  v7 = v4;
  if ( !v4 )
  {
    if ( !(unsigned int)NtMITEnableMouseIntercept(1LL) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x13A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
        v8);
    *v3 = 1;
    v7 = 1;
  }
  if ( v4 != v7 )
  {
LABEL_13:
    if ( ISMTracing::IsEnabled() )
    {
      ISMTracing::Instance();
      ISMTracing::MPCCursorManager_MouseInterceptUpdate_(
        v10,
        (const bool *)this + 66,
        (const bool *)this + 56,
        (const bool *)this + 65);
    }
  }
LABEL_15:
  v6 = *v3 == 0;
  *((_DWORD *)this + 8) = 0;
  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  MPCCursorManager::UpdateCursorVisibility(this, v6, 1u, 1);
}
