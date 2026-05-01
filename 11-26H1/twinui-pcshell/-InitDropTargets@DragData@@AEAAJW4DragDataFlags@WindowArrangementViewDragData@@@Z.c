/*
 * XREFs of ?InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180531F7C
 * Callers:
 *     ?RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180532414 (-RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4Dra.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?AddDropTarget@DragData@@AEAAJW4DropLocation@WindowArrangementViewDragData@@AEBUCRect@Geometry@@_N@Z @ 0x180531AAC (-AddDropTarget@DragData@@AEAAJW4DropLocation@WindowArrangementViewDragData@@AEBUCRect@Geometry@@.c)
 *     ?GetDropTargetEnabledList@DragData@@AEAA?AW4DropTargetEnabledFlags@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180531BFC (-GetDropTargetEnabledList@DragData@@AEAA-AW4DropTargetEnabledFlags@@W4DragDataFlags@WindowArrang.c)
 *     ?GetLeftAndRightItems@DragData@@AEAAJPEAPEAUIAppLayoutItem@@0@Z @ 0x180531CD4 (-GetLeftAndRightItems@DragData@@AEAAJPEAPEAUIAppLayoutItem@@0@Z.c)
 *     ?GetReplaceDropTargetRects@DragData@@AEAAJPEAUCRect@Geometry@@0@Z @ 0x180531D9C (-GetReplaceDropTargetRects@DragData@@AEAAJPEAUCRect@Geometry@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DragData::InitDropTargets(__int64 a1, char a2)
{
  char DropTargetEnabledList; // si
  __int128 *v4; // rdi
  int v5; // r14d
  __int64 v6; // rdx
  int ReplaceDropTargetRects; // edi
  __int64 v9; // rdx
  int LeftAndRightItems; // eax
  int v11; // eax
  __int64 *v12; // rdi
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  int v17; // r14d
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // [rsp+30h] [rbp-40h] BYREF
  struct IAppLayoutItem *v21[2]; // [rsp+38h] [rbp-38h] BYREF
  struct IAppLayoutItem *v22; // [rsp+48h] [rbp-28h] BYREF
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  DropTargetEnabledList = DragData::GetDropTargetEnabledList(a1, a2);
  v4 = (__int128 *)(a1 + 56);
  if ( (DropTargetEnabledList & 1) != 0 )
  {
    v23 = *v4;
    HIDWORD(v23) = *(_DWORD *)(a1 + 84) + DWORD1(v23);
    v5 = DragData::AddDropTarget((_QWORD *)a1, 5, &v23, 0);
    if ( v5 < 0 )
    {
      v6 = 237LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  if ( (DropTargetEnabledList & 2) != 0 )
  {
    v23 = *v4;
    DWORD1(v23) = HIDWORD(*(_QWORD *)(a1 + 64)) - *(_DWORD *)(a1 + 88);
    v5 = DragData::AddDropTarget((_QWORD *)a1, 6, &v23, 1);
    if ( v5 < 0 )
    {
      v6 = 244LL;
      goto LABEL_4;
    }
  }
  if ( (DropTargetEnabledList & 4) != 0 )
  {
    *(_OWORD *)v21 = *v4;
    LODWORD(v21[1]) = _mm_cvtsi128_si32(*(__m128i *)v21) + *(_DWORD *)(a1 + 92);
    v5 = DragData::AddDropTarget((_QWORD *)a1, 0, v21, 1);
    if ( v5 < 0 )
    {
      v6 = 252LL;
      goto LABEL_4;
    }
    *(_OWORD *)v21 = *v4;
    LODWORD(v21[0]) = *(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 92);
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 1, v21, 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v9 = 256LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
        (const char *)(unsigned int)ReplaceDropTargetRects);
      return (unsigned int)ReplaceDropTargetRects;
    }
  }
  if ( (DropTargetEnabledList & 8) != 0 )
  {
    ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 4, (_OWORD *)(a1 + 56), 1);
    if ( ReplaceDropTargetRects < 0 )
    {
      v9 = 265LL;
      goto LABEL_13;
    }
  }
  if ( (DropTargetEnabledList & 0x10) != 0 )
  {
    v22 = 0LL;
    v21[0] = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v21);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
    LeftAndRightItems = DragData::GetLeftAndRightItems((DragData *)a1, &v22, v21);
    ReplaceDropTargetRects = LeftAndRightItems;
    if ( LeftAndRightItems < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x114,
        (int)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
        (const char *)(unsigned int)LeftAndRightItems);
LABEL_34:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v21);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
      return (unsigned int)ReplaceDropTargetRects;
    }
    v20 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 184LL))(
            *(_QWORD *)(a1 + 40),
            *(_QWORD *)(a1 + 48));
    v12 = *(__int64 **)(a1 + 40);
    v13 = *v12;
    if ( v11 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
      v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *, _QWORD))(v13 + 152))(
              v12,
              *(_QWORD *)(a1 + 48),
              &v20,
              0LL);
      ReplaceDropTargetRects = v14;
      if ( v14 < 0 )
      {
        v15 = 281LL;
LABEL_33:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
          (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
        goto LABEL_34;
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
      v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD))(v13 + 168))(v12, &v20, 0LL);
      ReplaceDropTargetRects = v14;
      if ( v14 < 0 )
      {
        v15 = 289LL;
        goto LABEL_33;
      }
    }
    v16 = (*(__int64 (__fastcall **)(__int64, struct IAppLayoutItem *))(*(_QWORD *)v20 + 96LL))(v20, v22);
    v23 = 0LL;
    if ( v16 )
    {
      (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __int128 *))(*(_QWORD *)v21[0] + 56LL))(
        v21[0],
        0LL,
        &v23);
      v17 = DWORD2(v23) - MulDiv(DWORD2(v23) - v23, 50, 100);
    }
    else
    {
      (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __int128 *))(*(_QWORD *)v22 + 56LL))(v22, 0LL, &v23);
      v17 = MulDiv(DWORD2(v23) - v23, 50, 100) + v23;
    }
    v23 = *(_OWORD *)(a1 + 56);
    DWORD2(v23) = v17;
    v14 = DragData::AddDropTarget((_QWORD *)a1, 0, &v23, 1);
    ReplaceDropTargetRects = v14;
    if ( v14 < 0 )
    {
      v15 = 317LL;
      goto LABEL_33;
    }
    v23 = *(_OWORD *)(a1 + 56);
    LODWORD(v23) = v17;
    v14 = DragData::AddDropTarget((_QWORD *)a1, 1, &v23, 1);
    ReplaceDropTargetRects = v14;
    if ( v14 < 0 )
    {
      v15 = 321LL;
      goto LABEL_33;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v21);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  }
  if ( (DropTargetEnabledList & 0x20) == 0 )
    return 0LL;
  v23 = 0LL;
  *(_OWORD *)v21 = 0LL;
  ReplaceDropTargetRects = DragData::GetReplaceDropTargetRects(
                             (DragData *)a1,
                             (struct Geometry::CRect *)&v23,
                             (struct Geometry::CRect *)v21);
  if ( ReplaceDropTargetRects < 0 )
  {
    v9 = 328LL;
    goto LABEL_13;
  }
  ReplaceDropTargetRects = DragData::AddDropTarget((_QWORD *)a1, 2, &v23, 1);
  if ( ReplaceDropTargetRects < 0 )
  {
    v9 = 329LL;
    goto LABEL_13;
  }
  v18 = DragData::AddDropTarget((_QWORD *)a1, 3, v21, 1);
  v19 = v18;
  if ( v18 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14A,
    (int)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
    (const char *)(unsigned int)v18);
  return v19;
}
