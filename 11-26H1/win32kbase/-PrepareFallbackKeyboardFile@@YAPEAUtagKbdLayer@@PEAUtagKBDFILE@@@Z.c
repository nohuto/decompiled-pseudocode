/*
 * XREFs of ?PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z @ 0x14011F598
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x14011DC94 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

struct tagKbdLayer *__fastcall PrepareFallbackKeyboardFile(struct tagKBDFILE *a1)
{
  int v2; // edx
  int v3; // ecx
  __int64 v4; // rbx
  int v5; // r8d
  __int64 UserSessionState; // rax
  struct tagKbdLayer *result; // rax

  v4 = Win32AllocPoolZInitImpl(256LL, 0x68uLL, 0x746B7355u);
  if ( v4 )
  {
    UserSessionState = W32GetUserSessionState(v3, v2, v5);
    *(_OWORD *)v4 = *(_OWORD *)(UserSessionState + 14072);
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(UserSessionState + 14088);
    *(_OWORD *)(v4 + 32) = *(_OWORD *)(UserSessionState + 14104);
    *(_OWORD *)(v4 + 48) = *(_OWORD *)(UserSessionState + 14120);
    *(_OWORD *)(v4 + 64) = *(_OWORD *)(UserSessionState + 14136);
    *(_OWORD *)(v4 + 80) = *(_OWORD *)(UserSessionState + 14152);
    *(_QWORD *)(v4 + 96) = *(_QWORD *)(UserSessionState + 14168);
  }
  *((_QWORD *)a1 + 3) = v4;
  result = (struct tagKbdLayer *)v4;
  *((_QWORD *)a1 + 6) = 0LL;
  return result;
}
