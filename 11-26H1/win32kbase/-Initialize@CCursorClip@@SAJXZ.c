/*
 * XREFs of ?Initialize@CCursorClip@@SAJXZ @ 0x14019B430
 * Callers:
 *     InitializeInputComponents @ 0x14021B770 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RegisterCoreMsgProviderPreferences @ 0x14017FE40 (RegisterCoreMsgProviderPreferences.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 CCursorClip::Initialize(void)
{
  __int64 v0; // rax
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  unsigned int v4; // ebx
  __int64 v5; // rdi
  int v6; // edx
  int v7; // ecx
  int v8; // r8d

  v0 = Win32AllocPoolZInitImpl(256LL, 0x118uLL, 0x31637355u);
  v4 = 0;
  v5 = v0;
  if ( v0 )
  {
    *(_OWORD *)v0 = 0LL;
    *(_OWORD *)(v0 + 16) = 0LL;
    *(_QWORD *)(v0 + 32) = 0LL;
    *(_QWORD *)(v0 + 40) = 0LL;
    memset((void *)(v0 + 48), 0, 0xC8uLL);
    *(_DWORD *)(v5 + 248) = 0;
    *(_QWORD *)(v5 + 256) = 0LL;
    *(_DWORD *)(v5 + 264) = 0;
    *(_WORD *)(v5 + 268) = 0;
    *(_QWORD *)(v5 + 272) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  *(_QWORD *)(W32GetUserSessionState(v2, v1, v3) + 36272) = v5;
  if ( *(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 36272) )
    RegisterCoreMsgProviderPreferences(
      0,
      0,
      2u,
      0LL,
      (__int64)lambda_a418699817c89276d1581a788dfe45e0_::_lambda_invoker_cdecl_);
  else
    return (unsigned int)-1073741801;
  return v4;
}
