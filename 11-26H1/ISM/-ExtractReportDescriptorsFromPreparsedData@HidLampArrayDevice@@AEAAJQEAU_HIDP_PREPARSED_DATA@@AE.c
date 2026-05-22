/*
 * XREFs of ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x180070FFC
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800EA82C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBVHidChannelValueInfo@@@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@AEAAPEAVHidChannelValueInfo@@QEAV2@AEBV2@@Z @ 0x1800716B8 (--$_Emplace_reallocate@AEBVHidChannelValueInfo@@@-$vector@VHidChannelValueInfo@@V-$allocator@VHi.c)
 *     ??$_Destroy_range@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@0@@Z @ 0x18008A660 (--$_Destroy_range@V-$allocator@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@QEAA@XZ @ 0x1800995A8 (--1-$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U-$default_delete@$$BY0A@UParsedHidReportDesc.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C958 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18009C97C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??$?RUParsedHidReportDescriptor@@$0A@@?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@QEBAXPEAUParsedHidReportDescriptor@@@Z @ 0x1800E9108 (--$-RUParsedHidReportDescriptor@@$0A@@-$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@.c)
 *     ??$?RVHidChannelValueInfo@@$0A@@?$default_delete@$$BY0A@VHidChannelValueInfo@@@std@@QEBAXPEAVHidChannelValueInfo@@@Z @ 0x1800E9158 (--$-RVHidChannelValueInfo@@$0A@@-$default_delete@$$BY0A@VHidChannelValueInfo@@@std@@QEBAXPEAVHid.c)
 *     ??$_Emplace_reallocate@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@?$vector@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@V?$allocator@V?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@@2@@std@@AEAAPEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800E925C (--$_Emplace_reallocate@V-$vector@VHidChannelValueInfo@@V-$allocator@VHidChannelValueInfo@@@std@@.c)
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800EA13C (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData(
        char a1,
        __int64 a2,
        __int64 *a3,
        _DWORD *a4)
{
  unsigned __int8 v6; // cl
  unsigned __int16 v7; // r14
  unsigned __int64 v8; // r9
  _QWORD *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  int i; // r15d
  __int64 v15; // r8
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rbx
  _QWORD *v22; // rsi
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  bool v25; // cf
  unsigned __int64 v26; // rax
  unsigned __int64 *v27; // rax
  _QWORD *v28; // rbx
  const char *v29; // r9
  __int64 result; // rax
  unsigned __int8 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  unsigned __int64 v35; // r15
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 *v38; // rax
  _QWORD *v39; // rsi
  __int64 v40; // rdx
  unsigned __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rax
  __int128 v44; // xmm1
  __int128 v45; // xmm2
  __int128 v46; // xmm3
  __int128 v47; // xmm4
  __int64 v48; // xmm0_8
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // [rsp+20h] [rbp-C8h]
  __int128 v52; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD *v53; // [rsp+40h] [rbp-A8h]
  _QWORD *v54; // [rsp+48h] [rbp-A0h] BYREF
  __int128 v55; // [rsp+50h] [rbp-98h] BYREF
  __int128 v56; // [rsp+60h] [rbp-88h]
  __int128 v57; // [rsp+70h] [rbp-78h]
  __int128 v58; // [rsp+80h] [rbp-68h]
  __int64 v59; // [rsp+90h] [rbp-58h]
  __int128 v60; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v52 = 0LL;
  v53 = 0LL;
  v6 = 0;
  v7 = *(_WORD *)(a2 + 32);
  v8 = 0x8E38E38E38E38E39uLL;
  v9 = (_QWORD *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  try
  {
    while ( v7 < *(_WORD *)(a2 + 36) )
    {
      v10 = 104LL * v7;
      if ( *(_WORD *)(v10 + a2 + 50) )
      {
        if ( *(_BYTE *)(v10 + a2 + 46) > v6 )
        {
          v60 = 0LL;
          v61 = 0LL;
          if ( v9 == v53 )
          {
            std::vector<std::vector<HidChannelValueInfo>>::_Emplace_reallocate<std::vector<HidChannelValueInfo>>(
              &v52,
              v9,
              &v60);
            v9 = (_QWORD *)*((_QWORD *)&v52 + 1);
            v11 = v61;
            v12 = v60;
          }
          else
          {
            v11 = 0LL;
            v12 = 0LL;
            *v9 = 0LL;
            v9[1] = 0LL;
            v9[2] = 0LL;
            v9 = (_QWORD *)(*((_QWORD *)&v52 + 1) + 24LL);
            *((_QWORD *)&v52 + 1) += 24LL;
          }
          if ( v12 )
          {
            std::_Deallocate<16>(v12, 8 * ((v11 - v12) >> 3));
            v9 = (_QWORD *)*((_QWORD *)&v52 + 1);
          }
        }
        v13 = *(unsigned __int8 *)(v10 + a2 + 47) + 8LL * *(unsigned __int16 *)(v10 + a2 + 52);
        for ( i = 0; i < *(unsigned __int16 *)(v10 + a2 + 50); ++i )
        {
          v15 = *(unsigned __int16 *)(v10 + a2 + 48);
          WORD4(v55) = *(_WORD *)(v10 + a2 + 44);
          WORD5(v55) = *(_WORD *)(v10 + a2 + 104);
          LODWORD(v56) = *(_DWORD *)(v10 + a2 + 64);
          HIDWORD(v55) = *(unsigned __int16 *)(v10 + a2 + 62);
          LODWORD(v55) = i * v15 + 8 * *(unsigned __int16 *)(v10 + a2 + 52);
          DWORD1(v55) = v15;
          *((_QWORD *)&v56 + 1) = ((unsigned int)v15 < 0x20 ? (unsigned int)(1 << v15) - 1 : -1) & *(_DWORD *)(v10 + a2 + 124);
          *(_QWORD *)&v57 = ((unsigned int)v15 < 0x20 ? (unsigned int)(1 << v15) - 1 : -1) & *(_DWORD *)(v10 + a2 + 128);
          DWORD2(v57) = (unsigned __int8)(((v13 + v15 - 1) >> 3) - (v13 >> 3) + 1);
          HIDWORD(v57) = v13 & 7;
          LODWORD(v58) = (unsigned __int16)(((v13 + v15 - 1) >> 3) - 1);
          DWORD1(v58) = (unsigned int)v15 < 0x20 ? (1 << v15) - 1 : -1;
          DWORD2(v58) = (unsigned __int16)((v13 >> 3) - 1);
          BYTE12(v58) = *(_BYTE *)(v10 + a2 + 46);
          v16 = *(_DWORD *)(v10 + a2 + 68) & 8;
          v17 = 0;
          if ( !v16 )
            v17 = 4;
          DWORD1(v56) = v17;
          if ( (*(_BYTE *)(v10 + a2 + 68) & 2) != 0 )
            DWORD1(v56) = v16 != 0 ? 1 : 5;
          v18 = v52 + 8 * ((__int64)((__int64)v9 - v52) >> 3) - 24;
          v19 = *(_QWORD *)(v18 + 8);
          if ( v19 == *(_QWORD *)(v18 + 16) )
          {
            std::vector<HidChannelValueInfo>::_Emplace_reallocate<HidChannelValueInfo const &>(v18, v19, &v55);
          }
          else
          {
            *(_OWORD *)v19 = v55;
            *(_OWORD *)(v19 + 16) = v56;
            *(_OWORD *)(v19 + 32) = v57;
            *(_OWORD *)(v19 + 48) = v58;
            *(_QWORD *)(v19 + 64) = v59;
            *(_QWORD *)(v18 + 8) += 72LL;
          }
          v13 += *(unsigned __int16 *)(v10 + a2 + 48);
          v9 = (_QWORD *)*((_QWORD *)&v52 + 1);
        }
        v6 = *(_BYTE *)(v10 + a2 + 46);
        v8 = 0x8E38E38E38E38E39uLL;
      }
      ++v7;
    }
    v20 = v52;
    v21 = (_QWORD *)v52;
    v22 = v9;
    while ( v21 != v22 )
    {
      LOBYTE(v8) = a1;
      std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        *v21,
        v21[1],
        0x8E38E38E38E38E39uLL * ((__int64)(v21[1] - *v21) >> 3),
        v8);
      v21 += 3;
      v9 = (_QWORD *)*((_QWORD *)&v52 + 1);
      v20 = v52;
      v8 = 0x8E38E38E38E38E39uLL;
    }
    v23 = 0xAAAAAAAAAAAAAAABuLL * (((__int64)v9 - v20) >> 3);
    v24 = 24 * v23;
    if ( !is_mul_ok(v23, 0x18uLL) )
      v24 = -1LL;
    v25 = __CFADD__(v24, 8LL);
    v26 = v24 + 8;
    if ( v25 )
      v26 = -1LL;
    v27 = (unsigned __int64 *)operator new[](v26, (const struct std::nothrow_t *)&std::nothrow);
    if ( v27 )
    {
      *v27 = v23;
      v28 = v27 + 1;
      `eh vector constructor iterator'(
        v27 + 1,
        0x18uLL,
        v23,
        (void (*)(void *))ParsedHidReportDescriptor::ParsedHidReportDescriptor,
        (void (*)(void *))ParsedHidReportDescriptor::~ParsedHidReportDescriptor);
    }
    else
    {
      v28 = 0LL;
    }
    v54 = v28;
    if ( v28 )
    {
      v31 = 0;
      v32 = v52;
      while ( 1 )
      {
        v33 = *((_QWORD *)&v52 + 1);
        if ( v31 >= 0xAAAAAAAAAAAAAAABuLL * ((*((_QWORD *)&v52 + 1) - v32) >> 3) )
          break;
        v34 = 3LL * v31;
        LODWORD(v28[v34]) = 2;
        BYTE4(v28[v34]) = *(_BYTE *)(*(_QWORD *)(v52 + 24LL * v31) + 60LL);
        v35 = 954437177
            * (unsigned int)((__int64)(*(_QWORD *)(v52 + 24LL * v31 + 8) - *(_QWORD *)(v52 + 24LL * v31)) >> 3);
        LODWORD(v28[v34 + 1]) = v35;
        v36 = 72 * v35;
        if ( !is_mul_ok(v35, 0x48uLL) )
          v36 = -1LL;
        v25 = __CFADD__(v36, 8LL);
        v37 = v36 + 8;
        if ( v25 )
          v37 = -1LL;
        v38 = (unsigned __int64 *)operator new[](v37, (const struct std::nothrow_t *)&std::nothrow);
        if ( v38 )
        {
          *v38 = v35;
          v39 = v38 + 1;
          `eh vector constructor iterator'(
            v38 + 1,
            0x48uLL,
            (unsigned int)v35,
            (void (*)(void *))HidChannelValueInfo::HidChannelValueInfo,
            (void (*)(void *))BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp);
        }
        else
        {
          v39 = 0LL;
        }
        v40 = v28[3 * v31 + 2];
        v28[3 * v31 + 2] = v39;
        if ( v40 )
          std::default_delete<HidChannelValueInfo [0]>::operator()<HidChannelValueInfo,0>();
        if ( !v28[3 * v31 + 2] )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x299,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
            (const char *)0x8007000ELL,
            v51);
          std::unique_ptr<ParsedHidReportDescriptor [0]>::~unique_ptr<ParsedHidReportDescriptor [0]>(&v54);
          if ( (_QWORD)v52 )
          {
            std::_Destroy_range<std::allocator<std::vector<HidChannelValueInfo>>>(v52, *((_QWORD *)&v52 + 1));
            std::_Deallocate<16>(v52, 8 * ((__int64)((__int64)v53 - v52) >> 3));
          }
          return 2147942414LL;
        }
        v41 = 0LL;
        v32 = v52;
        if ( 0x8E38E38E38E38E39uLL * ((__int64)(*(_QWORD *)(v52 + 24LL * v31 + 8) - *(_QWORD *)(v52 + 24LL * v31)) >> 3) )
        {
          v42 = 0LL;
          do
          {
            v43 = *(_QWORD *)(v32 + 24LL * v31);
            v44 = *(_OWORD *)(v43 + v42);
            v45 = *(_OWORD *)(v43 + v42 + 16);
            v46 = *(_OWORD *)(v43 + v42 + 32);
            v47 = *(_OWORD *)(v43 + v42 + 48);
            v48 = *(_QWORD *)(v43 + v42 + 64);
            v49 = v28[3 * v31 + 2];
            *(_OWORD *)(v42 + v49) = v44;
            *(_OWORD *)(v42 + v49 + 16) = v45;
            *(_OWORD *)(v42 + v49 + 32) = v46;
            *(_OWORD *)(v42 + v49 + 48) = v47;
            *(_QWORD *)(v42 + v49 + 64) = v48;
            ++v41;
            v42 += 72LL;
            v32 = v52;
          }
          while ( v41 < 0x8E38E38E38E38E39uLL
                      * ((__int64)(*(_QWORD *)(v52 + 24LL * v31 + 8) - *(_QWORD *)(v52 + 24LL * v31)) >> 3) );
        }
        ++v31;
      }
      if ( a3 != (__int64 *)&v54 )
      {
        v54 = 0LL;
        v50 = *a3;
        *a3 = (__int64)v28;
        if ( v50 )
        {
          std::default_delete<ParsedHidReportDescriptor [0]>::operator()<ParsedHidReportDescriptor,0>(
            v33,
            v50,
            v31,
            0x8E38E38E38E38E39uLL);
          v33 = *((_QWORD *)&v52 + 1);
          v32 = v52;
        }
      }
      *a4 = -1431655765 * ((v33 - v32) >> 3);
      std::unique_ptr<ParsedHidReportDescriptor [0]>::~unique_ptr<ParsedHidReportDescriptor [0]>(&v54);
      if ( (_QWORD)v52 )
      {
        std::_Destroy_range<std::allocator<std::vector<HidChannelValueInfo>>>(v52, *((_QWORD *)&v52 + 1));
        std::_Deallocate<16>(v52, 8 * ((__int64)((__int64)v53 - v52) >> 3));
      }
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x291,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
        (const char *)0x8007000ELL,
        v51);
      if ( (_QWORD)v52 )
      {
        std::_Destroy_range<std::allocator<std::vector<HidChannelValueInfo>>>(v52, *((_QWORD *)&v52 + 1));
        std::_Deallocate<16>(v52, 8 * ((__int64)((__int64)v53 - v52) >> 3));
      }
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2A6,
                           (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hi"
                                         "dlamparraydevice.cpp",
                           v29);
  }
  return result;
}
