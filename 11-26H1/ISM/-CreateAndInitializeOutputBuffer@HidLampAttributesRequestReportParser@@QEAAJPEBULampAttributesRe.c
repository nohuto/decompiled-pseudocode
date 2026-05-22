/*
 * XREFs of ?CreateAndInitializeOutputBuffer@HidLampAttributesRequestReportParser@@QEAAJPEBULampAttributesRequestDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x18008D7F0
 * Callers:
 *     ?SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z @ 0x180085064 (-SendLampAttributesRequest@HidLampArrayDevice@@AEAAJH@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z @ 0x18005FBE8 (-InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z.c)
 *     ??$?4U?$default_delete@$$BY0A@E@std@@$0A@@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18007274C (--$-4U-$default_delete@$$BY0A@E@std@@$0A@@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C958 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall HidLampAttributesRequestReportParser::CreateAndInitializeOutputBuffer(
        __int64 a1,
        unsigned int *a2,
        void **a3,
        _DWORD *a4)
{
  void *v8; // rax
  unsigned __int8 *v9; // rbx
  unsigned int v10; // ebx
  int inserted; // eax
  const struct std::nothrow_t *v12; // rdx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v16; // [rsp+40h] [rbp+8h] BYREF

  v8 = operator new[](*(unsigned int *)(a1 + 20), (const struct std::nothrow_t *)&std::nothrow);
  v16 = v8;
  v9 = (unsigned __int8 *)v8;
  if ( v8 )
  {
    memset_0(v8, 0, *(unsigned int *)(a1 + 20));
    *v9 = *(_BYTE *)(a1 + 16);
    inserted = HidChannelValueInfo::InsertValue((HidChannelValueInfo *)(a1 + 24), *a2, *(unsigned int *)(a1 + 20), v9);
    v10 = inserted;
    if ( inserted >= 0 )
    {
      std::unique_ptr<unsigned char [0]>::operator=<std::default_delete<unsigned char [0]>,0>(
        a3,
        (const struct std::nothrow_t *)&v16);
      v10 = 0;
      *a4 = *(_DWORD *)(a1 + 20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x58,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampattributesrequ"
                      "estreportparser.cpp",
        (const char *)(unsigned int)inserted,
        v14);
    }
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v16, v12);
  }
  else
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampattributesreques"
                    "treportparser.cpp",
      (const char *)0x8007000ELL,
      v14);
  }
  return v10;
}
