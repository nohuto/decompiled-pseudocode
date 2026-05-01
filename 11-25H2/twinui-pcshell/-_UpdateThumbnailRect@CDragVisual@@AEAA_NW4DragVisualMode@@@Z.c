/*
 * XREFs of ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x180521828
 * Callers:
 *     ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x18051F5B0 (-SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z.c)
 *     ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x18051F860 (-SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NXZ @ 0x180521C90 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NXZ.c)
 * Callees:
 *     ?MulDiv@CSize@Geometry@@SA?AU12@AEBUtagSIZE@@HH@Z @ 0x1801FFAC4 (-MulDiv@CSize@Geometry@@SA-AU12@AEBUtagSIZE@@HH@Z.c)
 *     ?ScreenToClient@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x1804B94D8 (-ScreenToClient@CPoint@Geometry@@SA-AU12@PEAUHWND__@@AEBUtagPOINT@@@Z.c)
 *     ?_GetScaledPoint@CDragVisual@@AEAA?AUtagPOINT@@W4ScaledPointType@1@@Z @ 0x180520148 (-_GetScaledPoint@CDragVisual@@AEAA-AUtagPOINT@@W4ScaledPointType@1@@Z.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NAEBUCRect@Geometry@@@Z @ 0x1805217E4 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NAEBUCRect@Geometry@@@Z.c)
 *     ?GetDragVisualScaledSize@AppLayoutHelpers@@YAXAEBUCRect@Geometry@@W4DEVICE_SCALE_FACTOR@@1AEBUtagSIZE@@PEAU5@@Z @ 0x1806A14BC (-GetDragVisualScaledSize@AppLayoutHelpers@@YAXAEBUCRect@Geometry@@W4DEVICE_SCALE_FACTOR@@1AEBUta.c)
 */

