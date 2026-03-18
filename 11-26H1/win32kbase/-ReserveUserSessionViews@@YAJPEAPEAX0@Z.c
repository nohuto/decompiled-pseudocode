/*
 * XREFs of ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x1401B4F34
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x140170DB4 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1401B4FC8 (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 */

int __fastcall ReserveUserSessionViews(void **a1, void **a2, int a3)
{
  int result; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d

  *(_DWORD *)(W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3) + 62928) = 0;
  result = ReserveUserSessionViewsWorker(a1, a2);
  if ( result < 0 )
  {
    *(_DWORD *)(W32GetUserSessionState(v7, v6, v8) + 62924) = 128;
    *(_DWORD *)(W32GetUserSessionState(v10, v9, v11) + 62920) = 512;
    *(_DWORD *)(W32GetUserSessionState(v13, v12, v14) + 62928) = 1;
    return ReserveUserSessionViewsWorker(a1, a2);
  }
  return result;
}
