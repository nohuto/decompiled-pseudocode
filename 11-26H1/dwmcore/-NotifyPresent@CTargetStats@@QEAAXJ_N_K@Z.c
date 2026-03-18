/*
 * XREFs of ?NotifyPresent@CTargetStats@@QEAAXJ_N_K@Z @ 0x18019FA88
 * Callers:
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x18025303C (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x180253F5C (-Present@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTargetStats::NotifyPresent(CTargetStats *this, int a2, char a3, __int64 a4)
{
  int v5; // edx
  __int64 v6; // rcx
  CComposition *v7; // rcx
  __int64 v8; // rax

  if ( a2 == 142213121 )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    if ( a3 )
    {
      ++*((_DWORD *)this + 62);
      ++*((_DWORD *)this + 63);
      v6 = *((_QWORD *)this + 24);
      if ( v6 )
      {
        *((_QWORD *)this + 24) = *((_QWORD *)this + 25) + v6;
        ++*((_DWORD *)this + 52);
      }
      v7 = g_pComposition;
      v8 = 0LL;
      *((_QWORD *)this + 32) = a4;
      if ( v7 )
        v8 = *((_QWORD *)v7 + 110);
      *((_QWORD *)this + 33) = v8;
    }
  }
  *((_DWORD *)this + 10) = v5;
}
