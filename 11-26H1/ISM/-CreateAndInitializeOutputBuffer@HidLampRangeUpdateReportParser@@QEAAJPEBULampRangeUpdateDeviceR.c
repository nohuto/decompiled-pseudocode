/*
 * XREFs of ?CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x18005F94C
 * Callers:
 *     ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x18007E9E0 (-SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJE_KPEAE@Z @ 0x18005FB88 (-InsertValue@HidChannelValueInfo@@QEAAJE_KPEAE@Z.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z @ 0x18005FBE8 (-InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z.c)
 *     ?InsertValue@HidChannelValueInfo@@QEAAJI_KPEAE@Z @ 0x180060120 (-InsertValue@HidChannelValueInfo@@QEAAJI_KPEAE@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C958 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?ValidateReportData@HidLampRangeUpdateReportParser@@AEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x1800EFFA8 (-ValidateReportData@HidLampRangeUpdateReportParser@@AEAAJPEBULampRangeUpdateDeviceReport@@@Z.c)
 */

__int64 __fastcall HidLampRangeUpdateReportParser::CreateAndInitializeOutputBuffer(
        __int64 a1,
        __int64 a2,
        int *a3,
        _DWORD *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  unsigned __int8 *v11; // rax
  unsigned __int8 *v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // r9
  int inserted; // eax
  unsigned __int8 *v17; // r9
  unsigned __int8 *v18; // r9
  const struct std::nothrow_t *v19; // rdx
  unsigned __int8 *v20; // r9
  int v21; // eax
  const struct std::nothrow_t *v22; // rdx
  const struct std::nothrow_t *v23; // rdx
  void *v24; // rcx
  unsigned __int8 *v25; // rax
  int v26[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = HidLampRangeUpdateReportParser::ValidateReportData(
         (HidLampRangeUpdateReportParser *)a1,
         (const struct LampRangeUpdateDeviceReport *)a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x78,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamprangeupdatereportparser.cpp",
      (const char *)(unsigned int)v8,
      v26[0]);
    return v9;
  }
  v11 = (unsigned __int8 *)operator new[](*(unsigned int *)(a1 + 20), (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)v26 = v11;
  v12 = v11;
  if ( !v11 )
  {
    v13 = -2147024882;
    v14 = 123LL;
    v15 = 2147942414LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamprangeupdatereportparser.cpp",
      (const char *)v15,
      v26[0]);
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)v26, v23);
    return v13;
  }
  memset_0(v11, 0, *(unsigned int *)(a1 + 20));
  *v12 = *(_BYTE *)(a1 + 16);
  inserted = HidChannelValueInfo::InsertValue(
               (HidChannelValueInfo *)(a1 + 24),
               *(_DWORD *)a2,
               *(unsigned int *)(a1 + 20),
               v12);
  v13 = inserted;
  if ( inserted < 0 )
  {
    v14 = 130LL;
LABEL_23:
    v15 = (unsigned int)inserted;
    goto LABEL_24;
  }
  inserted = HidChannelValueInfo::InsertValue(
               (HidChannelValueInfo *)(a1 + 96),
               *(_DWORD *)(a2 + 4),
               *(unsigned int *)(a1 + 20),
               v17);
  v13 = inserted;
  if ( inserted < 0 )
  {
    v14 = 131LL;
    goto LABEL_23;
  }
  inserted = HidChannelValueInfo::InsertValue(
               (HidChannelValueInfo *)(a1 + 168),
               *(_DWORD *)(a2 + 8),
               *(unsigned int *)(a1 + 20),
               v18);
  v13 = inserted;
  if ( inserted < 0 )
  {
    v14 = 132LL;
    goto LABEL_23;
  }
  if ( *(_BYTE *)(a1 + 529) )
  {
    inserted = HidChannelValueInfo::InsertValue(
                 (HidChannelValueInfo *)(a1 + 240),
                 *(_BYTE *)(a2 + 12),
                 *(unsigned int *)(a1 + 20),
                 v20);
    v13 = inserted;
    if ( inserted < 0 )
    {
      v14 = 138LL;
      goto LABEL_23;
    }
  }
  if ( *(_BYTE *)(a1 + 530) )
  {
    inserted = HidChannelValueInfo::InsertValue(
                 (HidChannelValueInfo *)(a1 + 312),
                 *(_BYTE *)(a2 + 13),
                 *(unsigned int *)(a1 + 20),
                 v12);
    v13 = inserted;
    if ( inserted < 0 )
    {
      v14 = 143LL;
      goto LABEL_23;
    }
  }
  if ( *(_BYTE *)(a1 + 531) )
  {
    v21 = HidChannelValueInfo::InsertValue(
            (HidChannelValueInfo *)(a1 + 384),
            *(_BYTE *)(a2 + 14),
            *(unsigned int *)(a1 + 20),
            v12);
    v13 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x94,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamprangeupdatereportparser.cpp",
        (const char *)(unsigned int)v21,
        v26[0]);
      operator delete(v12, v22);
      return v13;
    }
  }
  if ( *(_BYTE *)(a1 + 532) )
  {
    inserted = HidChannelValueInfo::InsertValue(
                 (HidChannelValueInfo *)(a1 + 456),
                 *(_BYTE *)(a2 + 15),
                 *(unsigned int *)(a1 + 20),
                 v12);
    v13 = inserted;
    if ( inserted < 0 )
    {
      v14 = 153LL;
      goto LABEL_23;
    }
  }
  if ( a3 != v26 )
  {
    v24 = *(void **)a3;
    v25 = v12;
    v12 = 0LL;
    *(_QWORD *)a3 = v25;
    if ( v24 )
      operator delete(v24, v19);
  }
  *a4 = *(_DWORD *)(a1 + 20);
  if ( v12 )
    operator delete(v12, v19);
  return 0LL;
}
