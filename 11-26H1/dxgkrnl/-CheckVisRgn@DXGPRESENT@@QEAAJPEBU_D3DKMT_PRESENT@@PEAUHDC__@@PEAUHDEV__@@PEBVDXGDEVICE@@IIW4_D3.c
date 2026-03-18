/*
 * XREFs of ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1403211B8
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14000D850 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x14000EB0C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x14003CE00 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x14003D024 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1401A3B50 (-IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x140321198 (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x140321ED0 (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x140322848 (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x140323078 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140323480 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 */

__int64 __fastcall DXGPRESENT::CheckVisRgn(
        DXGPRESENT *this,
        const struct _D3DKMT_PRESENT *a2,
        HDC a3,
        HDEV a4,
        const struct DXGDEVICE *a5,
        unsigned int a6,
        unsigned int a7,
        enum _D3DDDIFORMAT a8,
        int a9)
{
  const struct DXGDEVICE *v9; // r12
  unsigned int v12; // ebx
  __int64 v13; // rbp
  __int64 v14; // r13
  int v15; // r14d
  __int64 v16; // r15
  _DWORD *v17; // r14
  _DWORD *v18; // rbp
  int v19; // ebp
  __int64 v20; // r14
  unsigned int i; // ebp
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int j; // ecx
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // ecx
  unsigned int v28; // r9d
  signed int v29; // r8d
  __int64 v30; // rcx
  int v31; // edx
  __int64 v32; // r14
  int v33; // eax
  __int64 v34; // rax
  unsigned int k; // ecx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rbp
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v41; // r8d
  int v42; // edx
  unsigned int v43; // edx
  unsigned int v44; // eax
  __int64 v45; // r14
  __int64 v46; // rax
  unsigned int v47; // r15d
  __int16 v48; // ax
  __int64 result; // rax
  unsigned int m; // ebp
  __int64 v51; // rdx
  __int64 v52; // r12
  __int64 v53; // rdx
  signed int v54; // r10d
  signed int v55; // ecx
  signed int v56; // eax
  __int64 Value; // rcx
  int v58; // ecx
  int v59; // r8d
  int v60; // eax
  int v61; // r9d
  unsigned int v62; // edx
  __int64 v63; // rcx
  __int64 v64; // rax
  HDEV v65; // rbx
  const wchar_t *v66; // r9
  __int64 v67; // r10
  __int64 v68; // rcx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v69; // eax
  char v70; // [rsp+50h] [rbp-58h]
  int v71; // [rsp+54h] [rbp-54h] BYREF
  int v72; // [rsp+58h] [rbp-50h]
  int v73; // [rsp+5Ch] [rbp-4Ch] BYREF
  int v74; // [rsp+60h] [rbp-48h]
  signed int v75; // [rsp+64h] [rbp-44h]
  unsigned int v76; // [rsp+68h] [rbp-40h]
  int v77; // [rsp+6Ch] [rbp-3Ch]

  v9 = a5;
  v12 = 0;
  v13 = *((_QWORD *)a5 + 237);
  v14 = *(_QWORD *)(*((_QWORD *)a5 + 5) + 88LL);
  if ( !(*(unsigned int (**)(void))(v14 + 224))() )
  {
    *((_DWORD *)this + 1) |= 3u;
    *((_QWORD *)this + 6) = a2->hWindow;
    v12 = -1071775737;
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 10784;
    return v12;
  }
  v71 = 0;
  v15 = (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(v14 + 240))(&v71, 0LL, 0LL);
  v77 = v15;
  v73 = 0;
  v72 = (*(__int64 (__fastcall **)(int *))(v14 + 320))(&v73);
  if ( v15 && !v71 )
  {
    *((_DWORD *)this + 1) |= 3u;
    *((_QWORD *)this + 6) = a2->hWindow;
    return 3223191558LL;
  }
  v16 = 0LL;
  if ( !v15 )
    v16 = v13;
  if ( (a2->Flags.Value & 0x100) != 0 && !v16 )
  {
    *((_DWORD *)this + 1) |= 3u;
    *((_QWORD *)this + 6) = a2->hWindow;
    v12 = -1071775737;
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 10826;
    return v12;
  }
  v17 = (_DWORD *)((char *)this + 4);
  *((_DWORD *)this + 1) &= 0xFFFFFF7C;
  if ( !a2->hWindow && (a2->Flags.Value & 0x100) != 0 )
  {
    if ( v16 )
    {
      if ( v16 == *((_QWORD *)a5 + 237) )
      {
LABEL_123:
        v18 = (_DWORD *)((char *)this + 24);
        *(_OWORD *)((char *)this + 24) = *(_OWORD *)(4024LL * a2->VidPnSourceId
                                                   + *(_QWORD *)(*(_QWORD *)(v16 + 3160) + 128LL)
                                                   + 628);
LABEL_9:
        *((_QWORD *)this + 5) = 0LL;
        goto LABEL_10;
      }
      v17 = (_DWORD *)((char *)this + 4);
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10838;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayAdapter != NULL) && (pDisplayAdapter == pDevice->GetDisplayAdapter(pPresent->VidPnSourceId))",
      10838LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_123;
  }
  v18 = (_DWORD *)((char *)this + 24);
  if ( !(*(unsigned int (__fastcall **)(HDC, char *))(v14 + 72))(a3, (char *)this + 24) )
  {
    WdLogSingleEntry2(3LL, this, a2->hWindow);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 10846;
    return result;
  }
  if ( !(*(unsigned int (__fastcall **)(HDC, char *))(v14 + 328))(a3, (char *)this + 40) )
    goto LABEL_9;
LABEL_10:
  if ( *v18 >= *((_DWORD *)this + 8) || *((_DWORD *)this + 7) >= *((_DWORD *)this + 9) )
  {
    *v17 |= 2u;
    *v17 |= 1u;
    WdLogSingleEntry3(4LL, -1071775738LL, this, a2->VidPnSourceId);
    WdLogGlobalForLineNumber = 10862;
    return 3223191558LL;
  }
  if ( (*((_BYTE *)a5 + 1917) & 1) == 0 )
    *((_DWORD *)this + 16) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 736LL)
                                                                           + 8LL)
                                                               + 552LL))(*(_QWORD *)(*((_QWORD *)a5 + 2) + 744LL));
  v19 = v72;
  if ( v16 && (v72 || !ADAPTER_DISPLAY::IsInVirtualMode(*(ADAPTER_DISPLAY **)(v16 + 3160), a2->VidPnSourceId)) )
  {
LABEL_16:
    v20 = *(_QWORD *)(v16 + 3160);
    for ( i = 0; i < *(_DWORD *)(v20 + 96); ++i )
    {
      v22 = *(_QWORD *)(v20 + 16);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v22 + 184)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v22 + 168)) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6430;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 6430LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( i >= *(_DWORD *)(v20 + 96) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6431;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"VidPnSourceId < m_NumVidPnSources",
          6431LL,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( i >= *(_DWORD *)(v20 + 96) )
          continue;
      }
      if ( a5 == *(const struct DXGDEVICE **)(4024LL * i + *(_QWORD *)(v20 + 128) + 728) )
        goto LABEL_44;
    }
    v23 = *(_QWORD *)(v16 + 3160);
    for ( j = 0; j < *(_DWORD *)(v23 + 96); ++j )
    {
      v25 = 4024LL * j;
      v26 = *(_QWORD *)(v23 + 128);
      if ( *(_QWORD *)(v25 + v26 + 728) && *(_DWORD *)(v25 + v26 + 736) == 1 )
      {
        v70 = 1;
        goto LABEL_33;
      }
    }
    v70 = 0;
