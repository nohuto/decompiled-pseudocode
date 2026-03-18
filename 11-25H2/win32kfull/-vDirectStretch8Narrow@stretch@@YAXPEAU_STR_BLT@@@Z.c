/*
 * XREFs of ?vDirectStretch8Narrow@stretch@@YAXPEAU_STR_BLT@@@Z @ 0x140203030
 * Callers:
 *     ?StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1401356B8 (-StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall stretch::vDirectStretch8Narrow(stretch *this, struct _STR_BLT *a2)
{
  _BYTE *v3; // r9
  _BYTE *v4; // r8
  int v5; // ebx
  int v6; // ecx
  int v7; // r12d
  unsigned int v8; // r11d
  __int64 v9; // r14
  unsigned int v10; // esi
  unsigned int v11; // r10d
  _BYTE *v12; // rbp
  _BYTE *v13; // rdi
  bool v14; // cf
  int v15; // [rsp+48h] [rbp+8h]
  int v16; // [rsp+50h] [rbp+10h]
  __int64 v17; // [rsp+58h] [rbp+18h]
  __int64 v18; // [rsp+60h] [rbp+20h]

  v3 = (_BYTE *)(*((_QWORD *)this + 2) + *((int *)this + 7));
  v4 = (_BYTE *)(*(_QWORD *)this + *((int *)this + 3));
  v5 = *((_DWORD *)this + 9);
  v6 = *((_DWORD *)this + 8) - *((_DWORD *)this + 7);
  v7 = *((_DWORD *)this + 13);
  v8 = *((_DWORD *)this + 15);
  v15 = *((_DWORD *)this + 11);
  v16 = v7;
  if ( v5 > 0 )
  {
    v17 = *((unsigned int *)this + 10);
    v18 = *((_DWORD *)this + 6) - v6;
    v9 = *((_DWORD *)this + 2) * *((_DWORD *)this + 12);
    do
    {
      v10 = *((_DWORD *)this + 14);
      v11 = v7 + v8;
      v12 = &v3[v6];
      v13 = v4;
      do
      {
        v14 = v15 + v10 < v10;
        *v3 = *v13;
        v10 += v15;
        v13 += v17 + v14;
        ++v3;
      }
      while ( v3 != v12 );
      v4 += v9;
      v7 = v16;
      if ( v11 < v8 )
        v4 += *((int *)this + 2);
      v3 += v18;
      v8 = v11;
      --v5;
    }
    while ( v5 );
  }
}
