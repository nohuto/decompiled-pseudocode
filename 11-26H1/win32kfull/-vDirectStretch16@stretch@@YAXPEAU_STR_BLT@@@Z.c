/*
 * XREFs of ?vDirectStretch16@stretch@@YAXPEAU_STR_BLT@@@Z @ 0x140258170
 * Callers:
 *     ?StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1400E8D14 (-StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall stretch::vDirectStretch16(stretch *this, struct _STR_BLT *a2)
{
  __int64 v2; // r8
  int v4; // r13d
  int v5; // ebx
  int v6; // edi
  unsigned int v7; // ebp
  unsigned __int16 *v8; // r11
  int v9; // edx
  unsigned __int16 *v10; // r9
  int v11; // r8d
  int v12; // eax
  unsigned int v13; // esi
  unsigned int v14; // r12d
  signed int v15; // edx
  int v16; // ecx
  int v17; // ebx
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // ebx
  unsigned int v22; // r14d
  unsigned __int16 *v23; // rdi
  bool v24; // cf
  unsigned __int16 *v25; // r15
  int v26; // r8d
  unsigned int v27; // edx
  unsigned __int16 *v28; // rcx
  int v29; // [rsp+0h] [rbp-68h]
  __int64 v30; // [rsp+8h] [rbp-60h]
  __int64 v31; // [rsp+10h] [rbp-58h]
  __int64 v32; // [rsp+18h] [rbp-50h]
  unsigned int v33; // [rsp+70h] [rbp+8h]
  int v34; // [rsp+78h] [rbp+10h]
  int v35; // [rsp+80h] [rbp+18h]
  unsigned int v36; // [rsp+88h] [rbp+20h]

  v2 = *((int *)this + 7);
  v4 = *((_DWORD *)this + 9);
  v5 = *((_DWORD *)this + 6);
  v6 = *((_DWORD *)this + 13);
  v7 = *((_DWORD *)this + 15);
  v8 = (unsigned __int16 *)(*(_QWORD *)this + 2LL * *((int *)this + 3));
  v9 = *((_DWORD *)this + 8) - v2;
  v35 = v4;
  v29 = v6;
  v10 = (unsigned __int16 *)(*((_QWORD *)this + 2) + 2 * v2);
  v11 = *((_DWORD *)this + 12);
  v12 = 2 * v9;
  v33 = *((_DWORD *)this + 10);
  v13 = ((unsigned int)((_DWORD)v10 - 2 * v9) >> 1) & 1;
  v34 = *((_DWORD *)this + 11);
  v14 = ((unsigned int)v10 >> 1) & 1;
  v36 = v13;
  v15 = v9 - v13 - v14;
  v16 = 0;
  v17 = v5 - v12;
  if ( v4 > 0 )
  {
    if ( v11 )
      v16 = *((_DWORD *)this + 2) * v11;
    v18 = v15;
    v19 = v16;
    v20 = v17;
    v30 = v16;
    v32 = v18;
    v31 = v17;
    do
    {
      v21 = *((_DWORD *)this + 14);
      v22 = v6 + v7;
      v23 = v8;
      if ( v14 )
      {
        v24 = v21 + v34 < v21;
        v21 += v34;
        v23 = &v8[v24 + (unsigned __int64)v33];
        *v10++ = *v8;
      }
      v25 = &v10[v18];
      if ( v10 != v25 )
      {
        do
        {
          v26 = *v23;
          v27 = v34 + v21;
          v24 = v34 + v21 < v21;
          v21 += v34 + v34;
          v28 = &v23[v24 + (unsigned __int64)v33];
          v23 = &v28[(v21 < v27) + (unsigned __int64)v33];
          *(_DWORD *)v10 = v26 | (*v28 << 16);
          v10 += 2;
        }
        while ( v10 != v25 );
        v13 = v36;
        v4 = v35;
        v19 = v30;
        v20 = v31;
      }
      if ( v13 )
        *v10++ = *v23;
      v8 = (unsigned __int16 *)((char *)v8 + v19);
      if ( v22 < v7 )
        v8 = (unsigned __int16 *)((char *)v8 + *((int *)this + 2));
      v18 = v32;
      v10 = (unsigned __int16 *)((char *)v10 + v20);
      v6 = v29;
      v35 = --v4;
      v7 = v22;
    }
    while ( v4 );
  }
}
