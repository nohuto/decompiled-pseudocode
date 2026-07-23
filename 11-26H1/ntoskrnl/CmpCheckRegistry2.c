/*
 * XREFs of CmpCheckRegistry2 @ 0x140A1DAC0
 * Callers:
 *     CmCheckRegistry @ 0x140B87680 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x140A1D604 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x140A1D918 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpCheckKey @ 0x140A1E430 (CmpCheckKey.c)
 */

__int64 __fastcall CmpCheckRegistry2(
        ULONG_PTR BugCheckParameter3,
        int a2,
        int a3,
        __int64 a4,
        char a5,
        _RTL_BITMAP *BitMapHeader,
        __int64 a7,
        int *a8)
{
  int v9; // r12d
  int v11; // edi
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rdx
  int *v15; // rcx
  int v16; // esi
  __int64 v17; // r14
  unsigned int *v18; // rbx
  int v19; // eax
  int v20; // eax
  int v21; // edi
  unsigned int v22; // edi
  bool v23; // zf
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  WCHAR *v28; // r15
  __int16 v29; // cx
  WCHAR *v30; // r12
  unsigned __int16 v31; // bx
  unsigned __int16 v32; // di
  unsigned int v33; // r14d
  unsigned int v34; // esi
  int v35; // ecx
  __int64 v36; // rdx
  __int64 CellFlat; // rax
  unsigned int v38; // ebx
  __int64 v39; // rdx
  _WORD *CellPaged; // rax
  _WORD *v41; // rsi
  int v42; // ebx
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // rdx
  bool v46; // sf
  unsigned int i; // edi
  __int64 v48; // rdx
  __int64 v49; // rax
  _WORD *v50; // rcx
  unsigned int v51; // eax
  int v52; // eax
  int v53; // eax
  unsigned __int16 v55; // r14
  unsigned __int16 j; // si
  int v57; // ecx
  WCHAR v58; // di
  unsigned int v59; // ebx
  WCHAR v60; // r14
  unsigned int v61; // esi
  int v62; // r14d
  int v63; // eax
  int v64; // eax
  unsigned int v65[2]; // [rsp+40h] [rbp-49h] BYREF
  int v66; // [rsp+48h] [rbp-41h]
  __int64 v67; // [rsp+50h] [rbp-39h] BYREF
  unsigned int v68[2]; // [rsp+58h] [rbp-31h] BYREF
  unsigned int v69[2]; // [rsp+60h] [rbp-29h] BYREF
  unsigned int v70[2]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v71; // [rsp+70h] [rbp-19h]
  __int64 v72; // [rsp+78h] [rbp-11h]
  __int64 v73; // [rsp+80h] [rbp-9h]
  int v74; // [rsp+D0h] [rbp+47h]
  char v76; // [rsp+E8h] [rbp+5Fh]

  v9 = 0;
  v76 = 0;
  v67 = 0LL;
  v11 = a2;
  HvpGetCellContextInitialize(&v67);
  v12 = guard_dispatch_icall_no_overrides(10240LL, 0LL);
  v71 = v12;
  v13 = v12;
  if ( !v12 )
  {
    SetFailureLocation(a7, 0, 13, -1073741670, 0);
    return 3221225626LL;
  }
  v14 = a7;
  if ( a7 )
    *(_QWORD *)(a7 + 232) = v12;
  v15 = a8;
  v16 = 0;
  *(_DWORD *)v12 = a3;
  v17 = 0LL;
  *(_QWORD *)(v12 + 4) = -1LL;
  *(_DWORD *)(v12 + 12) = 0;
  *a8 = 0;
  *(_BYTE *)(v12 + 16) = 0;
  v74 = 0;
  v72 = 0LL;
  v66 = -1073741492;
  while ( 1 )
  {
    if ( v17 < 0 )
    {
      if ( (v11 & 0x20000) != 0 || (v52 = CmpCheckAndFixSecurityCellsRefcount(BugCheckParameter3), v21 = v52, v52 >= 0) )
      {
        if ( v76 )
          v21 = -2147483606;
        else
          v21 = 0;
      }
      else
      {
        SetFailureLocation(a7, 0, 13, v52, 112);
      }
      goto LABEL_110;
    }
    v18 = (unsigned int *)(v13 + 20 * v17);
    if ( !*((_BYTE *)v18 + 16) )
      break;
LABEL_42:
    v36 = *(unsigned int *)(v13 + 20 * v17);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v36, (unsigned int *)&v67);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v36);
    if ( !CellFlat )
    {
      v21 = -1073741492;
      SetFailureLocation(a7, 0, 13, -1073741492, 64);
      goto LABEL_110;
    }
    v38 = *(_DWORD *)(v13 + 20 * v17 + 12);
    if ( v38 >= *(_DWORD *)(CellFlat + 20) )
    {
      --v16;
      --v17;
      v74 = v16;
      v72 = v17;
    }
    else
    {
      v23 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
      v39 = *(unsigned int *)(CellFlat + 28);
      v70[0] = -1;
      v70[1] = 0;
      if ( v23 )
        CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3, v39);
      else
        CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v39, v70);
      v41 = CellPaged;
      if ( !CellPaged )
      {
        v53 = 80;
        goto LABEL_107;
      }
      v65[0] = -1;
      v65[1] = 0;
      if ( *CellPaged == 26994 )
      {
        for ( i = 0; i < (unsigned __int16)v41[1]; ++i )
        {
          v48 = *(unsigned int *)&v41[2 * i + 2];
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v49 = HvpGetCellFlat(BugCheckParameter3, v48, v65);
          else
            v49 = HvpGetCellPaged(BugCheckParameter3, v48);
          v50 = (_WORD *)v49;
          if ( !v49 )
          {
            v42 = -1;
            goto LABEL_52;
          }
          v51 = *(unsigned __int16 *)(v49 + 2);
          if ( v38 < v51 )
          {
            if ( *v50 == 26220 || *v50 == 26732 )
              v42 = *(_DWORD *)&v50[4 * v38 + 2];
            else
              v42 = *(_DWORD *)&v50[2 * v38 + 2];
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, (__int64)v65);
            else
              HvpReleaseCellPaged(BugCheckParameter3, v65);
            goto LABEL_52;
          }
          v38 -= v51;
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, (__int64)v65);
          else
            HvpReleaseCellPaged(BugCheckParameter3, v65);
        }
      }
      if ( *v41 == 26220 || *v41 == 26732 )
        v42 = *(_DWORD *)&v41[4 * v38 + 2];
      else
        v42 = *(_DWORD *)&v41[2 * v38 + 2];
