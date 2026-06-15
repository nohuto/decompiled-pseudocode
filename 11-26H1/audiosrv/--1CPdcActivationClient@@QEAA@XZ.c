/*
 * XREFs of ??1CPdcActivationClient@@QEAA@XZ @ 0x180109A60
 * Callers:
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x18010EE58 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$0 @ 0x18016877B (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$0.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CPdcActivationClient::~CPdcActivationClient(CPdcActivationClient *this)
{
  int v2; // eax
  void *v3; // rcx

  if ( *(_QWORD *)this )
  {
    v2 = Pdcv2ActivationClientUnregister() | 0x10000000;
    if ( v2 < 0 )
      AudSrvTraceLoggingErrorHelper("CPdcActivationClient::~CPdcActivationClient", 26, v2);
    *(_QWORD *)this = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    std::_Deallocate<16>(v3, (struct std::nothrow_t *)((*((_QWORD *)this + 3) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
}
