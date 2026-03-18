/*
 * XREFs of ?PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z @ 0x14019F620
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x14010D3A8 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

struct tagKbdLayer *__fastcall PrepareFallbackKeyboardFile(struct tagKBDFILE *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 UserSessionState; // rax
  struct tagKbdLayer *result; // rax

  v4 = Win32AllocPoolZInitImpl(256LL, 0x68uLL, 0x746B7355u);
  if ( v4 )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    *(_OWORD *)v4 = *(_OWORD *)(UserSessionState + 14080);
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(UserSessionState + 14096);
    *(_OWORD *)(v4 + 32) = *(_OWORD *)(UserSessionState + 14112);
    *(_OWORD *)(v4 + 48) = *(_OWORD *)(UserSessionState + 14128);
    *(_OWORD *)(v4 + 64) = *(_OWORD *)(UserSessionState + 14144);
    *(_OWORD *)(v4 + 80) = *(_OWORD *)(UserSessionState + 14160);
    *(_QWORD *)(v4 + 96) = *(_QWORD *)(UserSessionState + 14176);
  }
  *((_QWORD *)a1 + 6) = 0LL;
  result = (struct tagKbdLayer *)v4;
  *((_QWORD *)a1 + 3) = v4;
  return result;
}
