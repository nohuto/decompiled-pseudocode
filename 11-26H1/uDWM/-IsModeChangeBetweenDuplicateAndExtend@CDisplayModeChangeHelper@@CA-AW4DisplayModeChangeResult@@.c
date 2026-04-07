/*
 * XREFs of ?IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180006D24
 * Callers:
 *     ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180006834 (-HasChanged@CDisplayModeChangeHelper@@SA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV-$.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44444@Z @ 0x180001008 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEB.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18003FECC (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z @ 0x1800582A8 (-DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x1800582BC (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 *     ??$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAPEAPEBVCDWMDisplay@@QEAPEBV2@AEBQEBV2@@Z @ 0x1800B2990 (--$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDispl.c)
 */

__int64 __fastcall CDisplayModeChangeHelper::IsModeChangeBetweenDuplicateAndExtend(
        CDWMDisplaySet *this,
        CDWMDisplaySet *a2,
        _QWORD *a3)
{
  int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // r14d
  const struct CDWMDisplay *v9; // rdi
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  const struct CDWMDisplay *v14; // r13
  __m128i v15; // xmm6
  char v16; // cl
  const struct CDWMDisplay **v17; // rdx
  void *v18; // rdx
  int *v19; // rax
  const struct CDWMDisplay **v20; // rdx
  const struct CDWMDisplay **v21; // rdx
  unsigned __int64 v22; // r9
  int v24; // r8d
  BOOL v25; // r9d
  int *v26; // [rsp+38h] [rbp-69h]
  int *v27; // [rsp+40h] [rbp-61h]
  int *v28; // [rsp+48h] [rbp-59h]
  int *v29; // [rsp+50h] [rbp-51h]
  BOOL *v30; // [rsp+58h] [rbp-49h]
  const struct CDWMDisplay *v31; // [rsp+68h] [rbp-39h] BYREF
  int v32; // [rsp+70h] [rbp-31h] BYREF
  int v33; // [rsp+74h] [rbp-2Dh] BYREF
  BOOL v34; // [rsp+78h] [rbp-29h] BYREF
  int v35; // [rsp+7Ch] [rbp-25h] BYREF
  int v36; // [rsp+80h] [rbp-21h] BYREF
  int v37; // [rsp+84h] [rbp-1Dh] BYREF
  int v38; // [rsp+88h] [rbp-19h] BYREF
  int v39; // [rsp+8Ch] [rbp-15h] BYREF
  BOOL v40; // [rsp+90h] [rbp-11h] BYREF
  int v41; // [rsp+94h] [rbp-Dh] BYREF
  int v42; // [rsp+98h] [rbp-9h] BYREF
  int v43; // [rsp+9Ch] [rbp-5h] BYREF
  int v44; // [rsp+A0h] [rbp-1h] BYREF
  int v45; // [rsp+A4h] [rbp+3h] BYREF
  BOOL v46; // [rsp+108h] [rbp+67h] BYREF
  int v47; // [rsp+110h] [rbp+6Fh] BYREF
  int v48; // [rsp+118h] [rbp+77h] BYREF
  int v49; // [rsp+120h] [rbp+7Fh] BYREF

  if ( *a3 != a3[1] )
    a3[1] = *a3;
  v6 = *((_DWORD *)a2 + 16);
  v7 = 0;
  if ( v6 != *((_DWORD *)this + 16) )
    return 0LL;
  v8 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      v31 = CDWMDisplaySet::DisplayNoRef(a2, v8);
      v9 = v31;
      MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(this, v31);
      if ( MatchedPhysicalDisplayNoRef )
        break;
LABEL_30:
      if ( ++v8 >= *((_DWORD *)a2 + 16) )
        goto LABEL_31;
    }
    v14 = (const struct CDWMDisplay *)((char *)v9 + 96);
    v15 = *(__m128i *)((char *)v9 + 56);
    v16 = *((_BYTE *)v9 + 288);
    if ( *((_BYTE *)MatchedPhysicalDisplayNoRef + 288) )
    {
      if ( !v16 )
      {
        v17 = (const struct CDWMDisplay **)a3[1];
        v7 = 3;
        if ( v17 == (const struct CDWMDisplay **)a3[2] )
        {
          std::vector<CDWMDisplay const *>::_Emplace_reallocate<CDWMDisplay const * const &>(a3, v17, &v31);
          v9 = v31;
        }
        else
        {
          *v17 = v9;
          a3[1] += 8LL;
        }
        if ( (unsigned int)dword_1801140F8 <= 5 || !(unsigned __int8)tlgKeywordOn(&dword_1801140F8, 2LL) )
          goto LABEL_30;
        v18 = &unk_1801008B1;
        v46 = *((_QWORD *)v9 + 11) != (_QWORD)v9;
        v47 = *((unsigned __int8 *)v9 + 288);
        v30 = &v46;
        v29 = &v47;
        v28 = &v48;
        v27 = &v49;
        v48 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 12));
        v26 = &v32;
        v19 = &v33;
        v49 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
        v32 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 4));
        v33 = _mm_cvtsi128_si32(v15);
        goto LABEL_29;
      }
    }
    else if ( v16 )
    {
      v20 = (const struct CDWMDisplay **)a3[1];
      v7 = 7;
      if ( v20 == (const struct CDWMDisplay **)a3[2] )
      {
        std::vector<CDWMDisplay const *>::_Emplace_reallocate<CDWMDisplay const * const &>(a3, v20, &v31);
        v9 = v31;
      }
      else
      {
        *v20 = v9;
        a3[1] += 8LL;
      }
      if ( (unsigned int)dword_1801140F8 <= 5 || !(unsigned __int8)tlgKeywordOn(&dword_1801140F8, 2LL) )
        goto LABEL_30;
      v18 = &unk_180100821;
      v34 = *((_QWORD *)v9 + 11) != (_QWORD)v9;
      v35 = *((unsigned __int8 *)v9 + 288);
      v30 = &v34;
      v29 = &v35;
      v28 = &v36;
      v27 = &v37;
      v36 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 12));
      v26 = &v38;
      v19 = &v39;
      v37 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
      v38 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 4));
      v39 = _mm_cvtsi128_si32(v15);
