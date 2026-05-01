/*
 * XREFs of ??$Make@VCStartExperienceManager@@_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCStartExperienceManager@@@12@$$QEA_N@Z @ 0x1802B6994
 * Callers:
 *     ?GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1801A9EF0 (-GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspecta.c)
 * Callees:
 *     ??0CStartExperienceManager@@QEAA@_N@Z @ 0x180239E84 (--0CStartExperienceManager@@QEAA@_N@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Attach@?$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@QEAAXPEAVCStartExperienceManager@@@Z @ 0x180387C50 (-Attach@-$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@QEAAXPEAVCStartExperienceManager@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Microsoft::WRL::Details::Make<CStartExperienceManager,bool>(_QWORD *a1)
{
  CStartExperienceManager *v2; // rax
  CStartExperienceManager *v3; // rax

  *a1 = 0LL;
  v2 = (CStartExperienceManager *)operator new(0x368uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = CStartExperienceManager::CStartExperienceManager(v2);
    Microsoft::WRL::ComPtr<CStartExperienceManager>::Attach(a1, v3);
  }
  return a1;
}
