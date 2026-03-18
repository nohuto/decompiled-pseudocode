/*
 * XREFs of ?vStrWrite16@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x140314B10
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1400F5060 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400F596C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x14014AEB0 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

void __fastcall stretch::vStrWrite16(
        LONG *this,
        struct stretch::_STRRUN *a2,
        struct stretch::_XRUNLEN *a3,
        struct SURFACE *a4)
{
  struct stretch::_STRRUN *v4; // rdi
  struct stretch::_XRUNLEN *v6; // r13
  __int64 v9; // r14
  __int64 v10; // rdx
  unsigned int v11; // r10d
  _WORD *v12; // r9
  _WORD *v13; // r8
  __int16 *v14; // rcx
  __int64 v15; // rdx
  __int16 v16; // ax
  int i; // r15d
  char *v18; // rbx
  bool v19; // zf
  unsigned __int64 v20; // r10
  LONG v21; // ecx
  unsigned __int64 v22; // r14
  LONG v23; // edx
  __int64 v24; // rax
  int v25; // r14d
  __int64 v26; // r11
  LONG v27; // edx
  __int64 v28; // rax
  LONG v29; // r9d
  LONG left; // r8d
  LONG v31; // ecx
  int v32; // r10d
  _WORD *v33; // r11
  _WORD *v34; // r9
  int v35; // r8d
  __int64 v36; // rdx
  int *v37; // rcx
  __int16 v38; // ax
  size_t v39; // r15
  __int64 v40; // rsi
  char *v41; // rbx
  LONG v42; // ebx
  LONG v43; // r15d
  __int64 v44; // rcx
  struct stretch::_STRRUN *v45; // rsi
  __int64 v46; // r10
  int v47; // r8d
  _WORD *v48; // rdx
  _WORD *v49; // r13
  __int64 v50; // [rsp+30h] [rbp-20h]
  _WORD *v51; // [rsp+30h] [rbp-20h]
  __int64 v52; // [rsp+38h] [rbp-18h]
  struct _RECTL si128; // [rsp+40h] [rbp-10h] BYREF
  int v54; // [rsp+98h] [rbp+48h]
  int v55; // [rsp+98h] [rbp+48h]

  if ( a2 )
  {
    v4 = (struct stretch::_STRRUN *)(this + 2);
    v6 = a3;
    if ( a4 )
    {
      v19 = *((_BYTE *)a4 + 20) == 1;
      si128 = 0LL;
      if ( v19 )
      {
        v20 = *(_QWORD *)((char *)a4 + 12);
        v21 = *this;
        v22 = HIDWORD(v20);
        v54 = v20;
        si128 = *(struct _RECTL *)((char *)a4 + 4);
        if ( v21 < SHIDWORD(v20) )
        {
          v23 = v21 + this[1];
          v24 = HIDWORD(*(_QWORD *)&si128.left);
          if ( v23 > si128.top )
          {
            if ( v21 >= si128.top )
              LODWORD(v24) = v21;
            if ( v23 < SHIDWORD(v20) )
              LODWORD(v22) = v21 + this[1];
            v25 = v22 - v24;
            v26 = *((_QWORD *)a3 + 10) + *((_DWORD *)a3 + 22) * (int)v24;
            v50 = v26;
            while ( v4 != a2 )
            {
              v27 = *(_DWORD *)v4;
              v28 = *((int *)v4 + 1);
              v29 = v28 + *(_DWORD *)v4;
              if ( v29 >= si128.left )
              {
                if ( v27 >= (int)v20 )
                  return;
                left = si128.left;
                v31 = v20;
                if ( v27 >= si128.left )
                  left = *(_DWORD *)v4;
                if ( v29 < (int)v20 )
                  v31 = v28 + *(_DWORD *)v4;
                v32 = v31 - left;
                v33 = (_WORD *)(v26 + 2LL * left);
                v34 = v33;
                if ( left < v31 )
                {
                  v35 = left - v27;
                  v36 = v32;
                  v37 = (int *)((char *)v4 + 4 * v35 + 8);
                  do
                  {
                    v38 = *(_WORD *)v37++;
                    *v34++ = v38;
                    --v36;
                  }
                  while ( v36 );
                }
                if ( v25 > 1 )
                {
                  v39 = 2 * v32;
                  v40 = (unsigned int)(v25 - 1);
                  do
                  {
                    v41 = (char *)v33 + *((int *)v6 + 22);
                    memmove(v41, v33, v39);
                    v33 = v41;
                    --v40;
                  }
                  while ( v40 );
                }
                LODWORD(v20) = v54;
                v26 = v50;
                v4 = (struct stretch::_STRRUN *)((char *)v4 + 4 * *((int *)v4 + 1) + 8);
              }
              else
              {
                v4 = (struct stretch::_STRRUN *)((char *)v4 + 4 * v28 + 8);
              }
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart(a4, 0, 0, 4u, 0x64u);
        v42 = *this;
        v43 = this[1];
        si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
LABEL_54:
        XCLIPOBJ::vFindScan(a4, &si128, v42);
        while ( v43 )
        {
          --v43;
          if ( v42 >= si128.top && v42 < si128.bottom )
          {
            v44 = *((_QWORD *)v6 + 10) + *((_DWORD *)v6 + 22) * v42;
            v52 = v44;
            if ( v4 != a2 )
            {
              v45 = v4;
              do
              {
                v46 = *(int *)v45;
                v47 = v46 + *((_DWORD *)v45 + 1);
                v55 = v47;
                v48 = (_WORD *)(v44 + 2 * v46);
                v51 = v48;
                if ( (int)v46 < v47 )
                {
                  v49 = (_WORD *)((char *)v45 + 8);
                  do
                  {
                    if ( (int)v46 < si128.left || (int)v46 >= si128.right )
                    {
                      XCLIPOBJ::vFindSegment(a4, &si128, v46);
                      v47 = v55;
                      v48 = v51;
                    }
                    if ( (int)v46 >= si128.left && (int)v46 < si128.right )
                      *v48 = *v49;
                    ++v48;
                    v49 += 2;
                    LODWORD(v46) = v46 + 1;
                    v51 = v48;
                  }
                  while ( (int)v46 < v47 );
                  v44 = v52;
                }
                v45 = (struct stretch::_STRRUN *)((char *)v45 + 4 * *((int *)v45 + 1) + 8);
              }
              while ( v45 != a2 );
              v6 = a3;
            }
          }
          if ( ++v42 < si128.top || v42 >= si128.bottom )
            goto LABEL_54;
        }
      }
    }
    else
    {
      v9 = *((_QWORD *)a3 + 10) + *this * *((_DWORD *)a3 + 22);
      while ( v4 != a2 )
      {
        v10 = *(int *)v4;
        v11 = *((_DWORD *)v4 + 1);
        v12 = (_WORD *)(v9 + 2 * v10);
        v13 = v12;
        if ( (int)v10 < (int)(v11 + v10) )
        {
          v14 = (__int16 *)((char *)v4 + 8);
          v15 = v11;
          do
          {
            v16 = *v14;
            v14 += 2;
            *v13++ = v16;
            --v15;
          }
          while ( v15 );
        }
        for ( i = 1; i < this[1]; v12 = v18 )
        {
          v18 = (char *)v12 + *((int *)v6 + 22);
          memmove(v18, v12, 2 * *((_DWORD *)v4 + 1));
          ++i;
        }
        v4 = (struct stretch::_STRRUN *)((char *)v4 + 4 * *((int *)v4 + 1) + 8);
      }
    }
  }
}
