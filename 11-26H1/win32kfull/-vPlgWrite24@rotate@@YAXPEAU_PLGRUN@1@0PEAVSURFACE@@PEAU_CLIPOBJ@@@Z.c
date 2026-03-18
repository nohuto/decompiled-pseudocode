/*
 * XREFs of ?vPlgWrite24@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1401AAFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1400A9464 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 */

void __fastcall rotate::vPlgWrite24(
        rotate *this,
        struct rotate::_PLGRUN *a2,
        struct rotate::_PLGRUN *a3,
        struct SURFACE *a4)
{
  unsigned __int64 v4; // r15
  __int64 v6; // rax
  struct rotate::_PLGRUN *v7; // rdi
  struct rotate::_PLGRUN *v8; // rsi
  unsigned __int64 v10; // r12
  int right; // r12d
  int left; // r13d
  int v13; // eax
  LONG v14; // r8d
  int v15; // ecx
  __int64 v16; // r15
  bool i; // zf
  LONG bottom; // eax
  __int64 v19; // rcx
  int v20; // ebx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int16 v23; // di
  unsigned __int64 v24; // r8
  int *v25; // r10
  __int64 v26; // r9
  int v27; // eax
  int v28; // r11d
  int v29; // r9d
  int v30; // eax
  int v31; // r10d
  int v32; // r8d
  __int64 j; // rdx
  unsigned __int64 v34; // rcx
  int k; // eax
  int v36; // [rsp+30h] [rbp-50h]
  char v37; // [rsp+36h] [rbp-4Ah]
  LONG v38; // [rsp+38h] [rbp-48h]
  struct _RECTL si128; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v40; // [rsp+50h] [rbp-30h]
  int v41; // [rsp+58h] [rbp-28h]
  int v42; // [rsp+5Ch] [rbp-24h]
  unsigned __int64 v43; // [rsp+60h] [rbp-20h]
  __int64 v44; // [rsp+68h] [rbp-18h]
  rotate *v45; // [rsp+70h] [rbp-10h]

  if ( a2 )
  {
    v4 = *((_QWORD *)a3 + 9);
    v6 = *((unsigned int *)a3 + 16);
    v7 = a3;
    v8 = a2;
    v40 = v4;
    v10 = v6 + v4 - 3;
    v43 = v10;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart(a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      if ( this < v8 )
      {
        right = si128.right;
        left = si128.left;
        do
        {
          v13 = *(_DWORD *)this;
          v14 = *((_DWORD *)this + 1);
          v15 = *((_DWORD *)this + 2);
          this = (rotate *)((char *)this + 12);
          v41 = v13;
          v37 = BYTE2(v13);
          v16 = *((_QWORD *)v7 + 10) + *((_DWORD *)v7 + 22) * v14;
          for ( i = v15 == 0; ; i = v15 == 0 )
          {
            v36 = v15;
            v38 = v14;
            if ( i )
              break;
            v45 = (rotate *)((char *)this + 8);
            if ( (rotate *)((char *)this + 8) > v8 )
              break;
            if ( v14 < si128.top || (bottom = si128.bottom, v14 >= si128.bottom) )
            {
              XCLIPOBJ::vFindScan(a4, &si128, v14);
              bottom = si128.bottom;
              v15 = v36;
              right = si128.right;
              left = si128.left;
            }
            if ( v14 >= si128.top && v14 < bottom )
            {
              v19 = *(int *)this;
              v20 = *((_DWORD *)this + 1);
              v21 = v19 + v16 + 2 * v19;
              if ( v20 )
              {
                v22 = v40;
                v23 = v41;
                v24 = v43;
                do
                {
                  if ( v21 > v24 || v21 < v22 )
                    break;
                  if ( (int)v19 >= right || (int)v19 < left )
                  {
                    v25 = (int *)*((_QWORD *)a4 + 10);
                    v26 = 0LL;
                    v27 = *v25;
                    v42 = *v25;
                    while ( 1 )
                    {
                      if ( (_DWORD)v26 == v27 )
                      {
                        v22 = v40;
                        goto LABEL_22;
                      }
                      v44 = (unsigned int)v26;
                      if ( (int)v19 >= v25[v26 + 3] && (int)v19 < v25[(unsigned int)(v26 + 1) + 3] )
                        break;
                      v27 = v42;
                      v26 = (unsigned int)(v26 + 2);
                    }
                    v28 = v25[(unsigned int)(v26 + 1) + 3];
                    v29 = v25[v44 + 3];
                    if ( v29 <= *((_DWORD *)a4 + 1) )
                      v29 = *((_DWORD *)a4 + 1);
                    if ( v28 >= *((_DWORD *)a4 + 3) )
                      v28 = *((_DWORD *)a4 + 3);
                    v22 = v40;
                    if ( v29 < v28 )
                    {
                      left = v29;
                      right = v28;
                    }
                  }
LABEL_22:
                  if ( (int)v19 >= left && (int)v19 < right )
                  {
                    *(_WORD *)v21 = v23;
                    *(_BYTE *)(v21 + 2) = v37;
                  }
                  LODWORD(v19) = v19 + 1;
                  v21 += 3LL;
                  --v20;
                }
                while ( v20 );
                v7 = a3;
                v8 = a2;
                v14 = v38;
                si128.right = right;
                si128.left = left;
              }
              v15 = v36;
            }
            ++v14;
            this = v45;
            v16 += *((int *)v7 + 22);
            --v15;
          }
        }
        while ( this < v8 );
      }
    }
    else
    {
      while ( this < v8 )
      {
        v30 = *((_DWORD *)v7 + 22) * *((_DWORD *)this + 1);
        v31 = *(_DWORD *)this;
        v32 = *((_DWORD *)this + 2);
        this = (rotate *)((char *)this + 12);
        for ( j = *((_QWORD *)v7 + 10) + v30; v32; --v32 )
        {
          if ( (rotate *)((char *)this + 8) > v8 )
            break;
          v34 = j + 2LL * *(int *)this + *(int *)this;
          for ( k = *((_DWORD *)this + 1); k; --k )
          {
            if ( v34 < v4 )
              break;
            if ( v34 > v10 )
              break;
            *(_WORD *)v34 = v31;
            *(_BYTE *)(v34 + 2) = BYTE2(v31);
            v34 += 3LL;
          }
          this = (rotate *)((char *)this + 8);
          j += *((int *)v7 + 22);
        }
      }
    }
  }
}
