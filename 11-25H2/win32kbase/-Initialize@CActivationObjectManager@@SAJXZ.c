/*
 * XREFs of ?Initialize@CActivationObjectManager@@SAJXZ @ 0x140144994
 * Callers:
 *     InitializeInputComponents @ 0x14018C900 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RegisterCoreMsgProviderPreferences @ 0x140144A70 (RegisterCoreMsgProviderPreferences.c)
 */

__int64 __fastcall CActivationObjectManager::Initialize(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  _QWORD *v3; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = (_QWORD *)Win32AllocPoolZInitImpl(256LL, 0x28uLL, 0x6D676155u);
  if ( v3 )
  {
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[4] = 0LL;
    *(_QWORD *)(ExActivationObjectType + 104LL) = 80LL;
    *(_DWORD *)(ExActivationObjectType + 92LL) = 983043;
    *(_DWORD *)(ExActivationObjectType + 76LL) = 131073;
    *(_DWORD *)(ExActivationObjectType + 80LL) = 131074;
    *(_DWORD *)(ExActivationObjectType + 84LL) = 0x20000;
    *(_DWORD *)(ExActivationObjectType + 88LL) = 983043;
    *(_BYTE *)(ExActivationObjectType + 66LL) |= 0x10u;
    *v3 = 0LL;
    v3[1] = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *(_QWORD *)(UserSessionState + 18864) = v3;
  if ( v3 )
    RegisterCoreMsgProviderPreferences(
      10,
      1,
      2,
      (_DWORD)v3,
      (__int64)&lambda_e0b5bc6a6e53c9aba0ac2786547e6048_::_lambda_invoker_cdecl_);
  return *(_QWORD *)(UserSessionState + 18864) == 0LL ? 0xC0000017 : 0;
}
