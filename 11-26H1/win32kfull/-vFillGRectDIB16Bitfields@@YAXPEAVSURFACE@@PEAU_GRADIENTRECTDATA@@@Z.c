/*
 * XREFs of ?vFillGRectDIB16Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x14033DE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vFillGRectDIB16Bitfields(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // rbx
  int v3; // edx
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rax
  int v11; // eax
  int v12; // r15d
  __int64 v13; // r13
  __int64 v14; // r8
  __int64 v15; // r9
  _WORD *v16; // r12
  __int64 v17; // r13
  _WORD *v18; // rbx
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 v21; // [rsp+20h] [rbp-D8h]
  __int64 v22; // [rsp+28h] [rbp-D0h]
  __int64 v23; // [rsp+30h] [rbp-C8h]
  __int64 v24; // [rsp+38h] [rbp-C0h]
  __int64 v25; // [rsp+40h] [rbp-B8h]
  __int64 v26; // [rsp+48h] [rbp-B0h]
  __int64 v27; // [rsp+50h] [rbp-A8h]
  __int64 v28; // [rsp+58h] [rbp-A0h]
  __int64 v29; // [rsp+60h] [rbp-98h]
  __int64 v30; // [rsp+68h] [rbp-90h]
  __int64 v31; // [rsp+80h] [rbp-78h]
  __int64 v32; // [rsp+88h] [rbp-70h]
  __int64 v33; // [rsp+90h] [rbp-68h]
  __int64 v34; // [rsp+98h] [rbp-60h]
  __int64 v35; // [rsp+A0h] [rbp-58h]
  int v36; // [rsp+100h] [rbp+8h]
  int v38; // [rsp+110h] [rbp+18h]
  __int64 v39; // [rsp+118h] [rbp+20h]

  v2 = a2;
  v3 = *((_DWORD *)a2 + 9);
  v4 = *((_QWORD *)v2 + 10);
  v5 = *((_QWORD *)v2 + 11);
  v6 = *((_QWORD *)v2 + 6);
  v7 = *((_QWORD *)v2 + 7);
  v8 = *((_QWORD *)v2 + 8);
  v9 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 22) * v3;
  v26 = *((_QWORD *)v2 + 14);
  v27 = *((_QWORD *)v2 + 15);
  v28 = *((_QWORD *)v2 + 16);
  v31 = *((_QWORD *)v2 + 21);
  v10 = *((int *)v2 + 45);
  v29 = v9;
  v32 = v4;
  v33 = v5;
  v34 = *((_QWORD *)v2 + 12);
  v39 = v6;
  v21 = v7;
  v22 = v8;
  if ( (_DWORD)v10 )
  {
    v6 += v4 * v10;
    v7 += v5 * v10;
    v39 = v6;
    v21 = v7;
    v8 += *((_QWORD *)v2 + 12) * v10;
    v22 = v8;
  }
  v11 = *((_DWORD *)v2 + 37);
  if ( v3 < *((_DWORD *)v2 + 11) + v3 )
  {
    v12 = v11 + v3;
    v35 = *((int *)a1 + 22);
    v38 = v11 + v3;
    v13 = *((unsigned int *)v2 + 11);
    v30 = v13;
    do
    {
      v14 = *((int *)v2 + 44);
      v23 = v6;
      v24 = v7;
      v25 = v8;
      if ( (_DWORD)v14 )
      {
        v23 = v6 + v26 * v14;
        v24 = v7 + v27 * v14;
        v25 = v8 + v28 * v14;
      }
      v15 = *((int *)v2 + 8);
      v36 = v15 + *((_DWORD *)v2 + 36);
      v16 = (_WORD *)(v9 + 2 * v15);
      if ( v16 < &v16[*((int *)v2 + 10)] )
      {
        v17 = v23;
        v18 = &v16[*((int *)v2 + 10)];
        v19 = v24;
        v20 = v25;
        do
        {
          ++v36;
          *v16++ = XEPALOBJ::ulDispatchGFPEFunction(v31, *(unsigned int *)(*(_QWORD *)v31 + 100LL));
          v17 += v26;
          v19 += v27;
          v20 += v28;
        }
        while ( v16 < v18 );
        v2 = a2;
        v6 = v39;
        v7 = v21;
        v8 = v22;
        v9 = v29;
        v12 = v38;
        v13 = v30;
        v4 = v32;
        v5 = v33;
      }
      v8 += v34;
      v9 += v35;
      v6 += v4;
      v7 += v5;
      v39 = v6;
      ++v12;
      v21 = v7;
      --v13;
      v22 = v8;
      v30 = v13;
      v38 = v12;
      v29 = v9;
    }
    while ( v13 );
  }
}
