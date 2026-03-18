/*
 * XREFs of _anonymous_namespace_::InitializeTimerGlobals @ 0x140285194
 * Callers:
 *     EditionDriverInitialize @ 0x140240B60 (EditionDriverInitialize.c)
 *     ?EditionDriverInitializeOrFault@@YAJH@Z @ 0x140284D88 (-EditionDriverInitializeOrFault@@YAJH@Z.c)
 * Callees:
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall anonymous_namespace_::InitializeTimerGlobals(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  memset_0((void *)(UserSessionState + 57588), 0, 0xFE0uLL);
  *(_DWORD *)(UserSessionState + 62680) = 32511;
  *(_DWORD *)(UserSessionState + 62684) = 43200000;
  *(_DWORD *)(UserSessionState + 62688) = 43200000;
  result = 0LL;
  *(_OWORD *)(UserSessionState + 62748) = xmmword_14035B2F0;
  *(_OWORD *)(UserSessionState + 62764) = xmmword_14035B300;
  return result;
}
