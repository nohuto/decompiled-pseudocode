/*
 * XREFs of ?vPlgWrite8@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1403425D0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1400A9464 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x14017E700 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 */

void __fastcall rotate::vPlgWrite8(
        rotate *this,
        struct rotate::_PLGRUN *a2,
        struct rotate::_PLGRUN *a3,
        struct SURFACE *a4)
{
  unsigned __int64 v4; // r12
  struct rotate::_PLGRUN *v6; // r15
  struct rotate::_PLGRUN *v7; // rsi
  unsigned __int64 v9; // r13
  int v10; // eax
  int v11; // r8d
  int v12; // r10d
  __int64 m; // rcx
  int v14; // edx
  _BYTE *n; // rax
  LONG v16; // edx
  int v17; // r10d
  int v18; // edi
  __int64 i; // r9
  __int64 v20; // rcx
  int v21; // r8d
  _BYTE *j; // rax
  int v23; // eax
  LONG v24; // edi
  int v25; // ecx
  __int64 v26; // r13
  bool k; // zf
  int v28; // r12d
  __int64 v29; // r10
  _BYTE *v30; // rbx
  unsigned __int64 v31; // rax
  int v32; // [rsp+30h] [rbp-30h]
  char v33; // [rsp+34h] [rbp-2Ch]
  unsigned __int64 v34; // [rsp+38h] [rbp-28h]
  unsigned __int64 v35; // [rsp+40h] [rbp-20h]
  rotate *v36; // [rsp+48h] [rbp-18h]
  struct _RECTL si128; // [rsp+50h] [rbp-10h] BYREF

  if ( a2 )
  {
    v4 = *((_QWORD *)a3 + 9);
    v6 = a3;
    v7 = a2;
    v34 = v4;
    v9 = *((unsigned int *)a3 + 16) + v4 - 1;
    v35 = v9;
    if ( a4 )
    {
      k = *((_BYTE *)a4 + 20) == 1;
      si128 = 0LL;
      if ( k )
      {
        si128 = *(struct _RECTL *)((char *)a4 + 4);
        while ( this < v7 )
        {
          v16 = *((_DWORD *)this + 1);
          v17 = *((_DWORD *)this + 2);
          v18 = *(_DWORD *)this;
          this = (rotate *)((char *)this + 12);
          for ( i = *((_QWORD *)v6 + 10) + *((_DWORD *)v6 + 22) * v16; v17; --v17 )
          {
            if ( (rotate *)((char *)this + 8) > v7 )
              break;
            if ( v16 >= si128.top && v16 < si128.bottom )
            {
              v20 = *(int *)this;
              v21 = *((_DWORD *)this + 1);
              for ( j = (_BYTE *)(i + v20); v21; --v21 )
              {
                if ( (unsigned __int64)j < v4 || (unsigned __int64)j > v9 )
                  break;
                if ( (int)v20 >= si128.left && (int)v20 < si128.right )
                  *j = v18;
                LODWORD(v20) = v20 + 1;
                ++j;
              }
            }
            ++v16;
            i += *((int *)v6 + 22);
            this = (rotate *)((char *)this + 8);
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart(a4, 0, 0, 4u, 0x64u);
        si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
        while ( this < v7 )
        {
          v23 = *(_DWORD *)this;
          v24 = *((_DWORD *)this + 1);
          v25 = *((_DWORD *)this + 2);
          this = (rotate *)((char *)this + 12);
          v33 = v23;
          v26 = *((_QWORD *)v6 + 10) + *((_DWORD *)v6 + 22) * v24;
          for ( k = v25 == 0; ; k = v25 == 0 )
          {
            v32 = v25;
            if ( k )
              break;
            v36 = (rotate *)((char *)this + 8);
            if ( (rotate *)((char *)this + 8) > v7 )
              break;
            if ( v24 < si128.top || v24 >= si128.bottom )
            {
              XCLIPOBJ::vFindScan(a4, &si128, v24);
              v25 = v32;
            }
            if ( v24 >= si128.top && v24 < si128.bottom )
            {
              v28 = *((_DWORD *)this + 1);
              v29 = *(int *)this;
              v30 = (_BYTE *)(v29 + v26);
              if ( v28 )
              {
                v31 = v34;
                do
                {
                  if ( (unsigned __int64)v30 < v31 || (unsigned __int64)v30 > v35 )
                    break;
                  if ( (int)v29 < si128.left || (int)v29 >= si128.right )
                  {
                    XCLIPOBJ::vFindSegment(a4, &si128, v29);
                    v31 = v34;
                  }
                  if ( (int)v29 >= si128.left && (int)v29 < si128.right )
                    *v30 = v33;
                  LODWORD(v29) = v29 + 1;
                  ++v30;
                  --v28;
                }
                while ( v28 );
                v7 = a2;
                v6 = a3;
                v25 = v32;
              }
            }
            ++v24;
            this = v36;
            v26 += *((int *)v6 + 22);
            --v25;
          }
        }
      }
    }
    else
    {
      while ( this < v7 )
      {
        v10 = *((_DWORD *)v6 + 22) * *((_DWORD *)this + 1);
        v11 = *((_DWORD *)this + 2);
        v12 = *(_DWORD *)this;
        this = (rotate *)((char *)this + 12);
        for ( m = *((_QWORD *)v6 + 10) + v10; v11; --v11 )
        {
          if ( (rotate *)((char *)this + 8) > v7 )
            break;
          v14 = *((_DWORD *)this + 1);
          for ( n = (_BYTE *)(m + *(int *)this); v14; --v14 )
          {
            if ( (unsigned __int64)n < v4 )
              break;
            if ( (unsigned __int64)n > v9 )
              break;
            *n++ = v12;
          }
          this = (rotate *)((char *)this + 8);
          m += *((int *)v6 + 22);
        }
      }
    }
  }
}
