/*
 * XREFs of ?v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ @ 0x1804C7F50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B55C0 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1801ABBF4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802AF714 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$As@UIScrollViewer@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804C5648 (--$As@UIScrollViewer@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?LayoutItems@GridLayoutFactory@@QEAAJAEBUCSize@Geometry@@AEAVGridLayout@@@Z @ 0x1804D537C (-LayoutItems@GridLayoutFactory@@QEAAJAEBUCSize@Geometry@@AEAVGridLayout@@@Z.c)
 *     ?LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z @ 0x1804D5578 (-LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z.c)
 *     ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x1804D5CE8 (-_CalculateRowSize@GridLayoutFactory@@AEAA-AUCSize@Geometry@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CSwitchItemGrid::v_LayoutChildren(CSwitchItemGrid *this)
{
  __int64 v2; // rcx
  int v3; // edx
  int (__fastcall *v4)(CSwitchItemGrid *, __int64 *); // rbx
  _OWORD *v5; // rax
  _OWORD *v6; // rcx
  __int64 v7; // rdx
  const struct Geometry::CSize *v8; // rax
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v14; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v15[512]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v16; // [rsp+270h] [rbp+170h]
  __int128 v17; // [rsp+278h] [rbp+178h]
  __int64 v18; // [rsp+288h] [rbp+188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    v3 = *((_DWORD *)this + 15);
    LODWORD(v14) = *((_DWORD *)this + 14);
    DWORD1(v14) = v3;
    DWORD2(v14) = v14 + 1;
    HIDWORD(v14) = v3 + 1;
    (*(void (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, &v14, 0LL, 0LL);
  }
  if ( !*((_DWORD *)this + 232) )
  {
    v10 = *((_QWORD *)this + 107);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v13, &v10, (__int64)&GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    *(_QWORD *)&v14 = 0LL;
    DWORD2(v14) = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
    HIDWORD(v14) = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
    if ( !Geometry::CRect::IsEmpty((Geometry::CRect *)&v14) )
    {
      v10 = 0LL;
      v4 = *(int (__fastcall **)(CSwitchItemGrid *, __int64 *))(*(_QWORD *)this + 56LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
      if ( v4(this, &v10) >= 0 )
      {
        if ( !*((_QWORD *)this + 103) )
        {
          v5 = (_OWORD *)((char *)this + 256);
          v6 = v15;
          v7 = 4LL;
          do
          {
            *v6 = *v5;
            v6[1] = v5[1];
            v6[2] = v5[2];
            v6[3] = v5[3];
            v6[4] = v5[4];
            v6[5] = v5[5];
            v6[6] = v5[6];
            v6 += 8;
            *(v6 - 1) = v5[7];
            v5 += 8;
            --v7;
          }
          while ( v7 );
          v16 = *((_QWORD *)this + 106);
          v17 = v14;
          v18 = v10;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
          v8 = (const struct Geometry::CSize *)GridLayoutFactory::_CalculateRowSize(v15, v12);
          v9 = GridLayoutFactory::LayoutItems((GridLayoutFactory *)v15, v8, (CSwitchItemGrid *)((char *)this + 768));
          if ( v9 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x28F,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
              (const char *)(unsigned int)v9);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
        }
        if ( *((_QWORD *)this + 103) )
          GridLayout::LayoutRows((CSwitchItemGrid *)((char *)this + 768), (const struct Geometry::CRect *)&v14);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    }
    v11 = 0LL;
    if ( *((_QWORD *)this + 10) )
    {
      if ( (int)Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollViewer>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 10,
                  &v11) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 80LL))(v11);
    }
    *((_BYTE *)this + 940) = 0;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v13);
  }
}
