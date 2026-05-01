/*
 * XREFs of ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18031D590
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180086F00 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedTaskbarLayout@@@Z@5@PEAUParsedTaskbarLayout@@@Z @ 0x18031BB24 (--$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ??$_Destroy_range@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@QEAU1@AEAV?$allocator@UParsedTaskbarLayout@@@0@@Z @ 0x18031BF08 (--$_Destroy_range@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@YAXPEAUParsedTaskbarLayout@@QEA.c)
 *     ??$_Emplace_reallocate@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@AEAAPEAUParsedTaskbarLayout@@QEAU2@$$QEAU2@@Z @ 0x18031BF44 (--$_Emplace_reallocate@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParse.c)
 *     ??$construct@UParsedTaskbarLayout@@U1@@?$_Default_allocator_traits@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@SAXAEAV?$allocator@UParsedTaskbarLayout@@@1@QEAUParsedTaskbarLayout@@$$QEAU3@@Z @ 0x18031C160 (--$construct@UParsedTaskbarLayout@@U1@@-$_Default_allocator_traits@V-$allocator@UParsedTaskbarLa.c)
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x18031C2D0 (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 *     ??1ParsedTaskbarLayout@@QEAA@XZ @ 0x18031C4A0 (--1ParsedTaskbarLayout@@QEAA@XZ.c)
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x18031C790 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z @ 0x18031D9FC (-ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode(
        TaskbarLayoutParser *this,
        __int64 *a2,
        _QWORD *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rbx
  int (__fastcall *v12)(__int64, struct IXMLDOMNode **); // rdi
  __int64 v13; // rcx
  const char *v14; // r9
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *v15; // rax
  int Selected; // eax
  __int64 *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // r15
  void *v20; // r8
  __int64 v21; // rdx
  __int64 *v22; // rdx
  ParsedTaskbarLayout *v24[2]; // [rsp+20h] [rbp-218h] BYREF
  ParsedTaskbarLayout *v25; // [rsp+30h] [rbp-208h]
  struct IXMLDOMNode *v26; // [rsp+38h] [rbp-200h] BYREF
  __int64 v27; // [rsp+40h] [rbp-1F8h] BYREF
  __int64 v28; // [rsp+48h] [rbp-1F0h] BYREF
  _OWORD v29[2]; // [rsp+50h] [rbp-1E8h] BYREF
  __int64 v30; // [rsp+70h] [rbp-1C8h]
  char v31; // [rsp+78h] [rbp-1C0h]
  __int128 v32; // [rsp+80h] [rbp-1B8h]
  __int128 v33; // [rsp+90h] [rbp-1A8h]
  __int128 v34; // [rsp+A0h] [rbp-198h]
  __int128 v35; // [rsp+B0h] [rbp-188h]
  __int64 v36; // [rsp+C0h] [rbp-178h]
  __int64 v37; // [rsp+C8h] [rbp-170h]
  char v38; // [rsp+D0h] [rbp-168h]
  _OWORD v39[2]; // [rsp+E0h] [rbp-158h] BYREF
  __int64 v40; // [rsp+100h] [rbp-138h]
  char v41; // [rsp+108h] [rbp-130h]
  __int128 v42; // [rsp+110h] [rbp-128h]
  __int128 v43; // [rsp+120h] [rbp-118h]
  __int128 v44; // [rsp+130h] [rbp-108h]
  __int128 v45; // [rsp+140h] [rbp-F8h]
  __int64 v46; // [rsp+150h] [rbp-E8h]
  __int64 v47; // [rsp+158h] [rbp-E0h]
  char v48; // [rsp+160h] [rbp-D8h]
  __int64 v49[8]; // [rsp+178h] [rbp-C0h] BYREF
  char v50[104]; // [rsp+1B8h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+0h]
  unsigned int v52; // [rsp+258h] [rbp+20h]

  v6 = TaskbarLayoutParser::CalculateSelectionAttributes(this);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v28 = 0LL;
    v8 = *a2;
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 96LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
    v10 = v9(v8, &v28);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v26 = 0LL;
      *(_OWORD *)v24 = 0LL;
      v25 = 0LL;
      while ( 1 )
      {
        v11 = v28;
        v12 = *(int (__fastcall **)(__int64, struct IXMLDOMNode **))(*(_QWORD *)v28 + 72LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
        if ( v12(v11, &v26) < 0 || !v26 )
          break;
        memset(v29, 0, sizeof(v29));
        v30 = 0LL;
        v31 = 0;
        v32 = 0LL;
        v33 = 0LL;
        v34 = 0LL;
        v35 = 0LL;
        v36 = 0LL;
        v37 = 0LL;
        v38 = 0;
        if ( (int)TaskbarLayoutParser::ParseTaskbarLayoutNode(this, v26, (struct ParsedTaskbarLayout *)v29) >= 0 )
        {
          try
          {
            if ( v24[1] == v25 )
            {
              std::vector<ParsedTaskbarLayout>::_Emplace_reallocate<ParsedTaskbarLayout>(
                v24,
                (__int64)v24[1],
                (__int64)v29);
            }
            else
            {
              std::_Default_allocator_traits<std::allocator<ParsedTaskbarLayout>>::construct<ParsedTaskbarLayout,ParsedTaskbarLayout>(
                v13,
                (_QWORD *)v24[1],
                (__int64 *)v29);
              v24[1] = (ParsedTaskbarLayout *)((char *)v24[1] + 136);
            }
          }
          catch ( ... )
          {
            v52 = wil::details::in1diag3::Return_CaughtException(
                    retaddr,
                    (void *)0x78,
                    (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
                    v14);
            ParsedTaskbarLayout::~ParsedTaskbarLayout((ParsedTaskbarLayout *)v29);
            if ( v24[0] )
            {
              std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(v24[0], v24[1]);
              std::_Deallocate<16>(v24[0], (struct std::nothrow_t *)(8 * ((v25 - v24[0]) >> 3)));
              *(_OWORD *)v24 = 0LL;
              v25 = 0LL;
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
            v7 = v52;
            goto LABEL_32;
          }
        }
        ParsedTaskbarLayout::~ParsedTaskbarLayout((ParsedTaskbarLayout *)v29);
      }
      memset(v39, 0, sizeof(v39));
      v40 = 0LL;
      v41 = 0;
      v42 = 0LL;
      v43 = 0LL;
      v44 = 0LL;
      v45 = 0LL;
      v46 = 0LL;
      v47 = 0LL;
      v48 = 0;
      v49[0] = (__int64)off_1807303D0;
      v49[7] = (__int64)v49;
      v15 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData(
              (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)v50,
              (TaskbarLayoutParser *)((char *)this + 64));
      Selected = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetSelectedItem<ParsedTaskbarLayout>(
                   (__int64 *)v24,
                   v15,
                   v49,
                   (__int64)v39);
      v7 = Selected;
      if ( Selected >= 0 )
      {
        v17 = *(__int64 **)&v39[0];
        v18 = *(_QWORD *)&v39[0] + 8LL * *((_QWORD *)&v39[0] + 1);
        while ( v17 != (__int64 *)v18 )
        {
          v19 = *v17;
          v27 = *v17;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v27);
          v21 = a3[1];
          if ( v21 != a3[3]
            || (int)CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(
                      (__int64)a3,
                      v21 + 1,
                      v20) >= 0 )
          {
            v22 = (__int64 *)(*a3 + 8 * a3[1]++);
            if ( v22 )
            {
              *v22 = 0LL;
              if ( v22 != &v27 )
              {
                *v22 = v19;
                v27 = 0LL;
              }
            }
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
          ++v17;
        }
        ParsedTaskbarLayout::~ParsedTaskbarLayout((ParsedTaskbarLayout *)v39);
        if ( v24[0] )
        {
          std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(v24[0], v24[1]);
          std::_Deallocate<16>(v24[0], (struct std::nothrow_t *)(8 * ((v25 - v24[0]) >> 3)));
          *(_OWORD *)v24 = 0LL;
          v25 = 0LL;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
        v7 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x80,
          (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
          (const char *)(unsigned int)Selected);
        ParsedTaskbarLayout::~ParsedTaskbarLayout((ParsedTaskbarLayout *)v39);
        if ( v24[0] )
        {
          std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(v24[0], v24[1]);
          std::_Deallocate<16>(v24[0], (struct std::nothrow_t *)(8 * ((v25 - v24[0]) >> 3)));
          *(_OWORD *)v24 = 0LL;
          v25 = 0LL;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6B,
        (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)v10);
    }
LABEL_32:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v6);
  }
  return v7;
}
