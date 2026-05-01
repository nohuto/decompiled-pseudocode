/*
 * XREFs of ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803F2120
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ @ 0x180129DB4 (-InternalAddRef@-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$Make@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@12@XZ @ 0x18031BC40 (--$Make@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@$$V@Detai.c)
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x18031C2D0 (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedPenWorkspaceLayout@@@Z@5@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1803F1798 (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsI.c)
 *     ??$_Destroy_range@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAXPEAUParsedPenWorkspaceLayout@@QEAU1@AEAV?$allocator@UParsedPenWorkspaceLayout@@@0@@Z @ 0x1803F196C (--$_Destroy_range@V-$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAXPEAUParsedPenWorkspaceL.c)
 *     ??$_Emplace_reallocate@UParsedPenWorkspaceLayout@@@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAPEAUParsedPenWorkspaceLayout@@QEAU2@$$QEAU2@@Z @ 0x1803F19A8 (--$_Emplace_reallocate@UParsedPenWorkspaceLayout@@@-$vector@UParsedPenWorkspaceLayout@@V-$alloca.c)
 *     ??1ParsedPenWorkspaceLayout@@QEAA@XZ @ 0x1803F1DBC (--1ParsedPenWorkspaceLayout@@QEAA@XZ.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1803F1F0C (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 *     ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1803F2760 (-ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall PWSLayoutParser::ParsePWSLayoutCollectionNode(
        PWSLayoutParser *this,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, int *),
        _QWORD *a3)
{
  _QWORD *v3; // r14
  PWSLayoutParser *v5; // r15
  int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, int *); // rdi
  __int64 (__fastcall *v9)(_QWORD, GUID *, int *); // rbx
  int v10; // eax
  __int64 v11; // rbx
  int (__fastcall *v12)(__int64, struct IXMLDOMNode **); // rdi
  __int64 (__fastcall ***v13)(_QWORD, GUID *, int *); // rdi
  __int64 (__fastcall *v14)(_QWORD, GUID *, int *); // rbx
  int v15; // eax
  int v16; // eax
  void *v17; // r8
  __int64 v18; // rcx
  __int64 *v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // edi
  __int64 v25; // rdx
  const char *v26; // r9
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *v27; // rax
  int Selected; // eax
  __int64 *v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // r15
  void *v32; // r8
  __int64 v33; // rdx
  __int64 *v34; // rdx
  int v36[2]; // [rsp+20h] [rbp-248h] BYREF
  struct IPenWorkspaceLayoutItem *v37; // [rsp+28h] [rbp-240h] BYREF
  ParsedPenWorkspaceLayout *v38[2]; // [rsp+30h] [rbp-238h] BYREF
  __int64 v39; // [rsp+40h] [rbp-228h]
  __int64 v40; // [rsp+48h] [rbp-220h] BYREF
  __int64 v41; // [rsp+50h] [rbp-218h] BYREF
  __int64 v42; // [rsp+58h] [rbp-210h] BYREF
  __int64 v43; // [rsp+60h] [rbp-208h] BYREF
  __int64 v44; // [rsp+68h] [rbp-200h]
  __int64 v45; // [rsp+70h] [rbp-1F8h]
  __int64 v46; // [rsp+78h] [rbp-1F0h]
  __int64 v47; // [rsp+80h] [rbp-1E8h] BYREF
  char v48; // [rsp+88h] [rbp-1E0h]
  __int128 v49; // [rsp+90h] [rbp-1D8h]
  __int128 v50; // [rsp+A0h] [rbp-1C8h]
  __int128 v51; // [rsp+B0h] [rbp-1B8h]
  __int128 v52; // [rsp+C0h] [rbp-1A8h]
  __int64 v53; // [rsp+D0h] [rbp-198h]
  __int64 v54; // [rsp+D8h] [rbp-190h]
  char v55; // [rsp+E0h] [rbp-188h]
  _QWORD *v56; // [rsp+F0h] [rbp-178h]
  _OWORD v57[2]; // [rsp+100h] [rbp-168h] BYREF
  __int64 v58; // [rsp+120h] [rbp-148h]
  char v59; // [rsp+128h] [rbp-140h]
  __int128 v60; // [rsp+130h] [rbp-138h]
  __int128 v61; // [rsp+140h] [rbp-128h]
  __int128 v62; // [rsp+150h] [rbp-118h]
  __int128 v63; // [rsp+160h] [rbp-108h]
  __int64 v64; // [rsp+170h] [rbp-F8h]
  __int64 v65; // [rsp+178h] [rbp-F0h]
  char v66; // [rsp+180h] [rbp-E8h]
  _QWORD v67[8]; // [rsp+190h] [rbp-D8h] BYREF
  char v68[152]; // [rsp+1D0h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]
  struct IXMLDOMNode *v72; // [rsp+288h] [rbp+20h] BYREF

  v3 = a3;
  v5 = this;
  v6 = PWSLayoutParser::CalculateSelectionAttributes(this);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v41 = 0LL;
    v8 = *a2;
    v9 = (**a2)[12];
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v41);
    v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, int *), __int64 *))v9)(v8, &v41);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v72 = 0LL;
      v43 = 0LL;
      v44 = 0LL;
      v45 = 0LL;
      v46 = 0LL;
      v47 = 0LL;
      v48 = 0;
      v49 = 0LL;
      v50 = 0LL;
      v51 = 0LL;
      v52 = 0LL;
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0;
      while ( 1 )
      {
        v11 = v41;
        v12 = *(int (__fastcall **)(__int64, struct IXMLDOMNode **))(*(_QWORD *)v41 + 72LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v72);
        if ( v12(v11, &v72) < 0 || !v72 )
          break;
        *(_QWORD *)v36 = 0LL;
        v13 = *a2;
        v14 = ***a2;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v36);
        v15 = v14(v13, &GUID_2933bf80_7b36_11d2_b20e_00c04f983e60, v36);
        v7 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x68,
            (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
            (const char *)(unsigned int)v15);
          goto LABEL_27;
        }
        v37 = 0LL;
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v37);
        v16 = PWSLayoutParser::ParsePinnedAppNode(v5, v72, &v37);
        v7 = v16;
        if ( v16 < 0 )
        {
          v25 = 107LL;
          goto LABEL_24;
        }
        v18 = v44;
        if ( v44 == v46 )
        {
          v16 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)&v43,
                  v44 + 1,
                  v17);
          v7 = v16;
          if ( v16 < 0 )
          {
            v25 = 108LL;
LABEL_24:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v25,
              (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
              (const char *)(unsigned int)v16);
LABEL_25:
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v37);
LABEL_27:
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v36);
LABEL_28:
            ParsedPenWorkspaceLayout::~ParsedPenWorkspaceLayout((ParsedPenWorkspaceLayout *)&v43);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v72);
            goto LABEL_43;
          }
          v18 = v44;
        }
        v44 = v18 + 1;
        v19 = (__int64 *)(v43 - 8 + 8 * (v18 + 1));
        if ( v19 )
        {
          *v19 = (__int64)v37;
          Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>::InternalAddRef(v19);
        }
        v20 = Microsoft::WRL::Details::Make<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser,>(&v42);
        v21 = *v20;
        v56 = (_QWORD *)*v20;
        *v20 = 0LL;
        v22 = v42;
        if ( v42 )
        {
          v42 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
        if ( !v21 )
        {
          v7 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6F,
            (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
            (const char *)0x8007000ELL);
          goto LABEL_25;
        }
        v23 = (*(__int64 (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v21 + 24LL))(v21, v36, &v47);
        v24 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x70,
            (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
            (const char *)(unsigned int)v23);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v37);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v36);
          ParsedPenWorkspaceLayout::~ParsedPenWorkspaceLayout((ParsedPenWorkspaceLayout *)&v43);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v72);
          v7 = v24;
          goto LABEL_43;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v37);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v36);
      }
      try
      {
        *(_OWORD *)v38 = 0LL;
        v39 = 0LL;
        std::vector<ParsedPenWorkspaceLayout>::_Emplace_reallocate<ParsedPenWorkspaceLayout>(v38, 0LL, (__int64)&v43);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x77,
          (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
          v26);
        v5 = this;
        v3 = a3;
      }
      memset(v57, 0, sizeof(v57));
      v58 = 0LL;
      v59 = 0;
      v60 = 0LL;
      v61 = 0LL;
      v62 = 0LL;
      v63 = 0LL;
      v64 = 0LL;
      v65 = 0LL;
      v66 = 0;
      v56 = v67;
      v67[0] = off_18073A148;
      v67[7] = v67;
      v27 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData(
              (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)v68,
              (PWSLayoutParser *)((char *)v5 + 40));
      Selected = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem<ParsedPenWorkspaceLayout>(
                   (__int64 *)v38,
                   v27,
                   (__int64)v67,
                   (__int64)v57);
      v7 = Selected;
      if ( Selected < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7D,
          (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
          (const char *)(unsigned int)Selected);
        ParsedPenWorkspaceLayout::~ParsedPenWorkspaceLayout((ParsedPenWorkspaceLayout *)v57);
        if ( v38[0] )
        {
          std::_Destroy_range<std::allocator<ParsedPenWorkspaceLayout>>(v38[0], v38[1]);
          std::_Deallocate<16>(
            v38[0],
            (struct std::nothrow_t *)(8 * ((signed __int64)(v39 - (unsigned __int64)v38[0]) >> 3)));
          *(_OWORD *)v38 = 0LL;
          v39 = 0LL;
        }
        goto LABEL_28;
      }
      v29 = *(__int64 **)&v57[0];
      v30 = *(_QWORD *)&v57[0] + 8LL * *((_QWORD *)&v57[0] + 1);
      while ( v29 != (__int64 *)v30 )
      {
        v31 = *v29;
        v40 = *v29;
        Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>::InternalAddRef(&v40);
        v33 = v3[1];
        if ( v33 != v3[3]
          || (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)v3,
                    v33 + 1,
                    v32) >= 0 )
        {
          v34 = (__int64 *)(*v3 + 8 * v3[1]++);
          if ( v34 )
          {
            *v34 = 0LL;
            if ( v34 != &v40 )
            {
              *v34 = v31;
              v40 = 0LL;
            }
          }
        }
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v40);
        ++v29;
      }
      ParsedPenWorkspaceLayout::~ParsedPenWorkspaceLayout((ParsedPenWorkspaceLayout *)v57);
      if ( v38[0] )
      {
        std::_Destroy_range<std::allocator<ParsedPenWorkspaceLayout>>(v38[0], v38[1]);
        std::_Deallocate<16>(
          v38[0],
          (struct std::nothrow_t *)(8 * ((signed __int64)(v39 - (unsigned __int64)v38[0]) >> 3)));
        *(_OWORD *)v38 = 0LL;
        v39 = 0LL;
      }
      ParsedPenWorkspaceLayout::~ParsedPenWorkspaceLayout((ParsedPenWorkspaceLayout *)&v43);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v72);
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x60,
        (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)v10);
    }
LABEL_43:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v41);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)v6);
  }
  return v7;
}
