/*
 * XREFs of ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1402BA700
 * Callers:
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1402B86A0 (-DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400095A0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14000D850 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x14002FE80 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140045E84 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140046328 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x140049B60 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1400580CC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x140063664 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z @ 0x140064698 (-GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x14006C170 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1401A2764 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1401A3F3C (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1401A42C8 (-PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?PresentQualcommPanelRefreshWorkaround@@YAXPEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1401BD9C8 (-PresentQualcommPanelRefreshWorkaround@@YAXPEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z @ 0x1402B9970 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1402BB200 (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1402BBB04 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1402BBFE4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402CA65C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14037AAC0 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x140398E8C (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403EF980 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 __fastcall PresentCddShadowBuffer(struct DXGCONTEXT *a1, struct DXGHWQUEUE *a2, unsigned int a3)
{
  __int64 v3; // rsi
  int v4; // r15d
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // r9
  int v10; // eax
  int v11; // ebx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  int v14; // eax
  unsigned int CddShadowPitch; // eax
  ADAPTER_DISPLAY *v16; // rcx
  struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  __int64 v18; // rcx
  unsigned int Width; // r12d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v21; // r13d
  int v22; // eax
  unsigned int *Global; // rbx
  unsigned int v24; // eax
  int v25; // r9d
  int v26; // r8d
  int v27; // edx
  LONG v28; // r12d
  struct tagRECT v29; // xmm6
  unsigned int v30; // eax
  LONG v31; // r13d
  int left; // r9d
  LONG v33; // edx
  unsigned int v34; // ecx
  LONG v35; // r11d
  LONG v36; // ecx
  unsigned int right; // ecx
  unsigned int top; // r10d
  unsigned int bottom; // eax
  unsigned __int8 *v40; // rdi
  unsigned int v41; // esi
  int v42; // eax
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  ADAPTER_DISPLAY *v47; // rcx
  __int64 v48; // rbx
  unsigned int v49; // r14d
  unsigned __int64 v50; // rdx
  unsigned int *v51; // rcx
  int v52; // eax
  __int64 v53; // rbx
  unsigned __int64 v54; // rdx
  unsigned int v55; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int Height; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v57[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct DXGCONTEXT *v58; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int8 *v59; // [rsp+70h] [rbp-98h]
  __int64 v60; // [rsp+78h] [rbp-90h]
  __int64 v61; // [rsp+80h] [rbp-88h] BYREF
  char v62; // [rsp+88h] [rbp-80h]
  _BYTE v63[8]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v64; // [rsp+98h] [rbp-70h]
  char v65; // [rsp+A0h] [rbp-68h]
  struct DXGHWQUEUE *v66; // [rsp+A8h] [rbp-60h]
  _D3DKMT_LOCK v67; // [rsp+B0h] [rbp-58h] BYREF
  struct _DXGKARG_PRESENT_DISPLAYONLY v68; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v69[8]; // [rsp+128h] [rbp+20h] BYREF
  _D3DKMT_SUBMITPRESENTTOHWQUEUE v70; // [rsp+168h] [rbp+60h] BYREF
  struct tagRECT v71; // [rsp+748h] [rbp+640h] BYREF
  struct tagRECT v72; // [rsp+758h] [rbp+650h] BYREF
  struct tagRECT v73; // [rsp+768h] [rbp+660h] BYREF
  _BYTE v74[8]; // [rsp+778h] [rbp+670h] BYREF
  _BYTE v75[64]; // [rsp+780h] [rbp+678h] BYREF
  _BYTE v76[88]; // [rsp+7C0h] [rbp+6B8h] BYREF

  v3 = a3;
  LODWORD(v60) = a3;
  v57[1] = 0;
  v55 = 0;
  v66 = a2;
  v58 = a1;
  v4 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 372);
  if ( !v4 )
    return 0LL;
  v6 = *((_QWORD *)v58 + 2);
  v7 = *(_QWORD *)(v6 + 1896);
  *(_QWORD *)&v73.left = v7;
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
    (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v61,
    (struct DXGDEVICE *)v6);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v69,
    &v58,
    1u,
    v8,
    1);
  if ( !v69[0] )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4872;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PresentCddShadowBuffer: Out of memory - could not initialize context array lock exclusive",
      4872LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v69);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v61);
    return 3221225495LL;
  }
  v64 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL);
  v65 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v63);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v74, v6, 1, v9, 0);
  v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v74, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry2(4LL, v10, v6);
    WdLogGlobalForLineNumber = 4882;
    COREACCESS::~COREACCESS((COREACCESS *)v76, v12);
    COREACCESS::~COREACCESS((COREACCESS *)v75, v13);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v63);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v69);
    if ( v62 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v61 + 136));
      KeLeaveCriticalRegion();
    }
    return (unsigned int)v11;
  }
  ADAPTER_DISPLAY::GetCddAllocationHandles(*(ADAPTER_DISPLAY **)(v7 + 3160), v3, &v57[1], &v55);
  if ( !v57[1] || !v55 )
  {
    v14 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
            *(ADAPTER_DISPLAY **)(v7 + 3160),
            (struct DXGDEVICE *)v6,
            v3,
            &v57[1],
            &v55,
            (struct COREDEVICEACCESS *)v74);
    v11 = v14;
    if ( v14 == -1073741637 )
    {
      v11 = -1071775482;
      WdLogSingleEntry3(4LL, v7, v3, -1071775482LL);
      WdLogGlobalForLineNumber = 4902;
LABEL_18:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v63);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v69);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v61);
      return (unsigned int)v11;
    }
    if ( v14 < 0 )
    {
      WdLogSingleEntry3(4LL, v7, v3, v14);
      WdLogGlobalForLineNumber = 4910;
      goto LABEL_18;
    }
  }
  CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v7 + 3160), v3);
  v16 = *(ADAPTER_DISPLAY **)(v7 + 3160);
  v57[0] = CddShadowPitch;
  CddDisplayMode = (struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetCddDisplayMode(v16, v3);
  v18 = *(_QWORD *)(v7 + 3160);
  v59 = (unsigned __int8 *)CddDisplayMode;
  Width = CddDisplayMode->Width;
  Height = CddDisplayMode->Height;
  CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v18, (unsigned int)v3, 1LL);
  memset(&v67, 0, sizeof(v67));
  v67.hAllocation = v55;
  v21 = CurrentOrientation;
  v71 = 0LL;
  v67.hDevice = *(_DWORD *)(v6 + 468);
  v11 = DXGDEVICE::Lock((DXGDEVICE *)v6, &v67, (struct COREDEVICEACCESS *)v74, 1);
  if ( v11 < 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4955;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PresentCddShadowBuffer: Failed to lock shadow buffer.",
      4955LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_18;
  }
  if ( !v67.pData )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4961;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PresentCddShadowBuffer: The locked data pointer is invalid.",
      4961LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v11 = -1073741823;
    goto LABEL_18;
  }
  if ( v4 == 1 )
  {
    if ( ((v21 - 2) & 0xFFFFFFFD) == 0 )
    {
      Width = *((_DWORD *)v59 + 1);
      Height = *(_DWORD *)v59;
      v22 = 2;
      if ( v21 == D3DKMDT_VPPR_ROTATE90 )
        v22 = 4;
      v21 = v22;
    }
    v59 = (unsigned __int8 *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 187);
    if ( v59 )
    {
      v72 = 0LL;
      Global = (unsigned int *)DXGGLOBAL::GetGlobal();
      if ( GetShadowBufferDirtyRect(&v72, Global[376], Global[377]) )
      {
        v24 = Global[379];
        if ( v24 == 20 )
        {
          if ( Global[376] > Width || Global[377] > Height )
            goto LABEL_68;
          v29 = v72;
          v71 = v72;
          v30 = Global[376];
          v31 = _mm_cvtsi128_si32((__m128i)v72);
          if ( v30 == Width )
          {
            left = _mm_cvtsi128_si32((__m128i)v72);
            v33 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v72, 8));
          }
          else
          {
            left = v31 + ((Width - v30) >> 1);
            v71.left = left;
            v33 = ((Width - Global[376]) >> 1) + v71.right;
            v71.right = v33;
            v29 = v71;
          }
          v34 = Global[377];
          if ( v34 == Height )
          {
            v36 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v29, 12));
            v35 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v29, 4));
          }
          else
          {
            v35 = ((Height - v34) >> 1) + v71.top;
            v71.top = v35;
            v36 = ((Height - Global[377]) >> 1) + v71.bottom;
            v71.bottom = v36;
            v29 = v71;
          }
          if ( left < 0
            || left > v33
            || v35 < 0
            || v35 > v36
            || v33 > Width
            || v36 > Height
            || v31 < 0
            || (right = v72.right, v31 > v72.right)
            || (top = v72.top, v72.top < 0)
            || (bottom = v72.bottom, v72.top > v72.bottom)
            || v72.right > Global[376]
            || v72.bottom > Global[377] )
          {
            if ( byte_140167146 )
            {
              DxgCreateLiveDumpWithWdLogs(403LL, 2057LL);
              byte_140167146 = 0;
            }
            goto LABEL_68;
          }
          if ( v72.top < (unsigned int)v72.bottom )
          {
            v40 = v59;
            v41 = v57[0];
            do
            {
              if ( v31 < right )
              {
                do
                {
                  v42 = 3 * v31++;
                  v43 = v42 + Global[378] * top;
                  v44 = v41 * v35 + (unsigned __int64)(unsigned int)(4 * left++);
                  *(_DWORD *)((char *)v67.pData + v44) = v40[v43] | ((v40[(unsigned int)(v43 + 1)] | (v40[(unsigned int)(v43 + 2)] << 8)) << 8);
                  right = v72.right;
                }
                while ( (unsigned int)v31 < v72.right );
                left = v71.left;
                bottom = v72.bottom;
                v31 = v72.left;
              }
              ++v35;
              ++top;
            }
            while ( top < bottom );
            v29 = v71;
            v7 = *(_QWORD *)&v73.left;
            LODWORD(v3) = v60;
          }
          v28 = v57[0];
        }
        else
        {
          if ( v24 != 22 )
            goto LABEL_68;
          v25 = Global[378];
          v26 = Global[377];
          v27 = Global[376];
          v73.bottom = Height;
          v73.right = Width;
          v28 = v57[0];
          *(_QWORD *)&v73.left = 0LL;
          if ( DxgkpBlitA8R8R8G8(v59, v27, v26, v25, v21, (unsigned __int8 *)v67.pData, v57[0], &v73, &v72, &v71) < 0 )
            goto LABEL_68;
          v29 = v71;
        }
        if ( *(_QWORD *)(v6 + 1896) == *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) )
        {
          memset(&v70, 0, sizeof(v70));
          Height = 0;
          if ( v66 )
          {
            Height = *((_DWORD *)v66 + 6);
            v70.hHwQueues = &Height;
          }
          v70.PrivatePresentData.Flags.Value |= 1u;
          v70.PrivatePresentData.hDevice = *((_DWORD *)v58 + 6);
          v70.PrivatePresentData.pSrcSubRects = &v72;
          v70.PrivatePresentData.hSource = v55;
          v70.PrivatePresentData.hDestination = v57[1];
          v70.PrivatePresentData.DstRect = v29;
          v70.PrivatePresentData.SubRectCnt = 1;
          v70.PrivatePresentData.SrcRect = v29;
          v72 = v29;
          v45 = DXGCONTEXT::PresentFromCdd(
                  v58,
                  &v70,
                  v3,
                  (struct COREDEVICEACCESS *)v74,
                  (struct DXGADAPTERSTOPRESETLOCKSHARED *)v63,
                  &v58);
          if ( v45 >= 0 )
          {
            if ( (**(_DWORD **)(v7 + 3048) & 0x10) != 0 )
              PresentQualcommPanelRefreshWorkaround(v58, (ADAPTER_DISPLAY **)v7, v3);
            goto LABEL_68;
          }
        }
        else
        {
          v46 = *(_QWORD *)(v7 + 3160);
          *(&v68.VidPnSourceId + 1) = 0;
          *(&v68.NumDirtyRects + 1) = 0;
          v68.pfnPresentDisplayOnlyProgress = 0LL;
          ADAPTER_DISPLAY::GetCurrentOrientation(v46, (unsigned int)v3, 1LL);
          v47 = *(ADAPTER_DISPLAY **)(v7 + 3160);
          v68.pSource = v67.pData;
          v68.pDirtyRect = &v71;
          v68.VidPnSourceId = v3;
          v68.BytesPerPixel = 4;
          v68.Pitch = v28;
          *(_QWORD *)&v68.Flags.0 = 0LL;
          v68.pMoves = 0LL;
          v68.NumDirtyRects = 1;
          v45 = ADAPTER_DISPLAY::PresentDisplayOnlyCdd(v47, &v68);
          if ( v45 >= 0 )
            goto LABEL_68;
        }
        v48 = v45;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 5191;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"PresentCddShadowBuffer: PresentFromCdd failed. Status = 0x%I64x",
          v48,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
  }
LABEL_68:
  v72.left = *(_DWORD *)(v6 + 468);
  v72.top = 1;
  *(_QWORD *)&v72.right = &v55;
  v49 = DXGDEVICE::Unlock((DXGDEVICE *)v6, (const struct _D3DKMT_UNLOCK *)&v72, 0);
  if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn((DXGADAPTER *)v7) )
  {
    v51 = *(unsigned int **)(v7 + 3160);
    v50 = v51[132];
    if ( (v50 & 1) == 0 && !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)v51, v3) )
    {
      if ( (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v7 + 3160), v3) )
      {
        if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)(v7 + 3160), v3) )
        {
          v52 = ADAPTER_DISPLAY::PresentCddPrimary(
                  *(PERESOURCE ***)(v7 + 3160),
                  v58,
                  v3,
                  (struct COREDEVICEACCESS *)v74);
          if ( v52 < 0 )
          {
            v53 = v52;
            WdLogSingleEntry2(2LL, v58, v52);
            WdLogGlobalForLineNumber = 5219;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"PresentFromCdd failed to present the newly created Cdd Primary (Status = 0x%I64x).",
              (__int64)v58,
              v53,
              0LL,
              0LL,
              0LL);
          }
        }
      }
    }
  }
  COREACCESS::~COREACCESS((COREACCESS *)v76, v50);
  COREACCESS::~COREACCESS((COREACCESS *)v75, v54);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v63);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v69);
  if ( v62 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v61 + 136));
    KeLeaveCriticalRegion();
  }
  return v49;
}
