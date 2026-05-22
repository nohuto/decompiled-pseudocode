/*
 * XREFs of ?OnReportQueryCallback@DockDeviceCollection@@AEAAJXZ @ 0x1800DD330
 * Callers:
 *     ?OnReportQueryCallbackStatic@DockDeviceCollection@@SAJPEAXK0@Z @ 0x1800DD440 (-OnReportQueryCallbackStatic@DockDeviceCollection@@SAJPEAXK0@Z.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??$?4U?$default_delete@$$BY0A@E@std@@$0A@@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18007274C (--$-4U-$default_delete@$$BY0A@E@std@@$0A@@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?front@?$queue@UGetInputReportResult@@V?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@@std@@QEAAAEAUGetInputReportResult@@XZ @ 0x1800DD6BC (-front@-$queue@UGetInputReportResult@@V-$deque@UGetInputReportResult@@V-$allocator@UGetInputRepo.c)
 *     ?pop_front@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@QEAAXXZ @ 0x1800DD6C8 (-pop_front@-$deque@UGetInputReportResult@@V-$allocator@UGetInputReportResult@@@std@@@std@@QEAAXX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DockDeviceCollection::OnReportQueryCallback(DockDeviceCollection *this)
{
  struct _Mtx_internal_imp_t *v2; // rdi
  unsigned int *v3; // rbx
  int v4; // eax
  const struct std::nothrow_t *v5; // rdx
  const struct std::nothrow_t *v6; // rdx
  unsigned int v8; // [rsp+30h] [rbp-28h]
  void *v9; // [rsp+38h] [rbp-20h] BYREF
  int v10; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = 0LL;
  v2 = (DockDeviceCollection *)((char *)this + 2816);
  std::_Mutex_base::lock((DockDeviceCollection *)((char *)this + 2816));
  while ( *((_QWORD *)this + 351) )
  {
    v3 = (unsigned int *)std::queue<GetInputReportResult>::front((char *)this + 2776);
    v8 = *v3;
    std::unique_ptr<unsigned char [0]>::operator=<std::default_delete<unsigned char [0]>,0>(
      &v9,
      (const struct std::nothrow_t *)(v3 + 2));
    LODWORD(v3) = v3[4];
    v10 = (int)v3;
    std::deque<GetInputReportResult>::pop_front((char *)this + 2776);
    _Mtx_unlock(v2);
    v4 = (*(__int64 (__fastcall **)(DockDeviceCollection *, _QWORD, void *, _QWORD))(*(_QWORD *)this + 88LL))(
           this,
           v8,
           v9,
           (unsigned int)v3);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
        (const char *)(unsigned int)v4);
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v9, v5);
    v9 = 0LL;
    std::_Mutex_base::lock(v2);
  }
  _Mtx_unlock(v2);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v9, v6);
  return 0LL;
}
