/*
 * XREFs of CHidInput_CreateInstance @ 0x140153190
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z @ 0x140152C60 (--0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z.c)
 */

__int64 __fastcall CHidInput_CreateInstance(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 UserSessionState; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  *(_QWORD *)(UserSessionState + 16840) = 0LL;
  v4 = Win32AllocPoolZInitImpl(256LL, 0x5A0uLL, 0x43486970u);
  v5 = v4;
  if ( v4 )
  {
    CBaseInput::CBaseInput(v4, 60, 2u, 2);
    *(_DWORD *)(v5 + 1336) = 0;
    *(_QWORD *)v5 = &CHidInput::`vftable';
    *(_QWORD *)(UserSessionState + 16840) = v5;
    return *(_QWORD *)(W32GetUserSessionState(v7, v6) + 16840);
  }
  return v2;
}
