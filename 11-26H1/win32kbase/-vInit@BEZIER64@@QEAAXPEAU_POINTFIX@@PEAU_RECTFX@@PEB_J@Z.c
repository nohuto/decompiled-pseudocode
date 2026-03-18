/*
 * XREFs of ?vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z @ 0x140182860
 * Callers:
 *     pprFlattenRec @ 0x14011A500 (pprFlattenRec.c)
 * Callees:
 *     ?vInit@HFDBASIS64@@QEAAXJJJJ@Z @ 0x1401829EC (-vInit@HFDBASIS64@@QEAAXJJJJ@Z.c)
 */

void __fastcall BEZIER64::vInit(BEZIER64 *this, struct _POINTFIX *a2, struct _RECTFX *a3, const __int64 *a4)
{
  char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax

  *((_QWORD *)this + 20) = 1LL;
  HFDBASIS64::vInit((BEZIER64 *)((char *)this + 64), a2->x, a2[1].x, a2[2].x, a2[3].x);
  HFDBASIS64::vInit((BEZIER64 *)((char *)this + 96), a2->y, a2[1].y, a2[2].y, a2[3].y);
  *((_QWORD *)this + 16) = *a4;
  if ( a3 )
  {
    v8 = (char *)this + 144;
    *((struct _RECTFX *)this + 9) = *a3;
  }
  else
  {
    v8 = 0LL;
  }
  *((_QWORD *)this + 17) = v8;
  v9 = *((_QWORD *)this + 14);
  v10 = *((_QWORD *)this + 15);
  while ( 1 )
  {
    v11 = *((_QWORD *)this + 10);
    v12 = v9;
    v13 = *((_QWORD *)this + 11);
    v14 = -v11;
    v15 = -v11;
    v16 = -v13;
    if ( v13 >= 0 )
      v16 = *((_QWORD *)this + 11);
    if ( v11 >= 0 )
      v15 = *((_QWORD *)this + 10);
    if ( v15 <= v16 )
    {
      v14 = *((_QWORD *)this + 11);
      if ( v13 < 0 )
        v14 = -*((_QWORD *)this + 11);
    }
    else if ( v11 >= 0 )
    {
      v14 = *((_QWORD *)this + 10);
    }
    if ( v14 <= 0x300000000000LL )
    {
      v17 = -v10;
      v18 = -v9;
      if ( v9 > 0 )
        v18 = v9;
      if ( v10 >= 0 )
        v17 = v10;
      if ( v18 <= v17 )
      {
        v9 = v10;
        if ( v10 < 0 )
          v9 = -v10;
      }
      else if ( v9 < 0 )
      {
        v9 = -v9;
      }
      if ( v9 <= 0x300000000000LL )
        break;
    }
    *((_DWORD *)this + 40) *= 2;
    v19 = (v13 + v11) >> 3;
    v20 = *((_QWORD *)this + 9) - v19;
    *((_QWORD *)this + 10) = v19;
    *((_QWORD *)this + 9) = v20 >> 1;
    v9 = (v10 + v12) >> 3;
    *((_QWORD *)this + 11) = v13 >> 2;
    v21 = *((_QWORD *)this + 13) - v9;
    *((_QWORD *)this + 14) = v9;
    v10 >>= 2;
    *((_QWORD *)this + 15) = v10;
    *((_QWORD *)this + 13) = v21 >> 1;
  }
}
