/*
 * XREFs of ?vFillGRectDIB16_555@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x14033E180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vFillGRectDIB16_555(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // r11
  int v3; // edx
  __int64 v4; // r13
  __int64 v5; // r10
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rax
  int v11; // eax
  int v12; // ebp
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r9
  _WORD *v19; // r15
  _WORD *v20; // r8
  __int64 v21; // r11
  unsigned __int64 v22; // r13
  __int64 v23; // r12
  __int64 v24; // rbp
  int v25; // esi
  __int64 v26; // r8
  int v27; // r10d
  __int16 v28; // r9
  unsigned __int64 v29; // rax
  __int16 v30; // r9
  unsigned __int64 v31; // rax
  __int16 v32; // r9
  __int64 v33; // [rsp+0h] [rbp-C8h]
  __int64 v34; // [rsp+8h] [rbp-C0h]
  __int64 v35; // [rsp+10h] [rbp-B8h]
  __int64 v36; // [rsp+18h] [rbp-B0h]
  __int64 v37; // [rsp+20h] [rbp-A8h]
  __int64 v38; // [rsp+28h] [rbp-A0h]
  __int64 v39; // [rsp+30h] [rbp-98h]
  __int64 v40; // [rsp+38h] [rbp-90h]
  __int64 v41; // [rsp+40h] [rbp-88h]
  __int64 v42; // [rsp+48h] [rbp-80h]
  __int64 v43; // [rsp+58h] [rbp-70h]
  __int64 v44; // [rsp+60h] [rbp-68h]
  __int64 v45; // [rsp+68h] [rbp-60h]
  __int64 v46; // [rsp+70h] [rbp-58h]
  __int64 v47; // [rsp+78h] [rbp-50h]
  int v48; // [rsp+D0h] [rbp+8h]
  int v50; // [rsp+E0h] [rbp+18h]
  __int64 v51; // [rsp+E8h] [rbp+20h]

  v2 = a2;
  v3 = *((_DWORD *)a2 + 9);
  v4 = *((_QWORD *)v2 + 10);
  v5 = *((_QWORD *)v2 + 11);
  v6 = *((_QWORD *)v2 + 6);
  v7 = *((_QWORD *)v2 + 7);
  v8 = *((_QWORD *)v2 + 8);
  v9 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 22) * v3;
  v38 = *((_QWORD *)v2 + 14);
  v39 = *((_QWORD *)v2 + 15);
  v40 = *((_QWORD *)v2 + 16);
  v10 = *((int *)v2 + 45);
  v41 = v9;
  v44 = v4;
  v45 = v5;
  v46 = *((_QWORD *)v2 + 12);
  v51 = v6;
  v33 = v7;
  v34 = v8;
  if ( (_DWORD)v10 )
  {
    v6 += v4 * v10;
    v7 += v5 * v10;
    v51 = v6;
    v33 = v7;
    v8 += *((_QWORD *)v2 + 12) * v10;
    v34 = v8;
  }
  v11 = *((_DWORD *)v2 + 37);
  if ( v3 < *((_DWORD *)v2 + 11) + v3 )
  {
    v12 = v11 + v3;
    v47 = *((int *)a1 + 22);
    v48 = v11 + v3;
    v13 = *((unsigned int *)v2 + 11);
    v42 = v13;
    do
    {
      v35 = v6;
      v36 = v7;
      HIDWORD(v14) = HIDWORD(v7);
      HIDWORD(v15) = HIDWORD(v8);
      v37 = v8;
      v16 = *((int *)v2 + 44);
      v43 = 0x140000000LL + 16LL * (v12 & 3) + 3609264;
      HIDWORD(v17) = HIDWORD(v6);
      if ( (_DWORD)v16 )
      {
        v17 = v6 + v38 * v16;
        v14 = v7 + v39 * v16;
        v35 = v17;
        v15 = v8 + v40 * v16;
        v36 = v14;
        v37 = v15;
      }
      v18 = *((int *)v2 + 8);
      v50 = v18 + *((_DWORD *)v2 + 36);
      v19 = (_WORD *)(v9 + 2 * v18);
      v20 = &v19[*((int *)v2 + 10)];
      if ( v19 < v20 )
      {
        v21 = v35;
        v22 = (unsigned __int64)v20;
        v23 = v36;
        v24 = v37;
        v25 = v50;
        do
        {
          v26 = v25++ & 3;
          v27 = *(_DWORD *)(v43 + 4 * v26);
          v28 = byte_1403713F0[(unsigned __int64)(unsigned int)(v27 + (HIDWORD(v17) >> 3)) >> 16];
          v29 = (unsigned __int64)(unsigned int)(v27 + (HIDWORD(v14) >> 3)) >> 16;
          v14 = v23 + v39;
          v23 += v39;
          v30 = byte_1403713F0[v29] | (unsigned __int16)(32 * v28);
          v31 = (unsigned __int64)(unsigned int)(v27 + (HIDWORD(v15) >> 3)) >> 16;
          v15 = v40 + v24;
          v24 += v40;
          v32 = byte_1403713F0[v31] | (unsigned __int16)(32 * v30);
          v17 = v21 + v38;
          *v19 = v32;
          v21 += v38;
          ++v19;
        }
        while ( (unsigned __int64)v19 < v22 );
        v2 = a2;
        v6 = v51;
        v7 = v33;
        v8 = v34;
        v9 = v41;
        v12 = v48;
        v13 = v42;
        v4 = v44;
        v5 = v45;
      }
      v8 += v46;
      v6 += v4;
      v9 += v47;
      v7 += v5;
      ++v12;
      v51 = v6;
      --v13;
      v33 = v7;
      v42 = v13;
      v34 = v8;
      v48 = v12;
      v41 = v9;
    }
    while ( v13 );
  }
}