LABEL_29:
      v31 = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (int)v18,
        v12,
        v13,
        (void **)&v31,
        (__int64)v19,
        (__int64)v26,
        (__int64)v27,
        (__int64)v28,
        (__int64)v29,
        (__int64)v30);
      goto LABEL_30;
    }
    LOBYTE(v11) = *((_QWORD *)v9 + 11) != (_QWORD)v9;
    if ( (*((_QWORD *)MatchedPhysicalDisplayNoRef + 11) != (_QWORD)MatchedPhysicalDisplayNoRef) == (_BYTE)v11 )
      goto LABEL_30;
    v21 = (const struct CDWMDisplay **)a3[1];
    v7 = 14;
    if ( v21 == (const struct CDWMDisplay **)a3[2] )
    {
      std::vector<CDWMDisplay const *>::_Emplace_reallocate<CDWMDisplay const * const &>(a3, v21, &v31);
      v9 = v31;
    }
    else
    {
      *v21 = v9;
      a3[1] += 8LL;
    }
    if ( (unsigned int)dword_1801140F8 <= 5 || (byte_180114108 & 2) == 0 || (qword_180114110 & 2) != qword_180114110 )
      goto LABEL_30;
    v18 = &unk_18010072C;
    v40 = *((_QWORD *)v9 + 11) != (_QWORD)v9;
    v41 = *((unsigned __int8 *)v9 + 288);
    v30 = &v40;
    v29 = &v41;
    v28 = &v42;
    v27 = &v43;
    v42 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 12));
    v26 = &v44;
    v19 = &v45;
    v43 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
    v44 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 4));
    v45 = _mm_cvtsi128_si32(v15);
    goto LABEL_29;
  }
LABEL_31:
  v22 = (__int64)(a3[1] - *a3) >> 3;
  if ( v22 == 1 )
    return v7;
  if ( v22 <= 1 )
    return 0LL;
  if ( (unsigned int)dword_1801140F8 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1801140F8, 2LL) )
    {
      v46 = v25;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (unsigned int)&v46,
        (unsigned int)&unk_1801007BA,
        v24,
        v25,
        (__int64)&v46);
    }
  }
  return 14LL;
}
