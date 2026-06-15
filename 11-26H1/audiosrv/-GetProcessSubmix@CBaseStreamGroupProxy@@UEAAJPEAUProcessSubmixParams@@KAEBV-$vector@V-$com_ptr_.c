/*
 * XREFs of ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIProcessSubmixProxy@@@Z @ 0x1800FDA20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x180045480 (-PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004673C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180046EC0 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     ??$As@UIProcessSubmixProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180069130 (--$As@UIProcessSubmixProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006E1BC (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@UIProcessSubmixProxy@@@WRL@Microsoft@@YAJPEAUIProcessSubmixProxy@@PEAVWeakRef@01@@Z @ 0x180071E28 (--$AsWeak@UIProcessSubmixProxy@@@WRL@Microsoft@@YAJPEAUIProcessSubmixProxy@@PEAVWeakRef@01@@Z.c)
 *     ??$_Emplace_back_with_unused_capacity@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAAEAVWeakRef@WRL@Microsoft@@AEBV234@@Z @ 0x180079670 (--$_Emplace_back_with_unused_capacity@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsof.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     ??$MakeAndInitialize@VCProcessSubmixProxy@@UIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@AEAKAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@$$QEAPEAUPROCESS_SUBMIX_DESCRIPTOR@@$$QEAPEAUIStreamGroupProxy@@AEAKAEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800F89C4 (--$MakeAndInitialize@VCProcessSubmixProxy@@UIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@PEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
__int64 __fastcall CBaseStreamGroupProxy::GetProcessSubmix(
        CBaseStreamGroupProxy *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        CBaseStreamGroupProxy **a5)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  __int64 *i; // rbx
  __int64 v10; // rcx
  __int64 v11; // r15
  int v12; // r12d
  CBaseStreamGroupProxy *v13; // rax
  CBaseStreamGroupProxy *v14; // rbx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 *v17; // rax
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 *v21; // rcx
  CBaseStreamGroupProxy *v22; // rax
  CProcessSubmixProxy *v23; // [rsp+20h] [rbp-148h]
  CBaseStreamGroupProxy *v24; // [rsp+30h] [rbp-138h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-130h] BYREF
  CBaseStreamGroupProxy *v26; // [rsp+40h] [rbp-128h] BYREF
  _DWORD *v27; // [rsp+48h] [rbp-120h] BYREF
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+50h] [rbp-118h] BYREF
  CBaseStreamGroupProxy *v29; // [rsp+58h] [rbp-110h] BYREF
  __int64 *v30[2]; // [rsp+60h] [rbp-108h] BYREF
  _DWORD v31[4]; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v32; // [rsp+80h] [rbp-E8h]
  int v33; // [rsp+88h] [rbp-E0h]
  __int64 v34; // [rsp+90h] [rbp-D8h]
  int v35; // [rsp+98h] [rbp-D0h]
  __int64 v36; // [rsp+A0h] [rbp-C8h]
  __int64 v37; // [rsp+A8h] [rbp-C0h]
  int v38; // [rsp+B0h] [rbp-B8h]
  __int128 v39; // [rsp+B4h] [rbp-B4h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v30[1] = a4;
  v30[0] = (__int64 *)a2;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v28 = v7;
  if ( (*(unsigned __int8 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 184LL))(this) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CF,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)0x80070057LL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v28);
    return 2147942487LL;
  }
  CBaseStreamGroupProxy::PruneStaleProcessSubmixes(this);
  v24 = 0LL;
  for ( i = (__int64 *)*((_QWORD *)this + 30); i != *((__int64 **)this + 31); ++i )
  {
    v10 = *i;
    v27 = (_DWORD *)v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v25 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v27, (__int64 *)&v25) >= 0 && v25 )
    {
      v26 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IProcessSubmixProxy>(&v25, (__int64 *)&v26) >= 0 )
      {
        v11 = *(_QWORD *)a2;
        v12 = (*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v26 + 128LL))(v26);
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11) == v12
          && *(_BYTE *)(a2 + 8) == (*(unsigned __int8 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v26 + 144LL))(v26) )
        {
          v13 = v24;
          v14 = v26;
          if ( v24 != v26 )
          {
            if ( v26 )
            {
              (*(void (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v26 + 8LL))(v26);
              v13 = v24;
            }
            v29 = v13;
            v24 = v14;
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v29);
          }
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v26);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v25);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v27);
          break;
        }
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v26);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v25);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v27);
  }
  if ( !v24 )
  {
    memset_0(v31, 0, 0xA8uLL);
    v31[0] = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
    v31[1] = 0;
    v34 = **(_QWORD **)(a2 + 16);
    v31[2] = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL) + 16LL) + 18;
    v32 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL);
    v35 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL) + 16LL) + 18;
    v36 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL);
    v37 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
    v38 = 0;
    v39 = *(_OWORD *)(*(_QWORD *)(a2 + 16) + 32LL);
    v33 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 16) + 50LL);
    v29 = this;
    v27 = v31;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v24);
    v15 = Microsoft::WRL::Details::MakeAndInitialize<CProcessSubmixProxy,IProcessSubmixProxy,ProcessSubmixParams * &,PROCESS_SUBMIX_DESCRIPTOR *,IStreamGroupProxy *,unsigned long &,std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>> const &>(
            &v24,
            v30,
            &v27,
            &v29,
            v23);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F5,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v24);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v28);
      return v16;
    }
    v25 = 0LL;
    v30[0] = (__int64 *)&v25;
    v17 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(v30);
    v18 = Microsoft::WRL::AsWeak<IProcessSubmixProxy>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v24, v17);
    v19 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F9,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v18);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v25);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v24);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v28);
      return v19;
    }
    v20 = *((_QWORD *)this + 31);
    v21 = (__int64 *)((char *)this + 240);
    if ( v20 == *((_QWORD *)this + 32) )
      std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(
        v21,
        v20,
        (__int64 *)&v25);
    else
      std::vector<Microsoft::WRL::WeakRef>::_Emplace_back_with_unused_capacity<Microsoft::WRL::WeakRef const &>(
        (__int64)v21,
        (__int64 *)&v25);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v25);
  }
  v22 = v24;
  v24 = 0LL;
  *a5 = v22;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v24);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v28);
  return 0LL;
}
