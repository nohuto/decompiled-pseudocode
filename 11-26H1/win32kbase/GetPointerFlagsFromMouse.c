/*
 * XREFs of GetPointerFlagsFromMouse @ 0x140107200
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetMouseKeyFlags @ 0x140107740 (GetMouseKeyFlags.c)
 */

__int64 __fastcall GetPointerFlagsFromMouse(_DWORD *a1, __int64 a2, unsigned __int64 a3, int *a4, _DWORD *a5)
{
  unsigned int v7; // ebx
  struct tagTHREADINFO *v9; // rbp
  _DWORD *v10; // r10
  int v11; // edi
  int MouseKeyFlags; // r8d
  bool v13; // zf
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned __int16 *i; // rdx
  __int64 v19; // r10
  int v20; // edx
  unsigned __int16 v21; // ax
  int v22; // edi
  unsigned __int8 v23; // cl
  int v24; // r11d
  int v25; // r9d
  unsigned int v26; // ebx
  unsigned int v27; // ebx
  unsigned int v28; // ebx
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  bool v32; // zf
  unsigned int v33; // ebx
  unsigned int v34; // ebx
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  unsigned int v37; // r9d
  int v38; // edx
  int v39; // ecx
  int v40; // edx
  int v41; // ecx
  int v42; // ecx
  unsigned int v43; // ebx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  bool v48; // zf
  unsigned int v49; // eax
  int v50; // ecx
  unsigned __int64 v51; // rsi
  unsigned __int64 v52; // rsi
  unsigned int v53; // ebx
  unsigned int v54; // ebx
  unsigned int v55; // ebx
  unsigned int v56; // ebx
  unsigned int v57; // ebx

  v7 = a2;
  v9 = PtiCurrent((__int64)a1, a2);
  v10 = (_DWORD *)*((_QWORD *)v9 + 189);
  v11 = -__CFSHR__(*v10, 4);
  if ( __CFSHR__(*v10, 4) )
  {
    if ( v7 <= 0x206 )
    {
      if ( v7 == 518 || v7 == 512 || v7 == 513 || v7 == 514 )
        goto LABEL_91;
      v49 = v7 - 515;
      v48 = v7 == 515;
    }
    else
    {
      if ( v7 == 519 || v7 == 520 || v7 == 521 )
        goto LABEL_91;
      v49 = v7 - 523;
      v48 = v7 == 523;
    }
    if ( !v48 && v49 - 1 > 1 )
      goto LABEL_2;
LABEL_91:
    v7 -= 352;
  }
LABEL_2:
  MouseKeyFlags = GetMouseKeyFlags(*((_QWORD *)v9 + 58));
  switch ( v7 )
  {
    case 0xA1u:
      goto LABEL_71;
    case 0xA4u:
      goto LABEL_83;
    case 0xA7u:
      goto LABEL_105;
  }
  if ( v7 != 171 )
  {
    if ( v7 != 513 )
    {
      if ( v7 != 516 )
      {
        if ( v7 != 519 )
        {
          if ( v7 != 523 )
            goto LABEL_10;
          goto LABEL_95;
        }
LABEL_105:
        MouseKeyFlags &= ~0x10u;
        goto LABEL_10;
      }
LABEL_83:
      MouseKeyFlags &= ~2u;
      goto LABEL_10;
    }
LABEL_71:
    MouseKeyFlags &= ~1u;
    goto LABEL_10;
  }
LABEL_95:
  v50 = 32;
  if ( WORD1(a3) != 1 )
    v50 = 64;
  MouseKeyFlags &= ~v50;
LABEL_10:
  if ( v7 > 0x200 )
  {
    v13 = v7 == 514;
    v14 = v7 - 514;
  }
  else
  {
    if ( v7 == 512 || v7 == 160 )
    {
LABEL_18:
      if ( (MouseKeyFlags & 0x73) != 0 )
      {
        if ( v7 - 160 <= 0xD )
        {
          if ( !v11 )
            v7 += 352;
        }
        else if ( v11 )
        {
          v7 -= 352;
        }
      }
      goto LABEL_19;
    }
    v14 = v7 - 162;
    v13 = v7 == 162;
  }
  if ( v13 )
    goto LABEL_18;
  v15 = v14 - 3;
  if ( !v15 )
    goto LABEL_18;
  v16 = v15 - 3;
  if ( !v16 || v16 == 4 )
    goto LABEL_18;
LABEL_19:
  v17 = 0LL;
  for ( i = (unsigned __int16 *)&unk_14026A3C0; *i != v7; i += 12 )
  {
    v17 = (unsigned int)(v17 + 1);
    if ( (unsigned int)v17 >= 0x1C )
      return 0LL;
  }
  v19 = 3 * v17;
  v20 = *((_DWORD *)&unk_14026A3C0 + 6 * v17 + 2);
  if ( (v20 & 0x10000) == 0 || (MouseKeyFlags & 0x73) != 0 )
  {
    v20 = *((_DWORD *)&unk_14026A3C0 + 6 * v17 + 3);
    v21 = *((_WORD *)&unk_14026A3C0 + 12 * v17 + 2);
  }
  else
  {
    v21 = *((_WORD *)&unk_14026A3C0 + 12 * v17 + 1);
  }
  *a4 = MouseKeyFlags;
  v22 = v20;
  v23 = *((_BYTE *)&unk_14026A3C0 + 24 * v17 + 16);
  v24 = v21;
  if ( v23 )
  {
    if ( v23 == 5 )
    {
      if ( WORD1(a3) != 1 && WORD1(a3) != 2 )
        return 0LL;
      v23 = BYTE2(a3) + 4;
    }
    v41 = v23 - 1;
    if ( v41 )
    {
      v44 = v41 - 1;
      if ( v44 )
      {
        v45 = v44 - 2;
        if ( v45 )
        {
          v46 = v45 - 1;
          if ( v46 )
          {
            if ( v46 == 1 )
              v42 = 64;
            else
              v42 = 0;
          }
          else
          {
            v42 = 32;
          }
        }
        else
        {
          v42 = 16;
        }
      }
      else
      {
        v42 = 2;
      }
    }
    else
    {
      v42 = 1;
    }
    if ( (*((_DWORD *)&unk_14026A3C0 + 2 * v19 + 2) & 0x10000) != 0 )
    {
      MouseKeyFlags |= v42;
      *a4 = MouseKeyFlags;
    }
    else
    {
      v47 = MouseKeyFlags & ~v42;
      LOBYTE(MouseKeyFlags) = v47;
      *a4 = v47;
    }
  }
  if ( (MouseKeyFlags & 0x73) != 0 )
  {
    v38 = v20 | 4;
    if ( (MouseKeyFlags & 1) != 0 )
      v38 = v22 | 0x14;
    v39 = v38 | 0x20;
    if ( (MouseKeyFlags & 2) == 0 )
      v39 = v38;
    v40 = v39 | 0x40;
    if ( (MouseKeyFlags & 0x10) == 0 )
      v40 = v39;
    v25 = v40 | 0x80;
    if ( (MouseKeyFlags & 0x20) == 0 )
      v25 = v40;
    if ( (MouseKeyFlags & 0x40) != 0 )
      v25 |= 0x100u;
  }
  else
  {
    v24 = *((unsigned __int16 *)&unk_14026A3C0 + 4 * v19 + 1);
    v25 = *((_DWORD *)&unk_14026A3C0 + 2 * v19 + 2) | v20 & ~*((_DWORD *)&unk_14026A3C0 + 2 * v19 + 3);
  }
  *a5 = 0;
  if ( v7 > 0x200 )
  {
    if ( v7 <= 0x207 )
    {
      if ( v7 != 519 )
      {
        v53 = v7 - 513;
        if ( !v53 )
          goto LABEL_74;
        v54 = v53 - 1;
        if ( !v54 )
          goto LABEL_92;
        v55 = v54 - 1;
        if ( !v55 )
          goto LABEL_74;
        v56 = v55 - 1;
        if ( v56 )
        {
          v57 = v56 - 1;
          if ( !v57 )
            goto LABEL_36;
          if ( v57 != 1 )
            goto LABEL_46;
        }
LABEL_99:
        *a5 = 3;
        goto LABEL_46;
      }
LABEL_109:
      *a5 = 5;
      goto LABEL_46;
    }
    v33 = v7 - 520;
    v32 = v33 == 0;
LABEL_41:
    if ( v32 )
    {
      *a5 = 6;
      goto LABEL_46;
    }
    v34 = v33 - 1;
    if ( v34 )
    {
      v35 = v34 - 2;
      if ( !v35 )
        goto LABEL_103;
      v36 = v35 - 1;
      if ( !v36 )
      {
        v51 = a3 >> 16;
        if ( (_WORD)v51 == 1 )
        {
          *a5 = 8;
        }
        else if ( (_WORD)v51 == 2 )
        {
          *a5 = 10;
        }
        goto LABEL_46;
      }
      if ( v36 == 1 )
      {
LABEL_103:
        v52 = a3 >> 16;
        if ( (_WORD)v52 == 1 )
        {
          *a5 = 7;
        }
        else if ( (_WORD)v52 == 2 )
        {
          *a5 = 9;
        }
      }
      goto LABEL_46;
    }
    goto LABEL_109;
  }
  if ( v7 == 512 )
    goto LABEL_46;
  if ( v7 > 0xA6 )
  {
    v43 = v7 - 167;
    if ( !v43 )
      goto LABEL_109;
    v33 = v43 - 1;
    v32 = v33 == 0;
    goto LABEL_41;
  }
  if ( v7 == 166 )
    goto LABEL_99;
  v26 = v7 - 160;
  if ( !v26 )
    goto LABEL_46;
  v27 = v26 - 1;
  if ( !v27 )
  {
LABEL_74:
    *a5 = 1;
    goto LABEL_46;
  }
  v28 = v27 - 1;
  if ( !v28 )
  {
LABEL_92:
    *a5 = 2;
    goto LABEL_46;
  }
  v29 = v28 - 1;
  if ( !v29 )
    goto LABEL_74;
  v30 = v29 - 1;
  if ( !v30 )
    goto LABEL_99;
  if ( v30 == 1 )
LABEL_36:
    *a5 = 4;
LABEL_46:
  v37 = v25 | 2;
  **((_DWORD **)v9 + 189) = (32 * *((_DWORD *)&unk_14026A3C0 + 2 * v19 + 5)) ^ (**((_DWORD **)v9 + 189) ^ (32 * *((_DWORD *)&unk_14026A3C0 + 2 * v19 + 5))) & 0xFFFFFFDF;
  if ( a1 )
    *a1 = v24;
  return v37;
}
