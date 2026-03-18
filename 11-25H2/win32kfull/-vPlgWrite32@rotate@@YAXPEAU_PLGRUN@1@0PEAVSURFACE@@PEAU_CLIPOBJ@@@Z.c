/*
 * XREFs of ?vPlgWrite32@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1400F4D70
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1400F5060 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400F596C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 */

void __fastcall rotate::vPlgWrite32(
        rotate *this,
        struct rotate::_PLGRUN *a2,
        struct rotate::_PLGRUN *a3,
        struct SURFACE *a4)
{
  struct rotate::_PLGRUN *v4; // r14
  unsigned __int64 v5; // r13
  struct rotate::_PLGRUN *v6; // r15
  rotate *v7; // rbx
  unsigned __int64 v8; // r11
  LONG top; // r10d
  LONG bottom; // ecx
  LONG v11; // r8d
  int v12; // esi
  int v13; // r12d
  __int64 i; // rdi
  rotate *v15; // rbp
  __int64 v16; // r9
  int v17; // r11d
  _DWORD *v18; // rdx
  int right; // r15d
  int left; // r14d
  int *v21; // r12
  __int64 v22; // rbx
  int v23; // eax
  int v24; // ebx
  int v25; // ecx
  int v26; // eax
  int v27; // r8d
  int v28; // r10d
  __int64 j; // rdx
  _DWORD *v30; // rcx
  int k; // eax
  int v32; // [rsp+30h] [rbp-78h]
  unsigned __int64 v33; // [rsp+38h] [rbp-70h]
  unsigned __int64 v34; // [rsp+40h] [rbp-68h]
  __int64 v35; // [rsp+48h] [rbp-60h]
  rotate *v36; // [rsp+50h] [rbp-58h]
  struct _RECTL si128; // [rsp+58h] [rbp-50h] BYREF

  if ( a2 )
  {
    v4 = a3;
    v5 = *((_QWORD *)a3 + 9);
    v6 = a2;
    v7 = this;
    v33 = v5;
    v8 = *((unsigned int *)a3 + 16) + v5 - 4;
    v34 = v8;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart(a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      if ( v7 < v6 )
      {
        top = si128.top;
        bottom = si128.bottom;
        do
        {
          v11 = *((_DWORD *)v7 + 1);
          v12 = *((_DWORD *)v7 + 2);
          v13 = *(_DWORD *)v7;
          v7 = (rotate *)((char *)v7 + 12);
          v32 = v13;
          for ( i = *((_QWORD *)v4 + 10) + *((_DWORD *)v4 + 22) * v11; v12; --v12 )
          {
            v15 = (rotate *)((char *)v7 + 8);
            v36 = (rotate *)((char *)v7 + 8);
            if ( (rotate *)((char *)v7 + 8) > v6 )
              break;
            if ( v11 < top || v11 >= bottom )
            {
              XCLIPOBJ::vFindScan(a4, &si128, v11);
              top = si128.top;
              bottom = si128.bottom;
            }
            if ( v11 >= top )
            {
              if ( v11 < si128.bottom )
              {
                v16 = *(int *)v7;
                v17 = *((_DWORD *)v7 + 1);
                v18 = (_DWORD *)(i + 4 * v16);
                if ( v17 )
                {
                  right = si128.right;
                  left = si128.left;
                  do
                  {
                    if ( (unsigned __int64)v18 < v5 || (unsigned __int64)v18 > v34 )
                      break;
                    if ( (int)v16 >= right || (int)v16 < left )
                    {
                      v21 = (int *)*((_QWORD *)a4 + 10);
                      v22 = 0LL;
                      v23 = *v21;
                      while ( 1 )
                      {
                        if ( (_DWORD)v22 == v23 )
                        {
                          v13 = v32;
                          v5 = v33;
                          goto LABEL_21;
                        }
                        if ( (int)v16 >= v21[v22 + 3] )
                        {
                          v35 = 4LL * (unsigned int)(v22 + 1) + 12;
                          if ( (int)v16 < *(int *)((char *)v21 + v35) )
                            break;
                        }
                        v23 = *v21;
                        v22 = (unsigned int)(v22 + 2);
                      }
                      v24 = v21[v22 + 3];
                      v5 = v33;
                      if ( v24 <= *((_DWORD *)a4 + 1) )
                        v24 = *((_DWORD *)a4 + 1);
                      v25 = *(int *)((char *)v21 + v35);
                      v13 = v32;
                      if ( v25 >= *((_DWORD *)a4 + 3) )
                        v25 = *((_DWORD *)a4 + 3);
                      if ( v24 < v25 )
                      {
                        left = v24;
                        right = v25;
                      }
                    }
LABEL_21:
                    if ( (int)v16 >= left && (int)v16 < right )
                      *v18 = v13;
                    LODWORD(v16) = v16 + 1;
                    ++v18;
                    --v17;
                  }
                  while ( v17 );
                  v15 = v36;
                  top = si128.top;
                  si128.right = right;
                  v6 = a2;
                  si128.left = left;
                  v4 = a3;
                }
              }
              bottom = si128.bottom;
            }
            ++v11;
            i += *((int *)v4 + 22);
            v7 = v15;
          }
        }
        while ( v7 < v6 );
      }
    }
    else if ( this < a2 )
    {
      do
      {
        v26 = *((_DWORD *)v4 + 22) * *((_DWORD *)v7 + 1);
        v27 = *((_DWORD *)v7 + 2);
        v28 = *(_DWORD *)v7;
        v7 = (rotate *)((char *)v7 + 12);
        for ( j = *((_QWORD *)v4 + 10) + v26; v27; --v27 )
        {
          if ( (rotate *)((char *)v7 + 8) > v6 )
            break;
          v30 = (_DWORD *)(j + 4LL * *(int *)v7);
          for ( k = *((_DWORD *)v7 + 1); k; --k )
          {
            if ( (unsigned __int64)v30 < v5 )
              break;
            if ( (unsigned __int64)v30 > v8 )
              break;
            *v30++ = v28;
          }
          v7 = (rotate *)((char *)v7 + 8);
          j += *((int *)v4 + 22);
        }
      }
      while ( v7 < v6 );
    }
  }
}
