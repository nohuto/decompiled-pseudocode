/*
 * XREFs of ?CreatePortal@DeadzoneJumping@CCursorClip@@AEAAJPEAURegionInfo@12@0PEAPEAURegionPortal@12@@Z @ 0x14008F7C0
 * Callers:
 *     ?RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ @ 0x14008F578 (-RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?RangesOverlap@DeadzoneJumping@CCursorClip@@CA_NJJJJ@Z @ 0x14008F9E0 (-RangesOverlap@DeadzoneJumping@CCursorClip@@CA_NJJJJ@Z.c)
 */

__int64 __fastcall CCursorClip::DeadzoneJumping::CreatePortal(
        CCursorClip::DeadzoneJumping *this,
        struct CCursorClip::DeadzoneJumping::RegionInfo *a2,
        struct CCursorClip::DeadzoneJumping::RegionInfo *a3,
        struct CCursorClip::DeadzoneJumping::RegionPortal **a4)
{
  int v4; // r10d
  int v7; // r9d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  signed int v13; // r10d
  int v14; // esi
  int v15; // r8d
  int v16; // esi
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // eax
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  int v24; // r11d
  int v25; // r11d
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 **i; // rax
  __int64 v30; // [rsp+50h] [rbp+8h]
  __int64 v31; // [rsp+58h] [rbp+10h]
  unsigned __int64 v32; // [rsp+60h] [rbp+18h]
  __int64 v33; // [rsp+68h] [rbp+20h]

  v4 = *((_DWORD *)a2 + 3);
  *a4 = 0LL;
  v7 = *((_DWORD *)a3 + 5);
  if ( v4 == v7 )
  {
    if ( !CCursorClip::DeadzoneJumping::RangesOverlap(
            *((_DWORD *)a2 + 2),
            *((_DWORD *)a2 + 4) - 1,
            *((_DWORD *)a3 + 2),
            *((_DWORD *)a3 + 4) - 1) )
      return 0LL;
    LODWORD(v33) = v10;
    LODWORD(v31) = v9;
    v14 = 2;
    if ( v10 > v11 )
      v11 = v10;
    HIDWORD(v30) = v13;
    v32 = __PAIR64__(v13, v11);
    if ( v9 < v12 )
      v12 = v9;
    HIDWORD(v31) = v13;
    LODWORD(v30) = v12;
  }
  else
  {
    v15 = *((_DWORD *)a3 + 3);
    v16 = *((_DWORD *)a2 + 5);
    if ( v16 == v15 )
    {
      if ( !CCursorClip::DeadzoneJumping::RangesOverlap(
              *((_DWORD *)a2 + 2),
              *((_DWORD *)a2 + 4) - 1,
              *((_DWORD *)a3 + 2),
              *((_DWORD *)a3 + 4) - 1) )
        return 0LL;
      v20 = v16 - 1;
      LODWORD(v33) = v10;
      LODWORD(v31) = v17;
      HIDWORD(v30) = v16 - 1;
      v14 = 4;
      if ( v10 > v18 )
        v18 = v10;
      v32 = __PAIR64__(v20, v18);
      HIDWORD(v31) = v20;
      if ( v17 < v19 )
        v19 = v17;
      HIDWORD(v33) = v20;
      LODWORD(v30) = v19;
      goto LABEL_27;
    }
    if ( *((_DWORD *)a2 + 2) == *((_DWORD *)a3 + 4) )
    {
      if ( !CCursorClip::DeadzoneJumping::RangesOverlap(v4, v16 - 1, v15, v7 - 1) )
        return 0LL;
      LODWORD(v30) = v24;
      v14 = 1;
      LODWORD(v32) = v24;
      LODWORD(v31) = v24;
      LODWORD(v33) = v24;
    }
    else
    {
      if ( *((_DWORD *)a2 + 4) != *((_DWORD *)a3 + 2)
        || !CCursorClip::DeadzoneJumping::RangesOverlap(v4, v16 - 1, v15, v7 - 1) )
      {
        return 0LL;
      }
      v14 = 3;
      LODWORD(v30) = v25 - 1;
      LODWORD(v32) = v25 - 1;
      LODWORD(v31) = v25 - 1;
      LODWORD(v33) = v25 - 1;
    }
    HIDWORD(v31) = v21;
    if ( v13 > v22 )
      v22 = v13;
    HIDWORD(v32) = v22;
    if ( v21 < v23 )
      v23 = v21;
    HIDWORD(v30) = v23;
  }
  HIDWORD(v33) = v13;
LABEL_27:
  v26 = Win32AllocPoolWithQuotaZInitImpl(v10, 0x48uLL, 0x447A636Au);
  v27 = v26;
  if ( !v26 )
    return 3221225495LL;
  *(_QWORD *)(v26 + 32) = v32;
  *(_QWORD *)(v26 + 40) = v30;
  *(_QWORD *)(v26 + 48) = v33;
  *(_QWORD *)(v26 + 56) = v31;
  *(_DWORD *)(v26 + 64) = v14;
  *(_QWORD *)(v26 + 16) = a2;
  *(_QWORD *)(v26 + 24) = a3;
  *(_QWORD *)(v26 + 8) = 0LL;
  for ( i = (__int64 **)*((_QWORD *)a3 + 3); i; i = (__int64 **)*i )
  {
    if ( i[3] == (__int64 *)a2 )
    {
      *(_QWORD *)(v27 + 8) = i;
      i[1] = (__int64 *)v27;
      break;
    }
  }
  *a4 = (struct CCursorClip::DeadzoneJumping::RegionPortal *)v27;
  return 0LL;
}
