/*
 * XREFs of ?HandleMigrationRotation@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4SnapRegion@@@std@@W4SnapRegion@@AEBUCRect@Geometry@@11H@Z @ 0x18020B4B8
 * Callers:
 *     ?ComputeMigrationInfo@SnapLayoutHelpers@@YA?AU?$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE@@@std@@AEBUCRect@Geometry@@00H@Z @ 0x1805AB194 (-ComputeMigrationInfo@SnapLayoutHelpers@@YA-AU-$pair@UCRect@Geometry@@W4_SHELLSETWINDOWPOS_STATE.c)
 * Callees:
 *     ?GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@AEBUCRect@Geometry@@0H@Z @ 0x1802B54D0 (-GetSnapRegionAnchorLocations@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocations@1@AEBUCRect@Geo.c)
 *     SnapLayoutHelpers::RotateWindowExtent @ 0x1802C3BAC (SnapLayoutHelpers--RotateWindowExtent.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall SnapLayoutHelpers::HandleMigrationRotation(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned int *a5,
        int a6)
{
  int v6; // r10d
  int v10; // r8d
  int v11; // r9d
  _DWORD *v12; // r12
  int *v13; // r15
  int *v14; // r14
  bool v15; // r11
  bool v16; // al
  int v17; // ebx
  int v18; // ecx
  int v19; // ecx
  int v20; // ebx
  int v21; // r8d
  int v22; // ecx
  unsigned int v23; // ebx
  int v24; // r8d
  int v25; // ecx
  unsigned int v26; // ebx
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 result; // rax
  int v44; // [rsp+20h] [rbp-30h]
  int v45; // [rsp+20h] [rbp-30h]
  int v46; // [rsp+20h] [rbp-30h]
  __int128 v48; // [rsp+38h] [rbp-18h] BYREF

  v6 = a4[1];
  v10 = a4[3];
  v11 = a4[2] - *a4;
  v12 = a5 + 3;
  v13 = (int *)(a5 + 1);
  v14 = (int *)(a5 + 2);
  v48 = 0LL;
  v15 = v11 > v10 - v6 && *v12 - *v13 > (int)(*v14 - *a5);
  v16 = v10 - v6 > v11 && (int)(*v14 - *a5) > *v12 - *v13;
  if ( v15 )
  {
    v17 = *v14;
    v18 = a3[1] - v6;
    if ( v18 > a6 )
      v17 -= MulDiv(v18, v17 - *a5, v10 - v6);
    v19 = *a3 - *a4;
    DWORD2(v48) = v17;
    v20 = *v13;
    if ( v19 > a6 )
      v20 += MulDiv(v19, a5[3] - v20, a4[2] - *a4);
    v21 = a4[3];
    v22 = v21 - a3[3];
    DWORD1(v48) = v20;
    v23 = *a5;
    if ( v22 > a6 )
      v23 += MulDiv(v22, a5[2] - v23, v21 - a4[1]);
    v24 = a4[2];
    v25 = v24 - a3[2];
    LODWORD(v48) = v23;
    v26 = a5[3];
    if ( v25 > a6 )
      v26 -= MulDiv(v25, v26 - a5[1], v24 - *a4);
    HIDWORD(v48) = v26;
    v27 = (unsigned int)a6;
    goto LABEL_21;
  }
  if ( v16 )
  {
    v28 = SnapLayoutHelpers::RotateWindowExtent(
            (unsigned int)(a3[1] - v6),
            *a5,
            (unsigned int)(v10 - v6),
            *v14 - *a5,
            0,
            a6);
    v29 = (unsigned int)(*v12 - *v13);
    v30 = (unsigned int)(a4[2] - *a4);
    v31 = (unsigned int)(*a3 - *a4);
    v32 = (unsigned int)*v12;
    LODWORD(v48) = v28;
    LOBYTE(v44) = 1;
    v33 = SnapLayoutHelpers::RotateWindowExtent(v31, v32, v30, v29, v44, a6);
    v34 = (unsigned int)(a4[3] - a4[1]);
    v35 = *v14 - *a5;
    v36 = (unsigned int)(a4[3] - a3[3]);
    v37 = (unsigned int)*v14;
    HIDWORD(v48) = v33;
    LOBYTE(v45) = 1;
    v38 = SnapLayoutHelpers::RotateWindowExtent(v36, v37, v34, v35, v45, a6);
    v39 = (unsigned int)(a4[2] - *a4);
    v40 = (unsigned int)(*v12 - *v13);
    v41 = (unsigned int)(a4[2] - a3[2]);
    v42 = (unsigned int)*v13;
    DWORD2(v48) = v38;
    LOBYTE(v46) = 0;
    DWORD1(v48) = SnapLayoutHelpers::RotateWindowExtent(v41, v42, v39, v40, v46, a6);
    v27 = (unsigned int)a6;
LABEL_21:
    a2 = dword_18078CAB0[(unsigned int)SnapLayoutHelpers::GetSnapRegionAnchorLocations(&v48, a5, v27)];
  }
  result = a1;
  *(_OWORD *)a1 = v48;
  *(_DWORD *)(a1 + 16) = a2;
  return result;
}
