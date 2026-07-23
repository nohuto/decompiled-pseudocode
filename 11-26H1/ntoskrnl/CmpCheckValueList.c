/*
 * XREFs of CmpCheckValueList @ 0x1408DFC60
 * Callers:
 *     CmpCheckKey @ 0x140A1E430 (CmpCheckKey.c)
 * Callees:
 *     RtlClearBits @ 0x14035AF40 (RtlClearBits.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvIsCellAllocated @ 0x1408DF710 (HvIsCellAllocated.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvpMapEntryIsDiscardable @ 0x1408DF910 (HvpMapEntryIsDiscardable.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 *     HvpMarkDirty @ 0x1408E1510 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140C5E6F0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140C5E710 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140C5EAA0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall CmpCheckValueList(
        ULONG_PTR BugCheckParameter3,
        char a2,
        __int64 a3,
        unsigned int a4,
        ULONG_PTR BugCheckParameter3a,
        int a6,
        PRTL_BITMAP BitMapHeader,
        __int64 a8,
        _DWORD *a9,
        unsigned int *a10)
{
  __int64 v10; // rsi
  unsigned int v11; // r12d
  __int64 v12; // rdi
  char v13; // r14
  unsigned int v15; // r15d
  unsigned int v16; // r12d
  ULONG v17; // r10d
  unsigned __int64 v18; // rdx
  __int64 CellMap; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // r9
  bool v24; // zf
  _DWORD *v25; // rax
  __int64 BinAddress; // rax
  __int64 v27; // rcx
  unsigned int v28; // r11d
  __int64 v29; // rdx
  __int64 v30; // r10
  bool v31; // di
  __int64 v32; // rax
  __int64 v33; // r10
  unsigned int v34; // eax
  int v35; // edx
  ULONG_PTR v36; // rsi
  __int16 v37; // r9
  unsigned __int16 v38; // cx
  unsigned __int16 v39; // ax
  unsigned int v40; // r15d
  unsigned int v41; // r14d
  __int64 v42; // rsi
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // r9
  __int64 v48; // rcx
  _DWORD *v49; // r10
  _DWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  unsigned int v53; // r9d
  __int64 v54; // rdx
  __int64 v55; // r8
  bool v56; // di
  __int64 v57; // rax
  unsigned int v58; // eax
  unsigned int v59; // ecx
  unsigned int v60; // edi
  __int64 v61; // rcx
  __int64 CellFlat; // rax
  __int64 v63; // r14
  int v64; // eax
  __int64 CellPaged; // rax
  __int64 v66; // r10
  __int64 v67; // rax
  unsigned int v68; // edi
  unsigned __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // r14
  __int64 v72; // rax
  __int64 v73; // rcx
  _DWORD *v74; // r9
  _DWORD *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rcx
  unsigned int v78; // r11d
  __int64 v79; // rdx
  __int64 v80; // r10
  bool v81; // di
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rdi
  unsigned __int64 v85; // rcx
  unsigned int i; // r15d
  unsigned int *v87; // r14
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // r12
  __int64 v91; // rcx
  int v92; // r9d
  int v93; // eax
  unsigned int *v94; // rdx
  __int64 v95; // rcx
  __int64 v97; // rcx
  WCHAR *v98; // r13
  struct _LIST_ENTRY *Blink; // r12
  unsigned __int16 v100; // r15
  unsigned __int16 j; // di
  int v102; // ecx
  int v103; // eax
  ULONG_PTR v104; // rdi
  __int64 v105; // rax
  __int64 v106; // r10
  __int64 v107; // rax
  ULONG_PTR v108; // rax
  int v109; // eax
  unsigned __int16 v110; // r14
  WCHAR v111; // di
  WCHAR v112; // si
  int v113; // ecx
  WCHAR Flink; // r14
  unsigned int v115; // esi
  __int64 v116; // r13
  __int64 v117; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-69h]
  int BugCheckParameter4a; // [rsp+20h] [rbp-69h]
  int BugCheckParameter4b; // [rsp+20h] [rbp-69h]
  int BugCheckParameter4c; // [rsp+20h] [rbp-69h]
  char v122; // [rsp+30h] [rbp-59h]
  unsigned int v123; // [rsp+34h] [rbp-55h]
  unsigned int v124[2]; // [rsp+38h] [rbp-51h] BYREF
  __int16 v125; // [rsp+40h] [rbp-49h] BYREF
  __int64 v126; // [rsp+48h] [rbp-41h] BYREF
  unsigned int v127[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v128; // [rsp+58h] [rbp-31h] BYREF
  unsigned int v129[2]; // [rsp+60h] [rbp-29h] BYREF
  unsigned int v130[2]; // [rsp+68h] [rbp-21h] BYREF
  unsigned int v131[2]; // [rsp+70h] [rbp-19h] BYREF
  unsigned int v132[2]; // [rsp+78h] [rbp-11h] BYREF
  unsigned int v133[16]; // [rsp+80h] [rbp-9h] BYREF
  unsigned int v136; // [rsp+E8h] [rbp+5Fh]

  v136 = a4;
  v10 = a8;
  v123 = 0;
  v11 = a4;
  v124[0] = -1;
  v12 = a3;
  v124[1] = 0;
  v13 = a2;
  v127[0] = -1;
  v127[1] = 0;
  v15 = 0;
  v131[0] = -1;
  v131[1] = 0;
  v130[0] = -1;
  v130[1] = 0;
  v129[0] = -1;
  v129[1] = 0;
  v122 = 0;
  if ( a8 )
  {
    *(_QWORD *)(a8 + 272) = a3;
    *(_DWORD *)(a8 + 280) = -1;
    *(_DWORD *)(a8 + 284) = 0;
    *(_QWORD *)(a8 + 288) = 0LL;
  }
  *a9 = 0;
  *a10 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v15 >= v11 )
      {
        if ( v122 )
          return (unsigned int)-2147483606;
        else
          return 0;
      }
      v16 = *(_DWORD *)(v12 + 4LL * v15);
      LODWORD(v128) = v16;
      if ( v13 && v136 != 1 )
      {
        v60 = -1073741492;
        SetFailureLocation(v10, 0, 15, -1073741492, 64);
        goto LABEL_312;
      }
      if ( v16 != -1 )
        break;
      v122 = 1;
      v60 = -1073741492;
      SetFailureLocation(v10, 1, 15, -1073741492, 80);
      if ( v10 )
      {
        *(_DWORD *)(v10 + 280) = v15;
        *(_DWORD *)(v10 + 284) = -1;
      }
LABEL_108:
      if ( (a6 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpContextListLock.ApcStateFill[36] & 6) == 0 )
      {
        SetFailureLocation(v10, 0, 15, -1073741492, 48);
        return v60;
      }
      SetFailureLocation(v10, 1, 15, -1073741492, 0);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, BugCheckParameter3a, v131);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3, (unsigned int)BugCheckParameter3a);
      v63 = CellFlat;
      if ( !CellFlat )
      {
        v60 = -1073741670;
        SetFailureLocation(v10, 0, 15, -1073741670, 16);
        return v60;
      }
      v64 = *(_DWORD *)(BugCheckParameter3 + 160);
      v132[0] = -1;
      v132[1] = 0;
      if ( (v64 & 1) == 0 && (BugCheckParameter3a & 0x80000000) == 0LL )
      {
        HvLockHiveWriter(BugCheckParameter3);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellPaged = HvpGetCellFlat(BugCheckParameter3, BugCheckParameter3a, v132);
        else
          CellPaged = HvpGetCellPaged(BugCheckParameter3, (unsigned int)BugCheckParameter3a);
        v66 = 0LL;
        v24 = CellPaged == 0;
        v67 = CellPaged - 4;
        if ( !v24 )
          v66 = v67;
        if ( v66 )
        {
          if ( !HvpGetCellMap(BugCheckParameter3, (unsigned int)BugCheckParameter3a) )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter3, (unsigned int)BugCheckParameter3a, 0x2A7uLL);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, (__int64)v132);
          else
            HvpReleaseCellPaged(BugCheckParameter3, v132);
          v60 = HvpMarkDirty(BugCheckParameter3);
          HvUnlockHiveWriter(BugCheckParameter3);
          v10 = a8;
          if ( (v60 & 0x80000000) == 0 )
          {
            *(_BYTE *)(BugCheckParameter3 + 141) = 1;
            goto LABEL_242;
          }
          v92 = v60;
        }
        else
        {
          HvUnlockHiveWriter(BugCheckParameter3);
          v92 = -1073741670;
          v60 = -1073741670;
        }
        v93 = 24;
        goto LABEL_183;
      }
LABEL_242:
      v103 = *(_DWORD *)(BugCheckParameter3 + 160);
      v104 = *(unsigned int *)(v63 + 40);
      v133[0] = -1;
      v133[1] = 0;
      if ( (v103 & 1) != 0 || (v104 & 0x80000000) != 0LL )
        goto LABEL_257;
      HvLockHiveWriter(BugCheckParameter3);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v105 = HvpGetCellFlat(BugCheckParameter3, v104, v133);
      else
        v105 = HvpGetCellPaged(BugCheckParameter3, (unsigned int)v104);
      v106 = 0LL;
      v24 = v105 == 0;
      v107 = v105 - 4;
      if ( !v24 )
        v106 = v107;
      if ( !v106 )
      {
        HvUnlockHiveWriter(BugCheckParameter3);
        v92 = -1073741670;
        v60 = -1073741670;
LABEL_182:
        v93 = 40;
LABEL_183:
        SetFailureLocation(v10, 0, 15, v92, v93);
        v94 = v131;
        v95 = BugCheckParameter3;
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          goto LABEL_365;
        goto LABEL_184;
      }
      if ( !HvpGetCellMap(BugCheckParameter3, (unsigned int)v104) )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter3, v104, 0x2A7uLL);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v133);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v133);
      v60 = HvpMarkDirty(BugCheckParameter3);
      HvUnlockHiveWriter(BugCheckParameter3);
      if ( (v60 & 0x80000000) != 0 )
      {
        v10 = a8;
        v92 = v60;
        goto LABEL_182;
      }
      *(_BYTE *)(BugCheckParameter3 + 141) = 1;
LABEL_257:
      v12 = a3;
      --*(_DWORD *)(v63 + 36);
      v11 = v136 - 1;
      v136 = v11;
      memmove((void *)(a3 + 4LL * v15), (const void *)(a3 + 4LL * (v15 + 1)), 4LL * (v11 - v15));
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v131);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v131);
      v13 = a2;
      v10 = a8;
    }
    v126 = 0LL;
    v125 = 0;
    HvpGetCellContextInitialize(&v126);
    HvpGetBinContextInitialize(&v125);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      goto LABEL_34;
    if ( (v16 & 0x7FFFFFFF) >= *(_DWORD *)(632LL * (v16 >> 31) + BugCheckParameter3 + 280) || (v16 & 7) != 0 )
      goto LABEL_306;
    if ( BitMapHeader && (v16 & 0x80000000) == 0 )
    {
      v18 = v16 >> 3;
      if ( !_bittest64((const signed __int64 *)BitMapHeader->Buffer, v18) )
        goto LABEL_306;
      RtlClearBits(BitMapHeader, v18, v17);
    }
    CellMap = HvpGetCellMap(BugCheckParameter3, v16);
    v20 = CellMap;
    if ( !CellMap || HvpMapEntryIsDiscardable(CellMap) )
      goto LABEL_306;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v21 = HvpGetCellFlat(BugCheckParameter3, v16, (unsigned int *)&v126);
    else
      v21 = HvpGetCellPaged(BugCheckParameter3, v16);
    v22 = v21;
    v23 = 0LL;
    v24 = v21 == 0;
    v25 = (_DWORD *)(v21 - 4);
    if ( !v24 )
      v23 = v25;
    if ( v23 )
    {
      BinAddress = HvpMapEntryGetBinAddress(v22, v20, &v125, v23);
      v27 = (unsigned int)*v23;
      v28 = (_DWORD)v23 - BinAddress;
      v29 = (unsigned int)-*v23;
      v31 = 0;
      if ( (int)v27 < 0 )
      {
        v27 = (unsigned int)(v29 - 8);
        if ( (unsigned int)v27 <= 0xFFFF8 )
        {
          v30 = *(unsigned int *)(BinAddress + 8);
          v27 = v30 - 32;
          if ( (unsigned int)v29 <= (unsigned __int64)(v30 - 32) && v28 - *v23 <= (unsigned int)v30 && v28 >= 0x20 )
            v31 = 1;
        }
      }
      if ( BinAddress )
        HvpMapEntryReleaseBinAddress(v27, v29, &v125);
    }
    else
    {
      v31 = 1;
    }
    if ( v23 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v126);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v126);
    }
    if ( !v31 )
    {
LABEL_306:
      v60 = -1073741492;
      v122 = 1;
      SetFailureLocation(v10, 1, 15, -1073741492, 96);
      if ( v10 )
      {
        *(_DWORD *)(v10 + 280) = v15;
        *(_DWORD *)(v10 + 284) = v16;
      }
      goto LABEL_108;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    {
LABEL_34:
      v32 = HvpGetCellFlat(BugCheckParameter3, v16, v124);
      goto LABEL_35;
    }
    v32 = HvpGetCellPaged(BugCheckParameter3, v16);
LABEL_35:
    v126 = v32;
    v33 = v32;
    if ( !v32 )
    {
      v60 = -1073741670;
      SetFailureLocation(v10, 0, 15, -1073741670, 112);
LABEL_312:
      if ( v10 )
      {
        *(_DWORD *)(v10 + 280) = v15;
        *(_DWORD *)(v10 + 284) = v16;
      }
      return v60;
    }
    v34 = -4 - *(_DWORD *)(v32 - 4);
    if ( v34 < 0x14 )
    {
      BugCheckParameter4a = 128;
LABEL_268:
      v60 = -1073741492;
      v122 = 1;
      SetFailureLocation(v10, 1, 15, -1073741492, BugCheckParameter4a);
LABEL_104:
      if ( v10 )
      {
LABEL_105:
        *(_QWORD *)(v10 + 288) = v126;
        *(_DWORD *)(v10 + 280) = v15;
        *(_DWORD *)(v10 + 284) = v16;
      }
LABEL_106:
      v61 = BugCheckParameter3;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        goto LABEL_229;
LABEL_107:
      HvpReleaseCellPaged(v61, v124);
      goto LABEL_108;
    }
    if ( *(_WORD *)v33 != 27510 )
    {
      BugCheckParameter4a = 136;
      goto LABEL_268;
    }
    v35 = *(unsigned __int16 *)(v33 + 2);
    if ( v35 + 20 > v34 )
    {
      BugCheckParameter4a = 144;
      goto LABEL_268;
    }
    if ( (*(_WORD *)(v33 + 16) & 1) != 0 )
    {
      if ( (unsigned __int16)v35 > 0x3FFFu )
      {
        BugCheckParameter4a = 146;
        goto LABEL_268;
      }
    }
    else
    {
      if ( (v35 & 1) != 0 )
      {
        BugCheckParameter4a = 148;
        goto LABEL_268;
      }
      if ( (unsigned __int16)v35 > 0x7FFFu )
      {
        BugCheckParameter4a = 150;
        goto LABEL_268;
      }
    }
    v36 = BugCheckParameter3 + 64;
    if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter3 + 64) + 144LL) & 2) == 0 && (*(_WORD *)(v33 + 16) & 2) != 0 )
    {
      v60 = -1073741492;
      v122 = 1;
      v108 = BugCheckParameter3 + 64;
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v15;
        v108 = BugCheckParameter3 + 64;
        *(_DWORD *)(a8 + 284) = v16;
        *(_QWORD *)(a8 + 288) = v33;
      }
      if ( (a6 & 0x20000) != 0
        || !BYTE2(NlsMbOemCodePageTag) && (v36 = v108, (CmpContextListLock.ApcStateFill[36] & 6) == 0) )
      {
        SetFailureLocation(a8, 0, 15, -1073741492, 156);
        v94 = v124;
        v95 = BugCheckParameter3;
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          goto LABEL_365;
        goto LABEL_184;
      }
      SetFailureLocation(a8, 1, 15, -1073741492, 152);
      v109 = HvpMarkCellDirty(BugCheckParameter3, v16, 0);
      v60 = v109;
      if ( v109 < 0 )
      {
        SetFailureLocation(a8, 1, 15, v109, 154);
        v94 = v124;
        v95 = BugCheckParameter3;
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          goto LABEL_365;
        goto LABEL_184;
      }
      v33 = v126;
      *(_WORD *)(v126 + 16) &= ~2u;
      *(_DWORD *)(*(_QWORD *)v36 + 4088LL) |= 4u;
    }
    if ( v13 )
      break;
LABEL_43:
    v37 = *(_WORD *)(v33 + 16);
    v38 = 2 * *(_WORD *)(v33 + 2);
    v39 = v38;
    if ( (v37 & 1) == 0 )
      v39 = *(_WORD *)(v33 + 2);
    if ( *a9 < (unsigned int)v39 )
    {
      if ( (v37 & 1) == 0 )
        v38 = *(_WORD *)(v33 + 2);
      *a9 = v38;
    }
    v40 = *(_DWORD *)(v33 + 4);
    if ( v13 )
    {
      if ( (v40 & 1) != 0 )
      {
        BugCheckParameter4c = 192;
      }
      else
      {
        if ( v40 <= 0xFFFF )
          goto LABEL_50;
        BugCheckParameter4c = 208;
      }
      v116 = a8;
      v60 = -1073741492;
      SetFailureLocation(a8, 0, 15, -1073741492, BugCheckParameter4c);
      if ( !a8 )
        goto LABEL_189;
      *(_DWORD *)(a8 + 280) = v123;
      *(_DWORD *)(a8 + 284) = v16;
      goto LABEL_347;
    }
LABEL_50:
    if ( (v37 & 2) != 0 )
    {
      if ( v40 || *(_DWORD *)(v33 + 12) )
      {
        BugCheckParameter4 = 224;
LABEL_103:
        v10 = a8;
        v60 = -1073741492;
        v122 = 1;
        SetFailureLocation(a8, 1, 15, -1073741492, BugCheckParameter4);
        v15 = v123;
        goto LABEL_104;
      }
    }
    else if ( v40 >= 0x80000000 )
    {
      if ( v40 + 0x80000000 > 4 )
      {
        BugCheckParameter4 = 416;
        goto LABEL_103;
      }
      goto LABEL_89;
    }
    v41 = *(_DWORD *)(v33 + 8);
    v42 = 0LL;
    if ( v40 )
    {
      v128 = 0LL;
      v125 = 0;
      HvpGetCellContextInitialize(&v128);
      HvpGetBinContextInitialize(&v125);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        goto LABEL_80;
      if ( (v41 & 0x7FFFFFFF) >= *(_DWORD *)(632LL * (v41 >> 31) + BugCheckParameter3 + 280) || (v41 & 7) != 0 )
        goto LABEL_102;
      if ( BitMapHeader && (v41 & 0x80000000) == 0 )
      {
        v43 = v41 >> 3;
        if ( !_bittest64((const signed __int64 *)BitMapHeader->Buffer, v43) )
          goto LABEL_102;
        RtlClearBits(BitMapHeader, v43, 1u);
      }
      v44 = HvpGetCellMap(BugCheckParameter3, v41);
      v45 = v44;
      if ( !v44 || HvpMapEntryIsDiscardable(v44) )
        goto LABEL_102;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v46 = HvpGetCellFlat(BugCheckParameter3, v41, (unsigned int *)&v128);
      else
        v46 = HvpGetCellPaged(BugCheckParameter3, v41);
      v48 = v46;
      v49 = 0LL;
      v24 = v46 == 0;
      v50 = (_DWORD *)(v46 - 4);
      if ( !v24 )
        v49 = v50;
      if ( v49 )
      {
        v51 = HvpMapEntryGetBinAddress(v48, v45, &v125, v47);
        v52 = (unsigned int)*v49;
        v53 = (_DWORD)v49 - v51;
        v54 = (unsigned int)-*v49;
        v56 = 0;
        if ( (int)v52 < 0 )
        {
          v52 = (unsigned int)(v54 - 8);
          if ( (unsigned int)v52 <= 0xFFFF8 )
          {
            v55 = *(unsigned int *)(v51 + 8);
            v52 = v55 - 32;
            if ( (unsigned int)v54 <= (unsigned __int64)(v55 - 32) && v53 - *v49 <= (unsigned int)v55 && v53 >= 0x20 )
              v56 = 1;
          }
        }
        if ( v51 )
          HvpMapEntryReleaseBinAddress(v52, v54, &v125);
      }
      else
      {
        v56 = 1;
      }
      if ( v49 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v128);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v128);
      }
      if ( !v56 )
      {
LABEL_102:
        BugCheckParameter4 = 240;
        goto LABEL_103;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
LABEL_80:
        v57 = HvpGetCellFlat(BugCheckParameter3, v41, v127);
      else
        v57 = HvpGetCellPaged(BugCheckParameter3, v41);
      v42 = v57;
      if ( !v57 )
      {
        v60 = -1073741670;
        SetFailureLocation(a8, 0, 15, -1073741670, 256);
        if ( a8 )
        {
          *(_DWORD *)(a8 + 280) = v123;
          *(_DWORD *)(a8 + 284) = v41;
        }
        goto LABEL_189;
      }
    }
    else if ( v41 != -1 )
    {
      v10 = a8;
      v60 = -1073741492;
      v122 = 1;
      SetFailureLocation(a8, 1, 15, -1073741492, 224);
      v15 = v123;
      if ( a8 )
        goto LABEL_105;
      goto LABEL_106;
    }
    if ( v40 > 0x3FD8 && *(_DWORD *)(BugCheckParameter3 + 220) >= 4u )
    {
      if ( (unsigned int)(-4 - *(_DWORD *)(v42 - 4)) < 8
        || *(_WORD *)v42 != 25188
        || !*(_WORD *)(v42 + 2)
        || (v68 = *(_DWORD *)(v42 + 4), v68 == -1) )
      {
        v10 = a8;
        v60 = -1073741492;
        v122 = 1;
        SetFailureLocation(a8, 1, 15, -1073741492, 272);
        v15 = v123;
        if ( a8 )
        {
          *(_DWORD *)(a8 + 280) = v123;
          *(_DWORD *)(a8 + 284) = v41;
        }
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)v127);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v127);
        v61 = BugCheckParameter3;
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        {
LABEL_229:
          HvpReleaseCellFlat(v61, (__int64)v124);
          goto LABEL_108;
        }
        goto LABEL_107;
      }
      v128 = 0LL;
      v125 = 0;
      HvpGetCellContextInitialize(&v128);
      HvpGetBinContextInitialize(&v125);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        goto LABEL_155;
      if ( (v68 & 0x7FFFFFFF) < *(_DWORD *)(632LL * (v68 >> 31) + BugCheckParameter3 + 280) && (v68 & 7) == 0 )
      {
        if ( BitMapHeader && (v68 & 0x80000000) == 0 )
        {
          v69 = v68 >> 3;
          if ( _bittest64((const signed __int64 *)BitMapHeader->Buffer, v69) )
          {
            RtlClearBits(BitMapHeader, v69, 1u);
            goto LABEL_136;
          }
        }
        else
        {
LABEL_136:
          v70 = HvpGetCellMap(BugCheckParameter3, v68);
          v71 = v70;
          if ( v70 && !HvpMapEntryIsDiscardable(v70) )
          {
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              v72 = HvpGetCellFlat(BugCheckParameter3, v68, (unsigned int *)&v128);
            else
              v72 = HvpGetCellPaged(BugCheckParameter3, v68);
            v73 = v72;
            v74 = 0LL;
            v24 = v72 == 0;
            v75 = (_DWORD *)(v72 - 4);
            if ( !v24 )
              v74 = v75;
            if ( v74 )
            {
              v76 = HvpMapEntryGetBinAddress(v73, v71, &v125, v74);
              v77 = (unsigned int)*v74;
              v78 = (_DWORD)v74 - v76;
              v79 = (unsigned int)-*v74;
              v81 = 0;
              if ( (int)v77 < 0 )
              {
                v77 = (unsigned int)(v79 - 8);
                if ( (unsigned int)v77 <= 0xFFFF8 )
                {
                  v80 = *(unsigned int *)(v76 + 8);
                  v77 = v80 - 32;
                  if ( (unsigned int)v79 <= (unsigned __int64)(v80 - 32)
                    && v78 - *v74 <= (unsigned int)v80
                    && v78 >= 0x20 )
                  {
                    v81 = 1;
                  }
                }
              }
              if ( v76 )
                HvpMapEntryReleaseBinAddress(v77, v79, &v125);
            }
            else
            {
              v81 = 1;
            }
            if ( v74 )
            {
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v128);
              else
                HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v128);
            }
            if ( v81 )
            {
LABEL_155:
              v82 = *(unsigned int *)(v42 + 4);
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                v83 = HvpGetCellFlat(BugCheckParameter3, v82, v129);
              else
                v83 = HvpGetCellPaged(BugCheckParameter3, v82);
              v84 = v83;
              if ( !v83 )
              {
                v60 = -1073741670;
                SetFailureLocation(a8, 0, 15, -1073741670, 304);
                if ( a8 )
                {
                  *(_DWORD *)(a8 + 280) = v123;
                  *(_DWORD *)(a8 + 284) = *(_DWORD *)(v42 + 4);
                }
                v117 = BugCheckParameter3;
                if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
                  goto LABEL_353;
LABEL_359:
                HvpReleaseCellFlat(v117, (__int64)v127);
LABEL_189:
                v94 = v124;
                v95 = BugCheckParameter3;
                if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
                  goto LABEL_184;
LABEL_365:
                HvpReleaseCellFlat(v95, (__int64)v94);
                return v60;
              }
              v85 = 4LL * *(unsigned __int16 *)(v42 + 2);
              if ( v85 < 4 || v85 > (unsigned int)(-4 - *(_DWORD *)(v83 - 4)) )
              {
                BugCheckParameter4b = 320;
              }
              else
              {
                if ( *(unsigned __int16 *)(v42 + 2) == (v40 + 16343) / 0x3FD8 )
                {
                  for ( i = 0; ; ++i )
                  {
                    if ( i >= *(unsigned __int16 *)(v42 + 2) )
                    {
                      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v129);
                      else
                        HvpReleaseCellPaged(BugCheckParameter3, v129);
                      goto LABEL_85;
                    }
                    v87 = (unsigned int *)(v84 + 4LL * i);
                    if ( !HvIsCellAllocated(BugCheckParameter3, *v87) )
                      break;
                    v88 = *v87;
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      v89 = HvpGetCellFlat(BugCheckParameter3, v88, v130);
                    else
                      v89 = HvpGetCellPaged(BugCheckParameter3, v88);
                    if ( !v89 )
                    {
                      v60 = -1073741670;
                      SetFailureLocation(a8, 0, 15, -1073741670, 368);
                      if ( a8 )
                      {
                        *(_DWORD *)(a8 + 280) = i;
                        *(_DWORD *)(a8 + 284) = *v87;
                        *(_QWORD *)(a8 + 288) = v42;
                      }
                      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v129);
                      else
                        HvpReleaseCellPaged(BugCheckParameter3, v129);
                      v117 = BugCheckParameter3;
                      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                        goto LABEL_359;
LABEL_353:
                      HvpReleaseCellPaged(v117, v127);
                      goto LABEL_189;
                    }
                    if ( (unsigned int)(-4 - *(_DWORD *)(v89 - 4)) < 0x3FD8 )
                    {
                      v90 = a8;
                      v60 = -1073741492;
                      v122 = 1;
                      SetFailureLocation(a8, 1, 15, -1073741492, 384);
                      if ( a8 )
                      {
                        *(_DWORD *)(a8 + 280) = i;
                        *(_DWORD *)(a8 + 284) = *v87;
                        *(_QWORD *)(a8 + 288) = v42;
                      }
                      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v130);
                      else
                        HvpReleaseCellPaged(BugCheckParameter3, v130);
                      v91 = BugCheckParameter3;
                      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
                        goto LABEL_173;
LABEL_219:
                      HvpReleaseCellFlat(v91, (__int64)v129);
                      goto LABEL_174;
                    }
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v130);
                    else
                      HvpReleaseCellPaged(BugCheckParameter3, v130);
                  }
                  v90 = a8;
                  v60 = -1073741492;
                  v122 = 1;
                  SetFailureLocation(a8, 1, 15, -1073741492, 352);
                  if ( a8 )
                  {
                    *(_DWORD *)(a8 + 280) = i;
                    *(_DWORD *)(a8 + 284) = *v87;
                    *(_QWORD *)(a8 + 288) = v42;
                  }
                  v91 = BugCheckParameter3;
                  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                    goto LABEL_219;
LABEL_173:
                  HvpReleaseCellPaged(v91, v129);
LABEL_174:
                  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v127);
                  else
                    HvpReleaseCellPaged(BugCheckParameter3, v127);
                  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                  {
                    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v124);
                    v15 = v123;
                    v10 = v90;
                  }
                  else
                  {
                    HvpReleaseCellPaged(BugCheckParameter3, v124);
                    v15 = v123;
                    v10 = v90;
                  }
                  goto LABEL_108;
                }
                BugCheckParameter4b = 336;
              }
              v10 = a8;
              v60 = -1073741492;
              v122 = 1;
              SetFailureLocation(a8, 1, 15, -1073741492, BugCheckParameter4b);
              v15 = v123;
              if ( a8 )
              {
                *(_QWORD *)(a8 + 288) = v126;
                *(_DWORD *)(a8 + 280) = v123;
                *(_DWORD *)(a8 + 284) = v16;
              }
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3, (__int64)v129);
              else
                HvpReleaseCellPaged(BugCheckParameter3, v129);
              v97 = BugCheckParameter3;
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
                goto LABEL_226;
              goto LABEL_233;
            }
          }
        }
      }
      v60 = -1073741492;
      v122 = 1;
      SetFailureLocation(a8, 1, 15, -1073741492, 288);
      v15 = v123;
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v123;
        *(_DWORD *)(a8 + 284) = *(_DWORD *)(v42 + 4);
        *(_QWORD *)(a8 + 288) = v42;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v127);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v127);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v124);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v124);
      v10 = a8;
      goto LABEL_108;
    }
    if ( v40 && v40 > -4 - *(_DWORD *)(v42 - 4) )
    {
      v10 = a8;
      v60 = -1073741492;
      v122 = 1;
      SetFailureLocation(a8, 1, 15, -1073741492, 400);
      v15 = v123;
      if ( a8 )
      {
        *(_QWORD *)(a8 + 288) = v126;
        *(_DWORD *)(a8 + 280) = v123;
        *(_DWORD *)(a8 + 284) = v16;
      }
      v97 = BugCheckParameter3;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
      {
LABEL_226:
        HvpReleaseCellPaged(v97, v127);
        goto LABEL_106;
      }
LABEL_233:
      HvpReleaseCellFlat(v97, (__int64)v127);
      goto LABEL_106;
    }
LABEL_85:
    if ( v42 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v127);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v127);
    }
    v33 = v126;
    v13 = a2;
LABEL_89:
    v58 = *(_DWORD *)(v33 + 4);
    v59 = v58 + 0x80000000;
    if ( v58 < 0x80000000 )
      v59 = *(_DWORD *)(v33 + 4);
    if ( *a10 < v59 )
      *a10 = v59;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v124);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v124);
    v10 = a8;
    v15 = v123 + 1;
    v12 = a3;
    v11 = v136;
    ++v123;
  }
  v98 = (WCHAR *)(v33 + 20);
  Blink = PspSiloMonitorLock.ApcState.ApcListHead[0].Blink;
  v100 = *(_WORD *)(v33 + 2);
  if ( (*(_BYTE *)(v33 + 16) & 1) != 0 )
  {
    for ( j = LOWORD(PspSiloMonitorLock.ApcState.ApcListHead[0].Flink) >> 1; j && v100; --j )
    {
      Flink = (WCHAR)Blink->Flink;
      Blink = (struct _LIST_ENTRY *)((char *)Blink + 2);
      v115 = *(unsigned __int8 *)v98;
      v98 = (WCHAR *)((char *)v98 + 1);
      if ( Flink != (_WORD)v115 )
      {
        if ( Flink >= 0x61u )
        {
          if ( Flink > 0x7Au )
            Flink = RtlUpcaseUnicodeChar(Flink);
          else
            Flink -= 32;
        }
        if ( v115 >= 0x61 )
        {
          if ( v115 > 0x7A )
            LOWORD(v115) = RtlUpcaseUnicodeChar(v115);
          else
            LOWORD(v115) = v115 - 32;
        }
        v113 = Flink - (unsigned __int16)v115;
        if ( Flink != (unsigned __int16)v115 )
          goto LABEL_293;
      }
      --v100;
    }
    v102 = j;
  }
  else
  {
    v110 = LOWORD(PspSiloMonitorLock.ApcState.ApcListHead[0].Flink) >> 1;
    for ( v100 >>= 1; v110 && v100; --v100 )
    {
      v111 = (WCHAR)Blink->Flink;
      Blink = (struct _LIST_ENTRY *)((char *)Blink + 2);
      v112 = *v98++;
      if ( v111 != v112 )
      {
        if ( v111 >= 0x61u )
        {
          if ( v111 > 0x7Au )
            v111 = RtlUpcaseUnicodeChar(v111);
          else
            v111 -= 32;
        }
        if ( v112 >= 0x61u )
        {
          if ( v112 <= 0x7Au )
            v112 -= 32;
          else
            v112 = RtlUpcaseUnicodeChar(v112);
        }
        v113 = v111 - v112;
        if ( v111 != v112 )
          goto LABEL_293;
      }
      --v110;
    }
    v102 = v110;
  }
  v113 = v102 - v100;
LABEL_293:
  if ( v113 )
  {
    v116 = a8;
    v60 = -1073741492;
    SetFailureLocation(a8, 0, 15, -1073741492, 160);
    if ( !a8 )
      goto LABEL_189;
    *(_DWORD *)(a8 + 280) = v123;
    *(_DWORD *)(a8 + 284) = v128;
LABEL_347:
    *(_QWORD *)(v116 + 288) = v126;
    goto LABEL_189;
  }
  v33 = v126;
  if ( *(_DWORD *)(v126 + 12) == 6 || (*(_BYTE *)(v126 + 16) & 2) != 0 )
  {
    v13 = a2;
    v16 = v128;
    goto LABEL_43;
  }
  v60 = -1073741492;
  SetFailureLocation(a8, 0, 15, -1073741492, 176);
  if ( a8 )
  {
    *(_DWORD *)(a8 + 280) = v123;
    *(_DWORD *)(a8 + 284) = v128;
    *(_QWORD *)(a8 + 288) = v126;
  }
  v94 = v124;
  v95 = BugCheckParameter3;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    goto LABEL_365;
LABEL_184:
  HvpReleaseCellPaged(v95, v94);
  return v60;
}
