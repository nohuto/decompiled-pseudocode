/*
 * XREFs of SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140565AF0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptIntCopy @ 0x14055E6A8 (SymCryptIntCopy.c)
 *     SymCryptIntCreate @ 0x14055E6D8 (SymCryptIntCreate.c)
 *     SymCryptIntIsEqualUint32 @ 0x14055E81C (SymCryptIntIsEqualUint32.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055EE90 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptPrecomputation @ 0x14056665C (SymCryptPrecomputation.c)
 *     SymCryptEcpointCopy @ 0x140566700 (SymCryptEcpointCopy.c)
 *     SymCryptEcpointCreate @ 0x14056673C (SymCryptEcpointCreate.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x14056707C (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptEcpointAdd @ 0x14056709C (SymCryptEcpointAdd.c)
 *     SymCryptEcpointDouble @ 0x140567130 (SymCryptEcpointDouble.c)
 *     SymCryptEcpointIsZero @ 0x1405671B0 (SymCryptEcpointIsZero.c)
 *     SymCryptEcpointNegate @ 0x140567244 (SymCryptEcpointNegate.c)
 *     SymCryptEcpointSetZero @ 0x14056732C (SymCryptEcpointSetZero.c)
 *     SymCryptWidthNafRecoding @ 0x140574044 (SymCryptWidthNafRecoding.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SymCryptEcpointMultiScalarMulWnafWithInterleaving(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v9; // ebp
  _QWORD *v10; // r12
  __int64 v11; // r14
  __int64 v13; // r15
  unsigned int v14; // edi
  unsigned int v15; // r13d
  unsigned int v16; // ebx
  unsigned int v17; // r13d
  __int64 v18; // r12
  __int64 *v19; // r14
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rbp
  __int64 v26; // rax
  unsigned __int64 v27; // r14
  __int64 v28; // rcx
  unsigned int v29; // r13d
  __int64 v30; // r15
  int IsZero; // ebx
  int v32; // eax
  _QWORD *v33; // rbx
  int i; // r13d
  unsigned int v35; // ecx
  unsigned int v36; // ebx
  __int64 *v37; // r12
  __int64 v38; // rax
  unsigned int v39; // ebx
  char v41; // [rsp+40h] [rbp-2C8h]
  unsigned int v42; // [rsp+44h] [rbp-2C4h]
  int v44; // [rsp+4Ch] [rbp-2BCh]
  int v45; // [rsp+50h] [rbp-2B8h]
  __int64 *v46; // [rsp+58h] [rbp-2B0h]
  __int64 v48; // [rsp+60h] [rbp-2A8h]
  __int64 v49; // [rsp+68h] [rbp-2A0h]
  __int64 v50; // [rsp+78h] [rbp-290h]
  int v51; // [rsp+80h] [rbp-288h]
  int v52; // [rsp+84h] [rbp-284h]
  __int64 v53; // [rsp+88h] [rbp-280h]
  int v54; // [rsp+90h] [rbp-278h]
  __int64 v55; // [rsp+90h] [rbp-278h]
  __int64 v56; // [rsp+98h] [rbp-270h]
  __int64 v57; // [rsp+A8h] [rbp-260h] BYREF
  _QWORD v58[64]; // [rsp+B0h] [rbp-258h] BYREF

  v9 = *(_DWORD *)(a1 + 92);
  v10 = a3;
  v11 = a7;
  v13 = a8;
  v14 = 0;
  v51 = *(_DWORD *)(a1 + 88);
  v52 = *(_DWORD *)(a1 + 24);
  v45 = v52 + 1;
  v42 = v9;
  v57 = 0LL;
  v44 = -1;
  v41 = 0;
  memset_0(v58, 0, sizeof(v58));
  v49 = (unsigned int)SymCryptSizeofEcpointFromCurve(a1);
  v56 = (unsigned int)SymCryptSizeofIntFromDigits();
  if ( (a5 & 0xFFFFFFDE) != 0 )
  {
    return 32782;
  }
  else
  {
    if ( a4 > 2 )
      return 32779;
    if ( !*v10 )
    {
      *v10 = *(_QWORD *)(a1 + 648);
      v41 = 1;
    }
    if ( (a5 & 1) != 0 )
    {
      v15 = a4;
      v16 = 0;
      v17 = v9 * v15;
      if ( v17 )
      {
        v18 = a7;
        v19 = v58;
        v20 = v9;
        do
        {
          if ( v16 < v20 && v41 )
          {
            v21 = *(__int64 *)((char *)v19 + a1 - (_QWORD)v58 + 104);
          }
          else
          {
            v22 = SymCryptEcpointCreate(v18, v49, a1);
            v18 += v49;
            v21 = v22;
            v20 = v9;
          }
          *v19 = v21;
          ++v16;
          ++v19;
        }
        while ( v16 < v17 );
        v13 = a8;
        v11 = v18;
        v10 = a3;
      }
      v23 = SymCryptEcpointCreate(v11, v49, a1);
      v24 = v49 + v11;
      v25 = v23;
      v48 = SymCryptEcpointCreate(v24, v49, a1);
      v54 = SymCryptIntCreate();
      SymCryptIntCreate();
      v50 = v56 + v24 + v49 + v56;
      v26 = v45 * a4;
      v53 = v50 + 4 * v26;
      v27 = (v53 + 4 * v26 + 31) & 0xFFFFFFFFFFFFFFE0uLL;
      v28 = v49 * (v17 + 2);
      v29 = 0;
      v30 = v13 - (v28 + 2 * (v56 + 16 * ((4 * (unsigned __int64)(unsigned int)(2 * v26) + 31) >> 5)));
      if ( a4 )
      {
        v46 = &v57;
        do
        {
          IsZero = SymCryptEcpointIsZero(a1, *v10, v27, v30);
          v32 = IsZero | SymCryptIntIsEqualUint32();
          v44 &= v32;
          *(_DWORD *)v46 = v32;
          if ( !v32 )
          {
            SymCryptIntCopy();
            SymCryptWidthNafRecoding(v51, v54, v50 + 4 * v29 * v45, v53 + 4 * v29 * v45, v45);
            if ( v29 || !v41 )
            {
              v33 = &v58[v29 * v42];
              SymCryptEcpointCopy(a1, *v10, *v33);
              SymCryptPrecomputation(a1, v42, (_DWORD)v33, v25, v27, v30);
            }
          }
          v46 = (__int64 *)((char *)v46 + 4);
          ++v29;
          ++v10;
        }
        while ( v29 < a4 );
      }
      SymCryptEcpointSetZero(a1, v25, v27, v30);
      if ( !v44 )
      {
        for ( i = v52; i > -1; --i )
        {
          SymCryptEcpointDouble(a1, v25, v25, 0, v27, v30);
          v35 = a4;
          v36 = 0;
          if ( a4 )
          {
            v37 = &v57;
            do
            {
              if ( !*(_DWORD *)v37 )
              {
                v38 = i + v36 * v45;
                v55 = v38;
                if ( *(_DWORD *)(v53 + 4 * v38) )
                {
                  SymCryptEcpointCopy(a1, v58[v36 * v42 + (*(_DWORD *)(v50 + 4 * v38) >> 1)], v48);
                  if ( *(_DWORD *)(v53 + 4 * v55) == -1 )
                    SymCryptEcpointNegate(a1, v48, -1, v27, v30);
                  SymCryptEcpointAdd(a1, v25, v48, v25, 1, v27, v30);
                  v35 = a4;
                }
              }
              ++v36;
              v37 = (__int64 *)((char *)v37 + 4);
            }
            while ( v36 < v35 );
          }
        }
      }
      if ( *(_DWORD *)(a1 + 64) && (a5 & 0x20) != 0 )
      {
        v39 = 0;
        do
        {
          SymCryptEcpointDouble(a1, v25, v25, 0, v27, v30);
          ++v39;
        }
        while ( v39 < *(_DWORD *)(a1 + 64) );
      }
      if ( (unsigned int)SymCryptEcpointIsZero(a1, v25, v27, v30) )
        SymCryptEcpointSetZero(a1, v25, v27, v30);
      SymCryptEcpointCopy(a1, v25, a6);
    }
    else
    {
      return 32779;
    }
  }
  return v14;
}
