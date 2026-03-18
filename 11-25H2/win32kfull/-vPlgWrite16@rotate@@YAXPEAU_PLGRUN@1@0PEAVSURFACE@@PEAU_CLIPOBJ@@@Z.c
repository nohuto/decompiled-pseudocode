/*
 * XREFs of ?vPlgWrite16@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x14031F140
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1400F5060 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400F596C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x14014AEB0 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 */

void __fastcall rotate::vPlgWrite16(
        rotate *this,
        struct rotate::_PLGRUN *a2,
        struct rotate::_PLGRUN *a3,
        struct SURFACE *a4)
{
  unsigned __int64 v4; // r11
  struct rotate::_PLGRUN *v6; // rbp
  struct rotate::_PLGRUN *v7; // rsi
  unsigned __int64 v9; // rdi
  int v10; // eax
  int v11; // r8d
  int v12; // r10d
  __int64 j; // rdx
  _WORD *v14; // rcx
  int k; // eax
  int v16; // eax
  LONG v17; // edi
  int v18; // r13d
  __int64 i; // r12
  int v20; // r14d
  __int64 v21; // r10
  _WORD *v22; // rbx
  unsigned __int64 v23; // rax
  __int16 v24; // [rsp+30h] [rbp-68h]
  unsigned __int64 v25; // [rsp+38h] [rbp-60h]
  unsigned __int64 v26; // [rsp+40h] [rbp-58h]
  rotate *v27; // [rsp+48h] [rbp-50h]
  struct _RECTL si128; // [rsp+50h] [rbp-48h] BYREF

  if ( a2 )
  {
    v4 = *((_QWORD *)a3 + 9);
    v6 = a3;
    v7 = a2;
    v25 = v4;
    v9 = *((unsigned int *)a3 + 16) + v4 - 2;
    v26 = v9;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart(a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      while ( this < v7 )
      {
        v16 = *(_DWORD *)this;
        v17 = *((_DWORD *)this + 1);
        v18 = *((_DWORD *)this + 2);
        this = (rotate *)((char *)this + 12);
        v24 = v16;
        for ( i = *((_QWORD *)v6 + 10) + *((_DWORD *)v6 + 22) * v17; v18; --v18 )
        {
          v27 = (rotate *)((char *)this + 8);
          if ( (rotate *)((char *)this + 8) > v7 )
            break;
          if ( v17 < si128.top || v17 >= si128.bottom )
            XCLIPOBJ::vFindScan(a4, &si128, v17);
          if ( v17 >= si128.top && v17 < si128.bottom )
          {
            v20 = *((_DWORD *)this + 1);
            v21 = *(int *)this;
            v22 = (_WORD *)(i + 2 * v21);
            if ( v20 )
            {
              v23 = v25;
              do
              {
                if ( (unsigned __int64)v22 < v23 || (unsigned __int64)v22 > v26 )
                  break;
                if ( (int)v21 < si128.left || (int)v21 >= si128.right )
                {
                  XCLIPOBJ::vFindSegment(a4, &si128, v21);
                  v23 = v25;
                }
                if ( (int)v21 >= si128.left && (int)v21 < si128.right )
                  *v22 = v24;
                LODWORD(v21) = v21 + 1;
                ++v22;
                --v20;
              }
              while ( v20 );
              v7 = a2;
              v6 = a3;
            }
          }
          ++v17;
          this = v27;
          i += *((int *)v6 + 22);
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
        for ( j = *((_QWORD *)v6 + 10) + v10; v11; --v11 )
        {
          if ( (rotate *)((char *)this + 8) > v7 )
            break;
          v14 = (_WORD *)(j + 2LL * *(int *)this);
          for ( k = *((_DWORD *)this + 1); k; --k )
          {
            if ( (unsigned __int64)v14 < v4 )
              break;
            if ( (unsigned __int64)v14 > v9 )
              break;
            *v14++ = v12;
          }
          this = (rotate *)((char *)this + 8);
          j += *((int *)v6 + 22);
        }
      }
    }
  }
}
