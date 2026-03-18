/*
 * XREFs of CHidInput_CreateInstance @ 0x140190FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z @ 0x1401B377C (--0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z.c)
 */

__int64 __fastcall CHidInput_CreateInstance(int a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 UserSessionState; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // edx
  int v8; // ecx
  int v9; // r8d

  v3 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  *(_QWORD *)(UserSessionState + 16832) = 0LL;
  v5 = Win32AllocPoolZInitImpl(256LL, 0x598uLL, 0x43486970u);
  v6 = v5;
  if ( v5 )
  {
    CBaseInput::CBaseInput(v5, 60LL, 2LL, 2LL);
    *(_DWORD *)(v6 + 1328) = 0;
    *(_QWORD *)v6 = &CHidInput::`vftable';
    *(_QWORD *)(UserSessionState + 16832) = v6;
    return *(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 16832);
  }
  return v3;
}
