/*
 * XREFs of ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1400857AC
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14009F170 (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140085350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140085C70 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1400860B0 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 *     GetNormalizedMouseSensitivityFactor @ 0x140086498 (GetNormalizedMouseSensitivityFactor.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStrategy@2@@Z @ 0x140086710 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStra.c)
 *     ?GetPublicExtraInfo@MouseInputDataEx@CMouseProcessor@@QEBAKXZ @ 0x1401344F4 (-GetPublicExtraInfo@MouseInputDataEx@CMouseProcessor@@QEBAKXZ.c)
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x140148504 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rand @ 0x1401C7A64 (rand.c)
 */

void __fastcall CMouseProcessor::GetMouseCoord(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        struct tagPOINT *a3,
        struct _SUBPIXELS *a4)
{
  unsigned int v6; // ebx
  int v8; // r10d
  int v9; // edx
  int v10; // r10d
  int v12; // r12d
  char CurrentThreadDpiAwarenessContext; // al
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // edi
  int v17; // r14d
  __int64 v18; // rbx
  int v19; // edx
  __int64 v20; // rcx
  int v21; // r8d
  __int64 v22; // rax
  struct _SUBPIXELS *v23; // r9
  CDeviceAcceleration *v24; // rcx
  __m128i *UnionRegion; // rax
  __int32 v26; // ecx
  __m128i v27; // xmm6
  int v28; // edi
  int v29; // edx
  int v30; // r8d
  __int64 v31; // rbx
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  __int64 v35; // rdx
  int v36; // ecx
  int v37; // edi
  int v38; // r8d
  __int64 v39; // rbx
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  __int64 v43; // rcx
  int v44; // r8d
  __int64 v45; // rbx
  int v46; // edx
  int v47; // ecx
  int v48; // r8d
  __int64 v49; // rcx
  int v50; // r8d
  __int64 v51; // rdi
  int v52; // edx
  int v53; // ecx
  int v54; // r8d
  __int64 v55; // rcx
  int v56; // edx
  int v57; // r8d
  int v58; // edx
  int v59; // ecx
  int v60; // r8d
  __int64 UserSessionState; // rax
  int NormalizedMouseSensitivityFactor; // r9d
  int v63; // edx
  int v64; // r8d
  int v65; // edx
  int v66; // ecx
  int v67; // edx
  unsigned int PublicExtraInfo; // eax
  unsigned int v69; // [rsp+58h] [rbp-B0h]
  __int64 v70; // [rsp+60h] [rbp-A8h] BYREF
  PERESOURCE *v71; // [rsp+68h] [rbp-A0h]
  __int64 v72; // [rsp+70h] [rbp-98h]
  _BYTE v73[736]; // [rsp+78h] [rbp-90h] BYREF
  int v74; // [rsp+3A0h] [rbp+298h] BYREF
  int v75; // [rsp+3B0h] [rbp+2A8h] BYREF

