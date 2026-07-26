/*
 * XREFs of ??1_NDIS_FILTER_BLOCK@@QEAA@XZ @ 0x14008E9B0
 * Callers:
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x140054860 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1401564C0 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 */

void __fastcall _NDIS_FILTER_BLOCK::~_NDIS_FILTER_BLOCK(_NDIS_FILTER_BLOCK *this)
{
  TriageData *value; // rdi
  NDISWATCHDOG__ *m_ptr; // rcx
  Rtl::KString *v4; // rcx

  value = this->Triage.__ptr_.__value_;
  this->Triage.__ptr_.__value_ = 0LL;
  if ( value )
  {
    ((void (__fastcall *)(TriageData *, _QWORD))value->~TriageData)(value, 0LL);
    ExFreePoolWithTag(value, 0);
  }
  m_ptr = this->PendingOidWatchdog.m_ptr;
  if ( m_ptr != (NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(m_ptr);
  v4 = this->FilterInstanceName.__ptr_.__value_;
  this->FilterInstanceName.__ptr_.__value_ = 0LL;
  if ( v4 )
    ExFreePoolWithTag(v4, 0x7274534Bu);
}
