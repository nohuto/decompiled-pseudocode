/*
 * XREFs of ??0MAPPER@@QEAA@AEAUPARAMETERS@0@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGK@Z @ 0x1400B80E8
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@@3@Z @ 0x1400B7DD8 (-ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@.c)
 * Callees:
 *     ?bGetFaceName@MAPPER@@QEAAHXZ @ 0x1400B8B00 (-bGetFaceName@MAPPER@@QEAAHXZ.c)
 *     memmove @ 0x140342600 (memmove.c)
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
  unsigned int v10; // ebp
  const unsigned __int16 *v11; // rsi
  unsigned __int16 i; // ax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  _BYTE *v16; // r8
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // r9
  int v20; // edx
  int v21; // eax
  __int16 *v22; // rax
  __int16 v23; // cx
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
  unsigned __int16 *v35; // rdx
  unsigned __int16 v36; // cx
  unsigned __int16 v37; // ax
  unsigned __int16 v38; // cx
  int j; // r8d
  unsigned __int16 v40; // r9
  __int64 v41; // rax

  *(_QWORD *)this = a2;
  v10 = 0;
  *((_DWORD *)this + 61) = 0;
  v11 = Src;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 1) = a6;
  *((_QWORD *)this + 2) = Src;
  *((_DWORD *)this + 22) = 0;
  for ( i = *Src; i && (i != 95 || (unsigned __int16)(v11[1] - 48) > 9u); i = *v11 )
    ++v11;
  memmove((char *)this + 24, Src, 2LL * (unsigned int)(v11 - Src));
  *((_WORD *)this + (unsigned int)(v11 - Src) + 12) = 0;
  if ( *v11 == 95 )
  {
    v35 = (unsigned __int16 *)(v11 + 1);
    v36 = v11[1];
    if ( (unsigned __int16)(v36 - 48) <= 9u )
    {
      do
      {
        v37 = v36;
        do
        {
          if ( v37 >= 0x30u )
          {
            v38 = v37;
            if ( v37 <= 0x39u )
              break;
          }
          v38 = *++v35;
          v37 = *v35;
        }
        while ( *v35 );
        if ( !v38 )
          break;
        for ( j = v38 - 48; ; j = v40 + 2 * (5 * j - 24) )
        {
          v40 = *++v35;
          if ( !*v35 || (unsigned __int16)(v40 - 48) > 9u )
            break;
        }
        v41 = v10++;
        *((_DWORD *)this + v41 + 25) = j;
        v36 = *v35;
      }
      while ( *v35 );
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
    v13 = *((_QWORD *)this + 1);
    v14 = *(unsigned int *)(v13 + 352);
    if ( (_DWORD)v14 )
      memmove((char *)this + 92, (const void *)(v13 + 348), 4 * v14 + 8);
    else
      *((_WORD *)this + 12) = 0;
  }
  v15 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 45) = -2;
  *((_BYTE *)this + 276) = *(_BYTE *)(v15 + 23);
  *((_QWORD *)this + 29) = a5;
  *a5 = 0;
  *((_DWORD *)this + 52) = -1;
  *((_QWORD *)this + 28) = a4;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 27) = a3;
  *a3 = 0;
  **((_DWORD **)this + 28) = 1;
  *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
  v16 = *(_BYTE **)this;
  v17 = *((_DWORD *)this + 61) | (*(_BYTE *)(*(_QWORD *)this + 73LL) == 0 ? 0x40000 : 0);
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
      goto LABEL_17;
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
LABEL_32:
        *((_DWORD *)this + 61) = v20;
        goto LABEL_18;
      }
      goto LABEL_17;
    }
    if ( v22[1] != 89 )
      goto LABEL_17;
    if ( v22[2] != 83 || v22[3] != 84 || v22[4] != 69 || v22[5] != 77 || v22[6] )
    {
      if ( v22[1] == 89 && v22[2] == 77 && v22[3] == 66 && v22[4] == 79 && v22[5] == 76 )
      {
        v20 |= 0x4000000u;
        goto LABEL_32;
      }
LABEL_17:
      if ( v23 != 64 )
        goto LABEL_18;
      v20 |= 0x2000000u;
      goto LABEL_32;
    }
    v20 |= 0x2000u;
    *((_DWORD *)this + 61) = v20;
    if ( (*(_BYTE *)(v19 + 27) & 0xF) == 1 )
      *((_QWORD *)this + 2) = L"FIXEDSYS";
  }
LABEL_18:
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
