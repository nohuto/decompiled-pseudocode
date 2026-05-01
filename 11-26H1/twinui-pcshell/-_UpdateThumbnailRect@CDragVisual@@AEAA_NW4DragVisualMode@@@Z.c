/*
 * XREFs of ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x1805446EC
 * Callers:
 *     ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x180542440 (-SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z.c)
 *     ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x1805426F0 (-SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NXZ @ 0x180544B48 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NXZ.c)
 * Callees:
 *     ?MulDiv@CSize@Geometry@@SA?AU12@AEBUtagSIZE@@HH@Z @ 0x1801F4ADC (-MulDiv@CSize@Geometry@@SA-AU12@AEBUtagSIZE@@HH@Z.c)
 *     ?ScreenToClient@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x1804CB3A0 (-ScreenToClient@CPoint@Geometry@@SA-AU12@PEAUHWND__@@AEBUtagPOINT@@@Z.c)
 *     ?_GetScaledPoint@CDragVisual@@AEAA?AUtagPOINT@@W4ScaledPointType@1@@Z @ 0x180542FFC (-_GetScaledPoint@CDragVisual@@AEAA-AUtagPOINT@@W4ScaledPointType@1@@Z.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NAEBUCRect@Geometry@@@Z @ 0x1805446A8 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NAEBUCRect@Geometry@@@Z.c)
 *     ?GetDragVisualScaledSize@AppLayoutHelpers@@YAXAEBUCRect@Geometry@@W4DEVICE_SCALE_FACTOR@@1AEBUtagSIZE@@PEAU5@@Z @ 0x1806C93FC (-GetDragVisualScaledSize@AppLayoutHelpers@@YAXAEBUCRect@Geometry@@W4DEVICE_SCALE_FACTOR@@1AEBUta.c)
 */

