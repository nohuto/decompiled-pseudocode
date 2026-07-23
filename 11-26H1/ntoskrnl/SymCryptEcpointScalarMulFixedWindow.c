/*
 * XREFs of SymCryptEcpointScalarMulFixedWindow @ 0x140566010
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptIntCopy @ 0x14055E6A8 (SymCryptIntCopy.c)
 *     SymCryptIntCreate @ 0x14055E6D8 (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x14055E774 (SymCryptIntFromModulus.c)
 *     SymCryptIntGetBit @ 0x14055E78C (SymCryptIntGetBit.c)
 *     SymCryptIntIsEqualUint32 @ 0x14055E81C (SymCryptIntIsEqualUint32.c)
 *     SymCryptIntMaskedCopy @ 0x14055E84C (SymCryptIntMaskedCopy.c)
 *     SymCryptIntSubSameSize @ 0x14055E914 (SymCryptIntSubSameSize.c)
 *     SymCryptModElementCreate @ 0x14055EA6C (SymCryptModElementCreate.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055EE90 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptPrecomputation @ 0x14056665C (SymCryptPrecomputation.c)
 *     SymCryptEcpointCopy @ 0x140566700 (SymCryptEcpointCopy.c)
 *     SymCryptEcpointCreate @ 0x14056673C (SymCryptEcpointCreate.c)
 *     SymCryptEcpointMaskedCopy @ 0x140566958 (SymCryptEcpointMaskedCopy.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x14056707C (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptEcpointAdd @ 0x14056709C (SymCryptEcpointAdd.c)
 *     SymCryptEcpointAddDiffNonZero @ 0x1405670F0 (SymCryptEcpointAddDiffNonZero.c)
 *     SymCryptEcpointDouble @ 0x140567130 (SymCryptEcpointDouble.c)
 *     SymCryptEcpointIsZero @ 0x1405671B0 (SymCryptEcpointIsZero.c)
 *     SymCryptEcpointNegate @ 0x140567244 (SymCryptEcpointNegate.c)
 *     SymCryptEcpointSetZero @ 0x14056732C (SymCryptEcpointSetZero.c)
 *     SymCryptFixedWindowRecoding @ 0x140573EE4 (SymCryptFixedWindowRecoding.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SymCryptEcpointScalarMulFixedWindow(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rbx
  __int64 v11; // r13
  unsigned int v12; // r14d
  __int64 v13; // rdi
  __int64 *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r15
  __int64 v19; // rbx
  int v20; // esi
  char *v21; // rax
  unsigned int v22; // ebx
  unsigned __int64 v23; // r12
  __int64 v24; // r13
  unsigned int v25; // edi
  _QWORD *v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdi
  _QWORD *v30; // r12
  __int64 v31; // rsi
  unsigned int v32; // esi
  _QWORD *v33; // r15
  unsigned int v34; // ebx
  unsigned int v35; // ebx
  unsigned int v37; // [rsp+40h] [rbp-2B8h]
  int IsEqualUint32; // [rsp+40h] [rbp-2B8h]
  int v39; // [rsp+40h] [rbp-2B8h]
  unsigned int v40; // [rsp+48h] [rbp-2B0h]
  char *v41; // [rsp+48h] [rbp-2B0h]
  int v42; // [rsp+50h] [rbp-2A8h]
  unsigned int v43; // [rsp+54h] [rbp-2A4h]
  __int64 v44; // [rsp+58h] [rbp-2A0h]
  int v45; // [rsp+58h] [rbp-2A0h]
  char *v46; // [rsp+60h] [rbp-298h]
  char v47; // [rsp+68h] [rbp-290h]
  __int64 v48; // [rsp+70h] [rbp-288h]
  __int64 v49; // [rsp+78h] [rbp-280h]
  unsigned __int64 v50; // [rsp+80h] [rbp-278h]
  char *v51; // [rsp+88h] [rbp-270h]
  __int64 v53; // [rsp+98h] [rbp-260h]
  _QWORD v54[64]; // [rsp+B0h] [rbp-248h] BYREF
  __int64 v55; // [rsp+330h] [rbp+38h]

  v7 = *(unsigned int *)(a1 + 92);
  v42 = *(_DWORD *)(a1 + 88);
  v48 = a3;
  v47 = a4;
  v37 = *(_DWORD *)(a1 + 92);
  v43 = (v42 - 2 + *(_DWORD *)(a1 + 24)) / (unsigned int)(v42 - 1);
  v40 = v43 + 1;
  memset_0(v54, 0, sizeof(v54));
  v11 = (unsigned int)SymCryptSizeofEcpointFromCurve(a1);
  v44 = (unsigned int)SymCryptSizeofIntFromDigits();
  if ( (a4 & 0xFFFFFFDF) != 0 )
  {
    return 32782;
  }
  else
  {
    v12 = 0;
    if ( !a3 )
      v48 = *(_QWORD *)(a1 + 648);
    SymCryptModElementCreate();
    v13 = *(unsigned int *)(a1 + 36) + a6;
    if ( (_DWORD)v7 )
    {
      v14 = v54;
      do
      {
        if ( a3 )
        {
          v15 = SymCryptEcpointCreate(v13, v11, a1);
          v13 += v11;
        }
        else
        {
          v15 = *(__int64 *)((char *)v14 + a1 - (_QWORD)v54 + 104);
        }
        *v14++ = v15;
        --v7;
      }
      while ( v7 );
    }
    v16 = SymCryptEcpointCreate(v13, v11, a1);
    v17 = v11 + v13;
    v53 = v16;
    v18 = v16;
    v49 = SymCryptEcpointCreate(v17, v11, a1);
    v19 = v44 + v17 + v11;
    v20 = SymCryptIntCreate();
    LODWORD(v17) = SymCryptIntCreate();
    v21 = (char *)(v19 + v44);
    v22 = v37;
    v46 = v21;
    v51 = &v21[4 * v40];
    v23 = (unsigned __int64)&v51[4 * v40 + 31] & 0xFFFFFFFFFFFFFFE0uLL;
    v50 = v23;
    v24 = a7
        - (*(unsigned int *)(a1 + 36)
         + v11 * (v37 + 2)
         + 2 * (v44 + 16 * ((4 * (unsigned __int64)(2 * v40) + 31) >> 5)));
    v55 = v24;
    SymCryptIntCopy();
    IsEqualUint32 = SymCryptIntIsEqualUint32();
    v39 = SymCryptEcpointIsZero(a1, v48, v23, v24) | IsEqualUint32;
    v45 = ~((unsigned __int64)-(__int64)(unsigned int)SymCryptIntGetBit() >> 32);
    SymCryptIntFromModulus();
    SymCryptIntSubSameSize();
    SymCryptIntMaskedCopy();
    SymCryptFixedWindowRecoding(v42, v20, v17, (_DWORD)v46, (__int64)v51, v40);
    if ( a3 )
    {
      SymCryptEcpointCopy(a1, v48, v54[0]);
      SymCryptPrecomputation(a1, v22, (unsigned int)v54, v18, v23, v24);
    }
    v25 = 0;
    if ( v22 )
    {
      v26 = v54;
      do
        SymCryptEcpointMaskedCopy(
          a1,
          *v26++,
          v18,
          (unsigned int)~((unsigned __int64)-(__int64)(v25++ ^ (unsigned __int64)*(unsigned int *)&v46[4 * v43]) >> 32));
      while ( v25 < v22 );
      v23 = (unsigned __int64)&v51[4 * v40 + 31] & 0xFFFFFFFFFFFFFFE0uLL;
    }
    v27 = v49;
    v28 = v43 - 1;
    if ( v43 != 1 )
    {
      v41 = &v51[4 * v28];
      do
      {
        if ( v42 != 1 )
        {
          v29 = (unsigned int)(v42 - 1);
          do
          {
            SymCryptEcpointDouble(a1, v18, v18, 0, v23, v24);
            --v29;
          }
          while ( v29 );
          v27 = v49;
        }
        if ( v22 )
        {
          v30 = v54;
          do
            SymCryptEcpointMaskedCopy(
              a1,
              *v30++,
              v27,
              (unsigned int)~((unsigned __int64)-(__int64)(v12++ ^ (unsigned __int64)*(unsigned int *)&v41[v46 - v51]) >> 32));
          while ( v12 < v22 );
          v18 = v53;
          v12 = 0;
          v23 = v50;
          v24 = v55;
        }
        SymCryptEcpointNegate(a1, v27, *(_DWORD *)v41, v23, v24);
        SymCryptEcpointAddDiffNonZero(a1, v18, v27, v18, v23, v24);
        v41 -= 4;
        LODWORD(v28) = v28 - 1;
      }
      while ( (_DWORD)v28 );
    }
    if ( v42 != 1 )
    {
      v31 = (unsigned int)(v42 - 1);
      do
      {
        SymCryptEcpointDouble(a1, v18, v18, 0, v23, v24);
        --v31;
      }
      while ( v31 );
    }
    v32 = 0;
    if ( v22 )
    {
      v33 = v54;
      do
        SymCryptEcpointMaskedCopy(
          a1,
          *v33++,
          v27,
          (unsigned int)~((unsigned __int64)-(__int64)(v32++ ^ (unsigned __int64)*(unsigned int *)v46) >> 32));
      while ( v32 < v22 );
      v18 = v53;
      v23 = v50;
    }
    SymCryptEcpointNegate(a1, v27, *(_DWORD *)v51, v23, v24);
    SymCryptEcpointAdd(a1, v18, v27, v18, 0, v23, v24);
    SymCryptEcpointNegate(a1, v18, v45, v23, v24);
    if ( *(_DWORD *)(a1 + 64) && (v47 & 0x20) != 0 )
    {
      v34 = 0;
      do
      {
        SymCryptEcpointDouble(a1, v18, v18, 0, v23, v24);
        ++v34;
      }
      while ( v34 < *(_DWORD *)(a1 + 64) );
    }
    v35 = v39 | SymCryptEcpointIsZero(a1, v18, v23, v24);
    SymCryptEcpointSetZero(a1, v27, v23, v24);
    SymCryptEcpointMaskedCopy(a1, v27, v18, v35);
    SymCryptEcpointCopy(a1, v18, a5);
  }
  return v12;
}
