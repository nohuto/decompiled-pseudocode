/*
 * XREFs of ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x14019ADD8
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x140135AA0 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x14019AE6C (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 */

int __fastcall ReserveUserSessionViews(void **a1, void **a2)
{
  int result; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx

  *(_DWORD *)(W32GetUserSessionState(a1, a2) + 62936) = 0;
  result = ReserveUserSessionViewsWorker(a1, a2);
  if ( result < 0 )
  {
    *(_DWORD *)(W32GetUserSessionState(v6, v5) + 62932) = 128;
    *(_DWORD *)(W32GetUserSessionState(v8, v7) + 62928) = 512;
    *(_DWORD *)(W32GetUserSessionState(v10, v9) + 62936) = 1;
    return ReserveUserSessionViewsWorker(a1, a2);
  }
  return result;
}
