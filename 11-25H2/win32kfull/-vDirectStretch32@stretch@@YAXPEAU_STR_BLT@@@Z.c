/*
 * XREFs of ?vDirectStretch32@stretch@@YAXPEAU_STR_BLT@@@Z @ 0x1401100B0
 * Callers:
 *     ?StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1401356B8 (-StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall stretch::vDirectStretch32(stretch *this, struct _STR_BLT *a2)
{
  __int64 v2; // r8
  int v4; // r15d
  int v5; // r9d
  int v6; // r11d
  __int64 v7; // rdi
  int v8; // edx
  int v9; // ebx
  unsigned int v10; // esi
  _DWORD *v11; // rax
  int v12; // r8d
  __int64 v13; // r13
  __int64 v14; // r8
  unsigned int v15; // ecx
  _DWORD *v16; // r10
  unsigned int v17; // ebp
  _DWORD *v18; // r9
  unsigned int v19; // [rsp+40h] [rbp+8h]
  int v20; // [rsp+48h] [rbp+10h]
  __int64 v21; // [rsp+50h] [rbp+18h]

  v2 = *((int *)this + 7);
  v4 = *((_DWORD *)this + 9);
  v5 = *((_DWORD *)this + 8) - v2;
  v6 = *((_DWORD *)this + 13);
  v7 = *(_QWORD *)this + 4LL * *((int *)this + 3);
  v8 = 0;
  v9 = *((_DWORD *)this + 11);
  v10 = *((_DWORD *)this + 15);
  v20 = v6;
  v11 = (_DWORD *)(*((_QWORD *)this + 2) + 4 * v2);
  v12 = *((_DWORD *)this + 12);
  v19 = *((_DWORD *)this + 10);
  if ( v4 > 0 )
  {
    if ( v12 )
      v8 = *((_DWORD *)this + 2) * v12;
    v13 = *((_DWORD *)this + 6) - 4 * v5;
    v14 = 4LL * v5;
    v21 = v14;
    do
    {
      v15 = *((_DWORD *)this + 14);
      v16 = (_DWORD *)((char *)v11 + v14);
      v17 = v6 + v10;
      v18 = (_DWORD *)v7;
      if ( v11 != (_DWORD *)((char *)v11 + v14) )
      {
        do
        {
          *v11++ = *v18;
          v18 += (v9 + v15 < v15) + (unsigned __int64)v19;
          v15 += v9;
        }
        while ( v11 != v16 );
        v14 = v21;
        v6 = v20;
      }
      v7 += v8;
      if ( v17 < v10 )
        v7 += *((int *)this + 2);
      v11 = (_DWORD *)((char *)v11 + v13);
      v10 = v17;
      --v4;
    }
    while ( v4 );
  }
}
