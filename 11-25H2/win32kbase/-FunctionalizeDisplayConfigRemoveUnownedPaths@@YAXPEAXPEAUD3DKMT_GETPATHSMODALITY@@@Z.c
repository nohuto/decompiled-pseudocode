/*
 * XREFs of ?FunctionalizeDisplayConfigRemoveUnownedPaths@@YAXPEAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140134BDC
 * Callers:
 *     DrvFunctionalizeDisplayConfig @ 0x140157D40 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall FunctionalizeDisplayConfigRemoveUnownedPaths(_OWORD *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  unsigned int v2; // r14d
  _OWORD *v4; // r15
  unsigned int v5; // ebp
  unsigned int v6; // edi
  char *v7; // rsi
  __int64 DxgkWin32kInterface; // rax
  _OWORD *v9; // rcx
  __int64 v10; // r8
  _OWORD *v11; // rdx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rax
  _OWORD *v23; // rax
  __int64 v24; // rcx
  __int128 v25; // xmm1
  _OWORD *v26; // rax
  __int64 v27; // rdx
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int64 v37; // rax
  _BYTE v38[304]; // [rsp+20h] [rbp-158h] BYREF

  v2 = *((unsigned __int16 *)a2 + 10);
  *((_WORD *)a2 + 10) = 0;
  v4 = a1;
  v5 = 0;
  v6 = 0;
  if ( v2 )
  {
    v7 = (char *)a2 + 56;
    do
    {
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1);
      if ( (*(unsigned __int8 (__fastcall **)(_OWORD *, _QWORD, _QWORD))(DxgkWin32kInterface + 736))(
             v4,
             *((_QWORD *)v7 + 2),
             *((unsigned int *)v7 + 7)) )
      {
        if ( v5 != v6 )
        {
          v9 = v38;
          v10 = 2LL;
          v11 = (_OWORD *)((char *)a2 + 296 * v5 + 56);
          v12 = v11;
          do
          {
            v13 = v12[1];
            *v9 = *v12;
            v14 = v12[2];
            v9[1] = v13;
            v15 = v12[3];
            v9[2] = v14;
            v16 = v12[4];
            v9[3] = v15;
            v17 = v12[5];
            v9[4] = v16;
            v18 = v12[6];
            v9[5] = v17;
            v19 = v12[7];
            v12 += 8;
            v9[6] = v18;
            v9 += 8;
            *(v9 - 1) = v19;
            --v10;
          }
          while ( v10 );
          v20 = *v12;
          v21 = v12[1];
          v22 = *((_QWORD *)v12 + 4);
          *v9 = v20;
          v9[1] = v21;
          *((_QWORD *)v9 + 4) = v22;
          v23 = v7;
          v24 = 2LL;
          do
          {
            *v11 = *v23;
            v11[1] = v23[1];
            v11[2] = v23[2];
            v11[3] = v23[3];
            v11[4] = v23[4];
            v11[5] = v23[5];
            v11[6] = v23[6];
            v11 += 8;
            v25 = v23[7];
            v23 += 8;
            *(v11 - 1) = v25;
            --v24;
          }
          while ( v24 );
          a1 = v7;
          *v11 = *v23;
          v11[1] = v23[1];
          *((_QWORD *)v11 + 4) = *((_QWORD *)v23 + 4);
          v26 = v38;
          v27 = 2LL;
          do
          {
            v28 = v26[1];
            *a1 = *v26;
            v29 = v26[2];
            a1[1] = v28;
            v30 = v26[3];
            a1[2] = v29;
            v31 = v26[4];
            a1[3] = v30;
            v32 = v26[5];
            a1[4] = v31;
            v33 = v26[6];
            a1[5] = v32;
            v34 = v26[7];
            v26 += 8;
            a1[6] = v33;
            a1 += 8;
            *(a1 - 1) = v34;
            --v27;
          }
          while ( v27 );
          v35 = *v26;
          v36 = v26[1];
          v37 = *((_QWORD *)v26 + 4);
          *a1 = v35;
          a1[1] = v36;
          *((_QWORD *)a1 + 4) = v37;
        }
        ++v5;
        ++*((_WORD *)a2 + 10);
      }
      ++v6;
      v7 += 296;
    }
    while ( v6 < v2 );
  }
}
