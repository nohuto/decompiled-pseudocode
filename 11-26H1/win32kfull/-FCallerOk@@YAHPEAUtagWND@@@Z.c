/*
 * XREFs of ?FCallerOk@@YAHPEAUtagWND@@@Z @ 0x140086128
 * Callers:
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x140085220 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     xxxSetWindowLong @ 0x140085C90 (xxxSetWindowLong.c)
 *     ?xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z @ 0x14028E3E4 (-xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1401A20C0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?CanSetWindowLong@@YA_NPEBUtagWND@@@Z @ 0x14025DA1C (-CanSetWindowLong@@YA_NPEBUtagWND@@@Z.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x14029D1AC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall FCallerOk(PETHREAD **a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rdx
  PETHREAD *v7; // rcx
  struct tagTHREADINFO *v8; // r14
  HANDLE v9; // rbx
  __int64 v10; // rdx
  UIPrivilegeIsolation *v11; // rcx
  HANDLE v12; // rbx
  __int64 v13; // rdx
  PETHREAD v14; // rcx

  v3 = 0;
  if ( (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline() )
    return CanSetWindowLong((const struct tagWND *)a1);
  v5 = PtiCurrent(v2);
  v7 = a1[2];
  v8 = v5;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v7 + 130, 0, 0) & 0xC) != 0
    && (_InterlockedCompareExchange((volatile signed __int32 *)v5 + 130, 0, 0) & 0xC) == 0 )
  {
    return 0LL;
  }
  v9 = *(HANDLE *)(W32GetUserSessionState(v7, v6) + 63536);
  if ( PsGetThreadProcessId(*a1[2]) == v9 )
  {
    v12 = *(HANDLE *)(W32GetUserSessionState(v11, v10) + 63536);
    if ( PsGetThreadProcessId(*(PETHREAD *)v8) != v12 )
      return 0LL;
  }
  if ( UIPrivilegeIsolation::Enforced(v11) || (unsigned int)IsCurrentProcessDwm() )
    return 1LL;
  v13 = *((_QWORD *)v8 + 57);
  v14 = a1[2][57];
  if ( *(_DWORD *)(v13 + 764) == *((_DWORD *)v14 + 191) && *(_DWORD *)(v13 + 768) == *((_DWORD *)v14 + 192) )
    return 1;
  return v3;
}
