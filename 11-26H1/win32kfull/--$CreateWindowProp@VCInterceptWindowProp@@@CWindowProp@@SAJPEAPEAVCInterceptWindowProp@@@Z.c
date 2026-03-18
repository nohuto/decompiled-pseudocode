/*
 * XREFs of ??$CreateWindowProp@VCInterceptWindowProp@@@CWindowProp@@SAJPEAPEAVCInterceptWindowProp@@@Z @ 0x1402E1A28
 * Callers:
 *     ?GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z @ 0x140289258 (-GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z.c)
 * Callees:
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall CWindowProp::CreateWindowProp<CInterceptWindowProp>(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int16 v8; // cx

  v2 = 0;
  v3 = Win32AllocPoolZInit(96LL, 1886871893LL);
  v4 = v3;
  if ( v3 )
  {
    memset_0((void *)(v3 + 8), 0, 0x58uLL);
    *(_QWORD *)v4 = &CInterceptWindowProp::`vftable';
    UserSessionState = W32GetUserSessionState(v6, v5);
    *a1 = v4;
    v8 = *(_WORD *)(UserSessionState + 42292);
    *(_QWORD *)(v4 + 32) = v4 + 32;
    *(_QWORD *)(v4 + 40) = v4 + 32;
    *(_WORD *)(v4 + 24) = v8;
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_WORD *)(v4 + 56) = 0;
    *(_QWORD *)(v4 + 64) = 0LL;
    *(_OWORD *)(v4 + 72) = 0LL;
    *(_DWORD *)(v4 + 88) = 0;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
