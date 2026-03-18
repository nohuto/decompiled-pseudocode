/*
 * XREFs of ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x140062454
 * Callers:
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x140190098 (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x140221BDC (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140062770 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     ApiSetEditionMagnificationMousePosition @ 0x140062860 (ApiSetEditionMagnificationMousePosition.c)
 *     ?GetPrimaryRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x1400628C0 (-GetPrimaryRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall CMouseProcessor::GetMouseCoordinateAbsolute(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        int *a5,
        _DWORD *a6,
        unsigned int a7,
        __int64 a8,
        char a9)
{
  char v13; // si
  __int128 *UnionRegion; // rax
  __int128 v15; // xmm0
  int v16; // eax
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rcx
  __int64 result; // rax
  __int64 UserSessionState; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  _BYTE v39[720]; // [rsp+20h] [rbp-5E8h] BYREF
  _BYTE v40[720]; // [rsp+2F0h] [rbp-318h] BYREF
  __int128 v41; // [rsp+5C0h] [rbp-48h]

  if ( (a4 & 2) != 0 )
  {
    v13 = 1;
    UnionRegion = (__int128 *)InputConfig::Mouse::GetUnionRegion(v39);
  }
  else
  {
    v13 = 0;
    UnionRegion = (__int128 *)InputConfig::Mouse::GetPrimaryRegion(v40);
  }
  v15 = *UnionRegion;
  v41 = v15;
  v16 = a2 * (DWORD2(v15) - v15);
  *a5 = v16;
  if ( v16 < 0 )
  {
    *a6 = -(unsigned __int16)-(__int16)v16;
    v17 = -((unsigned int)-*a5 >> 16);
  }
  else
  {
    *a6 = (unsigned __int16)v16;
    v17 = HIWORD(*a5);
  }
  v18 = a3 * (HIDWORD(v15) - DWORD1(v15));
  *a5 = v17;
  a5[1] = v18;
  if ( v18 < 0 )
  {
    a6[1] = -(unsigned __int16)-(__int16)v18;
    v19 = -((unsigned int)-a5[1] >> 16);
  }
  else
  {
    a6[1] = (unsigned __int16)v18;
    v19 = HIWORD(a5[1]);
  }
  a5[1] = v19;
  if ( v13 )
  {
    *a5 += v15;
    a5[1] = v19 + DWORD1(v15);
  }
  *(_QWORD *)&v41 = 0LL;
  result = 0LL;
  *(_QWORD *)(a1 + 36) = 0LL;
  if ( (a9 & 1) == 0 || (a4 & 0x20) != 0 )
    result = ApiSetEditionMagnificationMousePosition(a5);
  if ( (a9 & 4) == 0 )
  {
    UserSessionState = W32GetUserSessionState(v19, v17);
    v24 = *(unsigned int *)(W32GetUserSessionState(v23, v22) + 14724);
    *(_DWORD *)(UserSessionState + 24 * v24 + 14728) = a2 | 0xFFFF0000;
    v25 = W32GetUserSessionState(v24, 3 * v24);
    v28 = *(unsigned int *)(W32GetUserSessionState(v27, v26) + 14724);
    *(_DWORD *)(v25 + 24 * v28 + 14732) = a3 | 0xFFFF0000;
    v29 = W32GetUserSessionState(v28, 3 * v28);
    v32 = 3 * (*(unsigned int *)(W32GetUserSessionState(v31, v30) + 14724) + 614LL);
    *(_DWORD *)(v29 + 8 * v32) = a7;
    v33 = W32GetUserSessionState(a7, v32);
    v36 = 3LL * *(unsigned int *)(W32GetUserSessionState(v35, v34) + 14724);
    *(_QWORD *)(v33 + 8 * v36 + 14744) = a8;
    LODWORD(v33) = ((unsigned __int8)*(_DWORD *)(W32GetUserSessionState(a8, v36) + 14724) + 1) & 0x3F;
    result = W32GetUserSessionState(v38, v37);
    *(_DWORD *)(result + 14724) = v33;
  }
  return result;
}
