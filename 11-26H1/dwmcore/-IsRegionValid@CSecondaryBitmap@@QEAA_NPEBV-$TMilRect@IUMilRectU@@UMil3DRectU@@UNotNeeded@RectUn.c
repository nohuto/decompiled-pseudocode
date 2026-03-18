/*
 * XREFs of ?IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18002B340
 * Callers:
 *     ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x1800E3820 (-UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18012D6D0 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 * Callees:
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18002A150 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18012DEDC (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CSecondaryBitmap::IsRegionValid(_DWORD *a1, int *a2, __int64 a3)
{
  int v5; // eax
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // edx
  const struct FastRegion::Internal::CRgnData *v10; // rdx
  char v11; // bl
  unsigned __int8 v12; // bl
  int v14; // eax
  _DWORD *v15; // rdi
  __int64 v16; // rax
  int v17; // r10d
  int v18; // r9d
  int v19; // eax
  int v20; // r8d
  int v21; // edx
  int v22; // eax
  int v23; // eax
  HANDLE ProcessHeap; // rax
  LPVOID lpMem; // [rsp+20h] [rbp-60h] BYREF
  _DWORD v26[18]; // [rsp+28h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  lpMem = v26;
  if ( !a2 )
  {
    v5 = *a1;
    v6 = a1[2];
    if ( v5 < v6 )
    {
      v7 = a1[3];
      v8 = a1[1];
      if ( v8 < v7 )
        goto LABEL_4;
    }
LABEL_30:
    v9 = 0;
    goto LABEL_5;
  }
  v5 = *a2;
  v6 = a2[2];
  if ( *a2 >= v6 )
    goto LABEL_30;
  v7 = a2[3];
  v8 = a2[1];
  if ( v8 >= v7 )
    goto LABEL_30;
LABEL_4:
  v9 = 2;
  v26[1] = v5;
  v26[2] = v6;
  v26[3] = v8;
  v26[4] = 16;
  v26[7] = v5;
  v26[8] = v6;
  v26[5] = v7;
  v26[6] = 16;
LABEL_5:
  v26[0] = v9;
  if ( v9 && (v10 = (const struct FastRegion::Internal::CRgnData *)*((_QWORD *)a1 + 2), *(_DWORD *)v10) )
    v11 = FastRegion::Internal::CRgnData::Intersects((const struct FastRegion::Internal::CRgnData *)v26, v10);
  else
    v11 = 0;
  v12 = v11 ^ 1;
  if ( a3 )
  {
    if ( v12 )
    {
      *(_QWORD *)(a3 + 8) = 0LL;
      *(_QWORD *)a3 = 0LL;
    }
    else
    {
      v14 = FastRegion::CRegion::Intersect((FastRegion::CRegion *)&lpMem, (const struct CRegion *)(a1 + 4));
      if ( v14 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1B1,
          (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
          (const char *)(unsigned int)v14,
          (int)lpMem);
      v15 = lpMem;
      v16 = *(int *)lpMem;
      if ( (_DWORD)v16 )
      {
        v17 = *((_DWORD *)lpMem + 2 * v16 + 1);
        v18 = -1;
        v19 = -1;
        v20 = *((_DWORD *)lpMem + 2);
        v21 = *((_DWORD *)lpMem + 3);
        if ( *((int *)lpMem + 1) >= 0 )
          v19 = *((_DWORD *)lpMem + 1);
        *(_DWORD *)a3 = v19;
        v22 = -1;
        if ( v21 >= 0 )
          v22 = v21;
        *(_DWORD *)(a3 + 4) = v22;
        v23 = -1;
        if ( v20 >= 0 )
          v23 = v20;
        *(_DWORD *)(a3 + 8) = v23;
        if ( v17 >= 0 )
          v18 = v17;
        *(_DWORD *)(a3 + 12) = v18;
      }
      if ( v26 != v15 && v15 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v15);
      }
    }
  }
  return v12;
}
