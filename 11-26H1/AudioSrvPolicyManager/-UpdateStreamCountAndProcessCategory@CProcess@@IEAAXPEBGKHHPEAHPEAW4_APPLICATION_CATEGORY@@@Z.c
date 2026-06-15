/*
 * XREFs of ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180014080
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000EA10 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x1800133E0 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180006440 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000E540 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000E70C (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?ScheduleDeferredBamExemptionRelease@CProcess@@IEAAXXZ @ 0x180014F88 (-ScheduleDeferredBamExemptionRelease@CProcess@@IEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180015160 (--2@YAPEAX_K@Z.c)
 *     ?EnsureBamExemption@CProcess@@IEAAXXZ @ 0x18001580C (-EnsureBamExemption@CProcess@@IEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180027844 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTe.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18002B87C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18002EC28 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 *     memset_0 @ 0x180030A1C (memset_0.c)
 *     ?Add@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBQEAI@Z @ 0x180037FBC (-Add@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CSimpleMa.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18003A890 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CProcess::UpdateStreamCountAndProcessCategory(
        CProcess *this,
        unsigned __int16 *Src,
        int a3,
        int a4,
        int a5,
        int *a6,
        enum _APPLICATION_CATEGORY *a7)
{
  unsigned int v9; // eax
  unsigned __int64 v10; // rdi
  __int64 v11; // r12
  char *v12; // r12
  unsigned __int64 v13; // r13
  int v14; // esi
  unsigned __int64 v15; // rcx
  __m128i *v16; // rax
  __m128i *v17; // r12
  __m128i *v18; // r8
  int v19; // ebx
  __int16 *v20; // rdx
  char *v21; // rax
  unsigned __int64 v22; // rcx
  const __m128i *v23; // r11
  const __m128i *v24; // r12
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r8
  const __m128i *v28; // r10
  unsigned __int64 v29; // rax
  unsigned __int64 i; // rax
  signed __int64 v31; // r12
  char *v32; // rbx
  char *v33; // rcx
  _DWORD *v34; // rdx
  int v35; // r10d
  int v36; // r8d
  int v37; // eax
  __int64 v38; // r9
  int v39; // eax
  int v40; // edi
  const struct std::nothrow_t *v41; // rdx
  __int64 v42; // r8
  int v43; // r10d
  int j; // r9d
  int v45; // r10d
  int v46; // r8d
  __int64 v47; // r9
  int v48; // r10d
  int v49; // r8d
  __int64 v50; // r9
  int v51; // r10d
  int v52; // r8d
  __int64 v53; // r9
  int v54; // r10d
  int v55; // r8d
  __int64 v56; // r9
  int v57; // r10d
  int v58; // r8d
  __int64 v59; // r9
  char *v63; // rax
  int v64; // edi
  const struct _tlgProvider_t *v65; // rax
  int v66; // ebx
  int v67; // r8d
  int v68; // r9d
  __m128i *v69; // [rsp+50h] [rbp-D8h]
  unsigned __int64 v70; // [rsp+58h] [rbp-D0h] BYREF
  int v71; // [rsp+60h] [rbp-C8h] BYREF
  void *v72; // [rsp+68h] [rbp-C0h] BYREF
  unsigned int v73; // [rsp+74h] [rbp-B4h]
  int v74; // [rsp+78h] [rbp-B0h]
  void *Srca; // [rsp+80h] [rbp-A8h]
  char *v76; // [rsp+88h] [rbp-A0h]
  int v77; // [rsp+90h] [rbp-98h]
  int v78; // [rsp+94h] [rbp-94h]
  wchar_t *v79; // [rsp+98h] [rbp-90h] BYREF
  wchar_t *v80; // [rsp+A0h] [rbp-88h] BYREF
  __int128 v81; // [rsp+A8h] [rbp-80h] BYREF
  unsigned __int64 v82; // [rsp+B8h] [rbp-70h]
  __int64 v83; // [rsp+C0h] [rbp-68h]
  _QWORD v84[4]; // [rsp+C8h] [rbp-60h] BYREF

  v71 = a4;
  v78 = a3;
  v80 = (wchar_t *)a6;
  v79 = (wchar_t *)a7;
  v74 = *((_DWORD *)this + 78);
  v9 = 1;
  v10 = -1LL;
  if ( !a4 )
    v9 = -1;
  v73 = v9;
  v11 = 280LL;
  if ( !a5 )
    v11 = 256LL;
  v12 = (char *)this + v11;
  v76 = v12;
  v81 = 0LL;
  do
    ++v10;
  while ( Src[v10] );
  v13 = 0x7FFFFFFFFFFFFFFELL;
  if ( v10 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlength_error("string too long");
  if ( v10 <= 7 )
  {
    v82 = v10;
    v83 = 7LL;
    memcpy_0(&v81, Src, 2 * v10);
    v14 = 0;
    *((_WORD *)&v81 + v10) = 0;
    v13 = v83;
    v10 = v82;
    v18 = (__m128i *)v81;
    v69 = (__m128i *)v81;
    goto LABEL_18;
  }
  v14 = 0;
  if ( (v10 | 7) > 0x7FFFFFFFFFFFFFFELL )
  {
    v15 = -2LL;
LABEL_14:
    if ( v15 < 0x1000 )
      v16 = (__m128i *)operator new(v15);
    else
      v16 = (__m128i *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v15);
    v69 = v16;
    v17 = v16;
    goto LABEL_17;
  }
  v13 = v10 | 7;
  if ( (v10 | 7) < 0xA )
    v13 = 10LL;
  if ( v13 + 1 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v15 = 2 * (v13 + 1);
  if ( v15 )
    goto LABEL_14;
  v17 = 0LL;
  v69 = 0LL;
LABEL_17:
  *(_QWORD *)&v81 = v17;
  v82 = v10;
  v83 = v13;
  memcpy_0(v17, Src, 2 * v10);
  v17->m128i_i16[v10] = 0;
  v18 = v69;
  v12 = v76;
LABEL_18:
  v19 = 0;
  v20 = (__int16 *)*((int *)v12 + 4);
  Srca = v20;
  v21 = 0LL;
  v22 = 0LL;
  v77 = 0xFFFF;
  while ( 1 )
  {
    v70 = v22;
    v72 = v21;
    if ( (__int64)v21 >= (__int64)v20 )
      goto LABEL_105;
    v23 = (const __m128i *)(v22 + *(_QWORD *)v12);
    v24 = (const __m128i *)&v81;
    if ( v13 > 7 )
      v24 = v18;
    v25 = v23[1].m128i_u64[0];
    if ( v23[1].m128i_i64[1] > 7uLL )
      v23 = (const __m128i *)v23->m128i_i64[0];
    if ( v25 == v10 )
      break;
LABEL_39:
    ++v19;
    v21 = (char *)v72 + 1;
    v22 = v70 + 32;
    v12 = v76;
  }
  if ( !v25 )
    goto LABEL_46;
  v26 = 0LL;
  _R9 = v23;
  v28 = v24;
  if ( Avx2WmemEnabledWeakValue )
  {
    v29 = 16LL;
    while ( v29 <= v25 )
    {
      __asm
      {
        vmovdqu ymm1, ymmword ptr [r9]
        vpcmpeqw ymm1, ymm1, ymmword ptr [r10]
        vpmovmskb edx, ymm1
      }
      if ( _EDX != -1 )
      {
        __asm { vzeroupper }
        goto LABEL_38;
      }
      v26 += 16LL;
      v29 += 16LL;
      _R9 += 2;
      v28 += 2;
      __asm { vzeroupper }
    }
  }
  for ( i = v26 + 8; i <= v25; i += 8LL )
  {
    if ( (unsigned __int16)_mm_movemask_epi8(_mm_cmpeq_epi16(_mm_loadu_si128(v28), _mm_loadu_si128(_R9))) != (_WORD)v77 )
      goto LABEL_38;
    v26 += 8LL;
    ++_R9;
    ++v28;
  }
  if ( v26 + 4 > v25 )
    goto LABEL_34;
  if ( _R9->m128i_i64[0] != v28->m128i_i64[0] )
  {
LABEL_38:
    v20 = (__int16 *)Srca;
    v18 = v69;
    goto LABEL_39;
  }
  v26 += 4LL;
LABEL_34:
  v20 = &v23->m128i_i16[v26];
  v31 = (char *)v24 - (char *)v23;
  while ( v26 < v25 )
  {
    if ( *v20 != *(__int16 *)((char *)v20 + v31) )
      goto LABEL_38;
    ++v26;
    ++v20;
  }
  v18 = v69;
LABEL_46:
  if ( v19 == -1 )
  {
    v12 = v76;
LABEL_105:
    v32 = 0LL;
    goto LABEL_50;
  }
  if ( v19 < 0 || (v12 = v76, v19 >= *((_DWORD *)v76 + 4)) )
  {
    ATL::_AtlRaiseException(v25, (unsigned int)v20);
    __debugbreak();
  }
  v32 = *(char **)(*((_QWORD *)v76 + 1) + 8LL * v19);
LABEL_50:
  if ( v13 > 7 )
  {
    v41 = (const struct std::nothrow_t *)(2 * v13 + 2);
    v70 = (unsigned __int64)v41;
    v72 = v18;
    if ( (unsigned __int64)v41 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v72, &v70);
      v41 = (const struct std::nothrow_t *)v70;
      v18 = (__m128i *)v72;
    }
    operator delete(v18, v41);
  }
  if ( v32 )
  {
LABEL_52:
    v33 = &v32[4 * v78];
    LODWORD(v34) = v73;
    *(_DWORD *)v33 += v73;
    if ( a5 )
    {
      *((_DWORD *)this + 77) += (_DWORD)v34;
      goto LABEL_61;
    }
    *((_DWORD *)this + 76) += (_DWORD)v34;
    v35 = 0;
    v36 = 0;
    v37 = *((_DWORD *)this + 68);
    if ( v37 <= 0 )
      goto LABEL_60;
    v38 = 0LL;
    do
    {
      if ( v38 < 0 || v36 >= v37 )
      {
        ATL::_AtlRaiseException((unsigned int)v33, (unsigned int)v34);
        __debugbreak();
      }
      v33 = (char *)*((_QWORD *)this + 33);
      v34 = *(_DWORD **)&v33[v38];
      v35 += v34[3];
      ++v36;
      v38 += 8LL;
    }
    while ( v36 < v37 );
    if ( v35 )
      goto LABEL_59;
    v42 = 0LL;
    v43 = 0;
    for ( j = 0; j < v37; ++j )
    {
      if ( v42 < 0 || j >= v37 )
      {
        ATL::_AtlRaiseException((unsigned int)v33, (unsigned int)v34);
        __debugbreak();
      }
      v33 = (char *)*((_QWORD *)this + 33);
      v34 = *(_DWORD **)&v33[v42];
      v43 += v34[8];
      v42 += 8LL;
    }
    if ( v43 )
    {
LABEL_59:
      *((_DWORD *)this + 78) = 0;
    }
    else
    {
      v45 = 0;
      v46 = 0;
      v47 = 0LL;
      do
      {
        if ( v47 < 0 || v46 >= v37 )
        {
          ATL::_AtlRaiseException((unsigned int)v33, (unsigned int)v34);
          __debugbreak();
        }
        v33 = (char *)*((_QWORD *)this + 33);
        v34 = *(_DWORD **)&v33[v47];
        v45 += v34[2];
        ++v46;
        v47 += 8LL;
      }
      while ( v46 < v37 );
      if ( v45 )
      {
        *((_DWORD *)this + 78) = 1;
        goto LABEL_61;
      }
      v48 = 0;
      v49 = 0;
      v50 = 0LL;
      do
      {
        if ( v50 < 0 || v49 >= v37 )
        {
          ATL::_AtlRaiseException((unsigned int)v33, (unsigned int)v34);
          __debugbreak();
        }
        v33 = (char *)*((_QWORD *)this + 33);
        v34 = *(_DWORD **)&v33[v50];
        v48 += v34[11];
        ++v49;
        v50 += 8LL;
      }
      while ( v49 < v37 );
      if ( v48 )
        goto LABEL_125;
      v51 = 0;
      v52 = 0;
      v53 = 0LL;
      do
      {
        if ( v53 < 0 || v52 >= v37 )
        {
          ATL::_AtlRaiseException((unsigned int)v33, (unsigned int)v34);
          __debugbreak();
        }
        v33 = (char *)*((_QWORD *)this + 33);
        v34 = *(_DWORD **)&v33[v53];
        v51 += v34[10];
        ++v52;
        v53 += 8LL;
      }
      while ( v52 < v37 );
      if ( v51 )
        goto LABEL_125;
      v54 = 0;
      v55 = 0;
      v56 = 0LL;
      do
      {
        if ( v56 < 0 || v55 >= v37 )
        {
          ATL::_AtlRaiseException((unsigned int)v33, (unsigned int)v34);
          __debugbreak();
        }
        v33 = (char *)*((_QWORD *)this + 33);
        v34 = *(_DWORD **)&v33[v56];
        v54 += v34[1];
        ++v55;
        v56 += 8LL;
      }
      while ( v55 < v37 );
      if ( v54 )
      {
LABEL_125:
        *((_DWORD *)this + 78) = 2;
        goto LABEL_61;
      }
      v57 = 0;
      v58 = 0;
      v59 = 0LL;
      do
      {
        if ( v59 < 0 || v58 >= v37 )
        {
          ATL::_AtlRaiseException((unsigned int)v33, (unsigned int)v34);
          __debugbreak();
        }
        v33 = (char *)*((_QWORD *)this + 33);
        v34 = *(_DWORD **)&v33[v59];
        v57 += v34[7];
        ++v58;
        v59 += 8LL;
      }
      while ( v58 < v37 );
      if ( v57 )
      {
        *((_DWORD *)this + 78) = 3;
        goto LABEL_61;
      }
LABEL_60:
      *((_DWORD *)this + 78) = 4;
    }
LABEL_61:
    v39 = *((_DWORD *)this + 76) + *((_DWORD *)this + 77);
    if ( v71 )
    {
      if ( v39 == 1 )
        CProcess::EnsureBamExemption(this);
    }
    else if ( !v39 )
    {
      CProcess::ScheduleDeferredBamExemptionRelease(this);
    }
  }
  else
  {
    v63 = (char *)operator new(0x60uLL);
    v32 = v63;
    v70 = (unsigned __int64)v63;
    if ( v63 )
    {
      memset_0(v63, 0, 0x60uLL);
      std::wstring::wstring(v84, Src);
      v64 = ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::Add(
              v12,
              v84,
              &v70);
      std::wstring::~wstring((__int64)v84);
      if ( v64 )
      {
        operator delete(0LL, (const struct std::nothrow_t *)4);
        goto LABEL_52;
      }
      operator delete(v32, (const struct std::nothrow_t *)4);
    }
    else
    {
      operator delete(0LL, (const struct std::nothrow_t *)4);
    }
  }
  v40 = v74;
  if ( v79 )
    *(_DWORD *)v79 = v74;
  if ( v80 )
  {
    LOBYTE(v14) = v40 != *((_DWORD *)this + 78);
    *(_DWORD *)v80 = v14;
  }
  if ( v40 != *((_DWORD *)this + 78) )
  {
    v65 = AudioSrvPolicyManagerTelemetryProvider::Provider();
    v66 = (int)v65;
    if ( *(_DWORD *)v65 > 4u )
    {
      if ( (unsigned __int8)tlgKeywordOn(v65, 0x20000LL) )
      {
        v80 = off_180054640[*((int *)this + 78)];
        v79 = off_180054640[v40];
        v71 = *((_DWORD *)this + 40);
        v70 = *((_QWORD *)this + 26);
        v72 = (void *)*((_QWORD *)this + 22);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          v66,
          (unsigned int)&unk_18005A1DB,
          v67,
          v68,
          (__int64)&v72,
          (__int64)&v70,
          (__int64)&v71,
          (__int64)&v79,
          (__int64)&v80);
      }
    }
  }
}
