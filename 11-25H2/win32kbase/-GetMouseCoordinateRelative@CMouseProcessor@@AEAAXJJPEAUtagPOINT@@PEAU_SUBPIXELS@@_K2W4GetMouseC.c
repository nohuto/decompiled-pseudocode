/*
 * XREFs of ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1401901A8
 * Callers:
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x140190098 (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 * Callees:
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140062770 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1400BC968 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::GetMouseCoordinateRelative(
        CMouseProcessor *a1,
        __int64 a2,
        int a3,
        struct tagPOINT *a4,
        struct _SUBPIXELS *a5,
        unsigned int a6,
        __int64 a7,
        char a8)
{
  __int64 v10; // rdx
  __int64 result; // rax
  __m128i *UnionRegion; // rax
  __int64 v13; // rcx
  __m128i v14; // xmm6
  int v15; // edi
  __int64 v16; // rdx
  __int64 UserSessionState; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  _OWORD v39[44]; // [rsp+48h] [rbp-C0h] BYREF
  int v40; // [rsp+360h] [rbp+258h] BYREF
  int v41; // [rsp+368h] [rbp+260h] BYREF

  v41 = a3;
  v40 = a2;
  CMouseProcessor::ApplyAccelerationToDelta(a1, a2, a3, *a4, (a8 & 2) != 0, a5, &v40, &v41);
  switch ( *((_DWORD *)a1 + 754) )
  {
    case 1:
      goto LABEL_6;
    case 2:
      a4->x -= v41;
      result = (unsigned int)v40;
      goto LABEL_7;
    case 3:
      a4->x -= v40;
      result = (unsigned int)(a4->y - v41);
      break;
    case 4:
      a4->x += v41;
      result = (unsigned int)(a4->y - v40);
      break;
    default:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2944LL);
LABEL_6:
      a4->x += v40;
      result = (unsigned int)v41;
LABEL_7:
      a4->y += result;
      goto LABEL_8;
  }
  a4->y = result;
LABEL_8:
  if ( (a8 & 4) == 0 )
  {
    UnionRegion = (__m128i *)InputConfig::Mouse::GetUnionRegion(v39, v10);
    v13 = UnionRegion->m128i_u32[2];
    v14 = *UnionRegion;
    LOWORD(v13) = v13 - _mm_cvtsi128_si32(*UnionRegion) - 1;
    v15 = LOWORD(a4->x) | ((unsigned __int16)v13 << 16);
    UserSessionState = W32GetUserSessionState(v13, v16);
    v20 = 3LL * *(unsigned int *)(W32GetUserSessionState(v19, v18) + 14724);
    v21 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v14, 12));
    *(_DWORD *)(UserSessionState + 8 * v20 + 14728) = v15;
    LOWORD(v21) = v21 - _mm_cvtsi128_si32(_mm_srli_si128(v14, 4)) - 1;
    v22 = LOWORD(a4->y) | ((unsigned __int16)v21 << 16);
    v23 = W32GetUserSessionState(v21, v20);
    v26 = *(unsigned int *)(W32GetUserSessionState(v25, v24) + 14724);
    *(_DWORD *)(v23 + 24 * v26 + 14732) = v22;
    v27 = W32GetUserSessionState(v26, 3 * v26);
    v30 = 3 * (*(unsigned int *)(W32GetUserSessionState(v29, v28) + 14724) + 614LL);
    v31 = a6;
    *(_DWORD *)(v27 + 8 * v30) = a6;
    v32 = W32GetUserSessionState(v31, v30);
    v35 = 3LL * *(unsigned int *)(W32GetUserSessionState(v34, v33) + 14724);
    v36 = a7;
    *(_QWORD *)(v32 + 8 * v35 + 14744) = a7;
    LODWORD(v32) = ((unsigned __int8)*(_DWORD *)(W32GetUserSessionState(v36, v35) + 14724) + 1) & 0x3F;
    result = W32GetUserSessionState(v38, v37);
    *(_DWORD *)(result + 14724) = v32;
  }
  return result;
}
