/*
 * XREFs of ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1401E5A70
 * Callers:
 *     DxgkUnlock2Internal @ 0x14028DB00 (DxgkUnlock2Internal.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1402BBB04 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x14037C5A4 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x14003D024 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?VidMmBeginCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@KKIPEAPEAX@Z @ 0x14004E06C (-VidMmBeginCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@KKIPEAPEAX@Z.c)
 *     ?VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@KK@Z @ 0x140050054 (-VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@KK@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1401A42C8 (-PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z @ 0x14037CCB8 (-IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1403EE454 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UpdateDodFrontBuffer(ADAPTER_RENDER **this, struct DXGALLOCATION *a2)
{
  unsigned int v4; // edx
  __int64 result; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int128 v13; // xmm2
  __int128 v14; // xmm0
  __int64 v15; // rax
  int v16; // ecx
  D3DDDIFORMAT Format; // eax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  LONG v21; // eax
  ADAPTER_RENDER *v22; // rcx
  __int64 v23; // [rsp+38h] [rbp-C8h]
  struct _DXGKARG_DESCRIBEALLOCATION v24; // [rsp+50h] [rbp-B0h] BYREF
  _DXGKARG_PRESENT_DISPLAYONLY v25; // [rsp+80h] [rbp-80h] BYREF
  __int128 v26; // [rsp+C0h] [rbp-40h]
  __int128 v27; // [rsp+D0h] [rbp-30h]
  _DWORD v28[20]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v29; // [rsp+160h] [rbp+60h] BYREF

  v4 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
  if ( (v4 & 0x10) != 0 )
  {
    WdLogSingleEntry3(4LL, -1071775482LL, this, a2);
    result = 3223191814LL;
    WdLogGlobalForLineNumber = 436;
    return result;
  }
  if ( !DXGDEVICE::IsVSyncAvailable((DXGDEVICE *)this, (v4 >> 6) & 0xF) )
  {
    WdLogSingleEntry3(4LL, 0LL, this, (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
    result = 0LL;
    WdLogGlobalForLineNumber = 445;
    return result;
  }
  memset(v28, 0, sizeof(v28));
  DxgkpGetDodPrimaryInfo((struct DXGDEVICE *)this, a2, (struct _D3DKMT_KMDOD_ESCAPE *)v28);
  if ( !v28[8] )
  {
    v6 = -1073741811;
    WdLogSingleEntry4(2LL, -1073741811LL, this, a2, *((unsigned int *)a2 + 4));
    v23 = *((unsigned int *)a2 + 4);
    WdLogGlobalForLineNumber = 462;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Device 0x%I64x: DxgkpGetDodPrimaryInfo failed for front buffer 0x%I64x 0x%I64x",
      -1073741811LL,
      (__int64)this,
      (__int64)a2,
      v23,
      0LL);
    return v6;
  }
  v7 = *((_QWORD *)a2 + 6);
  v24.Rotation = -1;
  memset(&v24.Width, 0, 32);
  v24.Flags.Value = 1;
  v24.hAllocation = *(HANDLE *)(v7 + 16);
  v8 = ADAPTER_RENDER::DdiDescribeAllocation(this[2], &v24);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry5(2LL, v8, this, a2, (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF, *((unsigned int *)a2 + 4));
    v10 = *((_QWORD *)a2 + 6);
    v11 = *((unsigned int *)a2 + 4);
    WdLogGlobalForLineNumber = 480;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Device 0x%I64x: DdiDescribeAllocation failed for front buffer 0x%I64x 0x%I64x 0x%I64x",
      v9,
      (__int64)this,
      (__int64)a2,
      (*(_DWORD *)(v10 + 4) >> 6) & 0xF,
      v11);
    return (unsigned int)v9;
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *((ADAPTER_DISPLAY **)this[237] + 395),
                      (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
  v13 = *(_OWORD *)DisplayModeInfo;
  v14 = *((_OWORD *)DisplayModeInfo + 1);
  v15 = *(_QWORD *)DisplayModeInfo;
  v26 = v13;
  v27 = v14;
  if ( *(_QWORD *)&v24.Width != v15 || v24.Rotation != -1 && v24.Rotation != HIDWORD(v27) )
  {
    WdLogSingleEntry3(4LL, -1071775482LL, this, a2);
    WdLogGlobalForLineNumber = 498;
    return 3223191557LL;
  }
  v16 = 22;
  Format = D3DDDIFMT_X8R8G8B8;
  if ( v24.Format != D3DDDIFMT_A8R8G8B8 )
    Format = v24.Format;
  if ( DWORD2(v26) != 21 )
    v16 = DWORD2(v26);
  if ( Format == v16 )
  {
    memset(&v25, 0, sizeof(v25));
    v18 = VIDMM_EXPORT::VidMmBeginCPUAccess(
            *((VIDMM_EXPORT **)this[2] + 95),
            *((struct VIDMM_GLOBAL **)this[2] + 96),
            *((struct VIDMM_MULTI_ALLOC **)a2 + 3),
            *((_DWORD *)a2 + 4) & 0x3F,
            2u,
            0,
            &v25.pSource);
    v9 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry4(2LL, v18, this, a2, *((unsigned int *)a2 + 4));
      v19 = *((unsigned int *)a2 + 4);
      WdLogGlobalForLineNumber = 527;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ret = 0x%I64x Device 0x%I64x: VidMmBeginCPUAccess failed for front buffer 0x%I64x 0x%I64x 0x%I64x",
        v9,
        (__int64)this,
        (__int64)a2,
        v19,
        0LL);
      return (unsigned int)v9;
    }
    v20 = *((_QWORD *)a2 + 6);
    v29 = 0LL;
    v25.VidPnSourceId = (*(_DWORD *)(v20 + 4) >> 6) & 0xF;
    if ( v24.Format != D3DDDIFMT_A8R8G8B8 && v24.Format != D3DDDIFMT_X8R8G8B8 )
    {
      v6 = -1073741811;
      WdLogSingleEntry4(2LL, -1073741811LL, this, a2, v24.Format);
      WdLogGlobalForLineNumber = 546;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ret = 0x%I64x Device 0x%I64x: front buffer's format is not supported 0x%I64x 0x%I64x",
        -1073741811LL,
        (__int64)this,
        (__int64)a2,
        v24.Format,
        0LL);
      return v6;
    }
    v25.BytesPerPixel = 4;
    if ( HIDWORD(v27) != 1 )
    {
      if ( HIDWORD(v27) == 2 )
      {
LABEL_29:
        *((_QWORD *)&v29 + 1) = __PAIR64__(v24.Width, v24.Height);
        v21 = v28[9];
LABEL_31:
        v25.Pitch = v21;
        goto LABEL_32;
      }
      if ( HIDWORD(v27) != 3 )
      {
        if ( HIDWORD(v27) != 4 )
        {
LABEL_32:
          if ( HIDWORD(v27) != 1 )
            v25.Flags.Value |= 1u;
          v22 = this[237];
          v25.NumDirtyRects = 1;
          v25.pDirtyRect = (RECT *)&v29;
          v6 = ADAPTER_DISPLAY::PresentDisplayOnlyCdd(*((ADAPTER_DISPLAY **)v22 + 395), &v25);
          VIDMM_EXPORT::VidMmEndCPUAccess(
            *((VIDMM_EXPORT **)this[2] + 95),
            *((struct VIDMM_GLOBAL **)this[2] + 96),
            *((struct VIDMM_MULTI_ALLOC **)a2 + 3),
            *((_DWORD *)a2 + 4) & 0x3F);
          return v6;
        }
        goto LABEL_29;
      }
    }
    *((_QWORD *)&v29 + 1) = *(_QWORD *)&v24.Width;
    v21 = v28[8];
    goto LABEL_31;
  }
  WdLogSingleEntry3(4LL, -1071775482LL, this, a2);
  WdLogGlobalForLineNumber = 508;
  return 3223191557LL;
}
