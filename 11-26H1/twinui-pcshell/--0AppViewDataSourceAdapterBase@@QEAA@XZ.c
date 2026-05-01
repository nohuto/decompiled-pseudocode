/*
 * XREFs of ??0AppViewDataSourceAdapterBase@@QEAA@XZ @ 0x18015F6D8
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18015F624 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VAppViewDataSourceAdapterBase@@UIAppVi.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=7
AppViewDataSourceAdapterBase *__fastcall AppViewDataSourceAdapterBase::AppViewDataSourceAdapterBase(
        AppViewDataSourceAdapterBase *this)
{
  __int64 v2; // rax

  *(_QWORD *)this = &AppViewDataSourceAdapterBase::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 1) = &AppViewDataSourceAdapterBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveShellHookNotification>'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = this;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = (char *)this + 8;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits>(48LL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *((_QWORD *)this + 12) = v2;
  *((_QWORD *)this + 14) = 0LL;
  return this;
}
