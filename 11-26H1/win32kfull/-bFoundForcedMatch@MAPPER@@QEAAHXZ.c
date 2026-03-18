/*
 * XREFs of ?bFoundForcedMatch@MAPPER@@QEAAHXZ @ 0x1400C74D0
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@@3@Z @ 0x1400C79A0 (-ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@.c)
 * Callees:
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1400CA238 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1400CA26C (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1400CA590 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x140205C24 (-ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ??EPffIterator@@QEAAAEAV0@XZ @ 0x140296FC4 (--EPffIterator@@QEAAAEAV0@XZ.c)
 *     ??0PffIterator@@QEAA@PEAVPFF@@@Z @ 0x140297050 (--0PffIterator@@QEAA@PEAVPFF@@@Z.c)
 */

__int64 __fastcall MAPPER::bFoundForcedMatch(MAPPER *this, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 *v5; // rax
  struct _UNIVERSAL_FONT_ID *v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *i; // rdx
  bool v14; // al
  struct PFE *PFEFromUFIInternal; // rdi
  char *v16; // r14
  char v17; // r11
  __int64 v18; // r9
  int v19; // edx
  __int64 v20; // r10
  int v21; // r8d
  int v22; // eax
  int v23; // esi
  int v24; // r8d
  int v25; // r10d
  unsigned int v26; // ecx
  unsigned int v27; // r9d
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  unsigned int v31; // ecx
  __int64 result; // rax
  int v33; // r8d
  int v34; // r10d
  int v35; // eax
  unsigned int v36; // eax
  int v37; // ecx
  int v38; // ecx
  unsigned int v39; // eax
  __int64 v40; // rax
  _QWORD *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  _QWORD *v44; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  LODWORD(v44) = 0;
  v5 = *(__int64 **)this;
  if ( !*(_BYTE *)(*(_QWORD *)this + 68LL) )
    return 0LL;
  v6 = (struct _UNIVERSAL_FONT_ID *)((char *)v5 + 44);
  v7 = *((_DWORD *)v5 + 11);
  if ( !v7 )
    return 0LL;
  if ( v7 == 1 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v6, a2, a3) + 96) + 20400LL);
    v9 = **(_QWORD **)this;
    v10 = (v9 >> 4) % *(unsigned int *)(v8 + 24);
    if ( (unsigned int)v10 >= *(_DWORD *)(v8 + 24) )
    {
      PffIterator::PffIterator((PffIterator *)&v44, 0LL);
      goto LABEL_76;
    }
    v11 = *(_QWORD **)(v8 + 8LL * (unsigned int)v10 + 40);
    v44 = v11;
    v12 = v11;
    for ( i = v11; ; i = v12 )
    {
      v14 = 0;
      if ( v12 )
      {
        v3 |= 1u;
        if ( (*((_DWORD *)i + 13) & 0x10000) != 0 )
          v14 = 1;
      }
      if ( (v3 & 1) != 0 )
        v3 &= ~1u;
      if ( !v14 )
        break;
      v12 = (_QWORD *)v11[1];
      v11 = v12;
      v44 = v12;
    }
    while ( 1 )
    {
      if ( !v11 )
        return 0LL;
      if ( v9 == v11[12] )
        break;
      PffIterator::operator++(&v44);
LABEL_76:
      v11 = v44;
    }
    if ( v11 != (_QWORD *)-120LL )
    {
      v40 = v11[15];
      v41 = 0LL;
      PFEFromUFIInternal = 0LL;
      v42 = *(_QWORD *)(v40 + 24);
      if ( v42 )
      {
        v41 = *(_QWORD **)(v42 + 8);
        if ( v41 )
          PFEFromUFIInternal = (struct PFE *)v41[1];
      }
      if ( PFEFromUFIInternal )
      {
        while ( 1 )
        {
          if ( *((_DWORD *)PFEFromUFIInternal + 21) == *(_DWORD *)(*(_QWORD *)this + 44LL)
            && *((_DWORD *)PFEFromUFIInternal + 22) == *(_DWORD *)(*(_QWORD *)this + 48LL)
            && (*((_DWORD *)PFEFromUFIInternal + 3) & 2) == 0 )
          {
            goto LABEL_10;
          }
          PFEFromUFIInternal = 0LL;
          v41 = (_QWORD *)*v41;
          if ( v41 )
            goto LABEL_69;
          v43 = *(_QWORD *)(v42 + 48);
          v42 = v43;
          if ( v43 )
            break;
LABEL_71:
          if ( !PFEFromUFIInternal )
            return 0LL;
        }
        v41 = *(_QWORD **)(v43 + 8);
LABEL_69:
        if ( v41 )
          PFEFromUFIInternal = (struct PFE *)v41[1];
        goto LABEL_71;
      }
    }
    return 0LL;
  }
  PFEFromUFIInternal = ppfeGetPFEFromUFIInternal(v6, 0, 1);