char __fastcall CDragVisual::_UpdateThumbnailRect(__int64 a1, int a2)
{
  LONG v2; // esi
  LONG y; // ebx
  LONG v5; // r12d
  LONG x; // r14d
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  enum DEVICE_SCALE_FACTOR v11; // r8d
  const struct Geometry::CRect *v12; // rdx
  LONG *ScaledPoint; // rax
  HWND v14; // rdx
  LONG v15; // ecx
  struct tagPOINT *v16; // rax
  struct tagPOINT *v17; // rbx
  int v18; // eax
  LONG v19; // r12d
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // ebx
  LONG v25; // eax
  enum DEVICE_SCALE_FACTOR v26; // r8d
  const struct Geometry::CRect *v27; // rdx
  struct tagSIZE *v28; // rax
  BOOL v29; // r8d
  LONG *v30; // rax
  HWND v31; // rdx
  LONG v32; // ecx
  struct tagPOINT *v33; // rax
  struct tagPOINT *v34; // rbx
  int v35; // eax
  HWND v36; // rdx
  struct tagPOINT *v37; // rax
  enum DEVICE_SCALE_FACTOR v38; // r8d
  const struct Geometry::CRect *v39; // rdx
  LONG *v40; // rax
  HWND v41; // rdx
  LONG v42; // ecx
  struct tagPOINT *v43; // rax
  struct tagPOINT *v44; // rbx
  int v45; // eax
  LONG v46; // r12d
  struct tagPOINT *p_nNumber; // r8
  int v48; // ecx
  struct tagPOINT *v49; // rcx
  LONG v50; // ecx
  HWND v51; // rdx
  int v52; // r9d
  int v53; // r15d
  int v54; // ecx
  int v55; // ecx
  struct tagSIZE *v57; // [rsp+28h] [rbp-18h]
  _DWORD v58[4]; // [rsp+30h] [rbp-10h] BYREF
  struct tagPOINT nNumber; // [rsp+80h] [rbp+40h] BYREF
  struct tagPOINT v60; // [rsp+90h] [rbp+50h] BYREF
  struct tagPOINT v61; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  *(_BYTE *)(a1 + 277) = 0;
  y = 0;
  nNumber.x = 0;
  v5 = 0;
  nNumber.y = 0;
  x = 0;
  if ( !a2 )
  {
LABEL_7:
    v11 = *(_DWORD *)(a1 + 344);
    v12 = (const struct Geometry::CRect *)*(unsigned int *)(a1 + 284);
    v60.x = *(_DWORD *)(a1 + 232) - *(_DWORD *)(a1 + 224);
    v60.y = *(_DWORD *)(a1 + 236) - *(_DWORD *)(a1 + 228);
    AppLayoutHelpers::GetDragVisualScaledSize(
      (AppLayoutHelpers *)(a1 + 192),
      v12,
      v11,
      (enum DEVICE_SCALE_FACTOR)&v60,
      (const struct tagSIZE *)&nNumber,
      v57);
    ScaledPoint = (LONG *)CDragVisual::_GetScaledPoint(a1, (__int64)&v61, 0);
    v14 = *(HWND *)(a1 + 152);
    v15 = *ScaledPoint;
    LODWORD(ScaledPoint) = ScaledPoint[1];
    v60.x = v15;
    v60.y = (int)ScaledPoint;
    v16 = Geometry::CPoint::ScreenToClient(&v61, v14, (LONG *)&v60);
    x = nNumber.x;
    v17 = v16;
    v18 = MulDiv(nNumber.x, *(_DWORD *)(a1 + 332), 100);
    v19 = v17->x;
    y = nNumber.y;
    v5 = v19 - v18;
    v20 = *(_DWORD *)(a1 + 144);
    if ( v20 == 1 )
    {
      v21 = MulDiv(*(_DWORD *)(a1 + 204) - *(_DWORD *)(a1 + 196), 5, 100);
    }
    else if ( v20 == 5 )
    {
      v52 = *(_DWORD *)(a1 + 196);
      v53 = (*(_DWORD *)(a1 + 268) - *(_DWORD *)(a1 + 260)) / 2 - nNumber.y / 2 - v52 + *(_DWORD *)(a1 + 260);
      v21 = MulDiv(*(_DWORD *)(a1 + 204) - v52, 5, 100);
      if ( v53 >= v21 )
      {
        v54 = *(_DWORD *)(a1 + 204) - *(_DWORD *)(a1 + 196) - v21;
        if ( v53 + y > v54 )
          v53 = v54 - y;
        goto LABEL_20;
      }
    }
    else
    {
      v21 = (*(_DWORD *)(a1 + 204) - *(_DWORD *)(a1 + 196) - nNumber.y) / 2;
    }
    v53 = v21;
LABEL_20:
    v55 = *(_DWORD *)(a1 + 196);
    p_nNumber = &nNumber;
    nNumber.x = 0;
    nNumber.y = v53 + v55;
    v49 = &v60;
    goto LABEL_21;
  }
  v7 = a2 - 1;
  if ( !v7 )
  {
    v50 = *(_DWORD *)(a1 + 224);
    x = *(_DWORD *)(a1 + 232) - v50;
    v25 = *(_DWORD *)(a1 + 228);
    y = *(_DWORD *)(a1 + 236) - v25;
    nNumber.x = v50;
    goto LABEL_13;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v38 = *(_DWORD *)(a1 + 344);
    v39 = (const struct Geometry::CRect *)*(unsigned int *)(a1 + 284);
    v60.x = *(_DWORD *)(a1 + 232) - *(_DWORD *)(a1 + 224);
    v60.y = *(_DWORD *)(a1 + 236) - *(_DWORD *)(a1 + 228);
    AppLayoutHelpers::GetDragVisualScaledSize(
      (AppLayoutHelpers *)(a1 + 192),
      v39,
      v38,
      (enum DEVICE_SCALE_FACTOR)&v60,
      (const struct tagSIZE *)&nNumber,
      v57);
    nNumber = *(struct tagPOINT *)Geometry::CSize::MulDiv((int *)&v60, (int *)&nNumber, 60, 100);
    v40 = (LONG *)CDragVisual::_GetScaledPoint(a1, (__int64)&v61, 0);
    v41 = *(HWND *)(a1 + 152);
    v42 = *v40;
    LODWORD(v40) = v40[1];
    v60.x = v42;
    v60.y = (int)v40;
    v43 = Geometry::CPoint::ScreenToClient(&v61, v41, (LONG *)&v60);
    x = nNumber.x;
    v44 = v43;
    v45 = MulDiv(nNumber.x, *(_DWORD *)(a1 + 332), 100);
    v46 = v44->x;
    p_nNumber = &v60;
    y = nNumber.y;
    v5 = v46 - v45;
    v48 = *(_DWORD *)(a1 + 204);
    v60.x = 0;
    v60.y = v48 - nNumber.y / 2;
    v49 = &nNumber;
LABEL_21:
    v37 = Geometry::CPoint::ScreenToClient(v49, *(HWND *)(a1 + 152), (LONG *)p_nNumber);
    goto LABEL_22;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v26 = *(_DWORD *)(a1 + 344);
    v27 = (const struct Geometry::CRect *)*(unsigned int *)(a1 + 284);
    v60.x = *(_DWORD *)(a1 + 232) - *(_DWORD *)(a1 + 224);
    v60.y = *(_DWORD *)(a1 + 236) - *(_DWORD *)(a1 + 228);
    AppLayoutHelpers::GetDragVisualScaledSize(
      (AppLayoutHelpers *)(a1 + 192),
      v27,
      v26,
      (enum DEVICE_SCALE_FACTOR)&v60,
      (const struct tagSIZE *)&nNumber,
      v57);
    v28 = (struct tagSIZE *)Geometry::CSize::MulDiv((int *)&v60, (int *)&nNumber, 125, 100);
    v29 = *(_DWORD *)(a1 + 148) == 6;
    nNumber = (struct tagPOINT)*v28;
    v30 = (LONG *)CDragVisual::_GetScaledPoint(a1, (__int64)&v61, v29);
    v31 = *(HWND *)(a1 + 152);
    v32 = *v30;
    LODWORD(v30) = v30[1];
    v60.x = v32;
    v60.y = (int)v30;
    v33 = Geometry::CPoint::ScreenToClient(&v61, v31, (LONG *)&v60);
    x = nNumber.x;
    v34 = v33;
    v35 = MulDiv(nNumber.x, *(_DWORD *)(a1 + 332), 100);
    v36 = *(HWND *)(a1 + 152);
    v5 = v34->x - v35;
    v60.x = 0;
    v60.y = *(_DWORD *)(a1 + 196);
    v37 = Geometry::CPoint::ScreenToClient(&v61, v36, (LONG *)&v60);
    y = nNumber.y;
LABEL_22:
    v2 = v37->y;
    goto LABEL_23;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v22 = *(_DWORD *)(a1 + 224);
    v23 = *(_DWORD *)(a1 + 228);
    v24 = *(_DWORD *)(a1 + 236);
    x = *(_DWORD *)(a1 + 232) - v22;
    nNumber.x = v22 + *(_DWORD *)(a1 + 336) - *(_DWORD *)(a1 + 176);
    y = v24 - v23;
    v25 = v23 + *(_DWORD *)(a1 + 340) - *(_DWORD *)(a1 + 180);
LABEL_13:
    v51 = *(HWND *)(a1 + 152);
    nNumber.y = v25;
    nNumber = *Geometry::CPoint::ScreenToClient(&v60, v51, (LONG *)&nNumber);
    v5 = nNumber.x;
    v2 = nNumber.y;
    goto LABEL_23;
  }
  if ( v10 == 2 )
    goto LABEL_7;
LABEL_23:
  v58[0] = v5;
  v58[2] = v5 + x;
  v58[1] = v2;
  v58[3] = v2 + y;
  return CDragVisual::_UpdateThumbnailRect((CDragVisual *)a1, (const struct Geometry::CRect *)v58);
}