LABEL_52:
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v70);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v70);
      if ( v42 == -1 )
      {
        v53 = 88;
LABEL_107:
        v21 = -1073741670;
        v66 = -1073741670;
LABEL_108:
        SetFailureLocation(a7, 0, 13, v66, v53);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v67);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v67);
        goto LABEL_110;
      }
      v16 = v74 + 1;
      v43 = 5 * v17;
      ++v74;
      v44 = *(_DWORD *)(v13 + 20 * v17++ + 12) + 1;
      *(_DWORD *)(v13 + 4 * v43 + 12) = v44;
      v72 = v17;
      if ( v17 == 512 )
      {
        v21 = -1073741492;
        v53 = 96;
        goto LABEL_108;
      }
      v45 = v13 + 20 * v17;
      *(_DWORD *)v45 = v42;
      *(_DWORD *)(v45 + 4) = *(_DWORD *)(v45 - 20);
      *(_DWORD *)(v45 + 8) = -1;
      *(_DWORD *)(v45 + 12) = 0;
      *(_BYTE *)(v45 + 16) = 0;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v67);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v67);
    v15 = a8;
    v14 = a7;
    v11 = a2;
  }
  v19 = *v15;
  *((_BYTE *)v18 + 16) = 1;
  if ( v19 != -1 )
    *v15 = v19 + 1;
  v20 = CmpCheckKey(BugCheckParameter3, a5, BitMapHeader, v14);
  v21 = v20;
  if ( v20 == -2147483606 )
  {
    v76 = 1;
    goto LABEL_11;
  }
  if ( v20 >= 0 )
  {
LABEL_11:
    if ( (a2 & 0x100000) == 0 || v17 <= 0 )
      goto LABEL_42;
    v22 = *(_DWORD *)(v13 + 20 * v17 - 12);
    if ( v22 == -1 )
      goto LABEL_41;
    v23 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v24 = *v18;
    v68[0] = -1;
    v68[1] = 0;
    v69[0] = -1;
    v69[1] = 0;
    if ( v23 )
      v25 = HvpGetCellPaged(BugCheckParameter3, v24);
    else
      v25 = HvpGetCellFlat(BugCheckParameter3, v24, v68);
    v26 = v25;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v27 = HvpGetCellFlat(BugCheckParameter3, v22, v69);
    else
      v27 = HvpGetCellPaged(BugCheckParameter3, v22);
    v73 = v27;
    if ( !v26 || !v27 )
    {
      v21 = -1073741670;
      if ( !v26 )
      {
LABEL_36:
        if ( v73 )
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, (__int64)v69);
          else
            HvpReleaseCellPaged(BugCheckParameter3, v69);
        }
        if ( v21 < 0 )
        {
          if ( v21 != -1073741492 )
          {
            SetFailureLocation(a7, 0, 13, v21, 37);
            goto LABEL_110;
          }
          v63 = 48;
          v16 = v74;
          v62 = a2 & 0x20000;
          goto LABEL_146;
        }
        v16 = v74;
LABEL_41:
        *(_DWORD *)(v13 + 20 * v17 - 12) = *(_DWORD *)(v13 + 20 * v17);
        goto LABEL_42;
      }
