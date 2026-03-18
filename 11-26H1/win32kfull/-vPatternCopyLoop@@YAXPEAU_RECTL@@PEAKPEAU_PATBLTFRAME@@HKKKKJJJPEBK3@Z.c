/*
 * XREFs of ?vPatternCopyLoop@@YAXPEAU_RECTL@@PEAKPEAU_PATBLTFRAME@@HKKKKJJJPEBK3@Z @ 0x1403398F0
 * Callers:
 *     ?vPatCpyRect1_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x140338DC0 (-vPatCpyRect1_8x8@@YAXPEAU_PATBLTFRAME@@H@Z.c)
 *     ?vPatCpyRect4_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x140339030 (-vPatCpyRect4_8x8@@YAXPEAU_PATBLTFRAME@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vPatternCopyLoop(
        struct _RECTL *a1,
        unsigned int *a2,
        struct _PATBLTFRAME *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        int a10,
        int a11,
        const unsigned int *a12,
        const unsigned int *a13)
{
  const unsigned int *v13; // rsi
  struct _RECTL *v14; // r11
  __int64 v15; // r13
  int v16; // edi
  LONG top; // r9d
  int v19; // ecx
  int v20; // r10d
  const unsigned int *v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  int v24; // r15d
  int v25; // r12d
  unsigned int *v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // r11
  void *v29; // rbx
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // rbx
  void *v32; // r11
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // rbx
  _DWORD *v35; // r10
  unsigned __int64 v36; // r11
  unsigned __int64 v37; // rsi
  _DWORD *v38; // r10
  unsigned __int64 v39; // r11
  int v40; // r9d
  int v41; // ecx
  int v42; // r9d
  unsigned int *v44; // [rsp+68h] [rbp+10h]
  LONG v45; // [rsp+70h] [rbp+18h]
  int v47; // [rsp+A0h] [rbp+48h]

  v13 = a12;
  v14 = a1;
  v15 = a9;
  v16 = a4;
  top = a1->top;
  v19 = 8;
  v20 = 4 * a9;
  v21 = &a12[(top - *((_DWORD *)a3 + 9)) & 7];
  v22 = v14->bottom - top;
  if ( v22 < 8 )
  {
    v19 = v14->bottom - top;
    if ( !v22 )
      return;
  }
  v23 = a10;
  v24 = a11;
  do
  {
    v47 = v19 - 1;
    v25 = (v14->bottom - top + 7) >> 3;
    v26 = a2;
    a2 = (unsigned int *)((char *)a2 + v23);
    v45 = top + 1;
    v27 = *v21++;
    v44 = a2;
    if ( v21 == a13 )
      v21 = v13;
    if ( v16 > 5 )
    {
      if ( v16 != 6 )
      {
        if ( v16 != 7 )
        {
          if ( v16 == 8 )
          {
            v41 = a6 & v27;
            v42 = a5 & v27;
            do
            {
              *v26 = v41 | a8 & *v26;
              v26[1] = v42 | a7 & v26[1];
              v26 = (unsigned int *)((char *)v26 + v24);
              --v25;
            }
            while ( v25 );
          }
          else if ( v16 == 9 )
          {
            v40 = a6 & v27;
            do
            {
              *v26 = v40 | a8 & *v26;
              v26 = (unsigned int *)((char *)v26 + v24);
              --v25;
            }
            while ( v25 );
          }
          goto LABEL_141;
        }
        while ( 1 )
        {
          switch ( (_DWORD)v15 )
          {
            case 1:
              goto LABEL_117;
            case 2:
              goto LABEL_116;
            case 3:
              goto LABEL_115;
            case 4:
              goto LABEL_114;
            case 5:
              goto LABEL_113;
            case 6:
              goto LABEL_112;
            case 7:
              goto LABEL_111;
            case 8:
              goto LABEL_110;
          }
          if ( (_DWORD)v15 == 9 )
            break;
LABEL_118:
          v26 = (unsigned int *)((char *)v26 + v24);
          if ( !--v25 )
            goto LABEL_141;
        }
        v26[8] = v27;
LABEL_110:
        v26[7] = v27;
LABEL_111:
        v26[6] = v27;
LABEL_112:
        v26[5] = v27;
LABEL_113:
        v26[4] = v27;
LABEL_114:
        v26[3] = v27;
LABEL_115:
        v26[2] = v27;
LABEL_116:
        v26[1] = v27;
LABEL_117:
        *v26 = v27;
        goto LABEL_118;
      }
      while ( 1 )
      {
        switch ( (_DWORD)v15 )
        {
          case 1:
            goto LABEL_137;
          case 2:
            goto LABEL_136;
          case 3:
            goto LABEL_135;
          case 4:
            goto LABEL_134;
          case 5:
            goto LABEL_133;
          case 6:
            goto LABEL_132;
          case 7:
            goto LABEL_131;
          case 8:
            goto LABEL_130;
        }
        if ( (_DWORD)v15 == 9 )
          break;
LABEL_138:
        v26[v15] = a5 & v27 | a7 & v26[v15];
        v26 = (unsigned int *)((char *)v26 + v24);
        if ( !--v25 )
          goto LABEL_139;
      }
      v26[8] = v27;
LABEL_130:
      v26[7] = v27;
LABEL_131:
      v26[6] = v27;
LABEL_132:
      v26[5] = v27;
LABEL_133:
      v26[4] = v27;
LABEL_134:
      v26[3] = v27;
LABEL_135:
      v26[2] = v27;
LABEL_136:
      v26[1] = v27;
LABEL_137:
      *v26 = v27;
      goto LABEL_138;
    }
    if ( v16 == 5 )
    {
      while ( 1 )
      {
        *v26 = a6 & v27 | a8 & *v26;
        switch ( (_DWORD)v15 )
        {
          case 1:
            goto LABEL_87;
          case 2:
            goto LABEL_86;
          case 3:
            goto LABEL_85;
          case 4:
            goto LABEL_84;
          case 5:
            goto LABEL_83;
          case 6:
            goto LABEL_82;
          case 7:
            goto LABEL_81;
          case 8:
            goto LABEL_80;
        }
        if ( (_DWORD)v15 == 9 )
          break;
LABEL_88:
        v26 = (unsigned int *)((char *)v26 + v24);
        if ( !--v25 )
          goto LABEL_140;
      }
      v26[9] = v27;
LABEL_80:
      v26[8] = v27;
LABEL_81:
      v26[7] = v27;
LABEL_82:
      v26[6] = v27;
LABEL_83:
      v26[5] = v27;
LABEL_84:
      v26[4] = v27;
LABEL_85:
      v26[3] = v27;
LABEL_86:
      v26[2] = v27;
LABEL_87:
      v26[1] = v27;
      goto LABEL_88;
    }
    if ( v16 )
    {
      if ( v16 != 1 )
      {
        if ( v16 != 2 )
        {
          if ( v16 != 3 )
          {
            if ( v16 != 4 )
              goto LABEL_141;
            while ( 1 )
            {
              *v26 = a6 & v27 | a8 & *v26;
              switch ( (_DWORD)v15 )
              {
                case 1:
                  goto LABEL_30;
                case 2:
                  goto LABEL_29;
                case 3:
                  goto LABEL_28;
                case 4:
                  goto LABEL_27;
                case 5:
                  goto LABEL_26;
                case 6:
                  goto LABEL_25;
                case 7:
                  goto LABEL_24;
                case 8:
                  goto LABEL_23;
              }
              if ( (_DWORD)v15 == 9 )
                break;
LABEL_31:
              v26[v15 + 1] = a5 & v27 | a7 & v26[v15 + 1];
              v26 = (unsigned int *)((char *)v26 + v24);
              if ( !--v25 )
              {
                v14 = a1;
                goto LABEL_139;
              }
            }
            v26[9] = v27;
LABEL_23:
            v26[8] = v27;
LABEL_24:
            v26[7] = v27;
LABEL_25:
            v26[6] = v27;
LABEL_26:
            v26[5] = v27;
LABEL_27:
            v26[4] = v27;
LABEL_28:
            v26[3] = v27;
LABEL_29:
            v26[2] = v27;
LABEL_30:
            v26[1] = v27;
            goto LABEL_31;
          }
          v28 = (unsigned __int64)v20 >> 2;
          while ( 1 )
          {
            v29 = v26;
            v30 = v28;
            if ( v28 )
            {
              if ( ((unsigned __int8)v26 & 4) == 0 )
                goto LABEL_38;
              *v26 = v27;
              v30 = v28 - 1;
              if ( v28 != 1 )
                break;
            }
LABEL_40:
            v26 = (unsigned int *)((char *)v26 + v24);
            if ( !--v25 )
              goto LABEL_41;
          }
          v29 = v26 + 1;
LABEL_38:
          memset64(v29, v27 | (v27 << 32), v30 >> 1);
          if ( (v30 & 1) != 0 )
            *((_DWORD *)v29 + v30 - 1) = v27;
          goto LABEL_40;
        }
        v31 = (unsigned __int64)v20 >> 2;
        while ( 1 )
        {
          v32 = v26;
          v33 = v31;
          if ( v31 )
          {
            if ( ((unsigned __int8)v26 & 4) == 0 )
              goto LABEL_47;
            *v26 = v27;
            v33 = v31 - 1;
            if ( v31 != 1 )
              break;
          }
LABEL_49:
          v26[v15] = a5 & v27 | v26[v15] & a7;
          v26 = (unsigned int *)((char *)v26 + v24);
          if ( !--v25 )
          {
            a2 = v44;
            goto LABEL_51;
          }
        }
        v32 = v26 + 1;
LABEL_47:
        memset64(v32, v27 | (v27 << 32), v33 >> 1);
        if ( (v33 & 1) != 0 )
          *((_DWORD *)v32 + v33 - 1) = v27;
        goto LABEL_49;
      }
      v34 = (unsigned __int64)v20 >> 2;
      while ( 1 )
      {
        v35 = v26 + 1;
        v36 = v34;
        *v26 = a6 & v27 | a8 & *v26;
        if ( v34 )
        {
          if ( ((unsigned __int8)v35 & 4) == 0 )
            goto LABEL_57;
          *v35 = v27;
          v36 = v34 - 1;
          if ( v34 != 1 )
            break;
        }
LABEL_59:
        v26 = (unsigned int *)((char *)v26 + v24);
        if ( !--v25 )
        {
LABEL_41:
          v14 = a1;
          a2 = v44;
          v13 = a12;
          goto LABEL_139;
        }
      }
      v35 = v26 + 2;
LABEL_57:
      memset64(v35, v27 | (v27 << 32), v36 >> 1);
      if ( (v36 & 1) != 0 )
        v35[v36 - 1] = v27;
      goto LABEL_59;
    }
    v37 = (unsigned __int64)v20 >> 2;
    do
    {
      v38 = v26 + 1;
      v39 = v37;
      *v26 = a6 & v27 | a8 & *v26;
      if ( !v37 )
        goto LABEL_68;
      if ( ((unsigned __int8)v38 & 4) != 0 )
      {
        *v38 = v27;
        v39 = v37 - 1;
        if ( v37 == 1 )
          goto LABEL_68;
        v38 = v26 + 2;
      }
      memset64(v38, v27 | (v27 << 32), v39 >> 1);
      if ( (v39 & 1) != 0 )
        v38[v39 - 1] = v27;
LABEL_68:
      v26[v15 + 1] = a5 & v27 | a7 & v26[v15 + 1];
      v26 = (unsigned int *)((char *)v26 + v24);
      --v25;
    }
    while ( v25 );
    v24 = a11;
LABEL_51:
    v14 = a1;
    v13 = a12;
LABEL_139:
    v20 = 4 * v15;
LABEL_140:
    v16 = a4;
LABEL_141:
    v19 = v47;
    top = v45;
    v23 = a10;
  }
  while ( v47 );
}
