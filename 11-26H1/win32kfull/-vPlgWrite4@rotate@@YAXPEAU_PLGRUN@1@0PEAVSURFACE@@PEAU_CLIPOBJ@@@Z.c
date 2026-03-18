/*
 * XREFs of ?vPlgWrite4@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x140342230
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1400A9464 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x14017E700 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 */

void __fastcall rotate::vPlgWrite4(
        rotate *this,
        struct rotate::_PLGRUN *a2,
        struct rotate::_PLGRUN *a3,
        struct SURFACE *a4)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  struct rotate::_PLGRUN *v8; // r13
  struct rotate::_PLGRUN *v9; // r14
  int v10; // edi
  int v11; // r11d
  int v12; // eax
  __int64 k; // r10
  rotate *v14; // rsi
  __int64 v15; // rax
  int v16; // ebx
  __int64 v17; // r8
  int v18; // eax
  _BYTE *v19; // r8
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r14
  char v22; // r9
  char v23; // cl
  _BYTE *v24; // rax
  int v25; // eax
  int v26; // edi
  LONG v27; // r9d
  int v28; // esi
  char v29; // di
  __int64 i; // r11
  rotate *v31; // r15
  __int64 v32; // r10
  int v33; // ebx
  _BYTE *v34; // r8
  unsigned __int64 v35; // r13
  char v36; // dl
  _BYTE *v37; // rax
  int v38; // eax
  int v39; // ecx
  LONG v40; // esi
  int v41; // edx
  int v42; // ecx
  int v43; // eax
  __int64 v44; // rcx
  bool j; // zf
  int v46; // edx
  LONG v47; // edi
  __int64 v48; // rbx
  _BYTE *v49; // rbx
  char v50; // r13
  unsigned __int64 v51; // r14
  unsigned __int64 v52; // rsi
  char v53; // r10
  _BYTE *v54; // rax
  int v55; // [rsp+30h] [rbp-50h]
  struct _RECTL si128; // [rsp+38h] [rbp-48h] BYREF
  int v57; // [rsp+48h] [rbp-38h]
  LONG v58; // [rsp+4Ch] [rbp-34h]
  int v59; // [rsp+50h] [rbp-30h]
  unsigned __int64 v60; // [rsp+58h] [rbp-28h]
  unsigned __int64 v61; // [rsp+60h] [rbp-20h]
  __int64 v62; // [rsp+68h] [rbp-18h]
  rotate *v63; // [rsp+70h] [rbp-10h]

  if ( a2 )
  {
    v5 = *((_QWORD *)a3 + 9);
    v6 = v5 + *((unsigned int *)a3 + 16) - 1LL;
    v60 = v5;
    v61 = v6;
    v8 = a3;
    v9 = a2;
    if ( a4 )
    {
      j = *((_BYTE *)a4 + 20) == 1;
      si128 = 0LL;
      if ( j )
      {
        si128 = *(struct _RECTL *)((char *)a4 + 4);
        while ( this < v9 )
        {
          v25 = *(_DWORD *)this;
          v26 = *(_DWORD *)this;
          v27 = *((_DWORD *)this + 1);
          v28 = *((_DWORD *)this + 2);
          this = (rotate *)((char *)this + 12);
          v29 = v25 | (16 * v26);
          for ( i = *((_QWORD *)v8 + 10) + *((_DWORD *)v8 + 22) * v27; v28; --v28 )
          {
            v31 = (rotate *)((char *)this + 8);
            if ( (rotate *)((char *)this + 8) > v9 )
              break;
            if ( v27 >= si128.top && v27 < si128.bottom )
            {
              v32 = *(int *)this;
              v33 = *((_DWORD *)this + 1);
              v34 = (_BYTE *)(i + (v32 >> 1));
              if ( v33 )
              {
                v35 = v61;
                v36 = (v32 & 1) != 0 ? 15 : -16;
                do
                {
                  if ( (unsigned __int64)v34 < v5 || (unsigned __int64)v34 > v35 )
                    break;
                  if ( (int)v32 >= si128.left && (int)v32 < si128.right )
                  {
                    *v34 = v36 & v29 | *v34 & ~v36;
                    v5 = v60;
                  }
                  LODWORD(v32) = v32 + 1;
                  v37 = v34 + 1;
                  v36 = ~v36;
                  if ( v36 != -16 )
                    v37 = v34;
                  v34 = v37;
                  --v33;
                }
                while ( v33 );
                v8 = a3;
              }
            }
            ++v27;
            i += *((int *)v8 + 22);
            this = v31;
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart(a4, 0, 0, 4u, 0x64u);
        si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
        while ( this < v9 )
        {
          v38 = *(_DWORD *)this;
          v39 = *(_DWORD *)this;
          v40 = *((_DWORD *)this + 1);
          v41 = *((_DWORD *)this + 2);
          this = (rotate *)((char *)this + 12);
          v42 = v38 | (16 * v39);
          v43 = *((_DWORD *)v8 + 22) * v40;
          v59 = v42;
          v44 = *((_QWORD *)v8 + 10) + v43;
          for ( j = v41 == 0; ; j = v41 == 0 )
          {
            v62 = v44;
            v55 = v41;
            v58 = v40;
            if ( j )
              break;
            v63 = (rotate *)((char *)this + 8);
            if ( (rotate *)((char *)this + 8) > v9 )
              break;
            if ( v40 < si128.top || v40 >= si128.bottom )
            {
              XCLIPOBJ::vFindScan(a4, &si128, v40);
              v44 = v62;
              v41 = v55;
            }
            if ( v40 >= si128.top && v40 < si128.bottom )
            {
              v46 = *((_DWORD *)this + 1);
              v47 = *(_DWORD *)this;
              v48 = *(int *)this;
              v57 = v46;
              v49 = (_BYTE *)(v44 + (v48 >> 1));
              if ( v46 )
              {
                v50 = v59;
                v51 = v60;
                v52 = v61;
                v53 = (v47 & 1) != 0 ? 15 : -16;
                do
                {
                  if ( (unsigned __int64)v49 < v51 || (unsigned __int64)v49 > v52 )
                    break;
                  if ( v47 < si128.left || v47 >= si128.right )
                  {
                    XCLIPOBJ::vFindSegment(a4, &si128, v47);
                    v46 = v57;
                  }
                  if ( v47 >= si128.left && v47 < si128.right )
                    *v49 = v53 & v50 | *v49 & ~v53;
                  --v46;
                  v54 = v49 + 1;
                  ++v47;
                  v57 = v46;
                  v53 = ~v53;
                  if ( v53 != -16 )
                    v54 = v49;
                  v49 = v54;
                }
                while ( v46 );
                v40 = v58;
                v9 = a2;
                v8 = a3;
                v44 = v62;
              }
              v41 = v55;
            }
            ++v40;
            this = v63;
            v44 += *((int *)v8 + 22);
            --v41;
          }
        }
      }
    }
    else
    {
      while ( this < v9 )
      {
        v10 = *((_DWORD *)this + 2);
        v11 = *(_DWORD *)this | (16 * *(_DWORD *)this);
        v12 = *((_DWORD *)v8 + 22) * *((_DWORD *)this + 1);
        this = (rotate *)((char *)this + 12);
        for ( k = *((_QWORD *)v8 + 10) + v12; v10; --v10 )
        {
          v14 = (rotate *)((char *)this + 8);
          if ( (rotate *)((char *)this + 8) > v9 )
            break;
          v15 = *(int *)this;
          v16 = *((_DWORD *)this + 1);
          v17 = v15 >> 1;
          v18 = v15 & 1;
          v19 = (_BYTE *)(k + v17);
          if ( v16 )
          {
            v20 = v60;
            v21 = v61;
            v22 = v18 != 0 ? 15 : -16;
            do
            {
              if ( (unsigned __int64)v19 < v20 || (unsigned __int64)v19 > v21 )
                break;
              v23 = v22 & v11 | ~v22 & *v19;
              v22 = ~v22;
              *v19 = v23;
              v24 = v19 + 1;
              if ( v22 != -16 )
                v24 = v19;
              v19 = v24;
              --v16;
            }
            while ( v16 );
            v9 = a2;
            v8 = a3;
          }
          this = v14;
          k += *((int *)v8 + 22);
        }
      }
    }
  }
}
