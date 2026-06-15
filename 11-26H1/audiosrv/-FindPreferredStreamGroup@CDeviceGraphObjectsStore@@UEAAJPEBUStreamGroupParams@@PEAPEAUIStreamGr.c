/*
 * XREFs of ?FindPreferredStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180101530
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180043A48 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?FindStreamGroups@CDeviceGraphObjectsStore@@IEAAJPEBUStreamGroupParams@@AEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180045C10 (-FindStreamGroups@CDeviceGraphObjectsStore@@IEAAJPEBUStreamGroupParams@@AEAV-$vector@V-$ComPtr@U.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180057B18 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDeviceGraphObjectsStore::FindPreferredStreamGroup(
        CDeviceGraphObjectsStore *this,
        const struct StreamGroupParams *a2,
        struct IStreamGroupProxy **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  int StreamGroups; // eax
  unsigned int v8; // ebx
  const char *v9; // r9
  __int64 result; // rax
  struct IStreamGroupProxy *v11; // rdi
  _QWORD *v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 i; // rsi
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  _QWORD *v18; // rax
  int v19[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF
  struct IStreamGroupProxy *v23; // [rsp+80h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+88h] [rbp+20h] BYREF

  *a3 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v24 = v6;
  *(_OWORD *)v19 = 0LL;
  v20 = 0LL;
  try
  {
    StreamGroups = CDeviceGraphObjectsStore::FindStreamGroups((__int64)this, (__int64)a2, v19);
    v8 = StreamGroups;
    if ( StreamGroups >= 0 )
    {
      v11 = **(struct IStreamGroupProxy ***)v19;
      v22 = **(_QWORD **)v19;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v22);
      v12 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)v19 + 416LL))(**(_QWORD **)v19);
      v13 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(v12[1] - *v12) >> 2);
      for ( i = 1LL; i < (__int64)(*(_QWORD *)&v19[2] - *(_QWORD *)v19) >> 3; ++i )
      {
        v15 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v19 + 8 * i) + 416LL))(*(_QWORD *)(*(_QWORD *)v19 + 8 * i));
        if ( 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(v15[1] - *v15) >> 2) < v13 )
        {
          v16 = *(_QWORD *)v19;
          v17 = *(_QWORD *)(*(_QWORD *)v19 + 8 * i);
          if ( v11 != (struct IStreamGroupProxy *)v17 )
          {
            v23 = *(struct IStreamGroupProxy **)(*(_QWORD *)v19 + 8 * i);
            Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v23);
            v23 = v11;
            v11 = (struct IStreamGroupProxy *)v17;
            v22 = v17;
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v23);
            v16 = *(_QWORD *)v19;
          }
          v18 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v16 + 8 * i) + 416LL))(*(_QWORD *)(v16 + 8 * i));
          v13 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(v18[1] - *v18) >> 2);
        }
      }
      v22 = 0LL;
      *a3 = v11;
      v8 = v11 == 0LL ? 0x80070490 : 0;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
      if ( !*(_QWORD *)v19 )
        goto LABEL_9;
    }
    else
    {
      if ( StreamGroups == -2147023728 )
      {
        if ( *(_QWORD *)v19 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
            *(__int64 **)v19,
            *(__int64 **)&v19[2]);
          std::_Deallocate<16>(*(void **)v19, (struct std::nothrow_t *)((v20 - *(_QWORD *)v19) & 0xFFFFFFFFFFFFFFF8uLL));
          *(_OWORD *)v19 = 0LL;
          v20 = 0LL;
        }
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v24);
        return 2147943568LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
        (const char *)(unsigned int)StreamGroups);
      if ( !*(_QWORD *)v19 )
      {
LABEL_9:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v24);
        return v8;
      }
    }
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
      *(__int64 **)v19,
      *(__int64 **)&v19[2]);
    std::_Deallocate<16>(*(void **)v19, (struct std::nothrow_t *)((v20 - *(_QWORD *)v19) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_OWORD *)v19 = 0LL;
    v20 = 0LL;
    goto LABEL_9;
  }
  catch ( ... )
  {
    LODWORD(v22) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x9A,
                     (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                     v9);
    return (unsigned int)v22;
  }
  return result;
}
