/*
 * XREFs of ?Initialize@CursorApiRouter@@SAJXZ @ 0x1402DBEF0
 * Callers:
 *     EditionDriverInitialize @ 0x140240B60 (EditionDriverInitialize.c)
 *     ?EditionDriverInitializeOrFault@@YAJH@Z @ 0x140284D88 (-EditionDriverInitializeOrFault@@YAJH@Z.c)
 * Callees:
 *     ??0CursorApiRouter@@AEAA@XZ @ 0x1402DB59C (--0CursorApiRouter@@AEAA@XZ.c)
 */

__int64 CursorApiRouter::Initialize(void)
{
  CursorApiRouter *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  CursorApiRouter *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v0 = (CursorApiRouter *)Win32AllocPoolZInit(128LL, 1702130773LL);
  v3 = 0LL;
  if ( v0 )
    v3 = CursorApiRouter::CursorApiRouter(v0);
  *(_QWORD *)(W32GetUserSessionState(v2, v1) + 36304) = v3;
  return *(_QWORD *)(W32GetUserSessionState(v5, v4) + 36304) == 0LL ? 0xC0000017 : 0;
}
