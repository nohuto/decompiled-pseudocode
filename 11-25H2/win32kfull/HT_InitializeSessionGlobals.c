/*
 * XREFs of HT_InitializeSessionGlobals @ 0x14020A57C
 * Callers:
 *     EnableHalftone @ 0x14020A4E0 (EnableHalftone.c)
 * Callees:
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall HT_InitializeSessionGlobals(int a1, __int64 a2)
{
  __int64 SessionState; // rbx
  __int64 result; // rax
  __int64 v4; // rdi

  SessionState = W32GetSessionState(a1, a2);
  result = (__int64)EngAllocMem(1u, 0x4E8u, 0x73675448u);
  *(_QWORD *)(SessionState + 112) = result;
  v4 = result;
  if ( result )
  {
    memset_0((void *)(result + 80), 255, 0x400uLL);
    result = 1LL;
    *(_DWORD *)(v4 + 72) = 1;
    *(_DWORD *)(v4 + 76) = 20000000;
  }
  return result;
}
