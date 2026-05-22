/*
 * XREFs of ?NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z @ 0x1800E823C
 * Callers:
 *     ?ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ @ 0x1800E83D4 (-ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ.c)
 * Callees:
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z @ 0x1800587AC (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_ptr@UInputReportEventArgs@ConsumerControlNexusDevice@@U?$default_delete@UInputReportEventArgs@ConsumerControlNexusDevice@@@std@@@std@@QEAA@XZ @ 0x1800E76E8 (--1-$unique_ptr@UInputReportEventArgs@ConsumerControlNexusDevice@@U-$default_delete@UInputReport.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800E786C (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::NotifyInputReport(
        ConsumerControlNexusDevice *this,
        struct InputInfo *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // r8
  const char *v8; // r9
  __int64 *v9; // rbx
  int v10; // eax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0LL;
  if ( !a2 )
  {
    v4 = -2147024809;
    v5 = 404LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)v4);
    std::unique_ptr<ConsumerControlNexusDevice::InputReportEventArgs>::~unique_ptr<ConsumerControlNexusDevice::InputReportEventArgs>(&v14);
    return v4;
  }
  v6 = (__int64 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v6;
  if ( !v6 )
  {
    v4 = -2147024882;
    v5 = 407LL;
    goto LABEL_8;
  }
  *v6 = 0LL;
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>((__int64)(v6 + 1), (int *)a2, v7, v8);
  Microsoft::WRL::ComPtr<IRawInputClient>::operator=(v9, (__int64 *)this + 14);
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), __int64 *, __int64))(**((_QWORD **)this + 15)
                                                                                              + 152LL))(
          *((_QWORD *)this + 15),
          ConsumerControlNexusDevice::NotifyInputReportCallback,
          v9,
          4LL);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x19E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)v10,
      v12);
  v14 = 0LL;
  std::unique_ptr<ConsumerControlNexusDevice::InputReportEventArgs>::~unique_ptr<ConsumerControlNexusDevice::InputReportEventArgs>(&v14);
  return 0LL;
}