LABEL_33:
    v27 = *((_DWORD *)this + 10);
    v28 = v27 + *((_DWORD *)this + 6);
    v29 = v27 + *((_DWORD *)this + 8);
    v30 = *((unsigned int *)this + 11);
    v31 = v30 + *((_DWORD *)this + 7);
    v32 = *(_QWORD *)(v16 + 3160);
    v33 = v30 + *((_DWORD *)this + 9);
    v76 = v28;
    v75 = v29;
    v72 = v31;
    v74 = v33;
    if ( v28 != v29 && v31 != v33 )
    {
      v34 = *((_QWORD *)DXGPROCESS::GetCurrent(v30) + 11);
      if ( !v34 || !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v34 + 240))(0LL, 0LL, 0LL) )
      {
        for ( k = 0; k < *(_DWORD *)(v32 + 96); ++k )
        {
          v36 = 4024LL * k;
          v37 = *(_QWORD *)(v32 + 128);
          if ( *(_DWORD *)(v36 + v37 + 736) == 1 && *(_BYTE *)(v36 + v37 + 760) )
            goto LABEL_42;
        }
        for ( m = 0; ; ++m )
        {
          if ( m >= *(_DWORD *)(v32 + 96) )
          {
            Value = a2->Flags.Value;
            if ( (Value & 0x100) == 0 && a9 )
            {
              v12 = 261;
              WdLogSingleEntry5(4LL, 261LL, this, a2->hSource, Value, a2->VidPnSourceId);
              WdLogGlobalForLineNumber = 10961;
              return v12;
            }
LABEL_105:
            v9 = a5;
            goto LABEL_42;
          }
          v51 = *(_QWORD *)(v32 + 128);
          v52 = 4024LL * m;
          if ( !*(_BYTE *)(v51 + v52 + 760)
            || !DmmIsTargetNonStandard(*(struct DXGADAPTER **)(v32 + 16), *(_DWORD *)(v51 + v52 + 1072)) )
          {
            v53 = *(_QWORD *)(v32 + 128);
            v54 = v75;
            v55 = *(_DWORD *)(v53 + v52 + 628);
            v56 = *(_DWORD *)(v53 + v52 + 636);
            if ( (int)v76 > v55 )
              v55 = v76;
            if ( v75 < v56 )
              v56 = v75;
            if ( v55 < v56 )
            {
              v58 = *(_DWORD *)(v53 + v52 + 632);
              v59 = v72;
              v60 = *(_DWORD *)(v53 + v52 + 640);
              v61 = v74;
              if ( v72 > v58 )
                v58 = v72;
              if ( v74 < v60 )
                v60 = v74;
              if ( v58 < v60 )
              {
                if ( !*(_DWORD *)(4024LL * m + v53 + 736) )
                {
                  if ( (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v32, m) )
                    goto LABEL_105;
                  v59 = v72;
                  v61 = v74;
                  v54 = v75;
                }
                v62 = v76;
                v63 = 4024LL * m;
                v64 = *(_QWORD *)(v32 + 128);
                if ( (signed int)v76 >= *(_DWORD *)(v63 + v64 + 628)
                  && v54 <= *(_DWORD *)(v63 + v64 + 636)
                  && v59 >= *(_DWORD *)(v63 + v64 + 632)
                  && v61 <= *(_DWORD *)(v63 + v64 + 640) )
                {
                  break;
                }
              }
            }
          }
        }
        v9 = a5;
        if ( (*((_DWORD *)a5 + 116) || ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v16 + 3160)))
          && !DXGDEVICE::AllowLegacyPresent(a5, v62) )
        {
          *((_DWORD *)this + 1) |= 3u;
          *((_QWORD *)this + 6) = a2->hWindow;
          WdLogSingleEntry5(4LL, -1071775738LL, this, a2->hSource, a2->Flags.Value, a2->VidPnSourceId);
          WdLogGlobalForLineNumber = 10942;
          if ( !*((_DWORD *)a5 + 116) && v70 )
            *((_DWORD *)this + 1) |= 0x80u;
          return 3223191558LL;
        }
      }
    }
