/*
 * XREFs of ?UnInitialize@CInputConfig@@SAXXZ @ 0x1400CF0EC
 * Callers:
 *     UnInitializeInputComponents @ 0x1400CEE88 (UnInitializeInputComponents.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CInputConfig@@AEAA@XZ @ 0x1401F7468 (--1CInputConfig@@AEAA@XZ.c)
 */

void __fastcall CInputConfig::UnInitialize(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  char *v5; // rbx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = *(char **)(UserSessionState + 18632);
  if ( v5 )
  {
    CInputConfig::~CInputConfig(*(CInputConfig **)(UserSessionState + 18632));
    GreDeleteFastMutex(v5);
  }
  *(_QWORD *)(W32GetUserSessionState(v4, v3) + 18632) = 0LL;
}
