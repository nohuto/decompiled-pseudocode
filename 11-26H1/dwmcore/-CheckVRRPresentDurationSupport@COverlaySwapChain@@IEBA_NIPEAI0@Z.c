/*
 * XREFs of ?CheckVRRPresentDurationSupport@COverlaySwapChain@@IEBA_NIPEAI0@Z @ 0x1801BA41C
 * Callers:
 *     ?CheckPresentDurationSupport@CLegacySwapChain@@UEBAJIPEAI0@Z @ 0x1801BA3B0 (-CheckPresentDurationSupport@CLegacySwapChain@@UEBAJIPEAI0@Z.c)
 *     ?CheckPresentDurationSupport@CDDisplaySwapChain@@UEBAJIPEAI0@Z @ 0x18029A790 (-CheckPresentDurationSupport@CDDisplaySwapChain@@UEBAJIPEAI0@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlaySwapChain::CheckVRRPresentDurationSupport(
        COverlaySwapChain *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v5; // rbx
  char result; // al
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax

  v5 = a2;
  result = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 3) + 264LL))((char *)this + 24, 0LL);
  if ( result )
  {
    v9 = g_qpcFrequency.QuadPart * v5 / 0x989680uLL;
    if ( v9 >= *((_QWORD *)this + 17) )
    {
      v10 = *((_QWORD *)this + 18);
      if ( v10 && v9 > v10 )
      {
        *a3 = 10000000 * v10 / g_qpcFrequency.QuadPart;
        LODWORD(v10) = 0;
      }
      else
      {
        *a3 = v5;
        LODWORD(v10) = v5;
      }
    }
    else
    {
      *a3 = 0;
      v10 = (unsigned __int64)(10000000LL * *((_QWORD *)this + 17)) / g_qpcFrequency.QuadPart;
    }
    *a4 = v10;
    return 1;
  }
  return result;
}
