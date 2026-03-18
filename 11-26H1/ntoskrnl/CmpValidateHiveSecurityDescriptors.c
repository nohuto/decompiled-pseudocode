/*
 * XREFs of CmpValidateHiveSecurityDescriptors @ 0x14094D7E0
 * Callers:
 *     CmCheckRegistry @ 0x140B7E7A0 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x140494894 (SetFailureLocation.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpDestroySecurityCache @ 0x1408B999C (CmpDestroySecurityCache.c)
 *     HvpMarkCellDirty @ 0x1408D4AB0 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvIsCellAllocated @ 0x1408D9150 (HvIsCellAllocated.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14094DC20 (RtlValidRelativeSecurityDescriptor.c)
 *     CmpAddSecurityCellToCache @ 0x14094DD90 (CmpAddSecurityCellToCache.c)
 *     CmpCheckSecurityCellAccess @ 0x140983754 (CmpCheckSecurityCellAccess.c)
 *     CmpInitSecurityCache @ 0x140AB8B64 (CmpInitSecurityCache.c)
 *     CmpAdjustSecurityCacheSize @ 0x140AEB158 (CmpAdjustSecurityCacheSize.c)
 *     CmpResetCachedSecurity @ 0x140B46114 (CmpResetCachedSecurity.c)
 */

__int64 __fastcall CmpValidateHiveSecurityDescriptors(
        ULONG_PTR BugCheckParameter3,
        int a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v6; // r14
  __int64 v7; // rdx
  __int64 CellFlat; // rax
  __int64 v9; // r13
  unsigned int v10; // r15d
  unsigned int v11; // esi
  unsigned int v12; // r14d
  __int64 CellPaged; // rax
  unsigned int v14; // eax
  ULONG v15; // edx
  int v16; // eax
  unsigned int v17; // esi
  __int64 v18; // rax
  unsigned int i; // edi
  int v21; // eax
  __int64 v22; // rcx
  int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // ecx
  ULONG v28; // edx
  int v29; // eax
  __int64 v30; // r8
  int v31; // [rsp+20h] [rbp-38h]
  int v32; // [rsp+20h] [rbp-38h]
  int v33; // [rsp+20h] [rbp-38h]
  int v34; // [rsp+30h] [rbp-28h]
  __int64 v35; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v36[6]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v37; // [rsp+A0h] [rbp+48h]

  *(_QWORD *)v36 = 0LL;
  v35 = 0LL;
  HvpGetCellContextInitialize(v36);
  v6 = 0LL;
  HvpGetCellContextInitialize(&v35);
  v34 = *(_DWORD *)(BugCheckParameter3 + 1880);
  if ( !HvIsCellAllocated(BugCheckParameter3, *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL)) )
  {
    v24 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v32 = 0;
    goto LABEL_54;
  }
  v7 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v7, v36);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v7);
  v9 = CellFlat;
  if ( !CellFlat )
  {
    v24 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v32 = 16;
LABEL_54:
    v17 = -1073741492;
    SetFailureLocation(v24, 0, 9, -1073741492, v32);
    return v17;
  }
  if ( -4 - *(_DWORD *)(CellFlat - 4) < 76 )
  {
    v22 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v31 = 24;
LABEL_49:
    v17 = -1073741492;
    v23 = -1073741492;
LABEL_50:
    SetFailureLocation(v22, 0, 9, v23, v31);
    goto LABEL_31;
  }
  v10 = *(_DWORD *)(CellFlat + 44);
  v11 = 0;
  v12 = v10;
  v37 = v10;
  while ( 1 )
  {
    if ( !HvIsCellAllocated(BugCheckParameter3, v10) )
    {
      if ( v12 != v10 )
      {
        v6 = 0LL;
        goto LABEL_81;
      }
      v17 = -1073741492;
      SetFailureLocation(a5, 0, 9, -1073741492, 128);
      v6 = 0LL;
      goto LABEL_31;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter3, v10, (unsigned int *)&v35);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3, v10);
    v6 = (_DWORD *)CellPaged;
    if ( !CellPaged )
    {
      v31 = 144;
LABEL_48:
      v22 = a5;
      goto LABEL_49;
    }
    v14 = -4 - *(_DWORD *)(CellPaged - 4);
    if ( v14 < 0x14 )
      break;
    v15 = v6[4];
    if ( v15 + 20 < v15 || v15 + 20 > v14 )
      break;
    if ( v10 != v37 && v6[2] != v11 )
    {
      v31 = 160;
      goto LABEL_48;
    }
    if ( !RtlValidRelativeSecurityDescriptor(v6 + 5, v15, 0) )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v35);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v35);
      v33 = 168;
      goto LABEL_79;
    }
    if ( v34 )
    {
      v16 = CmpResetCachedSecurity(BugCheckParameter3, v10);
      v17 = v16;
      if ( v16 < 0 )
      {
        v31 = 184;
LABEL_59:
        v23 = v16;
        v22 = a5;
        goto LABEL_50;
      }
    }
    else
    {
      v16 = CmpAddSecurityCellToCache(BugCheckParameter3);
      v17 = v16;
      if ( v16 < 0 )
      {
        v31 = 176;
        goto LABEL_59;
      }
    }
    v11 = v10;
    v10 = v6[1];
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v35);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v35);
    v12 = v37;
    if ( v10 == v37 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v18 = HvpGetCellFlat(BugCheckParameter3, v10, (unsigned int *)&v35);
      else
        v18 = HvpGetCellPaged(BugCheckParameter3, v10);
      v6 = (_DWORD *)v18;
      if ( *(_DWORD *)(v18 + 8) != v11 )
      {
        v31 = 200;
        goto LABEL_48;
      }
      if ( !v34 )
        CmpAdjustSecurityCacheSize(BugCheckParameter3);
      if ( (a2 & 0x2000000) != 0 && *(_DWORD *)(BugCheckParameter3 + 1880) > 1u )
      {
        for ( i = 0; i < *(_DWORD *)(BugCheckParameter3 + 1880); ++i )
        {
          v21 = CmpCheckSecurityCellAccess(BugCheckParameter3, 0);
          v17 = v21;
          if ( v21 < 0 )
          {
            SetFailureLocation(a5, 0, 9, v21, 208);
            if ( v17 != -1073741670 )
              v17 = -1073741492;
            goto LABEL_31;
          }
        }
      }
      v17 = 0;
      goto LABEL_31;
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v35);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v35);
  v33 = 152;
