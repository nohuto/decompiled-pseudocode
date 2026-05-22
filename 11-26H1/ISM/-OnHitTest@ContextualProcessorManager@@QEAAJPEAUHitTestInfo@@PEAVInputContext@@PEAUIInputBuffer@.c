/*
 * XREFs of ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180015E20
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180014BD0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801A33B0 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180016490 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180016500 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUHitTestInfo@@PEBGW4ContextualProcessorState@@@Z @ 0x1800166C0 (-OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUHitTestInfo@@PEBGW4ContextualProcessor.c)
 *     ?OnHitTest@ContextualProcessing@InputETW@@SAXPEBG@Z @ 0x1800167B0 (-OnHitTest@ContextualProcessing@InputETW@@SAXPEBG@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x180017420 (--0-$unordered_map@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K@5@V-$a.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall ContextualProcessorManager::OnHitTest(
        ContextualProcessorManager *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct IInputBuffer *a4,
        struct IInputTarget **a5,
        enum ContextualProcessorState *a6)
{
  bool v10; // bl
  _QWORD *v11; // rdi
  _QWORD *v12; // r14
  __int64 v13; // rax
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // rcx
  int v18; // eax
  const unsigned __int16 *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  void (__fastcall *v22)(__int64, _QWORD, _QWORD, int *); // r15
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // r15d
  __int64 v26; // rcx
  char *v28; // rax
  __int64 (__fastcall ***v29)(_QWORD, GUID *, struct IInputTarget **); // rbx
  int v30; // r14d
  __int64 (__fastcall *v31)(_QWORD, GUID *, __int64 *); // r14
  __int64 v32; // rcx
  int v33; // eax
  __int64 (__fastcall ***v34)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v35)(_QWORD, GUID *, struct IInputTarget **); // r14
  struct IInputTarget *v36; // rcx
  int v37; // eax
  struct IInputTarget *v38; // rcx
  __int64 (__fastcall ***v39)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // eax
  int v43; // [rsp+20h] [rbp-C9h]
  bool v44; // [rsp+30h] [rbp-B9h]
  __int64 v45; // [rsp+38h] [rbp-B1h] BYREF
  struct IInputTarget *v46; // [rsp+40h] [rbp-A9h] BYREF
  __int64 v47; // [rsp+48h] [rbp-A1h]
  int v48; // [rsp+50h] [rbp-99h]
  __int64 (__fastcall ***v49)(_QWORD, GUID *, struct IInputTarget **); // [rsp+58h] [rbp-91h] BYREF
  enum ContextualProcessorState *v50; // [rsp+60h] [rbp-89h]
  char *v51; // [rsp+68h] [rbp-81h]
  int v52; // [rsp+70h] [rbp-79h] BYREF
  __int64 v53; // [rsp+78h] [rbp-71h]
  char v54; // [rsp+80h] [rbp-69h] BYREF
  _BYTE v55[56]; // [rsp+88h] [rbp-61h] BYREF
  _BYTE v56[56]; // [rsp+C0h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+4Fh]

  v50 = a6;
  if ( !a5 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
      (const char *)0x80070057LL,
      v43);
    return 2147942487LL;
  }
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v55, "ContextualProcessingHitTest", 0LL);
  v45 = 0LL;
  v48 = 0;
  v10 = (*((_DWORD *)a2 + 8) & 0x10000) != 0 && *(_DWORD *)a2 == 2;
  v44 = v10;
  if ( *a5
    && (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*a5)(*a5, &GUID_09d4eb6f_2e60_439b_b350_48a58a91f245, &v45) >= 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v45 + 64LL))(v45, *((unsigned int *)a2 + 10))
      && v10 )
    {
      v25 = *((_DWORD *)this + 11);
      goto LABEL_32;
    }
    (*(void (__fastcall **)(__int64, struct InputContext *))(*(_QWORD *)v45 + 32LL))(v45, a3);
  }
  else
  {
    v49 = 0LL;
    v46 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v49);
    v28 = (char *)RefCountedObject::operator new(0xA8uLL);
    v29 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IInputTarget **))v28;
    v51 = v28;
    if ( v28 )
    {
      *((_QWORD *)v28 + 3) = &RefCountedObject::`vftable';
      *((_DWORD *)v28 + 8) = 1;
      *(_QWORD *)v28 = &ContextualProcessorBuffer::`vftable'{for `IDCompInputTarget'};
      *((_QWORD *)v28 + 1) = &ContextualProcessorBuffer::`vftable'{for `IFocusInputTarget'};
      *((_QWORD *)v28 + 2) = &ContextualProcessorBuffer::`vftable'{for `IContextualProcessorBufferTarget'};
      *((_QWORD *)v28 + 3) = &ContextualProcessorBuffer::`vftable'{for `RefCountedObject'};
      *((_QWORD *)v28 + 5) = 0LL;
      *((_QWORD *)v28 + 6) = 0LL;
      *((_QWORD *)v28 + 7) = 0LL;
      *((_QWORD *)v28 + 8) = 0LL;
      *((_QWORD *)v28 + 9) = 0LL;
      *((_QWORD *)v28 + 10) = 0LL;
      std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>(v28 + 88);
      v29[19] = (__int64 (__fastcall **)(_QWORD, GUID *, struct IInputTarget **))a3;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v29 + 19);
      v29[20] = (__int64 (__fastcall **)(_QWORD, GUID *, struct IInputTarget **))a4;
      if ( a4 )
        (*(void (__fastcall **)(struct IInputBuffer *))(*(_QWORD *)a4 + 8LL))(a4);
    }
    else
    {
      v29 = 0LL;
    }
    if ( v29 )
    {
      v49 = v29;
      v30 = 0;
    }
    else
    {
      v30 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessorbuffer.cpp",
        (const char *)0x8007000ELL,
        v43);
      v29 = v49;
    }
    if ( v30 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v30,
        v43);
    v31 = (__int64 (__fastcall *)(_QWORD, GUID *, __int64 *))**v29;
    v32 = v45;
    if ( v45 )
    {
      v45 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    v33 = v31(v29, &GUID_09d4eb6f_2e60_439b_b350_48a58a91f245, &v45);
    if ( v33 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x70,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v33,
        v43);
    v34 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v49;
    v35 = **v49;
    v36 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v36 + 16LL))(v36);
    }
    v37 = v35(v34, &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3, &v46);
    if ( v37 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x71,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
        (const char *)(unsigned int)v37,
        v43);
    v38 = v46;
    if ( v46 )
    {
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v46 + 8LL))(v46);
      v38 = v46;
    }
    *a5 = v38;
    if ( v38 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v38 + 16LL))(v38);
    }
    v39 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v49;
    if ( v49 )
    {
      v49 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v39)[2])(v39);
    }
  }
  v11 = (_QWORD *)*((_QWORD *)this + 2);
  v12 = (_QWORD *)*((_QWORD *)this + 3);
  while ( 1 )
  {
    if ( v11 == v12 )
    {
      v25 = v48;
      goto LABEL_30;
    }
    v13 = *((_QWORD *)a3 + 22);
    if ( !v13 )
      break;
    v24 = *(_QWORD *)(v13 + 8);
    if ( v24 )
    {
      if ( v24 != -1 )
        break;
    }
    if ( *((_DWORD *)v11 + 2) == 1 )
      break;
LABEL_25:
    v11 += 2;
  }
  v47 = 0LL;
  v46 = 0LL;
  v14 = (char *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v45 + 56LL))(v45, &v49, *v11);
  v15 = 0LL;
  if ( &v54 != v14 )
  {
    v15 = *(_QWORD *)v14;
    *(_QWORD *)v14 = 0LL;
  }
  v16 = v47;
  v47 = v15;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v17 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v49;
  if ( v49 )
  {
    v49 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v17)[2])(v17);
  }
  InputTraceLogging::PerfRegion::PerfRegion(
    (InputTraceLogging::PerfRegion *)v56,
    "ContextualProcessorHitTest",
    (const struct InputTraceLogging::PerfRegion *)v55);
  v18 = (*(__int64 (__fastcall **)(_QWORD, struct HitTestInfo *, struct InputContext *, struct IInputTarget **))(*(_QWORD *)*v11 + 24LL))(
          *v11,
          a2,
          a3,
          &v46);
  if ( v18 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x9D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
      (const char *)(unsigned int)v18,
      v43);
  v19 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 48LL))(*v11);
  InputETW::ContextualProcessing::OnHitTest(v19);
  v20 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 48LL))(*v11);
  InputTraceLogging::ContextualProcessing::OnHitTest(a2, v20, (unsigned int)v46);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v56);
  v21 = v45;
  v22 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v45 + 48LL);
  v52 = (int)v46;
  v53 = v47;
  if ( v47 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 8LL))(v47);
  v22(v21, *((unsigned int *)a2 + 10), *v11, &v52);
  if ( (_DWORD)v46 != 2 )
  {
    if ( (_DWORD)v46 == 1 )
    {
      v48 = 1;
    }
    else if ( (_DWORD)v46 == 3 )
    {
      v42 = v48;
      if ( !v48 )
        v42 = 3;
      v48 = v42;
    }
    v23 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    goto LABEL_25;
  }
  v25 = 2;
  v40 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  }
LABEL_30:
  *((_BYTE *)a3 + 184) = 1;
  if ( v44 )
    *((_DWORD *)this + 11) = v25;
LABEL_32:
  if ( v25 )
  {
    if ( v50 )
      *(_DWORD *)v50 = v25;
    v41 = v45;
    if ( v45 )
    {
      v45 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    }
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v55);
    return 0LL;
  }
  else
  {
    v26 = v45;
    if ( v45 )
    {
      v45 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v55);
    return 2147500037LL;
  }
}
