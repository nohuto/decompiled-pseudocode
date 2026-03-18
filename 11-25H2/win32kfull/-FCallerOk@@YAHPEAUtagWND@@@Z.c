/*
 * XREFs of ?FCallerOk@@YAHPEAUtagWND@@@Z @ 0x1402DE194
 * Callers:
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x14017E0B8 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     xxxSetWindowLong @ 0x140180294 (xxxSetWindowLong.c)
 *     ?xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z @ 0x1402DE2B8 (-xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x14019D61C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1402771F4 (Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CanSetWindowLong@@YA_NPEBUtagWND@@@Z @ 0x1402DE0E8 (-CanSetWindowLong@@YA_NPEBUtagWND@@@Z.c)
 */

__int64 __fastcall FCallerOk(PETHREAD **a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // edi
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rdx
  PETHREAD *v8; // rcx
  struct tagTHREADINFO *v9; // r14
  HANDLE v10; // rbx
  __int64 v11; // rdx
  UIPrivilegeIsolation *v12; // rcx
  HANDLE v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  PETHREAD v16; // rcx

  v4 = 0;
  if ( (unsigned int)Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline() )
    return CanSetWindowLong((const struct tagWND *)a1, v2);
  v6 = PtiCurrent(v3, v2);
  v8 = a1[2];
  v9 = v6;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v8 + 132, 0, 0) & 0xC) != 0
    && (_InterlockedCompareExchange((volatile signed __int32 *)v6 + 132, 0, 0) & 0xC) == 0 )
  {
    return 0LL;
  }
  v10 = *(HANDLE *)(W32GetUserSessionState(v8, v7) + 63544);
  if ( PsGetThreadProcessId(*a1[2]) == v10 )
  {
    v13 = *(HANDLE *)(W32GetUserSessionState(v12, v11) + 63544);
    if ( PsGetThreadProcessId(*(PETHREAD *)v9) != v13 )
      return 0LL;
  }
  if ( UIPrivilegeIsolation::Enforced(v12) || (unsigned int)IsCurrentProcessDwm(v14) )
    return 1LL;
  v15 = *((_QWORD *)v9 + 58);
  v16 = a1[2][58];
  if ( *(_DWORD *)(v15 + 764) == *((_DWORD *)v16 + 191) && *(_DWORD *)(v15 + 768) == *((_DWORD *)v16 + 192) )
    return 1;
  return v4;
}
