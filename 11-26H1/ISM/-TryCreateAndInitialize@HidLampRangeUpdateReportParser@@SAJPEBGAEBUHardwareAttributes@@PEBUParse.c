/*
 * XREFs of ?TryCreateAndInitialize@HidLampRangeUpdateReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EFBB0
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800EB358 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0HidLampRangeUpdateReportParser@@AEAA@XZ @ 0x1800EF674 (--0HidLampRangeUpdateReportParser@@AEAA@XZ.c)
 *     ?IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800EF888 (-IsParserValid@HidLampRangeUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800F0320 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HidLampRangeUpdateReportParser::TryCreateAndInitialize(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct ParsedHidReportDescriptor *a3,
        struct HidLampRangeUpdateReportParser **a4)
{
  HidLampRangeUpdateReportParser *v8; // rax
  struct HidLampRangeUpdateReportParser *updated; // rdi
  struct HidLampRangeUpdateReportParser *v10; // rbx
  __int64 i; // r8
  __int64 v13; // rdx
  __int16 v14; // r9
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  __int128 v17; // xmm4
  __int64 v18; // xmm0_8
  __int128 v19; // xmm2
  __int128 v20; // xmm3
  __int128 v21; // xmm4
  __int64 v22; // xmm0_8
  __int128 v23; // xmm2
  __int128 v24; // xmm3
  __int128 v25; // xmm4
  __int64 v26; // xmm0_8
  __int128 v27; // xmm2
  __int128 v28; // xmm3
  __int128 v29; // xmm4
  __int64 v30; // xmm0_8
  __int128 v31; // xmm2
  __int128 v32; // xmm3
  __int128 v33; // xmm4
  __int64 v34; // xmm0_8
  __int16 v35; // ax
  __int128 v36; // xmm2
  __int128 v37; // xmm3
  __int128 v38; // xmm4
  __int64 v39; // xmm0_8
  __int128 v40; // xmm2
  __int128 v41; // xmm3
  __int128 v42; // xmm4
  __int64 v43; // xmm0_8
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a4 = 0LL;
  v8 = (HidLampRangeUpdateReportParser *)RefCountedObject::operator new(0x218uLL);
  if ( v8 )
    updated = HidLampRangeUpdateReportParser::HidLampRangeUpdateReportParser(v8);
  else
    updated = 0LL;
  v10 = updated;
  if ( updated )
  {
    (*(void (__fastcall **)(struct HidLampRangeUpdateReportParser *))(*(_QWORD *)updated + 8LL))(updated);
    *((_BYTE *)updated + 16) = *((_BYTE *)a3 + 4);
    if ( *(_DWORD *)a3 == 2 )
    {
      *((_BYTE *)updated + 17) = 2;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)a3 + 2); i = (unsigned int)(i + 1) )
      {
        v13 = *((_QWORD *)a3 + 2);
        if ( *(_WORD *)(v13 + 72 * i + 18) != 96 || *(_WORD *)(v13 + 72 * i + 16) != 89 )
          continue;
        v14 = *(_WORD *)(v13 + 72 * i + 10);
        switch ( v14 )
        {
          case 'U':
            if ( *(_WORD *)(v13 + 72 * i + 8) == 89 )
            {
              v15 = *(_OWORD *)(v13 + 72 * i + 16);
              v16 = *(_OWORD *)(v13 + 72 * i + 32);
              v17 = *(_OWORD *)(v13 + 72 * i + 48);
              v18 = *(_QWORD *)(v13 + 72 * i + 64);
              *(_OWORD *)((char *)updated + 24) = *(_OWORD *)(v13 + 72 * i);
              *(_OWORD *)((char *)updated + 40) = v15;
              *(_OWORD *)((char *)updated + 56) = v16;
              *(_OWORD *)((char *)updated + 72) = v17;
              *((_QWORD *)updated + 11) = v18;
              continue;
            }
            break;
          case 'a':
            if ( *(_WORD *)(v13 + 72 * i + 8) == 89 )
            {
              v19 = *(_OWORD *)(v13 + 72 * i + 16);
              v20 = *(_OWORD *)(v13 + 72 * i + 32);
              v21 = *(_OWORD *)(v13 + 72 * i + 48);
              v22 = *(_QWORD *)(v13 + 72 * i + 64);
              *((_OWORD *)updated + 6) = *(_OWORD *)(v13 + 72 * i);
              *((_OWORD *)updated + 7) = v19;
              *((_OWORD *)updated + 8) = v20;
              *((_OWORD *)updated + 9) = v21;
              *((_QWORD *)updated + 20) = v22;
              continue;
            }
            break;
          case 'b':
            if ( *(_WORD *)(v13 + 72 * i + 8) != 89 )
              goto LABEL_23;
            v23 = *(_OWORD *)(v13 + 72 * i + 16);
            v24 = *(_OWORD *)(v13 + 72 * i + 32);
            v25 = *(_OWORD *)(v13 + 72 * i + 48);
            v26 = *(_QWORD *)(v13 + 72 * i + 64);
            *(_OWORD *)((char *)updated + 168) = *(_OWORD *)(v13 + 72 * i);
            *(_OWORD *)((char *)updated + 184) = v23;
            *(_OWORD *)((char *)updated + 200) = v24;
            *(_OWORD *)((char *)updated + 216) = v25;
            *((_QWORD *)updated + 29) = v26;
            continue;
        }
        if ( v14 != 81 || *(_WORD *)(v13 + 72 * i + 8) != 89 )
        {
LABEL_23:
          if ( v14 == 82 && *(_WORD *)(v13 + 72 * i + 8) == 89 )
          {
            v31 = *(_OWORD *)(v13 + 72 * i + 16);
            v32 = *(_OWORD *)(v13 + 72 * i + 32);
            v33 = *(_OWORD *)(v13 + 72 * i + 48);
            v34 = *(_QWORD *)(v13 + 72 * i + 64);
            *(_OWORD *)((char *)updated + 312) = *(_OWORD *)(v13 + 72 * i);
            *(_OWORD *)((char *)updated + 328) = v31;
            *(_OWORD *)((char *)updated + 344) = v32;
            *(_OWORD *)((char *)updated + 360) = v33;
            *((_QWORD *)updated + 47) = v34;
          }
          else
          {
            v35 = *(_WORD *)(v13 + 72 * i + 10);
            if ( v35 == 83 )
            {
              if ( *(_WORD *)(v13 + 72 * i + 8) == 89 )
              {
                v36 = *(_OWORD *)(v13 + 72 * i + 16);
                v37 = *(_OWORD *)(v13 + 72 * i + 32);
                v38 = *(_OWORD *)(v13 + 72 * i + 48);
                v39 = *(_QWORD *)(v13 + 72 * i + 64);
                *((_OWORD *)updated + 24) = *(_OWORD *)(v13 + 72 * i);
                *((_OWORD *)updated + 25) = v36;
                *((_OWORD *)updated + 26) = v37;
                *((_OWORD *)updated + 27) = v38;
                *((_QWORD *)updated + 56) = v39;
              }
            }
            else if ( v35 == 84 && *(_WORD *)(v13 + 72 * i + 8) == 89 )
            {
              v40 = *(_OWORD *)(v13 + 72 * i + 16);
              v41 = *(_OWORD *)(v13 + 72 * i + 32);
              v42 = *(_OWORD *)(v13 + 72 * i + 48);
              v43 = *(_QWORD *)(v13 + 72 * i + 64);
              *(_OWORD *)((char *)updated + 456) = *(_OWORD *)(v13 + 72 * i);
              *(_OWORD *)((char *)updated + 472) = v40;
              *(_OWORD *)((char *)updated + 488) = v41;
              *(_OWORD *)((char *)updated + 504) = v42;
              *((_QWORD *)updated + 65) = v43;
            }
          }
          continue;
        }
        v27 = *(_OWORD *)(v13 + 72 * i + 16);
        v28 = *(_OWORD *)(v13 + 72 * i + 32);
        v29 = *(_OWORD *)(v13 + 72 * i + 48);
        v30 = *(_QWORD *)(v13 + 72 * i + 64);
        *((_OWORD *)updated + 15) = *(_OWORD *)(v13 + 72 * i);
        *((_OWORD *)updated + 16) = v27;
        *((_OWORD *)updated + 17) = v28;
        *((_OWORD *)updated + 18) = v29;
        *((_QWORD *)updated + 38) = v30;
      }
    }
    v44 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a3 + 2) + 72LL * (unsigned int)(*((_DWORD *)a3 + 2) - 1) + 4)
                       + 7
                       + *(_DWORD *)(*((_QWORD *)a3 + 2) + 72LL * (unsigned int)(*((_DWORD *)a3 + 2) - 1))) >> 3;
    *((_DWORD *)updated + 5) = v44;
    *((_BYTE *)updated + 529) = HidChannelValueInfo::IsValid(
                                  (struct HidLampRangeUpdateReportParser *)((char *)updated + 240),
                                  v44,
                                  255LL);
    *((_BYTE *)updated + 530) = HidChannelValueInfo::IsValid(
                                  (struct HidLampRangeUpdateReportParser *)((char *)updated + 312),
                                  v45,
                                  v46);
    *((_BYTE *)updated + 531) = HidChannelValueInfo::IsValid(
                                  (struct HidLampRangeUpdateReportParser *)((char *)updated + 384),
                                  v47,
                                  v48);
    *((_BYTE *)updated + 532) = HidChannelValueInfo::IsValid(
                                  (struct HidLampRangeUpdateReportParser *)((char *)updated + 456),
                                  v49,
                                  v50);
    if ( HidLampRangeUpdateReportParser::IsParserValid(a1, a2, updated) )
    {
      v10 = 0LL;
      *a4 = updated;
    }
    if ( v10 )
      (*(void (__fastcall **)(struct HidLampRangeUpdateReportParser *))(*(_QWORD *)v10 + 16LL))(v10);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamprangeupdatereportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