  *(_QWORD *)a4 = 0LL;
  v6 = *((unsigned __int16 *)a2 + 1);
  v8 = *((_DWORD *)a2 + 18) >> 4;
  v9 = 2;
  v10 = v8 & 1;
  v12 = v10 | 2;
  if ( (v6 & 0x80u) == 0 )
    v12 = v10;
  if ( (v12 & 1) == 0 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext((__int64)this, 2LL);
    v9 = 2;
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 )
    {
      v74 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2810LL);
      v9 = 2;
    }
  }
  if ( (v6 & 1) == 0 )
  {
    LODWORD(v14) = *((_DWORD *)a2 + 5);
    v69 = v14;
    if ( (*((_BYTE *)a2 + 2) & 0x50) != 0 )
    {
      LODWORD(v14) = (unsigned __int8)v14 | 0xFF515700;
      v69 = v14;
    }
    v15 = *((_QWORD *)a2 + 6);
    v16 = *((_DWORD *)a2 + 4);
    v17 = *((_DWORD *)a2 + 3);
    v18 = (__int64)*a3;
    v72 = v15;
    v75 = v17;
    v74 = v16;
    if ( (v12 & 2) != 0
      && ((v14 = *(_QWORD *)(W32GetUserSessionState(v14, 2, (_DWORD)a3) + 16360), *(_BYTE *)(v14 + 112))
       || (LODWORD(v14) = *(_DWORD *)(W32GetUserSessionState(v14, v9, (_DWORD)a3) + 16776), (v14 & 0x40) == 0)) )
    {
      UserSessionState = W32GetUserSessionState(v14, v9, (_DWORD)a3);
      v23 = (struct _SUBPIXELS *)&v70;
      v24 = *(CDeviceAcceleration **)(UserSessionState + 0x4000);
    }
    else
    {
      v20 = *(_QWORD *)(W32GetUserSessionState(v14, v9, (_DWORD)a3) + 16360);
      if ( !*(_BYTE *)(v20 + 112) )
      {
        v70 = 0LL;
        v71 = (PERESOURCE *)(W32GetUserSessionState(v20, v19, v21) + 18688);
        ExEnterCriticalRegionAndAcquireResourceShared(*v71);
        InputConfig::Mouse::RegionFromPoint(v18, &v70, 0LL);
        NormalizedMouseSensitivityFactor = GetNormalizedMouseSensitivityFactor(v70);
        if ( NormalizedMouseSensitivityFactor == 256 )
        {
          *(_DWORD *)a4 = rand() % 0x10000;
          v63 = rand() % 0x10000;
        }
        else
        {
          if ( v17 )
          {
            v64 = *((_DWORD *)this + 9) + v17 * NormalizedMouseSensitivityFactor;
            v65 = v64 % 256;
            *((_DWORD *)this + 9) = v64 % 256;
            v17 = v64 / 256;
            if ( v64 < 0 && v65 > 0 )
            {
              v17 = v64 / 256 + 1;
              *((_DWORD *)this + 9) = v65 - 256;
            }
          }
          if ( v16 )
          {
            v66 = v16 * NormalizedMouseSensitivityFactor + *((_DWORD *)this + 10);
            v67 = v66 % 256;
            *((_DWORD *)this + 10) = v66 % 256;
            v16 = v66 / 256;
            if ( v66 < 0 && v67 > 0 )
            {
              ++v16;
              *((_DWORD *)this + 10) = v67 - 256;
            }
          }
          *(_DWORD *)a4 = *((_DWORD *)this + 9) << 8;
          v63 = *((_DWORD *)this + 10) << 8;
        }
        *((_DWORD *)a4 + 1) = v63;
        ExReleaseResourceAndLeaveCriticalRegion(*v71);
LABEL_13:
        if ( *((_DWORD *)this + 754) != 1 )
        {
          switch ( *((_DWORD *)this + 754) )
          {
            case 2:
              a3->x -= v16;
              a3->y += v17;
              goto LABEL_15;
            case 3:
              a3->x -= v17;
              a3->y -= v16;
              goto LABEL_15;
            case 4:
              a3->x += v16;
              a3->y -= v17;
              goto LABEL_15;
          }
          v74 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2954LL);
        }
        a3->x += v17;
        a3->y += v16;
LABEL_15:
        UnionRegion = (__m128i *)InputConfig::Mouse::GetUnionRegion(v73);
        v26 = UnionRegion->m128i_i32[2];
        v27 = *UnionRegion;
        LOWORD(v26) = v26 - _mm_cvtsi128_si32(*UnionRegion) - 1;
        v28 = LOWORD(a3->x) | ((unsigned __int16)v26 << 16);
        v31 = W32GetUserSessionState(v26, v29, v30);
        v35 = 3LL * *(unsigned int *)(W32GetUserSessionState(v33, v32, v34) + 14716);
        v36 = _mm_cvtsi128_si32(_mm_srli_si128(v27, 12));
        *(_DWORD *)(v31 + 8 * v35 + 14720) = v28;
        LOWORD(v36) = v36 - _mm_cvtsi128_si32(_mm_srli_si128(v27, 4)) - 1;
        v37 = LOWORD(a3->y) | ((unsigned __int16)v36 << 16);
        v39 = W32GetUserSessionState(v36, v35, v38);
        v43 = *(unsigned int *)(W32GetUserSessionState(v41, v40, v42) + 14716);
        *(_DWORD *)(v39 + 24 * v43 + 14724) = v37;
        v45 = W32GetUserSessionState(v43, 3 * (int)v43, v44);
        v49 = *(unsigned int *)(W32GetUserSessionState(v47, v46, v48) + 14716);
        *(_DWORD *)(v45 + 24 * v49 + 14728) = v72;
        v51 = W32GetUserSessionState(v49, 3 * (int)v49, v50);
        v55 = 3 * (*(unsigned int *)(W32GetUserSessionState(v53, v52, v54) + 14716) + 614LL);
        *(_QWORD *)(v51 + 8 * v55) = v69;
        LODWORD(v45) = ((unsigned __int8)*(_DWORD *)(W32GetUserSessionState(v55, v56, v57) + 14716) + 1) & 0x3F;
        *(_DWORD *)(W32GetUserSessionState(v59, v58, v60) + 14716) = v45;
        return;
      }
      v22 = W32GetUserSessionState(v20, v19, v21);
      v23 = a4;
      v24 = *(CDeviceAcceleration **)(v22 + 16360);
    }
    CDeviceAcceleration::Accelerate(v24, &v75, &v74, v23);
    v16 = v74;
    v17 = v75;
    goto LABEL_13;
  }
  PublicExtraInfo = CMouseProcessor::MouseInputDataEx::GetPublicExtraInfo(a2);
  CMouseProcessor::GetMouseCoordinateAbsolute(
    this,
    *((unsigned int *)a2 + 3),
    *((unsigned int *)a2 + 4),
    v6,
    a3,
    a4,
    *((_QWORD *)a2 + 6),
    PublicExtraInfo,
    v12);
}
