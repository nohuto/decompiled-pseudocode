/*
 * XREFs of CmpValidateHiveSecurityDescriptors @ 0x1409C9150
 * Callers:
 *     CmCheckRegistry @ 0x140B87680 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpDestroySecurityCache @ 0x1408BFF6C (CmpDestroySecurityCache.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvIsCellAllocated @ 0x1408DF710 (HvIsCellAllocated.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpCheckSecurityCellAccess @ 0x140945764 (CmpCheckSecurityCellAccess.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1409C9570 (RtlValidRelativeSecurityDescriptor.c)
 *     CmpAddSecurityCellToCache @ 0x1409C96E0 (CmpAddSecurityCellToCache.c)
 *     CmpInitSecurityCache @ 0x140ABA1A4 (CmpInitSecurityCache.c)
 *     CmpAdjustSecurityCacheSize @ 0x140AEDF28 (CmpAdjustSecurityCacheSize.c)
 *     CmpResetCachedSecurity @ 0x140B48144 (CmpResetCachedSecurity.c)
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
  __int64 CellPaged; // rax
  unsigned int v13; // eax
  ULONG v14; // edx
  int v15; // eax
  unsigned int v16; // esi
  __int64 v17; // rax
  unsigned int i; // edi
  int v20; // eax
  __int64 v21; // rcx
  int v22; // r9d
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // ecx
  ULONG v27; // edx
  int v28; // eax
  __int64 v29; // r8
  int v30; // [rsp+20h] [rbp-38h]
  int v31; // [rsp+20h] [rbp-38h]
  int v32; // [rsp+20h] [rbp-38h]
  int v33; // [rsp+30h] [rbp-28h]
  __int64 v34; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v35[6]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v36; // [rsp+A0h] [rbp+48h]

  *(_QWORD *)v35 = 0LL;
  v34 = 0LL;
  HvpGetCellContextInitialize(v35);
  v6 = 0LL;
  HvpGetCellContextInitialize(&v34);
  v33 = *(_DWORD *)(BugCheckParameter3 + 1880);
  if ( !HvIsCellAllocated(BugCheckParameter3, *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL)) )
  {
    v23 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v31 = 0;
    goto LABEL_54;
  }
  v7 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v7, v35);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v7);
  v9 = CellFlat;
  if ( !CellFlat )
  {
    v23 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
    v31 = 16;
LABEL_54:
    v16 = -1073741492;
    SetFailureLocation(v23, 0, 9, -1073741492, v31);
    return v16;
  }
  if ( -4 - *(_DWORD *)(CellFlat - 4) >= 76 )
  {
    v10 = *(_DWORD *)(CellFlat + 44);
    v11 = 0;
    v36 = v10;
    while ( 1 )
    {
      if ( !HvIsCellAllocated(BugCheckParameter3, v10) )
      {
        v6 = 0LL;
        if ( v36 == v10 )
        {
          v30 = 128;
          goto LABEL_48;
        }
        goto LABEL_80;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(BugCheckParameter3, v10, (unsigned int *)&v34);
      else
        CellPaged = HvpGetCellPaged(BugCheckParameter3, v10);
      v6 = (_DWORD *)CellPaged;
      if ( !CellPaged )
      {
        v30 = 144;
LABEL_48:
        v21 = a5;
        goto LABEL_49;
      }
      v13 = -4 - *(_DWORD *)(CellPaged - 4);
      if ( v13 < 0x14 )
        break;
      v14 = v6[4];
      if ( v14 + 20 < v14 || v14 + 20 > v13 )
        break;
      if ( v10 != v36 && v6[2] != v11 )
      {
        v30 = 160;
        goto LABEL_48;
      }
      if ( !RtlValidRelativeSecurityDescriptor(v6 + 5, v14, 0) )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v34);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v34);
        v32 = 168;
        goto LABEL_79;
      }
      if ( v33 )
      {
        v15 = CmpResetCachedSecurity(BugCheckParameter3, v10);
        v16 = v15;
        if ( v15 < 0 )
        {
          v30 = 184;
          goto LABEL_59;
        }
      }
      else
      {
        v15 = CmpAddSecurityCellToCache(BugCheckParameter3);
        v16 = v15;
        if ( v15 < 0 )
        {
          v30 = 176;
          goto LABEL_59;
        }
      }
      v11 = v10;
      v10 = v6[1];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v34);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v34);
      if ( v10 == v36 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v17 = HvpGetCellFlat(BugCheckParameter3, v10, (unsigned int *)&v34);
        else
          v17 = HvpGetCellPaged(BugCheckParameter3, v10);
        v6 = (_DWORD *)v17;
        if ( *(_DWORD *)(v17 + 8) != v11 )
        {
          v30 = 200;
          goto LABEL_48;
        }
        if ( !v33 )
          CmpAdjustSecurityCacheSize(BugCheckParameter3);
        if ( (a2 & 0x2000000) != 0 && *(_DWORD *)(BugCheckParameter3 + 1880) > 1u )
        {
          for ( i = 0; i < *(_DWORD *)(BugCheckParameter3 + 1880); ++i )
          {
            v20 = CmpCheckSecurityCellAccess(BugCheckParameter3);
            v16 = v20;
            if ( v20 < 0 )
            {
              SetFailureLocation(a5, 0, 9, v20, 208);
              if ( v16 != -1073741670 )
                v16 = -1073741492;
              goto LABEL_31;
            }
          }
        }
        v16 = 0;
        goto LABEL_31;
      }
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v34);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v34);
    v32 = 152;
LABEL_79:
    v6 = 0LL;
    SetFailureLocation(a5, 1, 9, -1073741492, v32);
LABEL_80:
    if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
    {
      v30 = 112;
      goto LABEL_48;
    }
    if ( !HvIsCellAllocated(BugCheckParameter3, *(_DWORD *)(v9 + 44)) )
    {
      v30 = 32;
      goto LABEL_48;
    }
    v24 = *(unsigned int *)(v9 + 44);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v25 = HvpGetCellFlat(BugCheckParameter3, v24, (unsigned int *)&v34);
    else
      v25 = HvpGetCellPaged(BugCheckParameter3, v24);
    v6 = (_DWORD *)v25;
    if ( !v25 )
    {
      v30 = 48;
      goto LABEL_48;
    }
    v26 = -4 - *(_DWORD *)(v25 - 4);
    if ( v26 < 0x14 || (v27 = *(_DWORD *)(v25 + 16), v27 + 20 < v27) || v27 + 20 > v26 )
    {
      v30 = 80;
      goto LABEL_48;
    }
    if ( !RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v25 + 20), v27, 0) )
    {
      v30 = 64;
      goto LABEL_48;
    }
    v15 = HvpMarkCellDirty(BugCheckParameter3, *(_DWORD *)(v9 + 44), 0);
    v16 = v15;
    if ( v15 >= 0 )
    {
      v28 = *(_DWORD *)(v9 + 44);
      v6[2] = v28;
      v6[1] = v28;
      CmpDestroySecurityCache(BugCheckParameter3);
      CmpInitSecurityCache(BugCheckParameter3);
      v16 = -1073741267;
      v29 = *(_QWORD *)(BugCheckParameter3 + 64);
      *a3 = 1;
      *(_DWORD *)(v29 + 4088) |= 4u;
      goto LABEL_31;
    }
    v30 = 96;
LABEL_59:
    v22 = v15;
    v21 = a5;
    goto LABEL_50;
  }
  v21 = a5;
  if ( a5 )
    *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
  v30 = 24;
LABEL_49:
  v22 = -1073741492;
  v16 = -1073741492;
LABEL_50:
  SetFailureLocation(v21, 0, 9, v22, v30);
LABEL_31:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v35);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v35);
  if ( v6 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v34);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v34);
  }
  return v16;
}
