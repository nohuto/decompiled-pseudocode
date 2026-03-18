/*
 * XREFs of ?vPlgWrite24@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1400F3F50
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1400F5060 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400F596C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 */

void __fastcall rotate::vPlgWrite24(
        rotate *this,
        struct rotate::_PLGRUN *a2,
        struct rotate::_PLGRUN *a3,
        struct SURFACE *a4)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rax
  struct rotate::_PLGRUN *v7; // rdi
  struct rotate::_PLGRUN *v8; // rsi
  unsigned __int64 v10; // r12
  int right; // r13d
  int v12; // eax
  LONG v13; // r14d
  int v14; // ecx
  __int64 v15; // r12
  bool i; // zf
  LONG bottom; // eax
  __int64 v18; // rdx
  int v19; // r11d
  unsigned __int64 v20; // r8
  int left; // edi
  unsigned __int64 v22; // rax
  __int16 v23; // si
  unsigned __int64 v24; // r14
  _DWORD *v25; // r9
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // r10
  __int64 v29; // rbx
  _DWORD *v30; // rcx
  int v31; // r9d
  int v32; // r10d
  int v33; // eax
  int v34; // r10d
  int v35; // r8d
  __int64 j; // rdx
  unsigned __int64 v37; // rcx
  int k; // eax
  char v39; // [rsp+32h] [rbp-4Eh]
  int v40; // [rsp+34h] [rbp-4Ch]
  LONG v41; // [rsp+38h] [rbp-48h]
  struct _RECTL si128; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v43; // [rsp+50h] [rbp-30h]
  int v44; // [rsp+58h] [rbp-28h]
  int v45; // [rsp+5Ch] [rbp-24h]
  __int64 v46; // [rsp+60h] [rbp-20h]
  unsigned __int64 v47; // [rsp+68h] [rbp-18h]
  rotate *v48; // [rsp+70h] [rbp-10h]

  if ( a2 )
  {
    v4 = *((_QWORD *)a3 + 9);
    v6 = *((unsigned int *)a3 + 16);
    v7 = a3;
    v8 = a2;
    v43 = v4;
    v10 = v6 + v4 - 3;
    v47 = v10;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart(a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      if ( this < v8 )
      {
        right = si128.right;
        do
        {
          v12 = *(_DWORD *)this;
          v13 = *((_DWORD *)this + 1);
          v14 = *((_DWORD *)this + 2);
          this = (rotate *)((char *)this + 12);
          v44 = v12;
          v39 = BYTE2(v12);
          v15 = *((_QWORD *)v7 + 10) + *((_DWORD *)v7 + 22) * v13;
          for ( i = v14 == 0; ; i = v14 == 0 )
          {
            v46 = v15;
            v40 = v14;
            v41 = v13;
            if ( i )
              break;
            v48 = (rotate *)((char *)this + 8);
            if ( (rotate *)((char *)this + 8) > v8 )
              break;
            if ( v13 < si128.top || (bottom = si128.bottom, v13 >= si128.bottom) )
            {
              XCLIPOBJ::vFindScan(a4, &si128, v13);
              bottom = si128.bottom;
              v14 = v40;
              right = si128.right;
            }
            if ( v13 >= si128.top && v13 < bottom )
            {
              v18 = *(int *)this;
              v19 = *((_DWORD *)this + 1);
              v20 = v18 + v15 + 2 * v18;
              if ( v19 )
              {
                left = si128.left;
                v22 = v43;
                v23 = v44;
                v24 = v47;
                while ( 1 )
                {
                  if ( v20 > v24 || v20 < v22 )
                    goto LABEL_25;
                  if ( (int)v18 < right && (int)v18 >= left )
                    goto LABEL_21;
                  v25 = (_DWORD *)*((_QWORD *)a4 + 10);
                  v26 = 0LL;
                  v27 = *v25;
                  v45 = *v25;
                  while ( 1 )
                  {
                    if ( (_DWORD)v26 == v27 )
                    {
                      v22 = v43;
                      goto LABEL_21;
                    }
                    v28 = (unsigned int)v26;
                    if ( (int)v18 >= v25[v26 + 3] )
                      break;
LABEL_47:
                    v26 = (unsigned int)(v26 + 2);
                  }
                  v29 = (unsigned int)(v26 + 1);
                  if ( (int)v18 >= v25[v29 + 3] )
                    break;
                  v30 = v25;
                  v31 = v25[v28 + 3];
                  if ( v31 <= *((_DWORD *)a4 + 1) )
                    v31 = *((_DWORD *)a4 + 1);
                  v32 = v30[v29 + 3];
                  if ( v32 >= *((_DWORD *)a4 + 3) )
                    v32 = *((_DWORD *)a4 + 3);
                  v22 = v43;
                  if ( v31 < v32 )
                  {
                    left = v31;
                    right = v32;
                  }
LABEL_21:
                  if ( (int)v18 >= left && (int)v18 < right )
                  {
                    *(_WORD *)v20 = v23;
                    *(_BYTE *)(v20 + 2) = v39;
                  }
                  LODWORD(v18) = v18 + 1;
                  v20 += 3LL;
                  if ( !--v19 )
                  {
LABEL_25:
                    v8 = a2;
                    v13 = v41;
                    v15 = v46;
                    v14 = v40;
                    si128.left = left;
                    v7 = a3;
                    si128.right = right;
                    goto LABEL_13;
                  }
                }
                v27 = v45;
                goto LABEL_47;
              }
            }
LABEL_13:
            ++v13;
            this = v48;
            v15 += *((int *)v7 + 22);
            --v14;
          }
        }
        while ( this < v8 );
      }
    }
    else
    {
      while ( this < v8 )
      {
        v33 = *((_DWORD *)v7 + 22) * *((_DWORD *)this + 1);
        v34 = *(_DWORD *)this;
        v35 = *((_DWORD *)this + 2);
        this = (rotate *)((char *)this + 12);
        for ( j = *((_QWORD *)v7 + 10) + v33; v35; --v35 )
        {
          if ( (rotate *)((char *)this + 8) > v8 )
            break;
          v37 = j + 2LL * *(int *)this + *(int *)this;
          for ( k = *((_DWORD *)this + 1); k; --k )
          {
            if ( v37 < v4 )
              break;
            if ( v37 > v10 )
              break;
            *(_WORD *)v37 = v34;
            *(_BYTE *)(v37 + 2) = BYTE2(v34);
            v37 += 3LL;
          }
          this = (rotate *)((char *)this + 8);
          j += *((int *)v7 + 22);
        }
      }
    }
  }
}