LABEL_33:
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v68);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v68);
      v17 = v72;
      goto LABEL_36;
    }
    v28 = (WCHAR *)(v27 + 76);
    v29 = *(_WORD *)(v27 + 2) & 0x20;
    v30 = (WCHAR *)(v26 + 76);
    if ( (*(_BYTE *)(v26 + 2) & 0x20) != 0 )
    {
      v31 = *(_WORD *)(v27 + 72);
      v32 = *(_WORD *)(v26 + 72);
      if ( v29 )
      {
        while ( v31 && v32 )
        {
          v33 = *(unsigned __int8 *)v28;
          v28 = (WCHAR *)((char *)v28 + 1);
          v34 = *(unsigned __int8 *)v30;
          v30 = (WCHAR *)((char *)v30 + 1);
          if ( (_WORD)v33 != (_WORD)v34 )
          {
            if ( v33 >= 0x61 )
            {
              if ( v33 > 0x7A )
                LOWORD(v33) = RtlUpcaseUnicodeChar(v33);
              else
                LOWORD(v33) = v33 - 32;
            }
            if ( v34 >= 0x61 )
            {
              if ( v34 > 0x7A )
                LOWORD(v34) = RtlUpcaseUnicodeChar(v34);
              else
                LOWORD(v34) = v34 - 32;
            }
            v35 = (unsigned __int16)v33 - (unsigned __int16)v34;
            if ( (unsigned __int16)v33 != (unsigned __int16)v34 )
              goto LABEL_63;
          }
          --v31;
          --v32;
        }
      }
      else
      {
        for ( v31 >>= 1; v31 && v32; --v31 )
        {
          v60 = *v28++;
          v61 = *(unsigned __int8 *)v30;
          v30 = (WCHAR *)((char *)v30 + 1);
          if ( v60 != (_WORD)v61 )
          {
            if ( v60 >= 0x61u )
            {
              if ( v60 > 0x7Au )
                v60 = RtlUpcaseUnicodeChar(v60);
              else
                v60 -= 32;
            }
            if ( v61 >= 0x61 )
            {
              if ( v61 > 0x7A )
                LOWORD(v61) = RtlUpcaseUnicodeChar(v61);
              else
                LOWORD(v61) = v61 - 32;
            }
            v35 = v60 - (unsigned __int16)v61;
            if ( v60 != (unsigned __int16)v61 )
              goto LABEL_63;
          }
          --v32;
        }
      }
      v35 = v31 - v32;
LABEL_63:
      v46 = v35 < 0;
    }
    else
    {
      if ( v29 )
      {
        v55 = *(_WORD *)(v27 + 72);
        for ( j = *(_WORD *)(v26 + 72) >> 1; j && v55; --j )
        {
          v58 = *v30++;
          v59 = *(unsigned __int8 *)v28;
          v28 = (WCHAR *)((char *)v28 + 1);
          if ( v58 != (_WORD)v59 )
          {
            if ( v58 >= 0x61u )
            {
              if ( v58 > 0x7Au )
                v58 = RtlUpcaseUnicodeChar(v58);
              else
                v58 -= 32;
            }
            if ( v59 >= 0x61 )
            {
              if ( v59 > 0x7A )
                LOWORD(v59) = RtlUpcaseUnicodeChar(v59);
              else
                LOWORD(v59) = v59 - 32;
            }
            v57 = v58 - (unsigned __int16)v59;
            if ( v58 != (unsigned __int16)v59 )
              goto LABEL_117;
          }
          --v55;
        }
        v57 = j - v55;
LABEL_117:
        if ( v57 <= 0 )
        {
          v13 = v71;
          v21 = -1073741492;
          v9 = 0;
          goto LABEL_33;
        }
        goto LABEL_87;
      }
      v46 = RtlCompareUnicodeStrings(
              (PCWCH)(v27 + 76),
              (unsigned __int64)*(unsigned __int16 *)(v27 + 72) >> 1,
              (PCWCH)(v26 + 76),
              (unsigned __int64)*(unsigned __int16 *)(v26 + 72) >> 1,
              1u) < 0;
    }
    if ( !v46 )
    {
      v13 = v71;
      v21 = -1073741492;
      v9 = 0;
      goto LABEL_33;
    }
LABEL_87:
    v13 = v71;
    v9 = 0;
    v21 = 0;
    goto LABEL_33;
  }
  if ( v20 != -1073741492 )
    goto LABEL_110;
  v62 = a2 & 0x20000;
  if ( (a2 & 0x20000) == 0 && (BYTE2(NlsMbOemCodePageTag) || (CmpContextListLock.ApcStateFill[36] & 6) != 0) )
    v9 = 1;
  v63 = 16;
LABEL_146:
  SetFailureLocation(a7, v9, 13, v21, v63);
  if ( !v62 && (BYTE2(NlsMbOemCodePageTag) || (CmpContextListLock.ApcStateFill[36] & 6) != 0) && v16 )
  {
    v64 = CmpRemoveSubKeyCellNoCellRef(
            BugCheckParameter3,
            *(_DWORD *)(v13 + 20LL * v16 + 4),
            *(_DWORD *)(v13 + 20LL * v16));
    v21 = v64;
    if ( v64 < 0 )
    {
      SetFailureLocation(a7, 0, 13, v64, 32);
    }
    else
    {
      v21 = -1073741267;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    }
  }
  else
  {
    v21 = -1073741492;
    SetFailureLocation(a7, 0, 13, -1073741492, 24);
  }
LABEL_110:
  guard_dispatch_icall_no_overrides(v13, 10240LL);
  return (unsigned int)v21;
}
