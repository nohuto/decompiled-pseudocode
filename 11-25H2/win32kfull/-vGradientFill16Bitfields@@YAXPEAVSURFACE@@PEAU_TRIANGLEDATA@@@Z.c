/*
 * XREFs of ?vGradientFill16Bitfields@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x14031C2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill16Bitfields(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // r14
  struct SURFACE *v3; // r9
  int v4; // ebp
  char *v5; // r13
  int v6; // r12d
  __int64 v7; // r15
  int v8; // edx
  int v9; // r10d
  int v10; // r8d
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // ecx
  int v15; // ecx
  unsigned __int64 v16; // rdx
  _WORD *v17; // r12
  int v18; // ebp
  unsigned __int64 v19; // r14
  int v20; // [rsp+20h] [rbp-A8h]
  int v21; // [rsp+24h] [rbp-A4h]
  __int64 v22; // [rsp+28h] [rbp-A0h]
  __int64 v23; // [rsp+30h] [rbp-98h]
  __int64 v24; // [rsp+38h] [rbp-90h]
  __int64 v25; // [rsp+40h] [rbp-88h]
  char *v26; // [rsp+48h] [rbp-80h]
  __int64 v27; // [rsp+68h] [rbp-60h]
  __int64 v28; // [rsp+70h] [rbp-58h]
  int v31; // [rsp+E0h] [rbp+18h]
  int v32; // [rsp+E8h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  v4 = *((_DWORD *)a2 + 28);
  v5 = (char *)a2 + 168;
  v6 = *((_DWORD *)a2 + 3);
  v31 = v4;
  v26 = (char *)a2 + 168;
  v7 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 22) * v4;
  v27 = *((_QWORD *)a2 + 20);
  v22 = *((_QWORD *)a2 + 2);
  v23 = *((_QWORD *)a2 + 3);
  v24 = *((_QWORD *)a2 + 4);
  v25 = v7;
  if ( v6 >= *((_DWORD *)a2 + 29) )
    v6 = *((_DWORD *)a2 + 29);
  v20 = *((_DWORD *)a2 + 32);
  v21 = v6;
  if ( v4 < v6 )
  {
    v28 = *((int *)a1 + 22);
    v32 = v4 + *((_DWORD *)a2 + 33);
    do
    {
      v8 = *((_DWORD *)v5 + 1);
      v9 = *(_DWORD *)v5;
      v10 = *(_DWORD *)v5;
      v11 = *((_QWORD *)v5 + 1);
      v12 = *((_QWORD *)v5 + 2);
      v13 = *((_QWORD *)v5 + 3);
      v14 = *(_DWORD *)v2;
      if ( v8 >= *((_DWORD *)v2 + 2) )
        v8 = *((_DWORD *)v2 + 2);
      if ( v9 <= v14 )
        v10 = *(_DWORD *)v2;
      if ( *((_QWORD *)v3 + 9) <= (unsigned __int64)(v10 + v7) && v10 < v8 )
      {
        v15 = v14 - v9;
        v16 = v7 + 2LL * v8;
        if ( v15 > 0 )
        {
          v11 += v22 * v15;
          v12 += v23 * v15;
          v13 += v24 * v15;
        }
        if ( v7 + 2LL * v10 < v16 )
        {
          v17 = (_WORD *)(v7 + 2LL * v10);
          v18 = v10 + v20;
          v19 = v16;
          do
          {
            v13 += v24;
            v11 += v22;
            *v17 = XEPALOBJ::ulDispatchGFPEFunction(v27, *(unsigned int *)(*(_QWORD *)v27 + 100LL));
            v12 += v23;
            ++v17;
            ++v18;
          }
          while ( (unsigned __int64)v17 < v19 );
          v2 = a2;
          v4 = v31;
          v7 = v25;
          v6 = v21;
          v5 = v26;
          v3 = a1;
        }
      }
      v7 += v28;
      v5 += 40;
      v25 = v7;
      ++v4;
      v26 = v5;
      v31 = v4;
      ++v32;
    }
    while ( v4 < v6 );
  }
}
