/*
 * XREFs of ?vFillGRectDIB16_565@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x14033E470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vFillGRectDIB16_565(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
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
  __int64 v18; // r8
  int v19; // r9d
  _WORD *v20; // r15
  _WORD *v21; // r8
  __int64 v22; // r11
  unsigned __int64 v23; // r13
  __int64 v24; // r12
  int v25; // esi
  __int64 v26; // rbp
  __int64 v27; // r8
  int v28; // r10d
  __int16 v29; // r9
  unsigned __int64 v30; // rax
  __int16 v31; // r9
  unsigned __int64 v32; // rax
  __int16 v33; // r9
  __int64 v34; // [rsp+0h] [rbp-D8h]
  __int64 v35; // [rsp+8h] [rbp-D0h]
  __int64 v36; // [rsp+10h] [rbp-C8h]
  __int64 v37; // [rsp+18h] [rbp-C0h]
  __int64 v38; // [rsp+20h] [rbp-B8h]
  __int64 v39; // [rsp+28h] [rbp-B0h]
  __int64 v40; // [rsp+30h] [rbp-A8h]
  __int64 v41; // [rsp+38h] [rbp-A0h]
  __int64 v42; // [rsp+40h] [rbp-98h]
  __int64 v43; // [rsp+48h] [rbp-90h]
  __int64 v44; // [rsp+50h] [rbp-88h]
  __int64 v45; // [rsp+60h] [rbp-78h]
  __int64 v46; // [rsp+68h] [rbp-70h]
  __int64 v47; // [rsp+70h] [rbp-68h]
  __int64 v48; // [rsp+78h] [rbp-60h]
  __int64 v49; // [rsp+80h] [rbp-58h]
  int v50; // [rsp+E0h] [rbp+8h]
  int v52; // [rsp+F0h] [rbp+18h]

  v2 = a2;
  v3 = *((_DWORD *)a2 + 9);
  v4 = *((_QWORD *)v2 + 10);
  v5 = *((_QWORD *)v2 + 11);
  v6 = *((_QWORD *)v2 + 6);
  v7 = *((_QWORD *)v2 + 7);
  v8 = *((_QWORD *)v2 + 8);
  v9 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 22) * v3;
  v40 = *((_QWORD *)v2 + 14);
  v41 = *((_QWORD *)v2 + 15);
  v42 = *((_QWORD *)v2 + 16);
  v10 = *((int *)v2 + 45);
  v43 = v9;
  v46 = v4;
  v47 = v5;
  v48 = *((_QWORD *)v2 + 12);
  v34 = v6;
  v35 = v7;
  v36 = v8;
  if ( (_DWORD)v10 )
  {
    v6 += v4 * v10;
    v7 += v5 * v10;
    v34 = v6;
    v35 = v7;
    v8 += *((_QWORD *)v2 + 12) * v10;
    v36 = v8;
  }
  v11 = *((_DWORD *)v2 + 37);
  v52 = *((_DWORD *)v2 + 36);
  if ( v3 < *((_DWORD *)v2 + 11) + v3 )
  {
    v12 = v11 + v3;
    v49 = *((int *)a1 + 22);
    v50 = v11 + v3;
    v13 = *((unsigned int *)v2 + 11);
    v44 = v13;
    do
    {
      v37 = v6;
      v38 = v7;
      HIDWORD(v14) = HIDWORD(v7);
      HIDWORD(v15) = HIDWORD(v8);
      v39 = v8;
      v16 = *((int *)v2 + 44);
      v45 = 0x140000000LL + 16LL * (v12 & 3) + 3609264;
      HIDWORD(v17) = HIDWORD(v6);
      if ( (_DWORD)v16 )
      {
        v17 = v6 + v40 * v16;
        v14 = v7 + v41 * v16;
        v37 = v17;
        v15 = v8 + v42 * v16;
        v38 = v14;
        v39 = v15;
      }
      v18 = *((int *)v2 + 8);
      v19 = v18 + v52;
      v20 = (_WORD *)(v9 + 2 * v18);
      v21 = &v20[*((int *)v2 + 10)];
      if ( v20 < v21 )
      {
        v22 = v37;
        v23 = (unsigned __int64)v21;
        v24 = v38;
        v25 = v19;
        v26 = v39;
        do
        {
          v27 = v25++ & 3;
          v28 = *(_DWORD *)(v45 + 4 * v27);
          v29 = byte_1403713F0[(unsigned __int64)(unsigned int)(v28 + (HIDWORD(v17) >> 3)) >> 16];
          v30 = (unsigned __int64)(unsigned int)(v28 + (HIDWORD(v14) >> 2)) >> 16;
          v14 = v24 + v41;
          v24 += v41;
          v31 = byte_1403713F0[v30 + 64] | (unsigned __int16)(v29 << 6);
          v32 = (unsigned __int64)(unsigned int)(v28 + (HIDWORD(v15) >> 3)) >> 16;
          v15 = v42 + v26;
          v26 += v42;
          v33 = byte_1403713F0[v32] | (unsigned __int16)(32 * v31);
          v17 = v22 + v40;
          *v20 = v33;
          v22 += v40;
          ++v20;
        }
        while ( (unsigned __int64)v20 < v23 );
        v2 = a2;
        v6 = v34;
        v7 = v35;
        v8 = v36;
        v9 = v43;
        v12 = v50;
        v13 = v44;
        v4 = v46;
        v5 = v47;
      }
      v8 += v48;
      v6 += v4;
      v9 += v49;
      v7 += v5;
      ++v12;
      v34 = v6;
      --v13;
      v35 = v7;
      v44 = v13;
      v36 = v8;
      v50 = v12;
      v43 = v9;
    }
    while ( v13 );
  }
}
