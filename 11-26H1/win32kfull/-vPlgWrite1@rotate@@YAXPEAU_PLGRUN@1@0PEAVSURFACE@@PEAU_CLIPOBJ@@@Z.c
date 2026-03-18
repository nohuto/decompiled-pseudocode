/*
 * XREFs of ?vPlgWrite1@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x140341E90
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1400A9464 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x14017E700 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 */

void __fastcall rotate::vPlgWrite1(
        rotate *this,
        struct rotate::_PLGRUN *a2,
        struct rotate::_PLGRUN *a3,
        struct SURFACE *a4)
{
  unsigned __int64 v4; // r12
  XCLIPOBJ *v5; // rsi
  struct rotate::_PLGRUN *v7; // rdi
  rotate *v8; // rbx
  unsigned __int64 v9; // r13
  __int64 v10; // rcx
  int v11; // esi
  int v12; // eax
  int v13; // r15d
  __int64 j; // r10
  int v15; // edi
  int v16; // r11d
  char *v17; // rdx
  unsigned __int8 v18; // r9
  char v19; // r8
  __int64 v20; // rcx
  int v21; // eax
  LONG v22; // r14d
  int v23; // edx
  __int64 v24; // r8
  bool i; // zf
  int v26; // edi
  int v27; // r13d
  unsigned __int64 v28; // rdx
  char *v29; // r10
  unsigned __int8 v30; // r15
  char v31; // bl
  char v32; // si
  bool v33; // cc
  int v34; // [rsp+34h] [rbp-74h]
  int v35; // [rsp+3Ch] [rbp-6Ch]
  unsigned __int64 v36; // [rsp+40h] [rbp-68h]
  __int64 v37; // [rsp+48h] [rbp-60h]
  rotate *v38; // [rsp+50h] [rbp-58h]
  struct _RECTL si128; // [rsp+58h] [rbp-50h] BYREF

  if ( a2 )
  {
    v4 = *((_QWORD *)a3 + 9);
    v5 = a4;
    v7 = a2;
    v8 = this;
    v9 = *((unsigned int *)a3 + 16) + v4 - 1;
    v36 = v9;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart(a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      if ( v8 < v7 )
      {
        LODWORD(v20) = *((_DWORD *)a3 + 22);
        do
        {
          v21 = *(_DWORD *)v8;
          v22 = *((_DWORD *)v8 + 1);
          v23 = *((_DWORD *)v8 + 2);
          v8 = (rotate *)((char *)v8 + 12);
          v35 = v21;
          v24 = *((_QWORD *)a3 + 10) + v22 * (int)v20;
          for ( i = v23 == 0; ; i = v23 == 0 )
          {
            v37 = v24;
            v34 = v23;
            if ( i )
              break;
            v38 = (rotate *)((char *)v8 + 8);
            if ( (rotate *)((char *)v8 + 8) > v7 )
              break;
            if ( v22 < si128.top || v22 >= si128.bottom )
            {
              XCLIPOBJ::vFindScan(v5, &si128, v22);
              v23 = v34;
              v24 = v37;
            }
            if ( v22 >= si128.top && v22 < si128.bottom )
            {
              v26 = *(_DWORD *)v8;
              v27 = *((_DWORD *)v8 + 1);
              v28 = v36;
              v29 = (char *)(v24 + ((__int64)*(int *)v8 >> 3));
              v30 = *((_BYTE *)&dword_1403717B0 + (*(_DWORD *)v8 & 7));
              if ( *(int *)v8 < 0
                || v26 >= *((_DWORD *)a3 + 14)
                || (unsigned __int64)v29 < v4
                || (unsigned __int64)v29 > v36 )
              {
                v32 = 0;
                v31 = 0;
              }
              else
              {
                v31 = *v29;
                v32 = 1;
              }
              if ( v27 )
              {
                do
                {
                  if ( (unsigned __int64)v29 < v4 || (unsigned __int64)v29 > v28 )
                    break;
                  if ( v26 < si128.left || v26 >= si128.right )
                  {
                    XCLIPOBJ::vFindSegment(a4, &si128, v26);
                    v28 = v36;
                  }
                  if ( v26 >= si128.left && v26 < si128.right )
                    v31 = v31 & ~v30 | (v35 != 0 ? v30 : 0);
                  --v27;
                  ++v26;
                  v30 >>= 1;
                  if ( !v30 )
                  {
                    if ( v32 )
                      *v29 = v31;
                    ++v29;
                    v30 = *((_BYTE *)&dword_1403717B0 + (v26 & 7));
                    if ( v26 < 0
                      || v26 >= *((_DWORD *)a3 + 14)
                      || (unsigned __int64)v29 < v4
                      || (unsigned __int64)v29 > v28 )
                    {
                      v32 = 0;
                      v31 = 0;
                    }
                    else
                    {
                      v31 = *v29;
                      v32 = 1;
                    }
                  }
                }
                while ( v27 );
                v24 = v37;
              }
              if ( v32 && (unsigned __int64)v29 >= v4 )
              {
                v7 = a2;
                v33 = (unsigned __int64)v29 <= v28;
                v23 = v34;
                v5 = a4;
                if ( v33 )
                  *v29 = v31;
              }
              else
              {
                v23 = v34;
                v5 = a4;
                v7 = a2;
              }
            }
            v20 = *((int *)a3 + 22);
            ++v22;
            v8 = v38;
            v24 += v20;
            --v23;
          }
        }
        while ( v8 < v7 );
      }
    }
    else if ( this < a2 )
    {
      LODWORD(v10) = *((_DWORD *)a3 + 22);
      do
      {
        v11 = *((_DWORD *)v8 + 2);
        v12 = *((_DWORD *)v8 + 1) * v10;
        v13 = *(_DWORD *)v8;
        v8 = (rotate *)((char *)v8 + 12);
        for ( j = *((_QWORD *)a3 + 10) + v12; v11; --v11 )
        {
          if ( (rotate *)((char *)v8 + 8) > v7 )
            break;
          v15 = *(_DWORD *)v8;
          v16 = *((_DWORD *)v8 + 1);
          v17 = (char *)(j + ((__int64)*(int *)v8 >> 3));
          v18 = *((_BYTE *)&dword_1403717B0 + (*(_DWORD *)v8 & 7));
          if ( (unsigned __int64)v17 < v4 || (unsigned __int64)v17 > v9 )
            v19 = 0;
          else
            v19 = *v17;
          if ( v16 )
          {
            while ( (unsigned __int64)v17 >= v4 && (unsigned __int64)v17 <= v9 )
            {
              --v16;
              v19 = v19 & ~v18 | (v13 != 0 ? v18 : 0);
              LOBYTE(v15) = v15 + 1;
              v18 >>= 1;
              if ( !v18 )
              {
                *v17++ = v19;
                if ( (unsigned __int64)v17 < v4 || (unsigned __int64)v17 > v9 )
                  v19 = 0;
                else
                  v19 = *v17;
                v18 = *((_BYTE *)&dword_1403717B0 + (v15 & 7));
              }
              if ( !v16 )
                goto LABEL_21;
            }
          }
          else
          {
LABEL_21:
            if ( (unsigned __int64)v17 >= v4 && (unsigned __int64)v17 <= v9 )
              *v17 = v19;
          }
          v10 = *((int *)a3 + 22);
          v7 = a2;
          j += v10;
          v8 = (rotate *)((char *)v8 + 8);
        }
      }
      while ( v8 < v7 );
    }
  }
}
