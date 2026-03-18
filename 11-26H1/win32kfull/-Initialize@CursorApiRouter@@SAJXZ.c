/*
 * XREFs of ?Initialize@CursorApiRouter@@SAJXZ @ 0x140257160
 * Callers:
 *     EditionDriverInitialize @ 0x1402A25E0 (EditionDriverInitialize.c)
 * Callees:
 *     <none>
 */

__int64 CursorApiRouter::Initialize(void)
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v0 = Win32AllocPoolZInit(128LL, 1702130773LL);
  v2 = v0;
  if ( v0 )
  {
    *(_QWORD *)v0 = 0LL;
    *(_DWORD *)(v0 + 8) = 0;
    *(_WORD *)(v0 + 12) = 0;
    *(_BYTE *)(v0 + 14) = 0;
    *(_QWORD *)(v0 + 16) = 0LL;
    *(_QWORD *)(v0 + 24) = 0LL;
    *(_DWORD *)(v0 + 32) = 0;
    *(_QWORD *)(v0 + 56) = 0LL;
    *(_QWORD *)(v0 + 64) = 0LL;
    *(_QWORD *)(v0 + 72) = 0LL;
    *(_OWORD *)(v0 + 80) = 0LL;
    *(_OWORD *)(v0 + 96) = 0LL;
    *(_QWORD *)(v0 + 112) = 0LL;
    *(_BYTE *)(v0 + 120) = 0;
    *(_QWORD *)(v0 + 40) = 0LL;
    *(_QWORD *)(v0 + 48) = 0LL;
  }
  else
  {
    v2 = 0LL;
  }
  *(_QWORD *)(W32GetUserSessionState(0LL, v1) + 36336) = v2;
  return *(_QWORD *)(W32GetUserSessionState(v4, v3) + 36336) == 0LL ? 0xC0000017 : 0;
}
