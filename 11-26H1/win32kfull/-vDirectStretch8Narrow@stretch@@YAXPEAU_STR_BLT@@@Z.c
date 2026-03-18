/*
 * XREFs of ?vDirectStretch8Narrow@stretch@@YAXPEAU_STR_BLT@@@Z @ 0x14023C3D0
 * Callers:
 *     ?StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1400E8D14 (-StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall stretch::vDirectStretch8Narrow(stretch *this, struct _STR_BLT *a2)
{
  _BYTE *v3; // r9
  _BYTE *v4; // r8
  int v5; // ebx
  int v6; // r10d
  int v7; // r13d
  int v8; // ecx
  __int64 v9; // rax
  unsigned int v10; // r11d
  __int64 v11; // r14
  unsigned int v12; // esi
  unsigned int v13; // r10d
  _BYTE *v14; // rbp
  _BYTE *v15; // rdi
  bool v16; // cf
  int v17; // [rsp+48h] [rbp+8h]
  int v18; // [rsp+50h] [rbp+10h]
  __int64 v19; // [rsp+60h] [rbp+20h]

  v3 = (_BYTE *)(*((_QWORD *)this + 2) + *((int *)this + 7));
  v4 = (_BYTE *)(*(_QWORD *)this + *((int *)this + 3));
  v5 = *((_DWORD *)this + 9);
  v6 = *((_DWORD *)this + 11);
  v7 = *((_DWORD *)this + 13);
  v8 = *((_DWORD *)this + 8) - *((_DWORD *)this + 7);
  v10 = *((_DWORD *)this + 15);
  v17 = v6;
  v18 = v7;
  if ( v5 > 0 )
  {
    v9 = *((unsigned int *)this + 10);
    v19 = *((_DWORD *)this + 6) - v8;
    v11 = *((_DWORD *)this + 2) * *((_DWORD *)this + 12);
    do
    {
      v12 = *((_DWORD *)this + 14);
      v13 = v10 + v7;
      v14 = &v3[v8];
      v15 = v4;
      do
      {
        v16 = v12 + v17 < v12;
        *v3 = *v15;
        v12 += v17;
        v15 += v9 + v16;
        ++v3;
      }
      while ( v3 != v14 );
      v4 += v11;
      v7 = v18;
      if ( v13 < v10 )
        v4 += *((int *)this + 2);
      v3 += v19;
      v10 = v13;
      --v5;
    }
    while ( v5 );
  }
}
