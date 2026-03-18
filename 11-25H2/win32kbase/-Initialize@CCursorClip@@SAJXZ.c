/*
 * XREFs of ?Initialize@CCursorClip@@SAJXZ @ 0x14015B2BC
 * Callers:
 *     InitializeInputComponents @ 0x14018C900 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RegisterCoreMsgProviderPreferences @ 0x140144A70 (RegisterCoreMsgProviderPreferences.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 CCursorClip::Initialize(void)
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx

  v0 = Win32AllocPoolZInitImpl(256LL, 0x118uLL, 0x31637355u);
  v3 = 0;
  v4 = v0;
  if ( v0 )
  {
    *(_OWORD *)v0 = 0LL;
    *(_OWORD *)(v0 + 16) = 0LL;
    *(_QWORD *)(v0 + 32) = 0LL;
    *(_QWORD *)(v0 + 40) = 0LL;
    memset((void *)(v0 + 48), 0, 0xC8uLL);
    *(_DWORD *)(v4 + 248) = 0;
    *(_QWORD *)(v4 + 256) = 0LL;
    *(_DWORD *)(v4 + 264) = 0;
    *(_WORD *)(v4 + 268) = 0;
    *(_QWORD *)(v4 + 272) = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  *(_QWORD *)(W32GetUserSessionState(v2, v1) + 36240) = v4;
  if ( *(_QWORD *)(W32GetUserSessionState(v6, v5) + 36240) )
    RegisterCoreMsgProviderPreferences(
      0LL,
      0LL,
      2u,
      0LL,
      (__int64)lambda_a418699817c89276d1581a788dfe45e0_::_lambda_invoker_cdecl_);
  else
    return (unsigned int)-1073741801;
  return v3;
}
