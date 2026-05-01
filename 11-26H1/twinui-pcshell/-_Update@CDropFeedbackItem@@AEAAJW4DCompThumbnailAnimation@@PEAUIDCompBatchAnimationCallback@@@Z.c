/*
 * XREFs of ?_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180547B38
 * Callers:
 *     ?Show@CDropFeedbackItem@@UEAAXXZ @ 0x1805477A0 (-Show@CDropFeedbackItem@@UEAAXXZ.c)
 *     ?Update@CDropFeedbackItem@@UEAAJPEAUIDCompBatchAnimationCallback@@@Z @ 0x180547800 (-Update@CDropFeedbackItem@@UEAAJPEAUIDCompBatchAnimationCallback@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___ @ 0x180545E30 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___ @ 0x180545F58 (DCompThumbnailHelpers--DCompThumbnail_SetOpacityWithPreAndPostCallbacks__lambda_ed8ffcce05179564.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___ @ 0x180546000 (DCompThumbnailHelpers--DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df3.c)
 *     ?_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z @ 0x180548148 (-_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z.c)
 *     McTemplateU0ddz_EventWriteTransfer @ 0x1805483A0 (McTemplateU0ddz_EventWriteTransfer.c)
 *     McTemplateU0qdddd_EventWriteTransfer @ 0x18054842C (McTemplateU0qdddd_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedbackItem::_Update(__int64 a1, unsigned int a2, __int64 a3)
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
  char v29[8]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v30; // [rsp+48h] [rbp-31h] BYREF
  int v31; // [rsp+50h] [rbp-29h]
  __int128 v32; // [rsp+58h] [rbp-21h] BYREF
  struct tagPOINT Points[2]; // [rsp+68h] [rbp-11h] BYREF
  struct tagPOINT v34[2]; // [rsp+80h] [rbp+7h] BYREF
  __int128 v35; // [rsp+90h] [rbp+17h] BYREF

  v3 = 0;
  v5 = *(_DWORD *)(a1 + 68);
  v8 = 0;
  if ( !v5 )
  {
    v29[0] = 0;
    _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v34, a1, (__int64)v29);
    if ( a2 == 6 )
    {
      v30 = 0LL;
      Points[0] = (struct tagPOINT)a1;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)Points);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
      *(_QWORD *)&v32 = a1;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v32);
      v35 = *(_OWORD *)&v34[0].x;
      if ( (int)DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___(
                  (__int64)&v35,
                  (__int64 *)&v32,
                  a3,
                  &v30) >= 0 )
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 184) + 128LL))(
          *(_QWORD *)(a1 + 184),
          6LL,
          v30);
      v19 = (__int64 *)Points;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 72) & 0x80000) == 0 )
      {
        v22 = *(_DWORD *)(a1 + 144);
        v23 = (*(_DWORD *)(a1 + 148) - *(_DWORD *)(a1 + 140)) / 2
            - (*(_DWORD *)(a1 + 132) - *(_DWORD *)(a1 + 124)) / 2
            - *(_DWORD *)(a1 + 124)
            + *(_DWORD *)(a1 + 140);
        v24 = (*(_DWORD *)(a1 + 152) - v22) / 2
            - (*(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128)) / 2
            - *(_DWORD *)(a1 + 128);
        if ( v23 * v23 + (v24 + v22) * (v24 + v22) < 10 )
          v29[0] = 1;
        *(_OWORD *)(a1 + 140) = *(_OWORD *)(a1 + 124);
        v32 = 0LL;
        CDropFeedbackItem::_ZoomRect(a1, 1LL, &v32);
        v25 = (unsigned int)(HIDWORD(v32) - DWORD1(v32));
        if ( *(_DWORD *)(a1 + 132) - *(_DWORD *)(a1 + 124) != DWORD2(v32) - (_DWORD)v32
          || *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128) != (_DWORD)v25 )
        {
          v3 = 1;
        }
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 184) + 32LL))(
          *(_QWORD *)(a1 + 184),
          v25,
          a2,
          0LL);
        Points[0] = (struct tagPOINT)a1;
        Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)Points);
        v30 = a1;
        Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v30);
        v26 = *(_QWORD *)(a1 + 184);
        v31 = v3;
        DCompThumbnailHelpers::DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___(
          v26,
          (int)&v32,
          a2,
          (__int128 *)v34,
          (__int64)&v30,
          a3);
        v35 = 0LL;
        CDropFeedbackItem::_ZoomRect(a1, 0LL, &v35);
        (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD))(**(_QWORD **)(a1 + 184) + 40LL))(
          *(_QWORD *)(a1 + 184),
          &v35,
          a2,
          0LL);
        *(_BYTE *)(a1 + 157) = 1;
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
          McTemplateU0qdddd_EventWriteTransfer(
            v27,
            (unsigned int)&DropFeedbackItem_Update_Info,
            *(_DWORD *)(a1 + 32),
            v32,
            SBYTE4(v32),
            SBYTE8(v32),
            SBYTE12(v32));
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)Points);
        return v8;
      }
      v30 = 0LL;
      *(_QWORD *)&v32 = a1;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v32);
      Points[0] = (struct tagPOINT)a1;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)Points);
      v20 = *(_QWORD *)(a1 + 184);
      v35 = *(_OWORD *)&v34[0].x;
      DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___(
        v20,
        v21,
        a2,
        &v35,
        (__int64 *)Points,
        a3);
      v19 = (__int64 *)&v32;
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v19);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
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
      v11 = *(HWND *)(a1 + 192);
      *(_OWORD *)&Points[0].x = *(_OWORD *)(a1 + 76);
      MapWindowPoints(0LL, v11, Points, 2u);
      v12 = *(_QWORD *)(a1 + 184);
      v13 = *(__int64 (__fastcall **)(__int64, struct tagPOINT *, _QWORD, _QWORD))(*(_QWORD *)v12 + 24LL);
      if ( (*(_DWORD *)(a1 + 72) & 0x80000) == 0 )
      {
        v15 = v13(v12, Points, a2, 0LL);
        goto LABEL_9;
      }
      v8 = v13(v12, Points, 0LL, 0LL);
      if ( (v8 & 0x80000000) == 0 )
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 184) + 32LL))(
                *(_QWORD *)(a1 + 184),
                v14,
                a2,
                0LL);
LABEL_9:
        v8 = v15;
      }
LABEL_10:
      *(_BYTE *)(a1 + 157) = 1;
    }
  }
  else
  {
    v16 = *(HWND *)(a1 + 192);
    *(_OWORD *)&v34[0].x = *(_OWORD *)(a1 + 76);
    MapWindowPoints(0LL, v16, v34, 2u);
    (*(void (__fastcall **)(_QWORD, struct tagPOINT *, _QWORD, _QWORD))(**(_QWORD **)(a1 + 184) + 24LL))(
      *(_QWORD *)(a1 + 184),
      v34,
      0LL,
      0LL);
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McTemplateU0ddz_EventWriteTransfer(v18, v17, *(unsigned int *)(a1 + 76), *(unsigned int *)(a1 + 80));
  }
  return v8;
}