char __fastcall CDragVisual::_UpdateThumbnailRect(__int64 a1, int a2)
{
  LONG v2; // esi
  LONG v4; // r12d
  LONG x; // r14d
  LONG y; // edi
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
  LONG v17; // r12d
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // edi
  LONG v24; // eax
  enum DEVICE_SCALE_FACTOR v25; // r8d
  const struct Geometry::CRect *v26; // rdx
  struct tagSIZE *v27; // rax
  BOOL v28; // r8d
  LONG *v29; // rax
  HWND v30; // rdx
  LONG v31; // ecx
  struct tagPOINT *v32; // rax
  LONG v33; // r12d
  int v34; // eax
  HWND v35; // rdx
  struct tagPOINT *v36; // rax
  enum DEVICE_SCALE_FACTOR v37; // r8d
  const struct Geometry::CRect *v38; // rdx
  LONG *v39; // rax
  HWND v40; // rdx
  LONG v41; // ecx
  struct tagPOINT *v42; // rax
  LONG v43; // r12d
  int v44; // eax
  struct tagPOINT *p_nNumber; // r8
  int v46; // ecx
  struct tagPOINT *v47; // rcx
  LONG v48; // ecx
  HWND v49; // rdx
  int v50; // r9d
  int v51; // r15d
  int v52; // ecx
  int v53; // ecx
  struct tagSIZE *v55; // [rsp+28h] [rbp-18h]
  _DWORD v56[4]; // [rsp+30h] [rbp-10h] BYREF
  struct tagPOINT nNumber; // [rsp+80h] [rbp+40h] BYREF
  struct tagPOINT v58; // [rsp+90h] [rbp+50h] BYREF
  struct tagPOINT v59; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  *(_BYTE *)(a1 + 277) = 0;
  v4 = 0;
  nNumber = 0LL;
  x = 0;
  y = 0;
  if ( !a2 )
  {
LABEL_7:
    v11 = *(_DWORD *)(a1 + 344);
    v12 = (const struct Geometry::CRect *)*(unsigned int *)(a1 + 284);
    v58.x = *(_DWORD *)(a1 + 232) - *(_DWORD *)(a1 + 224);
    v58.y = *(_DWORD *)(a1 + 236) - *(_DWORD *)(a1 + 228);
    AppLayoutHelpers::GetDragVisualScaledSize(
      (AppLayoutHelpers *)(a1 + 192),
      v12,
      v11,
      (enum DEVICE_SCALE_FACTOR)&v58,
      (const struct tagSIZE *)&nNumber,
      v55);
    ScaledPoint = (LONG *)CDragVisual::_GetScaledPoint(a1, (__int64)&v59, 0);
    v14 = *(HWND *)(a1 + 152);
    v15 = *ScaledPoint;
    LODWORD(ScaledPoint) = ScaledPoint[1];
    v58.x = v15;
    v58.y = (int)ScaledPoint;
    v16 = Geometry::CPoint::ScreenToClient(&v59, v14, (LONG *)&v58);
    x = nNumber.x;
    v17 = v16->x;
    v18 = MulDiv(nNumber.x, *(_DWORD *)(a1 + 332), 100);
    y = nNumber.y;
    v4 = v17 - v18;
    v19 = *(_DWORD *)(a1 + 144);
    if ( v19 == 1 )
    {
      v20 = MulDiv(*(_DWORD *)(a1 + 204) - *(_DWORD *)(a1 + 196), 5, 100);
    }
    else if ( v19 == 5 )
    {
      v50 = *(_DWORD *)(a1 + 196);
      v51 = (*(_DWORD *)(a1 + 268) - *(_DWORD *)(a1 + 260)) / 2 - nNumber.y / 2 - v50 + *(_DWORD *)(a1 + 260);
      v20 = MulDiv(*(_DWORD *)(a1 + 204) - v50, 5, 100);
      if ( v51 >= v20 )
      {
        v52 = *(_DWORD *)(a1 + 204) - *(_DWORD *)(a1 + 196) - v20;
        if ( v51 + y > v52 )
          v51 = v52 - y;
        goto LABEL_20;
      }
    }
    else
    {
      v20 = (*(_DWORD *)(a1 + 204) - nNumber.y - *(_DWORD *)(a1 + 196)) / 2;
    }
    v51 = v20;
LABEL_20:
    v53 = *(_DWORD *)(a1 + 196);
    p_nNumber = &nNumber;
    nNumber.x = 0;
    nNumber.y = v51 + v53;
    v47 = &v58;
    goto LABEL_21;
  }
  v7 = a2 - 1;
  if ( !v7 )
  {
    v48 = *(_DWORD *)(a1 + 224);
    x = *(_DWORD *)(a1 + 232) - v48;
    v24 = *(_DWORD *)(a1 + 228);
    y = *(_DWORD *)(a1 + 236) - v24;
    nNumber.x = v48;
    goto LABEL_13;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v37 = *(_DWORD *)(a1 + 344);
    v38 = (const struct Geometry::CRect *)*(unsigned int *)(a1 + 284);
    v58.x = *(_DWORD *)(a1 + 232) - *(_DWORD *)(a1 + 224);
    v58.y = *(_DWORD *)(a1 + 236) - *(_DWORD *)(a1 + 228);
    AppLayoutHelpers::GetDragVisualScaledSize(
      (AppLayoutHelpers *)(a1 + 192),
      v38,
      v37,
      (enum DEVICE_SCALE_FACTOR)&v58,
      (const struct tagSIZE *)&nNumber,
      v55);
    nNumber = *(struct tagPOINT *)Geometry::CSize::MulDiv((int *)&v58, (int *)&nNumber, 60, 100);
    v39 = (LONG *)CDragVisual::_GetScaledPoint(a1, (__int64)&v59, 0);
    v40 = *(HWND *)(a1 + 152);
    v41 = *v39;
    LODWORD(v39) = v39[1];
    v58.x = v41;
    v58.y = (int)v39;
    v42 = Geometry::CPoint::ScreenToClient(&v59, v40, (LONG *)&v58);
    x = nNumber.x;
    v43 = v42->x;
    v44 = MulDiv(nNumber.x, *(_DWORD *)(a1 + 332), 100);
    y = nNumber.y;
    p_nNumber = &v58;
    v46 = *(_DWORD *)(a1 + 204);
    v4 = v43 - v44;
    v58.x = 0;
    v58.y = v46 - nNumber.y / 2;
    v47 = &nNumber;
LABEL_21:
    v36 = Geometry::CPoint::ScreenToClient(v47, *(HWND *)(a1 + 152), (LONG *)p_nNumber);
    goto LABEL_22;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v25 = *(_DWORD *)(a1 + 344);
    v26 = (const struct Geometry::CRect *)*(unsigned int *)(a1 + 284);
    v58.x = *(_DWORD *)(a1 + 232) - *(_DWORD *)(a1 + 224);
    v58.y = *(_DWORD *)(a1 + 236) - *(_DWORD *)(a1 + 228);
    AppLayoutHelpers::GetDragVisualScaledSize(
      (AppLayoutHelpers *)(a1 + 192),
      v26,
      v25,
      (enum DEVICE_SCALE_FACTOR)&v58,
      (const struct tagSIZE *)&nNumber,
      v55);
    v27 = (struct tagSIZE *)Geometry::CSize::MulDiv((int *)&v58, (int *)&nNumber, 125, 100);
    v28 = *(_DWORD *)(a1 + 148) == 6;
    nNumber = (struct tagPOINT)*v27;
    v29 = (LONG *)CDragVisual::_GetScaledPoint(a1, (__int64)&v59, v28);
    v30 = *(HWND *)(a1 + 152);
    v31 = *v29;
    LODWORD(v29) = v29[1];
    v58.x = v31;
    v58.y = (int)v29;
    v32 = Geometry::CPoint::ScreenToClient(&v59, v30, (LONG *)&v58);
    x = nNumber.x;
    v33 = v32->x;
    v34 = MulDiv(nNumber.x, *(_DWORD *)(a1 + 332), 100);
    v35 = *(HWND *)(a1 + 152);
    v4 = v33 - v34;
    v58.x = 0;
    v58.y = *(_DWORD *)(a1 + 196);
    v36 = Geometry::CPoint::ScreenToClient(&v59, v35, (LONG *)&v58);
    y = nNumber.y;
LABEL_22:
    v2 = v36->y;
    goto LABEL_23;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v21 = *(_DWORD *)(a1 + 224);
    v22 = *(_DWORD *)(a1 + 228);
    v23 = *(_DWORD *)(a1 + 236);
    x = *(_DWORD *)(a1 + 232) - v21;
    nNumber.x = v21 + *(_DWORD *)(a1 + 336) - *(_DWORD *)(a1 + 176);
    y = v23 - v22;
    v24 = v22 + *(_DWORD *)(a1 + 340) - *(_DWORD *)(a1 + 180);
LABEL_13:
    v49 = *(HWND *)(a1 + 152);
    nNumber.y = v24;
    nNumber = *Geometry::CPoint::ScreenToClient(&v58, v49, (LONG *)&nNumber);
    v4 = nNumber.x;
    v2 = nNumber.y;
    goto LABEL_23;
  }
  if ( v10 == 2 )
    goto LABEL_7;
LABEL_23:
  v56[0] = v4;
  v56[2] = v4 + x;
  v56[1] = v2;
  v56[3] = v2 + y;
  return CDragVisual::_UpdateThumbnailRect((CDragVisual *)a1, (const struct Geometry::CRect *)v56);
}
