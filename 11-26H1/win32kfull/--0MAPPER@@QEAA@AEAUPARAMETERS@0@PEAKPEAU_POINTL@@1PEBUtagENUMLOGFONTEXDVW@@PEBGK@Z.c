/*
 * XREFs of ??0MAPPER@@QEAA@AEAUPARAMETERS@0@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGK@Z @ 0x1400C9A60
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@@3@Z @ 0x1400C79A0 (-ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@.c)
 * Callees:
 *     ?bGetFaceName@MAPPER@@QEAAHXZ @ 0x1400CA000 (-bGetFaceName@MAPPER@@QEAAHXZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

MAPPER *__fastcall MAPPER::MAPPER(
        MAPPER *this,
        struct MAPPER::PARAMETERS *a2,
        unsigned int *a3,
        struct _POINTL *a4,
        unsigned int *a5,
        const struct tagENUMLOGFONTEXDVW *a6,
        const unsigned __int16 *Src)
{
  int v7; // ebp
  unsigned int v10; // r14d
  const unsigned __int16 *v11; // rdi
  unsigned __int16 i; // ax
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // cl
  _BYTE *v16; // rax
  int v17; // ebp
  int v18; // ebp
  __int64 v19; // r9
  int v20; // edx
  int v21; // eax
  __int16 *v22; // rcx
  __int16 v23; // ax
  int v24; // r8d
  __int64 v25; // r10
  int v26; // ecx
  int v27; // ecx
  int v28; // edx
  int v29; // ecx
  int v30; // edx
  int v31; // ecx
  bool v32; // sf
  int v33; // eax
  unsigned __int16 v35; // ax
  unsigned __int16 *v36; // rdi
  unsigned __int16 v37; // ax
  int v38; // eax
  unsigned __int16 v39; // dx
  int v40; // ecx
  __int64 v41; // rax
  int v42; // eax

  v7 = 0;
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 61) = 0;
  v10 = 0;
  *((_QWORD *)this + 31) = 0LL;
  v11 = Src;
  *((_QWORD *)this + 1) = a6;
  *((_QWORD *)this + 2) = Src;
  *((_DWORD *)this + 22) = 0;
  for ( i = *Src; i; ++v11 )
  {
    if ( i == 95 && (unsigned __int16)(v11[1] - 48) <= 9u )
      break;
    i = v11[1];
  }
  memmove((char *)this + 24, Src, 2LL * (unsigned int)(v11 - Src));
  *((_WORD *)this + (unsigned int)(v11 - Src) + 12) = 0;
  if ( *v11 == 95 )
  {
    v35 = v11[1];
    v36 = (unsigned __int16 *)(v11 + 1);
    if ( (unsigned __int16)(v35 - 48) <= 9u )
    {
      do
      {
        v37 = *v36;
        do
        {
          if ( (unsigned __int16)(v37 - 48) <= 9u )
            break;
          v37 = v36[1];
          ++v36;
        }
        while ( v37 );
        v38 = *v36;
        if ( !(_WORD)v38 )
          break;
        v39 = v36[1];
        v40 = v38 - 48;
        ++v36;
        if ( v39 )
        {
          do
          {
            if ( (unsigned __int16)(v39 - 48) > 9u )
              break;
            ++v36;
            v42 = v39;
            v39 = *v36;
            v40 = v42 + 2 * (5 * v40 - 24);
          }
          while ( *v36 );
        }
        v41 = v10++;
        *((_DWORD *)this + v41 + 25) = v40;
      }
      while ( *v36 );
    }
  }
  *((_DWORD *)this + 24) = v10;
  *((_DWORD *)this + 23) = 134248036;
  *((_QWORD *)this + 35) = 0LL;
  if ( v10 )
  {
    *((_DWORD *)this + 22) |= 1u;
  }
  else
  {
    v13 = *(unsigned int *)(*((_QWORD *)this + 1) + 352LL);
    if ( (_DWORD)v13 )
      memmove((char *)this + 92, (const void *)(*((_QWORD *)this + 1) + 348LL), 4 * v13 + 8);
    else
      *((_WORD *)this + 12) = 0;
  }
  v14 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 45) = -2;
  v15 = *(_BYTE *)(v14 + 23);
  *((_QWORD *)this + 29) = a5;
  *((_BYTE *)this + 276) = v15;
  *a5 = 0;
  *((_QWORD *)this + 28) = a4;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = -1;
  *((_QWORD *)this + 27) = a3;
  *a3 = 0;
  **((_DWORD **)this + 28) = 1;
  *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
  v16 = *(_BYTE **)this;
  if ( !*(_BYTE *)(*(_QWORD *)this + 73LL) )
    v7 = 0x40000;
  v17 = *((_DWORD *)this + 61) | v7;
  *((_DWORD *)this + 61) = v17;
  if ( v16[72] && (v16[75] || !v16[78]) )
  {
    v18 = v17 | 0x1000;
    *((_DWORD *)this + 61) = v18;
  }
  else
  {
    v16[85] = 0;
    v16 = *(_BYTE **)this;
    v18 = *((_DWORD *)this + 61);
  }
  v19 = *((_QWORD *)this + 1);
  v20 = v18;
  if ( *(_BYTE *)(v19 + 26) == 2 && !v16[77] )
  {
    v20 = v18 | 0x8000;
    *((_DWORD *)this + 61) = v18 | 0x8000;
  }
  v21 = *(_DWORD *)(v19 + 16);
  if ( v21 == 400 || v21 == 700 )
  {
    v20 |= 0x10000000u;
    *((_DWORD *)this + 61) = v20;
  }
  v22 = (__int16 *)*((_QWORD *)this + 2);
  v23 = *v22;
  if ( *v22 == 77 )
  {
    if ( v22[1] != 83
      || v22[2] != 32
      || v22[3] != 83
      || v22[4] != 72
      || v22[5] != 69
      || v22[6] != 76
      || v22[7] != 76
      || v22[8] != 32
      || v22[9] != 68
      || v22[10] != 76
      || v22[11] != 71
      || v22[12] )
    {
      goto LABEL_19;
    }
    *((_DWORD *)this + 61) |= 0x8000000u;
    v20 = *((_DWORD *)this + 61);
  }
  else
  {
    if ( v23 != 83 )
    {
      if ( v23 == 84
        && v22[1] == 77
        && v22[2] == 83
        && v22[3] == 32
        && v22[4] == 82
        && v22[5] == 77
        && v22[6] == 78
        && !v22[7] )
      {
        v20 |= 0x800000u;
LABEL_21:
        *((_DWORD *)this + 61) = v20;
        goto LABEL_22;
      }
      goto LABEL_19;
    }
    if ( v22[1] != 89 )
      goto LABEL_19;
    if ( v22[2] != 83 || v22[3] != 84 || v22[4] != 69 || v22[5] != 77 || v22[6] )
    {
      if ( v22[1] == 89 && v22[2] == 77 && v22[3] == 66 && v22[4] == 79 && v22[5] == 76 )
      {
        v20 |= 0x4000000u;
        goto LABEL_21;
      }
LABEL_19:
      if ( v23 != 64 )
        goto LABEL_22;
      v20 |= 0x2000000u;
      goto LABEL_21;
    }
    v20 |= 0x2000u;
    *((_DWORD *)this + 61) = v20;
    if ( (*(_BYTE *)(v19 + 27) & 0xF) == 1 )
      *((_QWORD *)this + 2) = L"FIXEDSYS";
  }
LABEL_22:
  v24 = *(_DWORD *)v19;
  v25 = *(_QWORD *)this;
  *((_DWORD *)this + 41) = *(_DWORD *)v19;
  v26 = -*(_DWORD *)(v19 + 4);
  if ( *(int *)(v19 + 4) > 0 )
    v26 = *(_DWORD *)(v19 + 4);
  *((_DWORD *)this + 42) = v26;
  v27 = v20 | (*(_BYTE *)(v25 + 80) != 0 ? 0x100 : 0);
  *((_DWORD *)this + 61) = v27;
  v28 = v27 | (*(_BYTE *)(v25 + 81) != 0 ? 0x400 : 0);
  *((_DWORD *)this + 61) = v28;
  v29 = v28 | (*(_BYTE *)(v25 + 84) != 0 ? 0x200 : 0);
  *((_DWORD *)this + 61) = v29;
  v30 = v29 | (*(_BYTE *)(v25 + 82) != 0 ? 0x10000 : 0);
  *((_DWORD *)this + 61) = v30;
  v31 = v30 | (*(_BYTE *)(v25 + 83) != 0 ? 0x20000000 : 0);
  *((_DWORD *)this + 61) = v31;
  v32 = v24 < 0;
  if ( !v24 )
  {
    v24 = *(_DWORD *)(v25 + 60);
    v31 |= 8u;
    *((_DWORD *)this + 61) = v31;
    v32 = v24 < 0;
    *((_DWORD *)this + 41) = v24;
  }
  if ( v32 )
  {
    v31 |= 2u;
    *((_DWORD *)this + 61) = v31;
    *((_DWORD *)this + 41) = -v24;
  }
  v33 = *(_DWORD *)(v19 + 16);
  *((_DWORD *)this + 43) = v33;
  if ( !v33 )
  {
    *((_DWORD *)this + 43) = 400;
    *((_DWORD *)this + 61) = v31 | 0x200000;
  }
  if ( !**((_WORD **)this + 2) )
    MAPPER::bGetFaceName(this);
  *((_DWORD *)this + 61) |= 1u;
  return this;
}
