/*
 * XREFs of DxgkSetIndependentFlipMode @ 0x1403BD518
 * Callers:
 *     ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x14005395C (-DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z.c)
 *     ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x140053A38 (-EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z.c)
 *     ?UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x1400A3CB8 (-UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetPlaneIndex@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ @ 0x1400596DC (-GetPlaneIndex@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ.c)
 *     ?GetVidPnSourceId@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ @ 0x140059A44 (-GetVidPnSourceId@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkSetIndependentFlipMode(
        HANDLE Handle,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        _DWORD *a8,
        __int64 a9)
{
  int v9; // r13d
  NTSTATUS v11; // eax
  unsigned int v12; // esi
  __int64 v13; // r15
  int v14; // eax
  int v15; // r14d
  unsigned int v16; // edi
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r10
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int VidPnSourceId; // ebx
  unsigned int PlaneIndex; // eax
  __int64 v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // rdi
  unsigned int v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+54h] [rbp-ACh]
  __int64 v32; // [rsp+60h] [rbp-A0h]
  int v33; // [rsp+68h] [rbp-98h]
  __int64 v34; // [rsp+70h] [rbp-90h]
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h]
  _DWORD *v37; // [rsp+88h] [rbp-78h]
  __int64 v38; // [rsp+90h] [rbp-70h]
  __int64 v39; // [rsp+98h] [rbp-68h]
  PVOID v40; // [rsp+A0h] [rbp-60h]
  int v41; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-50h]
  char v43; // [rsp+B8h] [rbp-48h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v45[144]; // [rsp+D0h] [rbp-30h] BYREF

  v9 = 0;
  v33 = a4;
  v34 = a7;
  *a8 = 0;
  v38 = a3;
  v39 = a2;
  v37 = a8;
  v36 = a9;
  v41 = -1;
  v42 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v43 = 1;
    v41 = 2094;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a9, (__int64)&EventProfilerEnter);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v41, 2094);
  HandleInformation = 0LL;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(Handle, 0x20000u, g_pDxgkSharedAllocationObjectType, 0, &Object, &HandleInformation);
  v12 = v11;
  v40 = Object;
  if ( v11 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, Handle, -1073741788LL);
    WdLogGlobalForLineNumber = 12552;
  }
  else if ( v11 < 0 )
  {
    WdLogSingleEntry2(3LL, Handle, v11);
    WdLogGlobalForLineNumber = 12559;
  }
  else
  {
    v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 80LL) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v45, (struct DXGADAPTER *const)v13, 0LL);
    if ( *(_QWORD *)(v13 + 3160) )
    {
      v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v45, 0LL);
      v12 = v14;
      if ( v14 < 0 )
      {
        WdLogSingleEntry2(3LL, v13, v14);
        WdLogGlobalForLineNumber = 12583;
      }
      else
      {
        v15 = 0;
        v16 = a6;
        v30 = a6;
        v32 = v34;
        v31 = 0LL;
        if ( a6 )
        {
          do
          {
            if ( (v16 & 1) != 0 )
              break;
            ++v15;
            v16 >>= 1;
          }
          while ( v16 );
          v30 = v16;
          LODWORD(v31) = v15;
        }
        while ( v16 )
        {
          v17 = *(_DWORD *)(*(_QWORD *)(v13 + 3160) + 96LL);
          if ( (unsigned int)DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetVidPnSourceId((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v30) >= v17 )
          {
            v12 = -1073741811;
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 12596;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid vidPnSourceMask. Returning 0x%I64x",
              -1073741811LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_25;
          }
          v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v40 + 2) + 80LL) + 16LL) + 2984LL);
          if ( (unsigned int)DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetPlaneIndex((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v30) >= v18 )
          {
            v12 = -1073741811;
            VidPnSourceId = DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetVidPnSourceId((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v30);
            PlaneIndex = DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetPlaneIndex((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v30);
            WdLogSingleEntry4(2LL, PlaneIndex, VidPnSourceId, a6, -1073741811LL);
            WdLogGlobalForLineNumber = 12607;
            v27 = (unsigned int)DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetVidPnSourceId((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v30);
            v28 = DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetPlaneIndex((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v30);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid plane index 0x%I64x specified for VidPnSource 0x%I64x. Source mask is 0x%I64x. Returning 0x%I64x",
              v28,
              v27,
              a6,
              -1073741811LL,
              0LL);
            goto LABEL_25;
          }
          v16 >>= 1;
          v30 = v16;
          if ( v16 )
          {
            do
            {
              if ( (v16 & 1) != 0 )
                break;
              ++v15;
              v16 >>= 1;
            }
            while ( v16 );
            v30 = v16;
            LODWORD(v31) = v15;
          }
          HIDWORD(v31) = ++v9;
        }
        v19 = ((((((((a6 >> 1) & 0x55555555) + (a6 & 0x55555555)) >> 2) & 0x33333333)
               + ((((a6 >> 1) & 0x55555555) + (a6 & 0x55555555)) & 0x33333333)) >> 4) & 0xF0F0F0F)
            + (((((((a6 >> 1) & 0x55555555) + (a6 & 0x55555555)) >> 2) & 0x33333333)
              + ((((a6 >> 1) & 0x55555555) + (a6 & 0x55555555)) & 0x33333333)) & 0xF0F0F0F);
        v20 = (unsigned __int16)((unsigned __int8)v19 + BYTE1(v19))
            + (((v19 & 0xFF00FF) + ((v19 >> 8) & 0xFF00FF)) >> 16);
        if ( (unsigned int)v20 <= 1 || *(int *)(v13 + 3044) >= 2400 )
        {
          v21 = *(_QWORD *)(v13 + 3168);
          v22 = *(_QWORD *)(*(_QWORD *)(v21 + 736) + 8LL);
          if ( v33 )
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, int, _DWORD *, __int64))(v22 + 416))(
              *(_QWORD *)(v21 + 744),
              a6,
              v39,
              v38,
              v34,
              a5,
              v37,
              v36);
          else
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, int, char, _DWORD *, __int64))(v22 + 424))(
              *(_QWORD *)(v21 + 744),
              a6,
              v39,
              v38,
              v34,
              a5,
              1,
              v37,
              v36);
        }
        else
        {
          v12 = -1073741811;
          v29 = (unsigned int)v20;
          WdLogSingleEntry3(2LL, v20, a6, -1073741811LL);
          WdLogGlobalForLineNumber = 12619;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Attempting IFlip on %xI64x sources for a non-WDDM 2.4 driver. Source mask is %xI64x. Returning 0x%I64x",
            v29,
            a6,
            -1073741811LL,
            0LL,
            0LL);
        }
      }
    }
    else
    {
      v12 = -1073741823;
    }
LABEL_25:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
  }
  if ( v40 )
    ObfDereferenceObject(v40);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
  return v12;
}
