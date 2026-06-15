/*
 * XREFs of ?SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z @ 0x18002AD50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?SetProcessingModeParameters@CAudioStream@@QEAAJPEAVCProcessingModeParameters@@@Z @ 0x18002B0D4 (-SetProcessingModeParameters@CAudioStream@@QEAAJPEAVCProcessingModeParameters@@@Z.c)
 *     ?Clone@StreamGroupParams@@QEBAJPEAPEAU1@@Z @ 0x18002B264 (-Clone@StreamGroupParams@@QEBAJPEAPEAU1@@Z.c)
 *     ??R?$default_delete@UStreamGroupParams@@@std@@QEBAXPEAUStreamGroupParams@@@Z @ 0x18002B60C (--R-$default_delete@UStreamGroupParams@@@std@@QEBAXPEAUStreamGroupParams@@@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800402CC (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180053ED0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??R?$default_delete@UMODE_PARAMS@@@std@@QEBAXPEAUMODE_PARAMS@@@Z @ 0x180069678 (--R-$default_delete@UMODE_PARAMS@@@std@@QEBAXPEAUMODE_PARAMS@@@Z.c)
 *     ??1?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ @ 0x1800696A8 (--1-$unique_ptr@UMODE_PARAMS@@U-$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ.c)
 *     ??1MODE_PARAMS@@QEAA@XZ @ 0x1800696D8 (--1MODE_PARAMS@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::SaveStreamGroupCreationParameters(
        CAudioStream *this,
        struct StreamGroupParams *a2,
        struct MODE_PARAMS *a3)
{
  int v6; // ebx
  struct StreamGroupParams *v7; // rdx
  MODE_PARAMS *v8; // rax
  __int64 v9; // rcx
  MODE_PARAMS *v10; // rdi
  __int64 v11; // rsi
  MODE_PARAMS *i; // rbx
  void *v13; // r14
  unsigned __int16 *v14; // rbx
  void *v15; // rax
  void *v16; // r13
  char *v17; // rax
  char *v18; // rcx
  __int64 v19; // rdx
  void *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  struct StreamGroupParams **v29; // [rsp+20h] [rbp-20h]
  struct StreamGroupParams *v30; // [rsp+28h] [rbp-18h] BYREF
  char v31; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  size_t Size; // [rsp+80h] [rbp+40h] BYREF
  MODE_PARAMS *v34; // [rsp+98h] [rbp+58h] BYREF

  v29 = (struct StreamGroupParams **)((char *)this + 616);
  v30 = 0LL;
  v31 = 1;
  v6 = StreamGroupParams::Clone(a2, &v30);
  if ( v31 )
  {
    v7 = *v29;
    *v29 = v30;
    if ( v7 )
      std::default_delete<StreamGroupParams>::operator()();
  }
  if ( v6 < 0 )
  {
    v25 = 2062LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = CAudioStream::SetProcessingModeParameters(this, (struct StreamGroupParams *)((char *)a2 + 56));
  if ( v6 < 0 )
  {
    v25 = 2064LL;
    goto LABEL_35;
  }
  if ( !a3 )
    return 0LL;
  v8 = (MODE_PARAMS *)operator new[](0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v8;
  if ( !v8 )
  {
    v34 = 0LL;
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x816,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x8007000ELL);
LABEL_29:
    std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>(&v34);
    return (unsigned int)v6;
  }
  *(_QWORD *)v8 = 0LL;
  *((_QWORD *)v8 + 1) = 0LL;
  v34 = v8;
  v11 = *((_QWORD *)a3 + 1);
  i = v8;
  if ( !v11 )
  {
LABEL_19:
    v22 = *((_QWORD *)this + 78);
    *((_QWORD *)this + 78) = i;
    if ( v22 )
      std::default_delete<MODE_PARAMS>::operator()(v9, v22);
    return 0LL;
  }
  v13 = 0LL;
  Size = 0LL;
  if ( !*(_QWORD *)(v11 + 24) )
    goto LABEL_10;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &Size,
    0LL);
  v28 = _AllocString<CTCoAllocPolicy>(v27, v26, *(_QWORD *)(v11 + 24), &Size);
  v6 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v28);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&Size);
    goto LABEL_29;
  }
  v13 = (void *)Size;
LABEL_10:
  v14 = *(unsigned __int16 **)(v11 + 16);
  Size = v14[8] + 18LL;
  v15 = CoTaskMemAlloc(Size);
  v16 = v15;
  if ( v15 )
  {
    memcpy_0(v15, v14, Size);
    v17 = (char *)operator new[](16LL * *(unsigned int *)(v11 + 64) + 68, (const struct std::nothrow_t *)&std::nothrow);
    v18 = v17;
    if ( v17 )
    {
      *(_DWORD *)v17 = *(_DWORD *)v11;
      *((_DWORD *)v17 + 1) = *(_DWORD *)(v11 + 4);
      *((_DWORD *)v17 + 2) = *(_DWORD *)(v11 + 8);
      *((_QWORD *)v17 + 2) = v16;
      *((_QWORD *)v17 + 3) = v13;
      *((_DWORD *)v17 + 8) = *(_DWORD *)(v11 + 32);
      *(_OWORD *)(v17 + 36) = *(_OWORD *)(v11 + 36);
      *((_DWORD *)v17 + 13) = *(_DWORD *)(v11 + 52);
      *((_DWORD *)v17 + 14) = *(_DWORD *)(v11 + 56);
      *((_DWORD *)v17 + 16) = *(_DWORD *)(v11 + 64);
      v19 = 0LL;
      for ( i = v10; (unsigned int)v19 < *(_DWORD *)(v11 + 64); v19 = (unsigned int)(v19 + 1) )
        *(_OWORD *)&v17[16 * (unsigned int)v19 + 68] = *(_OWORD *)(v11 + 16LL * (unsigned int)v19 + 68);
      v20 = (void *)*((_QWORD *)v10 + 1);
      *((_QWORD *)v10 + 1) = v18;
      if ( v20 )
        operator delete(v20, (const struct std::nothrow_t *)0x58);
      v21 = *(_QWORD *)v10;
      *(_QWORD *)v10 = 0LL;
      if ( v21 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 16LL))(v21, v19);
      v9 = *(_QWORD *)a3;
      if ( *(_QWORD *)a3 )
      {
        *(_QWORD *)v10 = v9;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, v19);
      }
      else
      {
        *(_QWORD *)v10 = 0LL;
      }
      goto LABEL_19;
    }
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x826,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x8007000ELL);
    CoTaskMemFree(v16);
    if ( v13 )
      CoTaskMemFree(v13);
    MODE_PARAMS::~MODE_PARAMS(v10);
    operator delete(v10, (const struct std::nothrow_t *)0x10);
  }
  else
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x822,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x8007000ELL);
    if ( v13 )
      CoTaskMemFree(v13);
    std::default_delete<MODE_PARAMS>::operator()(v24, v10);
  }
  return (unsigned int)v6;
}
