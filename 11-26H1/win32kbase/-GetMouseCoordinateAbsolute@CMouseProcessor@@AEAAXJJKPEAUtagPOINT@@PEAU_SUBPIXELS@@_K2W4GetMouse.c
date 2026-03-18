/*
 * XREFs of ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x140148504
 * Callers:
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1400857AC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1402244CC (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140085C70 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     ApiSetEditionMagnificationMousePosition @ 0x140148788 (ApiSetEditionMagnificationMousePosition.c)
 *     ?GetPrimaryRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x1401487F0 (-GetPrimaryRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 */

__int64 __fastcall CMouseProcessor::GetMouseCoordinateAbsolute(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        _DWORD *a5,
        _DWORD *a6,
        int a7,
        __int64 a8,
        char a9)
{
  char v13; // si
  __int128 *UnionRegion; // rax
  int v15; // eax
  unsigned __int64 v16; // r8
  int v17; // ecx
  unsigned int v18; // edx
  unsigned int v19; // ecx
  __int64 result; // rax
  __int64 UserSessionState; // rdi
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rcx
  int v26; // r8d
  __int64 v27; // rdi
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  __int64 v31; // rcx
  int v32; // r8d
  __int64 v33; // rbx
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  __int64 v37; // rdx
  int v38; // r8d
  __int64 v39; // rbx
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  __int64 v43; // rdx
  int v44; // r8d
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  __int128 v48; // [rsp+20h] [rbp-5D8h]
  _OWORD v49[45]; // [rsp+30h] [rbp-5C8h] BYREF
  _BYTE v50[720]; // [rsp+300h] [rbp-2F8h] BYREF

  if ( (a4 & 2) != 0 )
  {
    v13 = 1;
    UnionRegion = InputConfig::Mouse::GetUnionRegion(v49, a2, a3);
  }
  else
  {
    v13 = 0;
    UnionRegion = (__int128 *)InputConfig::Mouse::GetPrimaryRegion(v50);
  }
  v48 = *UnionRegion;
  v15 = a2 * (DWORD2(v48) - v48);
  v16 = DWORD1(v48);
  v17 = HIDWORD(v48) - DWORD1(v48);
  *a5 = v15;
  if ( v15 < 0 )
  {
    *a6 = -(unsigned __int16)-(__int16)v15;
    v18 = -((unsigned int)-*a5 >> 16);
  }
  else
  {
    *a6 = (unsigned __int16)v15;
    v18 = (unsigned __int16)HIWORD(*a5);
  }
  *a5 = v18;
  a5[1] = a3 * v17;
  if ( a3 * v17 < 0 )
  {
    a6[1] = -(unsigned __int16)-(__int16)(v17 * a3);
    v19 = -((unsigned int)-a5[1] >> 16);
  }
  else
  {
    a6[1] = (unsigned __int16)(a3 * v17);
    v19 = (unsigned __int16)HIWORD(a5[1]);
  }
  a5[1] = v19;
  if ( v13 )
  {
    *a5 += v48;
    a5[1] = DWORD1(v48) + v19;
  }
  result = 0LL;
  *(_QWORD *)(a1 + 36) = 0LL;
  if ( (a9 & 1) == 0 || (a4 & 0x20) != 0 )
    result = ApiSetEditionMagnificationMousePosition(a5);
  if ( (a9 & 4) == 0 )
  {
    UserSessionState = W32GetUserSessionState(v19, v18, v16);
    v25 = *(unsigned int *)(W32GetUserSessionState(v23, v22, v24) + 14716);
    *(_DWORD *)(UserSessionState + 24 * v25 + 14720) = a2 | 0xFFFF0000;
    v27 = W32GetUserSessionState(v25, 3 * (int)v25, v26);
    v31 = *(unsigned int *)(W32GetUserSessionState(v29, v28, v30) + 14716);
    *(_DWORD *)(v27 + 24 * v31 + 14724) = a3 | 0xFFFF0000;
    v33 = W32GetUserSessionState(v31, 3 * (int)v31, v32);
    v37 = 3LL * *(unsigned int *)(W32GetUserSessionState(v35, v34, v36) + 14716);
    *(_DWORD *)(v33 + 8 * v37 + 14728) = a7;
    v39 = W32GetUserSessionState(a7, v37, v38);
    v43 = 3 * (*(unsigned int *)(W32GetUserSessionState(v41, v40, v42) + 14716) + 614LL);
    *(_QWORD *)(v39 + 8 * v43) = a8;
    LODWORD(v39) = ((unsigned __int8)*(_DWORD *)(W32GetUserSessionState(a8, v43, v44) + 14716) + 1) & 0x3F;
    result = W32GetUserSessionState(v46, v45, v47);
    *(_DWORD *)(result + 14716) = v39;
  }
  return result;
}
