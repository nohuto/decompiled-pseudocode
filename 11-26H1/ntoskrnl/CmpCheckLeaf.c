/*
 * XREFs of CmpCheckLeaf @ 0x140A20814
 * Callers:
 *     CmpCheckKey @ 0x140A1E430 (CmpCheckKey.c)
 * Callees:
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpHashUnicodeComponent @ 0x1408D7A30 (CmpHashUnicodeComponent.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvpMapEntryIsDiscardable @ 0x1408DF910 (HvpMapEntryIsDiscardable.c)
 *     CmpGenerateFastLeafHintForUnicodeString @ 0x140A20C44 (CmpGenerateFastLeafHintForUnicodeString.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140C5E6F0 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140C5EAA0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall CmpCheckLeaf(ULONG_PTR BugCheckParameter3, int a2, _WORD *a3, int a4, __int64 a5)
{
  _WORD *v7; // r8
  unsigned int v8; // ecx
  unsigned int v9; // r10d
  _BYTE *v10; // r15
  _BYTE *v11; // r14
  __int64 CellMap; // rax
  __int64 v13; // rdi
  unsigned int v14; // r10d
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 CellFlat; // rax
  __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // edi
  __int16 v22; // ax
  unsigned __int8 *v23; // r15
  __int16 v24; // ax
  int j; // r14d
  WCHAR v26; // ax
  __int64 v27; // r15
  bool v28; // zf
  unsigned int v29; // edi
  int v31; // eax
  int *v32; // rcx
  __int64 BinAddress; // r9
  unsigned int v34; // r8d
  unsigned int v35; // edx
  unsigned int v36; // r9d
  char v37; // di
  int *v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  unsigned __int8 v41; // al
  int v42; // ecx
  int v43; // eax
  int v44; // eax
  int v45; // [rsp+30h] [rbp-30h] BYREF
  unsigned int i; // [rsp+34h] [rbp-2Ch]
  __int64 v47; // [rsp+38h] [rbp-28h] BYREF
  __int64 v48; // [rsp+40h] [rbp-20h] BYREF
  __m128i v49; // [rsp+48h] [rbp-18h] BYREF
  char v51; // [rsp+B0h] [rbp+50h]

  v47 = 0LL;
  v51 = 0;
  v49 = 0LL;
  HvpGetCellContextInitialize(&v47);
  if ( *v7 != 26732 && *v7 != 26220 )
    return 0;
  v8 = 0;
  for ( i = 0; ; ++i )
  {
    if ( v8 >= (unsigned __int16)a3[1] )
      return v51 != 0 ? 0x8000002A : 0;
    v48 = 0LL;
    LOWORD(v45) = 0;
    HvpGetCellContextInitialize(&v48);
    HvpGetBinContextInitialize(&v45);
    v10 = (_BYTE *)(BugCheckParameter3 + 140);
    v11 = (_BYTE *)(BugCheckParameter3 + 140);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      break;
    if ( (v9 & 0x7FFFFFFF) < *(_DWORD *)(632 * ((unsigned __int64)v9 >> 31) + BugCheckParameter3 + 280) && (v9 & 7) == 0 )
    {
      CellMap = HvpGetCellMap(BugCheckParameter3, v9);
      v13 = CellMap;
      if ( CellMap )
      {
        if ( !HvpMapEntryIsDiscardable(CellMap) )
        {
          v15 = (*v10 & 1) != 0
              ? HvpGetCellFlat(BugCheckParameter3, v14, (unsigned int *)&v48)
              : HvpGetCellPaged(BugCheckParameter3, v14);
          if ( !v15 || v15 == 4 )
            goto LABEL_12;
          BinAddress = HvpMapEntryGetBinAddress(v15 - 4, v13, &v45, v16);
          v34 = (_DWORD)v32 - BinAddress;
          v35 = -*v32;
          if ( *v32 >= 0
            || v35 - 8 > 0xFFFF8
            || (v36 = *(_DWORD *)(BinAddress + 8), v35 > (unsigned __int64)v36 - 32)
            || v34 - *v32 > v36
            || (v37 = 1, v34 < 0x20) )
          {
            v37 = 0;
          }
          if ( (*v10 & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v48);
          else
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v48);
          if ( v37 )
          {
LABEL_12:
            v11 = (_BYTE *)(BugCheckParameter3 + 140);
            break;
          }
        }
      }
    }
LABEL_27:
    v8 = i + 1;
  }
  v17 = *(unsigned int *)&a3[4 * i + 2];
  if ( (*v10 & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v17, (unsigned int *)&v47);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v17);
  v19 = CellFlat;
  if ( !CellFlat )
  {
    v29 = -1073741670;
    SetFailureLocation(a5, 0, 23, -1073741670, 0);
    return v29;
  }
  v20 = -4 - *(_DWORD *)(CellFlat - 4);
  if ( v20 < 0x4C || (v21 = *(unsigned __int16 *)(v19 + 72), v21 > v20 - 76) )
  {
    v28 = (*v11 & 1) == 0;
LABEL_25:
    if ( v28 )
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v47);
    else
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v47);
    goto LABEL_27;
  }
  v22 = *(_WORD *)(v19 + 2);
  v23 = (unsigned __int8 *)(v19 + 76);
  v49.m128i_i16[1] = *(_WORD *)(v19 + 72);
  v24 = v22 & 0x20;
  v49.m128i_i16[0] = v21;
  v49.m128i_i64[1] = v19 + 76;
  if ( *a3 == 26732 )
  {
    if ( v24 )
    {
      for ( j = 0; v21; --v21 )
      {
        v26 = *v23;
        if ( (unsigned __int8)v26 >= 0x61u )
        {
          if ( (unsigned __int8)v26 > 0x7Au )
            v26 = RtlUpcaseUnicodeChar(*v23);
          else
            v26 -= 32;
        }
        ++v23;
        j = v26 + 37 * j;
      }
      goto LABEL_23;
    }
    if ( (v21 & 1) != 0 )
      goto LABEL_24;
    v31 = CmpHashUnicodeComponent(&v49);
LABEL_37:
    j = v31;
    goto LABEL_23;
  }
  if ( !v24 )
  {
    v31 = CmpGenerateFastLeafHintForUnicodeString(&v49);
    goto LABEL_37;
  }
  v45 = 0;
  j = 0;
  if ( (unsigned __int16)v21 >= 4u )
  {
    v21 = 4;
  }
  else if ( !v21 )
  {
    goto LABEL_23;
  }
  v38 = &v45;
  v39 = v21;
  v40 = 0LL;
  do
  {
    v41 = v23[v40++];
    *(_BYTE *)v38 = v41;
    v38 = (int *)((char *)v38 + 1);
    --v39;
  }
  while ( v39 );
  j = v45;
LABEL_23:
  v27 = i;
  if ( *(_DWORD *)&a3[4 * i + 4] == j )
  {
LABEL_24:
    v28 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    goto LABEL_25;
  }
  v42 = -1073741492;
  v29 = -1073741492;
  v51 = 1;
  if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
  {
    v43 = 16;
    goto LABEL_68;
  }
  SetFailureLocation(a5, 1, 23, -1073741492, 32);
  v44 = HvpMarkCellDirty(BugCheckParameter3, a4, 0);
  v29 = v44;
  if ( v44 >= 0 )
  {
    *(_DWORD *)&a3[4 * v27 + 4] = j;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    goto LABEL_24;
  }
  v42 = v44;
  v43 = 48;
LABEL_68:
  SetFailureLocation(a5, 0, 23, v42, v43);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v47);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v47);
  return v29;
}
