/*
 * XREFs of ?_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x1804D383C
 * Callers:
 *     ?PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804D2A20 (-PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationIte.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B8A5C (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x1802388D8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z @ 0x1804D05C0 (-MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z.c)
 *     ?_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z @ 0x1804D3484 (-_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z.c)
 *     ?_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ @ 0x1804D362C (-_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ.c)
 *     s_ComputeDragVisualDestinationRect @ 0x1804D3E48 (s_ComputeDragVisualDestinationRect.c)
 *     s_GetAlignedRectsForApp @ 0x1804D3EC8 (s_GetAlignedRectsForApp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAppArrangementSingleTransitionTarget::_PrepareTaggingForImmediateStoryboard(
        CAppArrangementSingleTransitionTarget *this,
        struct IAppLayoutOperationItem *a2,
        struct ITemporaryAppVisual *a3)
{
  __int64 v3; // rax
  int (__fastcall *v7)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rbx
  __int64 *v8; // rax
  int *v9; // r15
  int v10; // r14d
  _OWORD *v11; // r12
  unsigned int v12; // ebx
  __int128 v13; // xmm0
  int v14; // ecx
  int v15; // eax
  __int64 top; // rcx
  __int128 v17; // xmm0
  struct tagRECT *v18; // rcx
  __int128 v19; // xmm1
  const struct tagRECT *v20; // rdx
  const struct tagRECT *v21; // r8
  int v22; // ecx
  bool v23; // r14
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  char v26; // si
  int v27; // eax
  char v28; // cl
  int v29; // eax
  int IsThreadRTL; // eax
  int v31; // ecx
  int v32; // eax
  __int128 v33; // xmm1
  __int64 v34; // rax
  unsigned __int8 v35; // si
  int v36; // eax
  __int64 v37; // rcx
  __int128 *v38; // r14
  HMONITOR v39; // r15
  HMONITOR v40; // rax
  __int128 v41; // xmm0
  int v42; // r8d
  const struct tagRECT *v43; // rdx
  LONG right; // edx
  LONG bottom; // r8d
  char v46; // [rsp+30h] [rbp-40h] BYREF
  char v47[7]; // [rsp+31h] [rbp-3Fh] BYREF
  struct tagRECT v48; // [rsp+38h] [rbp-38h] BYREF
  __int64 v49; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT rcDst; // [rsp+50h] [rbp-20h] BYREF

  v3 = *(_QWORD *)a2;
  v49 = 0LL;
  *(_QWORD *)&v48.left = a3;
  v7 = *(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(v3 + 32);
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v49);
  if ( v7(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v8) >= 0 )
  {
    v9 = (int *)((char *)this + 72);
    v10 = (*(__int64 (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 96LL))(a2);
    v11 = (_OWORD *)((char *)this + 88);
    v12 = 696614912;
    v13 = *(_OWORD *)((char *)this + 172);
    *(_OWORD *)((char *)this + 72) = v13;
    if ( a3 )
      v13 = *(_OWORD *)((char *)this + 236);
    v14 = *((_DWORD *)this + 19);
    v15 = *v9;
    *v11 = v13;
    *((_DWORD *)this + 21) -= v14;
    *((_DWORD *)this + 19) -= v14;
    *v9 = 0;
    *((_DWORD *)this + 20) -= v15;
    MatchRectAspectRatio((struct tagRECT *)((char *)this + 72), (const struct tagRECT *)((char *)this + 88));
    switch ( v10 )
    {
      case 7:
        *((_DWORD *)this + 10) = 71;
        v12 = 697663488;
        goto LABEL_77;
      case 8:
        v35 = 1;
        v36 = 72;
        break;
      case 9:
        v35 = 0;
        v36 = 73;
        break;
      default:
        if ( ((v10 - 2) & 0xFFFFFFF7) == 0 )
        {
          v32 = 45;
          v33 = *(_OWORD *)((char *)this + 88);
          *(_OWORD *)((char *)this + 104) = *(_OWORD *)((char *)this + 72);
          top = 84LL;
          if ( v10 != 2 )
            v32 = 84;
          *((_DWORD *)this + 10) = v32;
          v34 = *((_QWORD *)this + 35);
          *(_OWORD *)((char *)this + 120) = v33;
          if ( v34 )
          {
            *((_QWORD *)this + 8) = v34;
            *((_DWORD *)this + 12) = 0x4000;
          }
          goto LABEL_77;
        }
        if ( *((_DWORD *)this + 68) == 6 )
        {
          v17 = *(_OWORD *)v9;
          v18 = (struct tagRECT *)((char *)this + 104);
          *((_DWORD *)this + 10) = 44;
          v19 = *(_OWORD *)((char *)this + 188);
          v20 = (const struct tagRECT *)((char *)this + 120);
          *(_OWORD *)((char *)this + 104) = v17;
          *(_OWORD *)((char *)this + 120) = v19;
LABEL_14:
          MatchRectAspectRatio(v18, v20);
          goto LABEL_77;
        }
        if ( CAppArrangementSingleTransitionTarget::_IsDragVisual(this)
          && (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
        {
          *((_DWORD *)this + 10) = 35;
          s_ComputeDragVisualDestinationRect((char *)this + 188, (char *)this + 88, (char *)this + 120);
          v18 = (struct tagRECT *)((char *)this + 104);
          v20 = v21;
          *(_OWORD *)((char *)this + 104) = *(_OWORD *)v9;
          goto LABEL_14;
        }
        if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
          && (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
        {
          v23 = Geometry::operator==((_DWORD *)this + 43, (_DWORD *)this + 47) || *(_QWORD *)&v48.left;
          v46 = 1;
          v47[0] = 1;
          s_GetAlignedRectsForApp(
            v22,
            (_DWORD)this + 188,
            (_DWORD)this + 104,
            (_DWORD)this + 120,
            (__int64)&v46,
            (__int64)v47);
          if ( !v46 )
            v12 = 696549376;
          if ( !v47[0] )
            v12 &= ~0x8000u;
          if ( v23 )
          {
            v24 = *(_OWORD *)((char *)this + 120);
            v25 = *(_OWORD *)((char *)this + 104);
            *((_DWORD *)this + 10) = 28;
            *v11 = v24;
            *(_OWORD *)v9 = v25;
            if ( Geometry::operator==((_DWORD *)this + 43, (_DWORD *)this + 47) )
              v12 = v12 & 0xDFDFFFFF | 0x200000;
          }
          else
          {
            *((_DWORD *)this + 10) = 23;
          }
          goto LABEL_77;
        }
        if ( !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
          || (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
        {
LABEL_77:
          *((_DWORD *)this + 11) = CAppTransitionTargetBase::_GetDwmTargetFlag(
                                     (CAppTransitionTargetBase *)top,
                                     *((HWND *)this + 7),
                                     0,
                                     v12);
          goto LABEL_78;
        }
        v26 = 1;
        rcDst = 0LL;
        if ( *((_DWORD *)this + 68) == 1
          && !IntersectRect(&rcDst, (const RECT *)((char *)this + 88), (const RECT *)((char *)this + 136)) )
        {
          *((_DWORD *)this + 10) = 43;
          v12 = 671449088;
          SetRectEmpty((LPRECT)((char *)this + 72));
          SetRectEmpty((LPRECT)((char *)this + 88));
          SetRectEmpty((LPRECT)((char *)this + 104));
          SetRectEmpty((LPRECT)((char *)this + 120));
          goto LABEL_77;
        }
        if ( (unsigned int)(v10 - 3) <= 1 || (*((_BYTE *)this + 160) & 0x18) != 0 )
        {
          v29 = *((_DWORD *)this + 40);
          v28 = 1;
          if ( (v29 & 1) != 0 )
          {
            *((_DWORD *)this + 10) = 7;
          }
          else if ( (v29 & 4) != 0 )
          {
            *((_DWORD *)this + 10) = 31;
          }
          else
          {
            *((_DWORD *)this + 10) = 23;
          }
        }
        else
        {
          v27 = 20;
          v28 = 0;
          if ( *((_DWORD *)this + 39) == 3 )
            v27 = 28;
          *((_DWORD *)this + 10) = v27;
        }
        *(_OWORD *)((char *)this + 120) = *(_OWORD *)((char *)this + 88);
        if ( !v28 )
        {
LABEL_54:
          *(_OWORD *)((char *)this + 104) = *(_OWORD *)((char *)this + 72);
          MatchRectAspectRatio((struct tagRECT *)((char *)this + 104), (const struct tagRECT *)((char *)this + 120));
          if ( *((_DWORD *)this + 68) )
            v12 &= ~0x20000000u;
          goto LABEL_77;
        }
        if ( (unsigned int)(v10 - 3) <= 1 )
        {
          IsThreadRTL = Mirror_IsThreadRTL();
          if ( v10 == 3 )
            goto LABEL_52;
          v26 = 0;
          if ( v10 == 4 )
          {
LABEL_51:
            v31 = *((_DWORD *)this + 36);
LABEL_53:
            *((_DWORD *)this + 30) = v31;
            *((_DWORD *)this + 32) = v31 + *((_DWORD *)this + 24) - *((_DWORD *)this + 22);
            goto LABEL_54;
          }
        }
        else
        {
          IsThreadRTL = Mirror_IsThreadRTL();
        }
        v12 = 696516608;
        if ( v26 && IsThreadRTL )
          goto LABEL_51;
LABEL_52:
        v31 = *((_DWORD *)this + 22) + *((_DWORD *)this + 34) - *((_DWORD *)this + 24);
        goto LABEL_53;
    }
    v37 = *((_QWORD *)this + 7);
    v12 = (v35 << 20) + 696614912;
    *((_DWORD *)this + 10) = v36;
    rcDst = 0LL;
    if ( !(unsigned int)GetWindowMinimizeRect(v37, &rcDst) || IsRectEmpty(&rcDst) )
    {
      if ( v10 == 8 )
        *((_DWORD *)this + 10) = 71;
      else
        *((_DWORD *)this + 10) = 4095;
      goto LABEL_77;
    }
    *(_OWORD *)((char *)this + 104) = *(_OWORD *)((char *)this + 72);
    v38 = (__int128 *)((char *)this + 188);
    v39 = MonitorFromRect(&rcDst, 0);
    v40 = MonitorFromRect((LPCRECT)((char *)this + 188), 0);
    if ( v35 || v40 && v40 == v39 )
    {
      v42 = (int)(float)((float)(rcDst.right - rcDst.left) * 0.60000002);
      v43 = (const struct tagRECT *)((char *)this + 172);
      v48.top = rcDst.top - v42 * (rcDst.bottom - rcDst.top) / (rcDst.right - rcDst.left);
      v48.bottom = rcDst.top;
      v48.left = (int)(float)((float)((float)v42 * 0.30000001) + (float)rcDst.left);
      v48.right = v42 + v48.left;
      if ( !v35 )
        v43 = (const struct tagRECT *)((char *)this + 188);
      MatchRectAspectRatio(&v48, v43);
      top = (unsigned int)v48.top;
      right = v48.right;
      bottom = v48.bottom;
      if ( v35 )
      {
        *((_DWORD *)this + 30) = v48.left;
        *((_DWORD *)this + 31) = top;
        *((_DWORD *)this + 32) = right;
        *((_DWORD *)this + 33) = bottom;
        goto LABEL_77;
      }
      *((_DWORD *)this + 22) = v48.left;
      *((_DWORD *)this + 23) = top;
      *((_DWORD *)this + 24) = right;
      *((_DWORD *)this + 25) = bottom;
      v41 = *v38;
    }
    else
    {
      v41 = *v38;
      *((_DWORD *)this + 10) = 74;
      *(_OWORD *)((char *)this + 88) = v41;
    }
    *(_OWORD *)((char *)this + 120) = v41;
    goto LABEL_77;
  }
LABEL_78:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v49);
}
