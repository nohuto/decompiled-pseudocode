/*
 * XREFs of ?vPlgWriteOR@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1403200B0
 * Callers:
 *     EngPlgBlt @ 0x1400E89F0 (EngPlgBlt.c)
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1400F5060 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400F596C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x14014AEB0 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 */

void __fastcall rotate::vPlgWriteOR(
        rotate *this,
        struct rotate::_PLGRUN *a2,
        struct rotate::_PLGRUN *a3,
        struct SURFACE *a4)
{
  unsigned __int64 v4; // r12
  rotate *v5; // rbx
  XCLIPOBJ *v6; // rdi
  struct rotate::_PLGRUN *v8; // r13
  __int64 v9; // rcx
  int v10; // esi
  int v11; // eax
  int v12; // r15d
  __int64 j; // r11
  __int64 v14; // rdi
  int v15; // r10d
  char *v16; // rdx
  unsigned __int8 v17; // r9
  char v18; // r8
  __int64 v19; // rcx
  int v20; // eax
  LONG v21; // ebp
  int v22; // edx
  __int64 v23; // r9
  bool i; // zf
  int v25; // edi
  int v26; // edx
  unsigned __int64 v27; // r8
  char *v28; // r10
  unsigned __int8 v29; // r15
  char v30; // bl
  char v31; // si
  int v32; // [rsp+30h] [rbp-78h]
  int v33; // [rsp+34h] [rbp-74h]
  int v34; // [rsp+3Ch] [rbp-6Ch]
  unsigned __int64 v35; // [rsp+40h] [rbp-68h]
  int v36[2]; // [rsp+48h] [rbp-60h]
  rotate *v37; // [rsp+50h] [rbp-58h]
  struct _RECTL si128; // [rsp+58h] [rbp-50h] BYREF

  if ( a2 )
  {
    v4 = *((_QWORD *)a3 + 9);
    v5 = this;
    v6 = a4;
    v8 = a2;
    v35 = *((unsigned int *)a3 + 16) + v4 - 1;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart(a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      if ( v5 < v8 )
      {
        LODWORD(v19) = *((_DWORD *)a3 + 22);
        do
        {
          v20 = *(_DWORD *)v5;
          v21 = *((_DWORD *)v5 + 1);
          v22 = *((_DWORD *)v5 + 2);
          v5 = (rotate *)((char *)v5 + 12);
          v34 = v20;
          v23 = *((_QWORD *)a3 + 10) + v21 * (int)v19;
          for ( i = v22 == 0; ; i = v22 == 0 )
          {
            *(_QWORD *)v36 = v23;
            v32 = v22;
            if ( i )
              break;
            v37 = (rotate *)((char *)v5 + 8);
            if ( (rotate *)((char *)v5 + 8) > v8 )
              break;
            if ( v21 < si128.top || v21 >= si128.bottom )
            {
              XCLIPOBJ::vFindScan(v6, &si128, v21);
              v23 = *(_QWORD *)v36;
              v22 = v32;
            }
            if ( v21 >= si128.top && v21 < si128.bottom )
            {
              v25 = *(_DWORD *)v5;
              v26 = *((_DWORD *)v5 + 1);
              v27 = v35;
              v33 = v26;
              v28 = (char *)(v23 + ((__int64)*(int *)v5 >> 3));
              v29 = *((_BYTE *)&dword_140364300 + (*(_DWORD *)v5 & 7));
              if ( *(int *)v5 < 0
                || v25 >= *((_DWORD *)a3 + 14)
                || (unsigned __int64)v28 < v4
                || (unsigned __int64)v28 > v35 )
              {
                v31 = 0;
                v30 = 0;
              }
              else
              {
                v30 = *v28;
                v31 = 1;
              }
              if ( v26 >= 0 )
              {
                do
                {
                  if ( (unsigned __int64)v28 < v4 || (unsigned __int64)v28 > v27 )
                    break;
                  if ( v25 < si128.left || v25 >= si128.right )
                  {
                    XCLIPOBJ::vFindSegment(a4, &si128, v25);
                    v27 = v35;
                    v26 = v33;
                  }
                  if ( v25 >= si128.left && v25 < si128.right )
                    v30 |= v34 != 0 ? v29 : 0;
                  --v26;
                  ++v25;
                  v29 >>= 1;
                  v33 = v26;
                  if ( !v29 )
                  {
                    if ( v31 )
                      *v28 = v30;
                    ++v28;
                    v29 = *((_BYTE *)&dword_140364300 + (v25 & 7));
                    if ( v25 < 0
                      || v25 >= *((_DWORD *)a3 + 14)
                      || (unsigned __int64)v28 < v4
                      || (unsigned __int64)v28 > v27 )
                    {
                      v31 = 0;
                      v30 = 0;
                    }
                    else
                    {
                      v30 = *v28;
                      v31 = 1;
                    }
                  }
                }
                while ( v26 >= 0 );
                v8 = a2;
                v23 = *(_QWORD *)v36;
              }
              if ( v31 && (unsigned __int64)v28 >= v4 )
              {
                v6 = a4;
                v22 = v32;
                if ( (unsigned __int64)v28 <= v27 )
                  *v28 = v30;
              }
              else
              {
                v22 = v32;
                v6 = a4;
              }
            }
            v19 = *((int *)a3 + 22);
            ++v21;
            v5 = v37;
            v23 += v19;
            --v22;
          }
        }
        while ( v5 < v8 );
      }
    }
    else if ( this < a2 )
    {
      LODWORD(v9) = *((_DWORD *)a3 + 22);
      do
      {
        v10 = *((_DWORD *)v5 + 2);
        v11 = *((_DWORD *)v5 + 1) * v9;
        v12 = *(_DWORD *)v5;
        v5 = (rotate *)((char *)v5 + 12);
        for ( j = *((_QWORD *)a3 + 10) + v11; v10; --v10 )
        {
          if ( (rotate *)((char *)v5 + 8) > v8 )
            break;
          v14 = *(int *)v5;
          v15 = *((_DWORD *)v5 + 1);
          v16 = (char *)(j + (v14 >> 3));
          v17 = *((_BYTE *)&dword_140364300 + (*(_DWORD *)v5 & 7));
          if ( (unsigned __int64)v16 < v4 || (unsigned __int64)v16 > v35 )
            v18 = 0;
          else
            v18 = *v16;
          while ( v15 >= 0 )
          {
            if ( (unsigned __int64)v16 < v4 || (unsigned __int64)v16 > v35 )
              goto LABEL_23;
            --v15;
            LOBYTE(v14) = v14 + 1;
            v18 |= v12 != 0 ? v17 : 0;
            v17 >>= 1;
            if ( !v17 )
            {
              *v16++ = v18;
              if ( (unsigned __int64)v16 < v4 || (unsigned __int64)v16 > v35 )
                v18 = 0;
              else
                v18 = *v16;
              v17 = *((_BYTE *)&dword_140364300 + (v14 & 7));
            }
          }
          if ( (unsigned __int64)v16 >= v4 && (unsigned __int64)v16 <= v35 )
            *v16 = v18;
LABEL_23:
          v9 = *((int *)a3 + 22);
          j += v9;
          v5 = (rotate *)((char *)v5 + 8);
        }
      }
      while ( v5 < v8 );
    }
  }
}
