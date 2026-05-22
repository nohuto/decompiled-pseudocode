/*
 * XREFs of ?TryCreateAndInitialize@HidLampAttributesResponseReportParser@@SAJPEBGAEBUHardwareAttributes@@PEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800EE828
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800EB358 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0HidLampAttributesResponseReportParser@@AEAA@XZ @ 0x1800EE33C (--0HidLampAttributesResponseReportParser@@AEAA@XZ.c)
 *     ?IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z @ 0x1800EE678 (-IsParserValid@HidLampAttributesResponseReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEBV1@@Z.c)
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800F0320 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HidLampAttributesResponseReportParser::TryCreateAndInitialize(
        const unsigned __int16 *a1,
        const struct HardwareAttributes *a2,
        const struct ParsedHidReportDescriptor *a3,
        struct HidLampAttributesResponseReportParser **a4)
{
  HidLampAttributesResponseReportParser *v8; // rax
  struct HidLampAttributesResponseReportParser *v9; // rdi
  struct HidLampAttributesResponseReportParser *v10; // rbx
  __int64 i; // rdx
  __int64 v13; // r8
  __int16 v14; // ax
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
  __int16 v31; // r9
  __int128 v32; // xmm2
  __int128 v33; // xmm3
  __int128 v34; // xmm4
  __int64 v35; // xmm0_8
  __int128 v36; // xmm2
  __int128 v37; // xmm3
  __int128 v38; // xmm4
  __int64 v39; // xmm0_8
  __int128 v40; // xmm2
  __int128 v41; // xmm3
  __int128 v42; // xmm4
  __int64 v43; // xmm0_8
  __int128 v44; // xmm2
  __int128 v45; // xmm3
  __int128 v46; // xmm4
  __int64 v47; // xmm0_8
  __int128 v48; // xmm2
  __int128 v49; // xmm3
  __int128 v50; // xmm4
  __int64 v51; // xmm0_8
  __int16 v52; // r9
  __int128 v53; // xmm2
  __int128 v54; // xmm3
  __int128 v55; // xmm4
  __int64 v56; // xmm0_8
  __int128 v57; // xmm2
  __int128 v58; // xmm3
  __int128 v59; // xmm4
  __int64 v60; // xmm0_8
  __int128 v61; // xmm2
  __int128 v62; // xmm3
  __int128 v63; // xmm4
  __int64 v64; // xmm0_8
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a4 = 0LL;
  v8 = (HidLampAttributesResponseReportParser *)RefCountedObject::operator new(0x380uLL);
  if ( v8 )
    v9 = HidLampAttributesResponseReportParser::HidLampAttributesResponseReportParser(v8);
  else
    v9 = 0LL;
  v10 = v9;
  if ( v9 )
  {
    (*(void (__fastcall **)(struct HidLampAttributesResponseReportParser *))(*(_QWORD *)v9 + 8LL))(v9);
    *((_BYTE *)v9 + 16) = *((_BYTE *)a3 + 4);
    if ( *(_DWORD *)a3 == 2 )
    {
      *((_BYTE *)v9 + 17) = 2;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)a3 + 2); i = (unsigned int)(i + 1) )
      {
        v13 = *((_QWORD *)a3 + 2);
        if ( *(_WORD *)(v13 + 72 * i + 18) != 34 || *(_WORD *)(v13 + 72 * i + 16) != 89 )
          continue;
        v14 = *(_WORD *)(v13 + 72 * i + 10);
        if ( v14 == 33 )
        {
          if ( *(_WORD *)(v13 + 72 * i + 8) == 89 )
          {
            v15 = *(_OWORD *)(v13 + 72 * i + 16);
            v16 = *(_OWORD *)(v13 + 72 * i + 32);
            v17 = *(_OWORD *)(v13 + 72 * i + 48);
            v18 = *(_QWORD *)(v13 + 72 * i + 64);
            *(_OWORD *)((char *)v9 + 24) = *(_OWORD *)(v13 + 72 * i);
            *(_OWORD *)((char *)v9 + 40) = v15;
            *(_OWORD *)((char *)v9 + 56) = v16;
            *(_OWORD *)((char *)v9 + 72) = v17;
            *((_QWORD *)v9 + 11) = v18;
            continue;
          }
        }
        else if ( v14 == 35 )
        {
          if ( *(_WORD *)(v13 + 72 * i + 8) == 89 )
          {
            v19 = *(_OWORD *)(v13 + 72 * i + 16);
            v20 = *(_OWORD *)(v13 + 72 * i + 32);
            v21 = *(_OWORD *)(v13 + 72 * i + 48);
            v22 = *(_QWORD *)(v13 + 72 * i + 64);
            *((_OWORD *)v9 + 6) = *(_OWORD *)(v13 + 72 * i);
            *((_OWORD *)v9 + 7) = v19;
            *((_OWORD *)v9 + 8) = v20;
            *((_OWORD *)v9 + 9) = v21;
            *((_QWORD *)v9 + 20) = v22;
            continue;
          }
LABEL_20:
          if ( v14 == 37 && *(_WORD *)(v13 + 72 * i + 8) == 89 )
          {
            v27 = *(_OWORD *)(v13 + 72 * i + 16);
            v28 = *(_OWORD *)(v13 + 72 * i + 32);
            v29 = *(_OWORD *)(v13 + 72 * i + 48);
            v30 = *(_QWORD *)(v13 + 72 * i + 64);
            *((_OWORD *)v9 + 15) = *(_OWORD *)(v13 + 72 * i);
            *((_OWORD *)v9 + 16) = v27;
            *((_OWORD *)v9 + 17) = v28;
            *((_OWORD *)v9 + 18) = v29;
            *((_QWORD *)v9 + 38) = v30;
            continue;
          }
          goto LABEL_23;
        }
        if ( v14 != 36 )
          goto LABEL_20;
        if ( *(_WORD *)(v13 + 72 * i + 8) == 89 )
        {
          v23 = *(_OWORD *)(v13 + 72 * i + 16);
          v24 = *(_OWORD *)(v13 + 72 * i + 32);
          v25 = *(_OWORD *)(v13 + 72 * i + 48);
          v26 = *(_QWORD *)(v13 + 72 * i + 64);
          *(_OWORD *)((char *)v9 + 168) = *(_OWORD *)(v13 + 72 * i);
          *(_OWORD *)((char *)v9 + 184) = v23;
          *(_OWORD *)((char *)v9 + 200) = v24;
          *(_OWORD *)((char *)v9 + 216) = v25;
          *((_QWORD *)v9 + 29) = v26;
          continue;
        }
LABEL_23:
        v31 = *(_WORD *)(v13 + 72 * i + 10);
        switch ( v31 )
        {
          case '\'':
            if ( *(_WORD *)(v13 + 72 * i + 8) == 89 )
            {
              v32 = *(_OWORD *)(v13 + 72 * i + 16);
              v33 = *(_OWORD *)(v13 + 72 * i + 32);
              v34 = *(_OWORD *)(v13 + 72 * i + 48);
              v35 = *(_QWORD *)(v13 + 72 * i + 64);
              *(_OWORD *)((char *)v9 + 312) = *(_OWORD *)(v13 + 72 * i);
              *(_OWORD *)((char *)v9 + 328) = v32;
              *(_OWORD *)((char *)v9 + 344) = v33;
              *(_OWORD *)((char *)v9 + 360) = v34;
              *((_QWORD *)v9 + 47) = v35;
              continue;
            }
            break;
          case '&':
            if ( *(_WORD *)(v13 + 72 * i + 8) == 89 )
            {
              v36 = *(_OWORD *)(v13 + 72 * i + 16);
              v37 = *(_OWORD *)(v13 + 72 * i + 32);
              v38 = *(_OWORD *)(v13 + 72 * i + 48);
              v39 = *(_QWORD *)(v13 + 72 * i + 64);
              *((_OWORD *)v9 + 24) = *(_OWORD *)(v13 + 72 * i);
              *((_OWORD *)v9 + 25) = v36;
              *((_OWORD *)v9 + 26) = v37;
              *((_OWORD *)v9 + 27) = v38;
              *((_QWORD *)v9 + 56) = v39;
              continue;
            }
            break;
          case '(':
            if ( *(_WORD *)(v13 + 72 * i + 8) == 89 )
            {
              v40 = *(_OWORD *)(v13 + 72 * i + 16);
              v41 = *(_OWORD *)(v13 + 72 * i + 32);
              v42 = *(_OWORD *)(v13 + 72 * i + 48);
              v43 = *(_QWORD *)(v13 + 72 * i + 64);
              *(_OWORD *)((char *)v9 + 600) = *(_OWORD *)(v13 + 72 * i);
              *(_OWORD *)((char *)v9 + 616) = v40;
              *(_OWORD *)((char *)v9 + 632) = v41;
              *(_OWORD *)((char *)v9 + 648) = v42;
              *((_QWORD *)v9 + 83) = v43;
              continue;
            }
            goto LABEL_35;
        }
        if ( v31 == 41 )
        {
          if ( *(_WORD *)(v13 + 72 * i + 8) == 89 )
          {
            v44 = *(_OWORD *)(v13 + 72 * i + 16);
            v45 = *(_OWORD *)(v13 + 72 * i + 32);
            v46 = *(_OWORD *)(v13 + 72 * i + 48);
            v47 = *(_QWORD *)(v13 + 72 * i + 64);
            *((_OWORD *)v9 + 42) = *(_OWORD *)(v13 + 72 * i);
            *((_OWORD *)v9 + 43) = v44;
            *((_OWORD *)v9 + 44) = v45;
            *((_OWORD *)v9 + 45) = v46;
            *((_QWORD *)v9 + 92) = v47;
            continue;
          }
          goto LABEL_38;
        }
LABEL_35:
        if ( v31 == 42 && *(_WORD *)(v13 + 72 * i + 8) == 89 )
        {
          v48 = *(_OWORD *)(v13 + 72 * i + 16);
          v49 = *(_OWORD *)(v13 + 72 * i + 32);
          v50 = *(_OWORD *)(v13 + 72 * i + 48);
          v51 = *(_QWORD *)(v13 + 72 * i + 64);
          *(_OWORD *)((char *)v9 + 744) = *(_OWORD *)(v13 + 72 * i);
          *(_OWORD *)((char *)v9 + 760) = v48;
          *(_OWORD *)((char *)v9 + 776) = v49;
          *(_OWORD *)((char *)v9 + 792) = v50;
          *((_QWORD *)v9 + 101) = v51;
          continue;
        }
LABEL_38:
        v52 = *(_WORD *)(v13 + 72 * i + 10);
        if ( v52 != 43 )
        {
          if ( v52 == 44 )
          {
            if ( *(_WORD *)(v13 + 72 * i + 8) == 89 )
            {
              v57 = *(_OWORD *)(v13 + 72 * i + 16);
              v58 = *(_OWORD *)(v13 + 72 * i + 32);
              v59 = *(_OWORD *)(v13 + 72 * i + 48);
              v60 = *(_QWORD *)(v13 + 72 * i + 64);
              *(_OWORD *)((char *)v9 + 456) = *(_OWORD *)(v13 + 72 * i);
              *(_OWORD *)((char *)v9 + 472) = v57;
              *(_OWORD *)((char *)v9 + 488) = v58;
              *(_OWORD *)((char *)v9 + 504) = v59;
              *((_QWORD *)v9 + 65) = v60;
            }
            continue;
          }
LABEL_44:
          if ( v52 == 45 && *(_WORD *)(v13 + 72 * i + 8) == 89 )
          {
            v61 = *(_OWORD *)(v13 + 72 * i + 16);
            v62 = *(_OWORD *)(v13 + 72 * i + 32);
            v63 = *(_OWORD *)(v13 + 72 * i + 48);
            v64 = *(_QWORD *)(v13 + 72 * i + 64);
            *((_OWORD *)v9 + 33) = *(_OWORD *)(v13 + 72 * i);
            *((_OWORD *)v9 + 34) = v61;
            *((_OWORD *)v9 + 35) = v62;
            *((_OWORD *)v9 + 36) = v63;
            *((_QWORD *)v9 + 74) = v64;
          }
          continue;
        }
        if ( *(_WORD *)(v13 + 72 * i + 8) != 89 )
          goto LABEL_44;
        v53 = *(_OWORD *)(v13 + 72 * i + 16);
        v54 = *(_OWORD *)(v13 + 72 * i + 32);
        v55 = *(_OWORD *)(v13 + 72 * i + 48);
        v56 = *(_QWORD *)(v13 + 72 * i + 64);
        *((_OWORD *)v9 + 51) = *(_OWORD *)(v13 + 72 * i);
        *((_OWORD *)v9 + 52) = v53;
        *((_OWORD *)v9 + 53) = v54;
        *((_OWORD *)v9 + 54) = v55;
        *((_QWORD *)v9 + 110) = v56;
      }
    }
    v65 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a3 + 2) + 72LL * (unsigned int)(*((_DWORD *)a3 + 2) - 1) + 4)
                       + 7
                       + *(_DWORD *)(*((_QWORD *)a3 + 2) + 72LL * (unsigned int)(*((_DWORD *)a3 + 2) - 1))) >> 3;
    *((_DWORD *)v9 + 5) = v65;
    *((_BYTE *)v9 + 888) = HidChannelValueInfo::IsValid(
                             (struct HidLampAttributesResponseReportParser *)((char *)v9 + 600),
                             v65,
                             255LL);
    *((_BYTE *)v9 + 889) = HidChannelValueInfo::IsValid(
                             (struct HidLampAttributesResponseReportParser *)((char *)v9 + 672),
                             v66,
                             v67);
    *((_BYTE *)v9 + 890) = HidChannelValueInfo::IsValid(
                             (struct HidLampAttributesResponseReportParser *)((char *)v9 + 744),
                             v68,
                             v69);
    *((_BYTE *)v9 + 891) = HidChannelValueInfo::IsValid(
                             (struct HidLampAttributesResponseReportParser *)((char *)v9 + 816),
                             v70,
                             v71);
    *((_BYTE *)v9 + 892) = HidChannelValueInfo::IsValid(
                             (struct HidLampAttributesResponseReportParser *)((char *)v9 + 528),
                             v72,
                             0x7FFFFFFFLL);
    if ( HidLampAttributesResponseReportParser::IsParserValid(a1, a2, v9) )
    {
      v10 = 0LL;
      *a4 = v9;
    }
    if ( v10 )
      (*(void (__fastcall **)(struct HidLampAttributesResponseReportParser *))(*(_QWORD *)v10 + 16LL))(v10);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampattributesresponsereportparser.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
