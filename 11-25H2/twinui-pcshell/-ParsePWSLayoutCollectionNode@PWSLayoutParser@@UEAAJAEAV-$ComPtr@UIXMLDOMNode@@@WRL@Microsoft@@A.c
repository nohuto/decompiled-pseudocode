/*
 * XREFs of ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803E8780
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18008C860 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?InternalAddRef@?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ @ 0x180131778 (-InternalAddRef@-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$Make@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@12@XZ @ 0x18031F504 (--$Make@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@$$V@Detai.c)
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x18031FB2C (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedPenWorkspaceLayout@@@Z@5@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1803E7E4C (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsI.c)
 *     ??$_Destroy_range@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAXPEAUParsedPenWorkspaceLayout@@QEAU1@AEAV?$allocator@UParsedPenWorkspaceLayout@@@0@@Z @ 0x1803E8014 (--$_Destroy_range@V-$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAXPEAUParsedPenWorkspaceL.c)
 *     ??$_Emplace_reallocate@UParsedPenWorkspaceLayout@@@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAPEAUParsedPenWorkspaceLayout@@QEAU2@$$QEAU2@@Z @ 0x1803E8050 (--$_Emplace_reallocate@UParsedPenWorkspaceLayout@@@-$vector@UParsedPenWorkspaceLayout@@V-$alloca.c)
 *     ??1ParsedPenWorkspaceLayout@@QEAA@XZ @ 0x1803E8484 (--1ParsedPenWorkspaceLayout@@QEAA@XZ.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1803E858C (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 *     ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1803E8DC0 (-ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v7; // ebx
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
  __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // edi
  unsigned __int64 v25; // r9
  __int64 v26; // rdx
  const char *v27; // r9
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *v28; // rax
  int Selected; // eax
  __int64 *v30; // rdi
  __int64 v31; // r15
  __int64 v32; // rbx
  void *v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 *v36; // rdx
  int v38[2]; // [rsp+20h] [rbp-248h] BYREF
  struct IPenWorkspaceLayoutItem *v39; // [rsp+28h] [rbp-240h] BYREF
  ParsedPenWorkspaceLayout *v40[2]; // [rsp+30h] [rbp-238h] BYREF
  __int64 v41; // [rsp+40h] [rbp-228h]
  __int64 v42; // [rsp+48h] [rbp-220h] BYREF
  __int64 v43; // [rsp+50h] [rbp-218h] BYREF
  __int64 v44; // [rsp+58h] [rbp-210h] BYREF
  __int64 v45; // [rsp+60h] [rbp-208h] BYREF
  __int64 v46; // [rsp+68h] [rbp-200h]
  __int64 v47; // [rsp+70h] [rbp-1F8h]
  __int64 v48; // [rsp+78h] [rbp-1F0h]
  __int64 v49; // [rsp+80h] [rbp-1E8h] BYREF
  char v50; // [rsp+88h] [rbp-1E0h]
  __int128 v51; // [rsp+90h] [rbp-1D8h]
  __int128 v52; // [rsp+A0h] [rbp-1C8h]
  __int128 v53; // [rsp+B0h] [rbp-1B8h]
  __int128 v54; // [rsp+C0h] [rbp-1A8h]
  __int64 v55; // [rsp+D0h] [rbp-198h]
  __int64 v56; // [rsp+D8h] [rbp-190h]
  char v57; // [rsp+E0h] [rbp-188h]
  _QWORD *v58; // [rsp+F0h] [rbp-178h]
  _OWORD v59[2]; // [rsp+100h] [rbp-168h] BYREF
  __int64 v60; // [rsp+120h] [rbp-148h]
  char v61; // [rsp+128h] [rbp-140h]
  __int128 v62; // [rsp+130h] [rbp-138h]
  __int128 v63; // [rsp+140h] [rbp-128h]
  __int128 v64; // [rsp+150h] [rbp-118h]
  __int128 v65; // [rsp+160h] [rbp-108h]
  __int64 v66; // [rsp+170h] [rbp-F8h]
  __int64 v67; // [rsp+178h] [rbp-F0h]
  char v68; // [rsp+180h] [rbp-E8h]
  _QWORD v69[8]; // [rsp+190h] [rbp-D8h] BYREF
  char v70[152]; // [rsp+1D0h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]
  struct IXMLDOMNode *v74; // [rsp+288h] [rbp+20h] BYREF

  v3 = a3;
  v5 = this;
  v6 = PWSLayoutParser::CalculateSelectionAttributes(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v7;
  }
  v43 = 0LL;
  v8 = *a2;
  v9 = (**a2)[12];
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v43);
  v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, int *), __int64 *))v9)(v8, &v43);
  v7 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_44;
  }
  v74 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0;
  while ( 1 )
  {
    v11 = v43;
    v12 = *(int (__fastcall **)(__int64, struct IXMLDOMNode **))(*(_QWORD *)v43 + 72LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v74);
    if ( v12(v11, &v74) < 0 || !v74 )
      break;
    *(_QWORD *)v38 = 0LL;
    v13 = *a2;
    v14 = ***a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v38);
    v15 = v14(v13, &GUID_2933bf80_7b36_11d2_b20e_00c04f983e60, v38);
    v7 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x68,
        (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_28;
    }
    v39 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v39);
    v16 = PWSLayoutParser::ParsePinnedAppNode(v5, v74, &v39);
    v7 = v16;
    if ( v16 < 0 )
    {
      v25 = (unsigned int)v16;
      v26 = 107LL;
      goto LABEL_25;
    }
    v7 = 0;
    v18 = v46;
    if ( v46 == v48 )
    {
      v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
             (__int64)&v45,
             v46 + 1,
             v17);
      if ( v7 < 0 )
        goto LABEL_15;
      v18 = v46;
    }
    v46 = v18 + 1;
    v19 = (__int64 *)(v45 + 8 * (v18 + 1) - 8);
    if ( v45 + 8 * (v18 + 1) == 8 )
      goto LABEL_16;
    *v19 = (__int64)v39;
    Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>::InternalAddRef(v19);
LABEL_15:
    if ( v7 < 0 )
    {
      v25 = (unsigned int)v7;
      v26 = 108LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)v25);
LABEL_26:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v39);
LABEL_28:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v38);
LABEL_29:
      ParsedPenWorkspaceLayout::~ParsedPenWorkspaceLayout((ParsedPenWorkspaceLayout *)&v45);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v74);
      goto LABEL_44;
    }
LABEL_16:
    v20 = Microsoft::WRL::Details::Make<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser,>(&v44);
    v21 = *v20;
    v58 = (_QWORD *)*v20;
    *v20 = 0LL;
    v22 = v44;
    if ( v44 )
    {
      v44 = 0LL;
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
      goto LABEL_26;
    }
    v23 = (*(__int64 (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v21 + 24LL))(v21, v38, &v49);
    v24 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x70,
        (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)v23);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v39);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v38);
      ParsedPenWorkspaceLayout::~ParsedPenWorkspaceLayout((ParsedPenWorkspaceLayout *)&v45);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v74);
      v7 = v24;
      goto LABEL_44;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v39);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v38);
  }
  try
  {
    *(_OWORD *)v40 = 0LL;
    v41 = 0LL;
    std::vector<ParsedPenWorkspaceLayout>::_Emplace_reallocate<ParsedPenWorkspaceLayout>(v40, 0LL, (__int64)&v45);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x77,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      v27);
    v5 = this;
    v3 = a3;
  }
  memset(v59, 0, sizeof(v59));
  v60 = 0LL;
  v61 = 0;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0;
  v58 = v69;
  v69[0] = off_180710F50;
  v69[7] = v69;
  v28 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData(
          (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)v70,
          (PWSLayoutParser *)((char *)v5 + 40));
  Selected = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem<ParsedPenWorkspaceLayout>(
               (__int64 *)v40,
               v28,
               (__int64)v69,
               (__int64)v59);
  v7 = Selected;
  if ( Selected < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)Selected);
    ParsedPenWorkspaceLayout::~ParsedPenWorkspaceLayout((ParsedPenWorkspaceLayout *)v59);
    if ( v40[0] )
    {
      std::_Destroy_range<std::allocator<ParsedPenWorkspaceLayout>>(v40[0], v40[1]);
      std::_Deallocate<16,0>(
        v40[0],
        (const struct std::nothrow_t *)(8 * ((signed __int64)(v41 - (unsigned __int64)v40[0]) >> 3)));
      *(_OWORD *)v40 = 0LL;
      v41 = 0LL;
    }
    goto LABEL_29;
  }
  v30 = *(__int64 **)&v59[0];
  v31 = *(_QWORD *)&v59[0] + 8LL * *((_QWORD *)&v59[0] + 1);
  while ( v30 != (__int64 *)v31 )
  {
    v32 = *v30;
    v42 = *v30;
    Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>::InternalAddRef(&v42);
    v34 = v3[1];
    if ( v34 != v3[3]
      || (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)v3,
                v34 + 1,
                v33) >= 0 )
    {
      v35 = v3[1];
      v3[1] = v35 + 1;
      v36 = (__int64 *)(*v3 + 8 * v35);
      if ( v36 )
      {
        *v36 = 0LL;
        if ( v36 != &v42 )
        {
          *v36 = v32;
          v42 = 0LL;
        }
      }
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v42);
    ++v30;
  }
  ParsedPenWorkspaceLayout::~ParsedPenWorkspaceLayout((ParsedPenWorkspaceLayout *)v59);
  if ( v40[0] )
  {
    std::_Destroy_range<std::allocator<ParsedPenWorkspaceLayout>>(v40[0], v40[1]);
    std::_Deallocate<16,0>(
      v40[0],
      (const struct std::nothrow_t *)(8 * ((signed __int64)(v41 - (unsigned __int64)v40[0]) >> 3)));
    *(_OWORD *)v40 = 0LL;
    v41 = 0LL;
  }
  ParsedPenWorkspaceLayout::~ParsedPenWorkspaceLayout((ParsedPenWorkspaceLayout *)&v45);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v74);
  v7 = 0;
LABEL_44:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v43);
  return (unsigned int)v7;
}