LABEL_10:
  if ( !PFEFromUFIInternal )
    return 0LL;
  *((_DWORD *)this + 48) = 1;
  v16 = (char *)this + 248;
  *((_DWORD *)this + 49) = 1;
  v17 = 4;
  *((_DWORD *)this + 47) = 0;
  v18 = *((_QWORD *)PFEFromUFIInternal + 4);
  *((_QWORD *)this + 31) = v18;
  v19 = *(_DWORD *)(v18 + 48);
  if ( (v19 & 0x3000010) == 0 )
  {
    v33 = (*((_DWORD *)this + 61) & 2) != 0 ? *(__int16 *)(v18 + 56) : *(__int16 *)(v18 + 60) + *(__int16 *)(v18 + 62);
    v34 = *((_DWORD *)this + 41);
    if ( v33 < v34 && (*((_DWORD *)this + 61) & 0x8000) == 0 && (v19 & 0x100000) != 0 && v34 > 7 * v33 / 4 )
    {
      v35 = v34 + v33 / 4;
      if ( !v33 || v35 == 0x80000000 && v33 == -1 )
        return 0LL;
      v18 = *(_QWORD *)v16;
      v36 = v35 / v33;
      if ( v36 > 8 )
        v36 = 8;
      *((_DWORD *)this + 49) = v36;
    }
  }
  v20 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v20 + 20)
    && (*(_BYTE *)(v18 + 52) & 1) == 0
    && (unsigned int)IFIOBJ::bSimItalic((MAPPER *)((char *)this + 248)) )
  {
    *((_DWORD *)this + 47) |= 0x4000u;
  }
  v21 = *((_DWORD *)this + 61);
  if ( (v21 & 0x200000) == 0
    && *(unsigned __int16 *)(v18 + 46) - *((_DWORD *)this + 43) < 0
    && *((_DWORD *)this + 43) - *(unsigned __int16 *)(v18 + 46) > 150
    && IFIOBJ::pvSimBold((MAPPER *)((char *)this + 248)) )
  {
    *((_DWORD *)this + 47) |= 0x2000u;
  }
  v22 = *(_DWORD *)(v18 + 48);
  if ( (v22 & 0x2000010) != 0 )
    goto LABEL_56;
  v23 = *(__int16 *)(v18 + 76);
  if ( *(_DWORD *)(v20 + 4) )
  {
    if ( ((unsigned __int8)v21 & (unsigned __int8)v17) == 0 )
      MAPPER::bCalculateWishCell(this);
    if ( (*(_DWORD *)(*(_QWORD *)v16 + 48LL) & 0x100000) == 0 || (*((_DWORD *)this + 61) & 0x8000) != 0 )
      goto LABEL_56;
    v37 = *((_DWORD *)this + 42);
    if ( v37 <= v23 )
      goto LABEL_56;
    v38 = v37 - (v23 + 1) / 2;
    if ( v23 && (v38 != 0x80000000 || v23 != -1) )
    {
      v39 = v38 / v23 + 1;
LABEL_53:
      if ( v39 > 5 )
        v39 = 5;
      *((_DWORD *)this + 48) = v39;
      goto LABEL_56;
    }
    return 0LL;
  }
  if ( (v21 & 0x8000) != 0 || (v22 & 0x100000) == 0 )
    goto LABEL_56;
  v24 = *(_DWORD *)(v18 + 132);
  v25 = *(_DWORD *)(v18 + 128);
  if ( v25 != v24 || *(_DWORD *)(*(_QWORD *)this + 52LL) != *(_DWORD *)(*(_QWORD *)this + 56LL) )
  {
    v26 = *(_DWORD *)(*(_QWORD *)this + 52LL);
    if ( v26 )
    {
      v27 = 100 * *(_DWORD *)(*(_QWORD *)this + 56LL) / v26;
      v28 = 100 * v25;
      if ( v24 )
      {
        if ( v28 != 0x80000000 || v24 != -1 )
        {
          v29 = *((_DWORD *)this + 49);
          v30 = v28 / v24;
          if ( v29 )
          {
            if ( v30 != 0x80000000 || v29 != -1 )
            {
              v31 = v30 / v29;
              if ( v27 <= (3 * v31) >> 1 )
                goto LABEL_56;
              if ( v31 )
              {
                v39 = v27 / v31;
                goto LABEL_53;
              }
            }
          }
        }
      }
    }
    return 0LL;
  }
  v39 = *((_DWORD *)this + 49);
  if ( v39 != 1 )
    goto LABEL_53;
LABEL_56:
  result = 1LL;
  **((_DWORD **)this + 27) = *((_DWORD *)this + 47);
  **((_QWORD **)this + 28) = *((_QWORD *)this + 24);
  *(_BYTE *)(*((_QWORD *)this + 29) + 3LL) = 1;
  *((_DWORD *)this + 61) |= 0x1000000u;
  *((_QWORD *)this + 25) = PFEFromUFIInternal;
  return result;
}
