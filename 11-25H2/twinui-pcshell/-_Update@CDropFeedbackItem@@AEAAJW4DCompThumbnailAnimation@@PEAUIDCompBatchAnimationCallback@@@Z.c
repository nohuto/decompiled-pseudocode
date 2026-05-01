/*
 * XREFs of ?_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180524AF8
 * Callers:
 *     ?Show@CDropFeedbackItem@@UEAAXXZ @ 0x180524770 (-Show@CDropFeedbackItem@@UEAAXXZ.c)
 *     ?Update@CDropFeedbackItem@@UEAAJPEAUIDCompBatchAnimationCallback@@@Z @ 0x1805247D0 (-Update@CDropFeedbackItem@@UEAAJPEAUIDCompBatchAnimationCallback@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___ @ 0x180522E34 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___ @ 0x180522F5C (DCompThumbnailHelpers--DCompThumbnail_SetOpacityWithPreAndPostCallbacks__lambda_ed8ffcce05179564.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___ @ 0x180523004 (DCompThumbnailHelpers--DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df3.c)
 *     ?_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z @ 0x18052510C (-_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z.c)
 *     McTemplateU0ddz_EventWriteTransfer @ 0x180525358 (McTemplateU0ddz_EventWriteTransfer.c)
 *     McTemplateU0qdddd_EventWriteTransfer @ 0x1805253F8 (McTemplateU0qdddd_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedbackItem::_Update(struct tagPOINT a1, unsigned int a2, __int64 a3)
{
  int v3; // edi
  int v5; // ecx
  unsigned int v8; // r14d
  int v9; // ecx
  int v10; // ecx
  HWND v11; // rdx
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(__int64, struct tagPOINT *, _QWORD, _QWORD); // rax
  __int64 v14; // rdx
  unsigned int v15; // eax
  HWND v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // r10d
  int v23; // r8d
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // ecx
  bool v29; // [rsp+40h] [rbp-39h] BYREF
  struct tagPOINT v30; // [rsp+48h] [rbp-31h] BYREF
  int v31; // [rsp+50h] [rbp-29h]
  __int128 v32; // [rsp+60h] [rbp-19h] BYREF
  __int128 v33; // [rsp+70h] [rbp-9h] BYREF
  struct tagPOINT Points[2]; // [rsp+80h] [rbp+7h] BYREF
  __int128 v35; // [rsp+90h] [rbp+17h] BYREF

  v3 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)&a1 + 68LL);
  v8 = 0;
  if ( !v5 )
  {
    v29 = 0;
    *((_QWORD *)&v32 + 1) = &v29;
    *(struct tagPOINT *)&v32 = a1;
    if ( a2 == 6 )
    {
      v30 = 0LL;
      Points[0] = a1;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)Points);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
      *(struct tagPOINT *)&v33 = a1;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v33);
      *(struct tagPOINT *)&v32 = a1;
      *((_QWORD *)&v32 + 1) = &v29;
      if ( (int)DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___(
                  (__int64)&v32,
                  (__int64 *)&v33,
                  a3,
                  &v30) >= 0 )
        (*(void (__fastcall **)(_QWORD, __int64, struct tagPOINT))(**(_QWORD **)(*(_QWORD *)&a1 + 184LL) + 128LL))(
          *(_QWORD *)(*(_QWORD *)&a1 + 184LL),
          6LL,
          v30);
      v19 = (__int64 *)Points;
    }
    else
    {
      if ( (*(_DWORD *)(*(_QWORD *)&a1 + 72LL) & 0x80000) == 0 )
      {
        v22 = *(_DWORD *)(*(_QWORD *)&a1 + 140LL);
        v23 = (*(_DWORD *)(*(_QWORD *)&a1 + 152LL) - *(_DWORD *)(*(_QWORD *)&a1 + 144LL)) / 2
            - (*(_DWORD *)(*(_QWORD *)&a1 + 136LL) - *(_DWORD *)(*(_QWORD *)&a1 + 128LL)) / 2
            - *(_DWORD *)(*(_QWORD *)&a1 + 128LL)
            + *(_DWORD *)(*(_QWORD *)&a1 + 144LL);
        v24 = (*(_DWORD *)(*(_QWORD *)&a1 + 148LL) - v22) / 2
            - (*(_DWORD *)(*(_QWORD *)&a1 + 132LL) - *(_DWORD *)(*(_QWORD *)&a1 + 124LL)) / 2
            - *(_DWORD *)(*(_QWORD *)&a1 + 124LL);
        v29 = v23 * v23 + (v24 + v22) * (v24 + v22) < 10;
        *(_OWORD *)(*(_QWORD *)&a1 + 140LL) = *(_OWORD *)(*(_QWORD *)&a1 + 124LL);
        v33 = 0LL;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CDropFeedbackItem::_ZoomRect)(a1, 1LL, &v33);
        v25 = (unsigned int)(HIDWORD(v33) - DWORD1(v33));
        if ( *(_DWORD *)(*(_QWORD *)&a1 + 132LL) - *(_DWORD *)(*(_QWORD *)&a1 + 124LL) != DWORD2(v33) - (_DWORD)v33
          || *(_DWORD *)(*(_QWORD *)&a1 + 136LL) - *(_DWORD *)(*(_QWORD *)&a1 + 128LL) != (_DWORD)v25 )
        {
          v3 = 1;
        }
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)&a1 + 184LL) + 32LL))(
          *(_QWORD *)(*(_QWORD *)&a1 + 184LL),
          v25,
          a2,
          0LL);
        Points[0] = a1;
        Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)Points);
        v30 = a1;
        Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v30);
        v26 = *(_QWORD *)(*(_QWORD *)&a1 + 184LL);
        v31 = v3;
        DCompThumbnailHelpers::DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___(
          v26,
          (int)&v33,
          a2,
          &v32,
          (__int64)&v30,
          a3);
        v35 = 0LL;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CDropFeedbackItem::_ZoomRect)(a1, 0LL, &v35);
        (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)&a1 + 184LL) + 40LL))(
          *(_QWORD *)(*(_QWORD *)&a1 + 184LL),
          &v35,
          a2,
          0LL);
        *(_BYTE *)(*(_QWORD *)&a1 + 157LL) = 1;
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
          McTemplateU0qdddd_EventWriteTransfer(
            v27,
            (unsigned int)&DropFeedbackItem_Update_Info,
            *(_DWORD *)(*(_QWORD *)&a1 + 32LL),
            v33,
            SBYTE4(v33),
            SBYTE8(v33),
            SBYTE12(v33));
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)Points);
        return v8;
      }
      v30 = 0LL;
      *(struct tagPOINT *)&v33 = a1;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v33);
      Points[0] = a1;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)Points);
      v20 = *(_QWORD *)(*(_QWORD *)&a1 + 184LL);
      *((_QWORD *)&v32 + 1) = &v29;
      *(struct tagPOINT *)&v32 = a1;
      DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___(
        v20,
        v21,
        a2,
        &v32,
        (__int64 *)Points,
        a3);
      v19 = (__int64 *)&v33;
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v19);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
    return v8;
  }
  v9 = v5 - 1;
  if ( !v9 )
    goto LABEL_10;
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v11 = *(HWND *)(*(_QWORD *)&a1 + 192LL);
      *(_OWORD *)&Points[0].x = *(_OWORD *)(*(_QWORD *)&a1 + 76LL);
      MapWindowPoints(0LL, v11, Points, 2u);
      v12 = *(_QWORD *)(*(_QWORD *)&a1 + 184LL);
      v13 = *(__int64 (__fastcall **)(__int64, struct tagPOINT *, _QWORD, _QWORD))(*(_QWORD *)v12 + 24LL);
      if ( (*(_DWORD *)(*(_QWORD *)&a1 + 72LL) & 0x80000) == 0 )
      {
        v15 = v13(v12, Points, a2, 0LL);
        goto LABEL_9;
      }
      v8 = v13(v12, Points, 0LL, 0LL);
      if ( (v8 & 0x80000000) == 0 )
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)&a1 + 184LL) + 32LL))(
                *(_QWORD *)(*(_QWORD *)&a1 + 184LL),
                v14,
                a2,
                0LL);
LABEL_9:
        v8 = v15;
      }
LABEL_10:
      *(_BYTE *)(*(_QWORD *)&a1 + 157LL) = 1;
    }
  }
  else
  {
    v16 = *(HWND *)(*(_QWORD *)&a1 + 192LL);
    *(_OWORD *)&Points[0].x = *(_OWORD *)(*(_QWORD *)&a1 + 76LL);
    MapWindowPoints(0LL, v16, Points, 2u);
    (*(void (__fastcall **)(_QWORD, struct tagPOINT *, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)&a1 + 184LL) + 24LL))(
      *(_QWORD *)(*(_QWORD *)&a1 + 184LL),
      Points,
      0LL,
      0LL);
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McTemplateU0ddz_EventWriteTransfer(
        v18,
        v17,
        *(unsigned int *)(*(_QWORD *)&a1 + 76LL),
        *(unsigned int *)(*(_QWORD *)&a1 + 80LL));
  }
  return v8;
}