LABEL_79:
  v6 = 0LL;
  SetFailureLocation(a5, 1, 9, -1073741492, v33);
LABEL_81:
  if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpCallbackListLock.ApcStateFill[28] & 6) == 0 )
  {
    v31 = 112;
    goto LABEL_48;
  }
  if ( !HvIsCellAllocated(BugCheckParameter3, *(_DWORD *)(v9 + 44)) )
  {
    v31 = 32;
    goto LABEL_48;
  }
  v25 = *(unsigned int *)(v9 + 44);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v26 = HvpGetCellFlat(BugCheckParameter3, v25, (unsigned int *)&v35);
  else
    v26 = HvpGetCellPaged(BugCheckParameter3, v25);
  v6 = (_DWORD *)v26;
  if ( !v26 )
  {
    v31 = 48;
    goto LABEL_48;
  }
  v27 = -4 - *(_DWORD *)(v26 - 4);
  if ( v27 < 0x14 || (v28 = *(_DWORD *)(v26 + 16), v28 + 20 < v28) || v28 + 20 > v27 )
  {
    v31 = 80;
    goto LABEL_48;
  }
  if ( !RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v26 + 20), v28, 0) )
  {
    v31 = 64;
    goto LABEL_48;
  }
  v16 = HvpMarkCellDirty(BugCheckParameter3, *(_DWORD *)(v9 + 44), 0);
  v17 = v16;
  if ( v16 < 0 )
  {
    v31 = 96;
    goto LABEL_59;
  }
  v29 = *(_DWORD *)(v9 + 44);
  v6[2] = v29;
  v6[1] = v29;
  CmpDestroySecurityCache(BugCheckParameter3);
  CmpInitSecurityCache(BugCheckParameter3);
  v17 = -1073741267;
  v30 = *(_QWORD *)(BugCheckParameter3 + 64);
  *a3 = 1;
  *(_DWORD *)(v30 + 4088) |= 4u;
LABEL_31:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v36);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v36);
  if ( v6 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v35);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v35);
  }
  return v17;
}