LABEL_42:
    if ( !v70 || (v38 = a2->Flags.Value, (v38 & 0x10000) != 0) || v77 )
    {
LABEL_44:
      if ( (a2->Flags.Value & 0x10000) != 0 )
        goto LABEL_158;
      if ( !a2->hWindow )
      {
LABEL_138:
        if ( (a2->Flags.Value & 0x100) != 0 )
        {
          v67 = 4024LL * a2->VidPnSourceId;
          v68 = *(_QWORD *)(*(_QWORD *)(v16 + 3160) + 128LL);
          v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v14 + 80))(
                  *(unsigned int *)(v67 + v68 + 628),
                  *(unsigned int *)(v67 + v68 + 632),
                  *(unsigned int *)(v67 + v68 + 636),
                  *(unsigned int *)(v67 + v68 + 640));
          goto LABEL_48;
        }
LABEL_46:
        v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v14 + 80))(0LL, 0LL, 0LL, 0LL);
        v40 = v39;
        if ( v39
          && (*(unsigned int (__fastcall **)(HDC, __int64, _QWORD))(v14 + 88))(
               a3,
               v39,
               HIWORD(a2->Flags.Value) & 1 | 4u) == -1 )
        {
          (*(void (__fastcall **)(__int64))(v14 + 128))(v40);
          v65 = a4;
          WdLogSingleEntry5(6LL, this, a2->hWindow, a3, a4, a2->Flags.Value);
          v66 = L"0x%I64x unable to get VisRgn with hWindow=0x%I64x hdc = 0x%I64x hDev = 0x%I64x PresentFlags = 0x%I64x";
          WdLogGlobalForLineNumber = 11042;
          goto LABEL_97;
        }
