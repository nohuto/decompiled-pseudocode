/*
 * XREFs of ?CreateAndInitializeOutputBuffer@HidLampArrayControlReportParser@@QEAAJPEBULampArrayControlDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800EFFCC
 * Callers:
 *     ?SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z @ 0x1800EBD44 (-SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z @ 0x18005FBE8 (-InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z.c)
 *     ??$?4U?$default_delete@$$BY0A@E@std@@$0A@@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18007274C (--$-4U-$default_delete@$$BY0A@E@std@@$0A@@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C958 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall HidLampArrayControlReportParser::CreateAndInitializeOutputBuffer(
        __int64 a1,
        unsigned __int8 *a2,
        void **a3,
        _DWORD *a4)
{
  void *v8; // rax
  unsigned int v9; // edi
  unsigned __int8 *v10; // rbx
  const struct std::nothrow_t *v11; // rdx
  unsigned int v12; // edx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v15; // [rsp+40h] [rbp+8h] BYREF

  v8 = operator new[](*(unsigned int *)(a1 + 20), (const struct std::nothrow_t *)&std::nothrow);
  v9 = 0;
  v15 = v8;
  v10 = (unsigned __int8 *)v8;
  if ( v8 )
  {
    memset_0(v8, 0, *(unsigned int *)(a1 + 20));
    v12 = *a2;
    *v10 = *(_BYTE *)(a1 + 16);
    HidChannelValueInfo::InsertValue((HidChannelValueInfo *)(a1 + 24), v12, *(unsigned int *)(a1 + 20), v10);
    std::unique_ptr<unsigned char [0]>::operator=<std::default_delete<unsigned char [0]>,0>(
      a3,
      (const struct std::nothrow_t *)&v15);
    *a4 = *(_DWORD *)(a1 + 20);
  }
  else
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraycontrolreportparser.cpp",
      (const char *)0x8007000ELL);
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v15, v11);
  return v9;
}
