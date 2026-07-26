/*
 * XREFs of ?AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z @ 0x140161230
 * Callers:
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x14014E098 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 *     ndisBuildMonitoringLwfBindings @ 0x14014E2D8 (ndisBuildMonitoringLwfBindings.c)
 *     _lambda_cf61730e764cafb5fbe53142b0d3259b_::operator() @ 0x140161170 (_lambda_cf61730e764cafb5fbe53142b0d3259b_--operator().c)
 * Callees:
 *     ??0?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAV01@@Z @ 0x140066320 (--0-$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U-$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAV.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x140161530 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x140161630 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x140161A10 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?grow@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAA_N_K@Z @ 0x140161D90 (-grow@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@.c)
 */

__int64 __fastcall Ndis::BindStack::AddStaticFilterBinding(
        Ndis::BindStack *this,
        const struct _GUID *a2,
        unsigned int a3)
{
  NDIS_BIND_LINK_BASE *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  NDIS_BIND_LINK_BASE *v9; // rbx
  PVOID P; // [rsp+48h] [rbp+20h] BYREF

  Ndis::BindStack::BuildFilterLink(this, &P, a2, a3);
  v4 = (NDIS_BIND_LINK_BASE *)P;
  if ( !P )
    return 3221225626LL;
  if ( (unsigned __int8)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::grow(&this->Filters) )
  {
    wistd::unique_ptr<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>::unique_ptr<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>(
      &this->Filters._p[this->Filters.m_numElements].__ptr_.__value_,
      (__int64 *)&P);
    ++this->Filters.m_numElements;
    ++this->ChangeEpoch;
    v9 = (NDIS_BIND_LINK_BASE *)P;
    if ( P )
    {
      KRef<NDIS_BIND_FILTER_DRIVER>::unref((char *)P + 80, v7, v8);
      NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v9);
      ExFreePoolWithTag(v9, 0x4C6C4642u);
    }
    return 0LL;
  }
  else
  {
    KRef<NDIS_BIND_FILTER_DRIVER>::unref(&v4[1], v5, v6);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v4);
    ExFreePoolWithTag(v4, 0x4C6C4642u);
    return 3221225626LL;
  }
}