LABEL_48:
        v41 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
        if ( v40 )
        {
          v42 = *((_DWORD *)this + 1);
          if ( (*(_DWORD *)&v41 & 0x10000) != 0 )
          {
            v43 = v42 | 0x10;
            if ( a2->hDestination )
              v43 = *((_DWORD *)this + 1) & 0xFFFFFFEF;
          }
          else if ( (v42 & 0x20) != 0
                 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL) + 444LL) & 0x10) != 0
                 && (*(_BYTE *)&v41 & 3) != 0 )
          {
            v43 = v42 | 0x10;
          }
          else
          {
            v43 = *((_DWORD *)this + 1) ^ ((unsigned __int8)*((_DWORD *)this + 1) ^ (unsigned __int8)(16 * (*(__int64 (__fastcall **)(__int64, HDEV, HWND, __int64))(v14 + 136))(v16, a4, a2->hWindow, v40))) & 0x10;
          }
          *((_DWORD *)this + 1) = v43;
          if ( (v43 & 0x10) != 0
            && (a2->Flags.Value & 0x100) != 0
            && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v16 + 3160), v9, a2->VidPnSourceId)
            && *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v16 + 3160), a2->VidPnSourceId) + 2) == 41 )
          {
            if ( (v69 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value,
                  (*(_BYTE *)&v69 & 1) != 0)
              && (a8 == D3DDDIFMT_P8 || a8 == D3DDDIFMT_A8)
              || (*(_BYTE *)&v69 & 2) != 0 && !a2->hWindow )
            {
              *((_DWORD *)this + 1) &= ~0x10u;
            }
          }
          if ( (*((_DWORD *)this + 1) & 0x10) != 0 )
            goto LABEL_62;
          v44 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v14 + 112))(v40, 0LL, 0LL);
          v45 = v44;
          if ( v44 )
          {
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 2));
            v46 = operator new[]((unsigned int)v45, 0x4B677844u, 256LL);
            *((_QWORD *)this + 2) = v46;
            if ( v46 )
            {
              v47 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v14 + 112))(v40, (unsigned int)v45, v46);
              if ( v47 > (unsigned int)v45 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 11166;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"RealSize <= RgnDataSize",
                  11166LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              *((_DWORD *)this + 1) |= 2u;
              if ( (a2->Flags.Value & 0x10000) != 0 )
                v48 = (*(__int64 (__fastcall **)(HWND))(v14 + 392))(a2->hWindow);
              else
                v48 = 0;
              *((_WORD *)this + 214) = v48;
              if ( v47 <= 0x20 )
              {
                if ( (unsigned int)DXGPRESENT::ComputeSrcDstRects(this, a2, a6, a7) )
                  (*(void (__fastcall **)(HDC, char *))(v14 + 264))(a3, (char *)this + 128);
              }
              else
              {
                v12 = DXGPRESENT::CombineRectList(this, a2, a3, v9, a6, a7);
              }
LABEL_62:
              (*(void (__fastcall **)(__int64))(v14 + 128))(v40);
              *((_QWORD *)this + 6) = a2->hWindow;
              return v12;
            }
            WdLogSingleEntry2(6LL, this, v45);
            WdLogGlobalForLineNumber = 11157;
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"0x%I64x fails to allocate memory of size 0x%I64x for VisRgnData",
              (__int64)this,
              v45,
              0LL,
              0LL,
              0LL);
          }
          else
          {
            WdLogSingleEntry2(2LL, this, v40);
            WdLogGlobalForLineNumber = 11144;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"0x%I64x fails to get the size for VisRgnData from 0x%I64x",
              (__int64)this,
              v40,
              0LL,
              0LL,
              0LL);
          }
          (*(void (__fastcall **)(__int64))(v14 + 128))(v40);
          return 3221225495LL;
        }
        v65 = a4;
        WdLogSingleEntry5(6LL, this, a2->hWindow, a3, a4, a2->Flags.Value);
        v66 = L"0x%I64x not able to create hVisRgn hWindow = 0x%I64x hdc = 0x%I64x hDev = 0x%I64x PresentFlags = 0x%I64x";
        WdLogGlobalForLineNumber = 11052;
LABEL_97:
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)v66,
          (__int64)this,
          (__int64)a2->hWindow,
          (__int64)a3,
          (__int64)v65,
          a2->Flags.Value);
        return 3221225495LL;
      }
      if ( !(*(unsigned int (__fastcall **)(HDC))(v14 + 56))(a3)
        || v16 && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v16 + 3160), v9) )
      {
LABEL_158:
        if ( a2->hWindow )
          goto LABEL_46;
        goto LABEL_138;
      }
      *((_DWORD *)this + 1) |= 0x10u;
      *((_QWORD *)this + 6) = a2->hWindow;
      return 0LL;
    }
    WdLogSingleEntry5(4LL, -1071774910LL, this, a2->hSource, v38, a2->VidPnSourceId);
    WdLogGlobalForLineNumber = 10974;
    return 3223192386LL;
  }
  if ( (a2->Flags.Value & 0x10000) != 0 )
  {
    if ( !v16 )
      goto LABEL_44;
    goto LABEL_16;
  }
  if ( !v77 || !v19 || v73 )
  {
    *((_DWORD *)this + 1) |= 0x10u;
    *((_QWORD *)this + 6) = a2->hWindow;
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 10897;
    return 0LL;
  }
  return 3223192386LL;
}
