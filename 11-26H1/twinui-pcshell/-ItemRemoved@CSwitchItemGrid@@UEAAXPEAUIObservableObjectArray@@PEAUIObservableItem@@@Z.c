/*
 * XREFs of ?ItemRemoved@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1804C6830
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801ABBF4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802AF714 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??$FindEx@VCompareToItemData@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVCompareToItemData@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1804C577C (--$FindEx@VCompareToItemData@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElement@@@WRL@Mi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CSwitchItemGrid::ItemRemoved(
        CSwitchItemGrid *this,
        struct IObservableObjectArray *a2,
        struct IObservableItem *a3)
{
  _QWORD *v4; // r15
  char *v5; // r14
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64, struct IObservableItem **); // rdi
  unsigned __int64 v10; // r12
  __int64 v11; // rbx
  unsigned int v12; // eax
  int v13; // eax
  char v14; // bl
  __int64 v15; // r8
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct IObservableItem *v19; // [rsp+90h] [rbp+40h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v21; // [rsp+A8h] [rbp+58h] BYREF

  v4 = (_QWORD *)((char *)this - 200);
  LODWORD(v20) = 0;
  v5 = (char *)this - 216;
  v19 = (struct IObservableItem *)*((_QWORD *)this + 80);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v17, (__int64 *)&v19, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
  v21 = 0LL;
  v20 = 0LL;
  v19 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
  LODWORD(a3) = (unsigned int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::FindEx<CompareToItemData>(
                                v4,
                                &v19,
                                v6,
                                &v21) >> 31;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  if ( (unsigned __int8)a3 == 1 )
    goto LABEL_7;
  LOBYTE(v19) = 1;
  v7 = (*(__int64 (__fastcall **)(char *, __int64 *))(*(_QWORD *)v5 + 384LL))(v5, &v16);
  LODWORD(v20) = 1;
  v8 = *(_QWORD *)v7;
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct IObservableItem **))(**(_QWORD **)v7 + 32LL);
  v10 = v21;
  v11 = *(_QWORD *)(*v4 + 8 * v21);
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 400LL))(v11);
  v13 = v9(v8, v12, v11, &v19);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x245,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
      (const char *)(unsigned int)v13);
LABEL_4:
    v14 = 1;
    goto LABEL_5;
  }
  if ( (_BYTE)v19 )
    goto LABEL_4;
  v14 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  if ( v14 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*v4 + 8 * v10) + 80LL))(*(_QWORD *)(*v4 + 8 * v10));
    LOBYTE(v15) = 1;
    (*(void (__fastcall **)(char *, _QWORD, __int64))(*(_QWORD *)v5 + 72LL))(v5, *(_QWORD *)(*v4 + 8 * v10), v15);
  }
LABEL_7:
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v17);
}
