/*
 * XREFs of ?v_PrepareAppRects@CAppArrangementSingleTransitionTarget@@EEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E63F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z @ 0x1804E2840 (-MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z.c)
 *     ?v_PrepareAppRects@CAppTransitionTargetBase@@MEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E6590 (-v_PrepareAppRects@CAppTransitionTargetBase@@MEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryApp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAppArrangementSingleTransitionTarget::v_PrepareAppRects(
        CAppArrangementSingleTransitionTarget *this,
        struct IAppLayoutOperationItem *a2,
        struct ITemporaryAppVisual *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  __int64 v7; // rax
  int (__fastcall *v8)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rbx
  __int64 *v9; // rax
  HWND v10; // rcx
  struct tagRECT *v11; // rsi
  unsigned __int8 (__fastcall *v12)(CAppArrangementSingleTransitionTarget *); // rax
  struct tagRECT v13; // xmm0
  int v14; // ecx
  int v15; // r8d
  int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-38h] BYREF
  __int128 v18; // [rsp+28h] [rbp-30h]
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  CAppTransitionTargetBase::v_PrepareAppRects(this, a2, a3, a4);
  v7 = *(_QWORD *)a2;
  v17 = 0LL;
  if ( !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(v7 + 80))(a2) )
  {
    v8 = *(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
    v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v17);
    if ( v8(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v9) >= 0 )
    {
      v10 = (HWND)*((_QWORD *)this + 7);
      v19 = 0LL;
      if ( IsIconic(v10) && (int)DwmpQueryWindowThumbnailSourceSize(*((_QWORD *)this + 7), 0LL, &v19) >= 0 )
      {
        v11 = (struct tagRECT *)((char *)this + 204);
        *((_QWORD *)&v18 + 1) = v19;
        *(_QWORD *)&v18 = 0LL;
        *(_OWORD *)((char *)this + 204) = v18;
      }
      else
      {
        v11 = (struct tagRECT *)((char *)this + 204);
        GetWindowRect(*((HWND *)this + 7), (LPRECT)((char *)this + 204));
      }
      v12 = *(unsigned __int8 (__fastcall **)(CAppArrangementSingleTransitionTarget *))(*(_QWORD *)this + 72LL);
      *(struct tagRECT *)((char *)this + 172) = *v11;
      if ( v12(this) )
      {
        if ( a3 )
        {
          v13 = *v11;
          *(struct tagRECT *)((char *)this + 172) = *v11;
          *v11 = v13;
          MatchRectAspectRatio((struct tagRECT *)((char *)this + 172), (const struct tagRECT *)((char *)this + 236));
          MatchRectAspectRatio(v11, (const struct tagRECT *)((char *)this + 252));
          v14 = *((_DWORD *)this + 63);
          v15 = *((_DWORD *)this + 65);
          if ( v15 > v14 )
          {
            v16 = MulDiv(v14 - *((_DWORD *)this + 59), v11->right - v11->left, v15 - v14);
            OffsetRect(v11, v16, 0);
          }
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
}
