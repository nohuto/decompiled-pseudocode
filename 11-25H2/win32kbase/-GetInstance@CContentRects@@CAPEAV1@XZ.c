/*
 * XREFs of ?GetInstance@CContentRects@@CAPEAV1@XZ @ 0x14015D360
 * Callers:
 *     InitializeInputComponents @ 0x14018C900 (InitializeInputComponents.c)
 *     ?GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z @ 0x1401AC540 (-GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z.c)
 *     ?GetCount@CContentRects@@SAIXZ @ 0x1401AC5B8 (-GetCount@CContentRects@@SAIXZ.c)
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1401AC6E4 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

struct CContentRects *__fastcall CContentRects::GetInstance(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !*(_QWORD *)(UserSessionState + 70712) )
  {
    v3 = Win32AllocPoolZInitImpl(256LL, 0x58uLL, 0x72636355u);
    *(_QWORD *)(UserSessionState + 70712) = v3;
    v4 = v3;
    if ( v3 )
    {
      *(_DWORD *)(v3 + 84) = 0;
      *(_QWORD *)v3 = 0LL;
      *(_QWORD *)(v3 + 8) = 0LL;
      memset((void *)(v3 + 16), 0, 0x40uLL);
      *(_DWORD *)(v4 + 80) = 0;
    }
  }
  return *(struct CContentRects **)(UserSessionState + 70712);
}
