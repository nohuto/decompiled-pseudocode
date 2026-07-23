/*
 * XREFs of SymCryptRsakeySetValueInternal @ 0x14055C930
 * Callers:
 *     SymCryptRsakeySetValue @ 0x14055C8C0 (SymCryptRsakeySetValue.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14055BD68 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14055C2A8 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x14055C774 (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptDigitsFromBits @ 0x14055E5B8 (SymCryptDigitsFromBits.c)
 *     SymCryptDivisorCreate @ 0x14055E5D0 (SymCryptDivisorCreate.c)
 *     SymCryptIntBitsizeOfValue @ 0x14055E660 (SymCryptIntBitsizeOfValue.c)
 *     SymCryptIntCreate @ 0x14055E6D8 (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x14055E774 (SymCryptIntFromModulus.c)
 *     SymCryptIntGetValueLsbits32 @ 0x14055E7D4 (SymCryptIntGetValueLsbits32.c)
 *     SymCryptIntSetValue @ 0x14055E89C (SymCryptIntSetValue.c)
 *     SymCryptIntToModulus @ 0x14055E990 (SymCryptIntToModulus.c)
 *     SymCryptSizeofDivisorFromDigits @ 0x14055EE78 (SymCryptSizeofDivisorFromDigits.c)
 *     SymCryptSizeofIntFromDigits @ 0x14055EE90 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptRsaSelftest @ 0x14056580C (SymCryptRsaSelftest.c)
 *     SymCryptCallbackAlloc @ 0x140727460 (SymCryptCallbackAlloc.c)
 *     SymCryptCallbackFree @ 0x140727498 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptRsakeySetValueInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8,
        int a9,
        unsigned int a10,
        int a11,
        __int64 a12)
{
  __int64 v12; // rbx
  __int64 v13; // rdi
  unsigned int v14; // r14d
  unsigned int v15; // edi
  unsigned int v17; // r13d
  unsigned __int64 v18; // rbp
  int v19; // r8d
  unsigned int v20; // esi
  unsigned int v21; // ecx
  unsigned int v22; // edi
  __int64 v23; // r14
  unsigned int v24; // r11d
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  int v28; // r10d
  __int64 v29; // rbx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rbx
  unsigned int v33; // eax
  __int64 v34; // rbp
  unsigned __int64 v35; // rsi
  __int64 v36; // rax
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  int v42; // eax
  int v43; // eax
  unsigned int v44; // ecx
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // rsi
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rax
  unsigned int v50; // edi
  int v51; // ebx
  int v52; // ebx
  unsigned int v53; // edi
  int v54; // ebx
  int v55; // ebx
  __int64 v56; // r12
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // esi
  __int64 v60; // rbx
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rbx
  __int64 v64; // rax
  unsigned int v65; // r14d
  __int64 v66; // rsi
  unsigned int v67; // eax
  unsigned int v68; // eax
  __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rsi
  int v74; // edi
  int v75; // eax
  __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rax
  int v79; // r13d
  unsigned int v80; // [rsp+40h] [rbp-98h]
  int i; // [rsp+40h] [rbp-98h]
  unsigned int v82; // [rsp+44h] [rbp-94h]
  unsigned int v83; // [rsp+48h] [rbp-90h]
  unsigned int v84; // [rsp+4Ch] [rbp-8Ch]
  unsigned int v85; // [rsp+50h] [rbp-88h]
  __int64 v86; // [rsp+50h] [rbp-88h]
  __int64 v87; // [rsp+58h] [rbp-80h]
  int v88; // [rsp+60h] [rbp-78h]
  unsigned __int64 v89; // [rsp+68h] [rbp-70h]
  unsigned __int64 v90; // [rsp+70h] [rbp-68h]
  unsigned int v91; // [rsp+78h] [rbp-60h]
  __int64 v92; // [rsp+80h] [rbp-58h]
  unsigned __int64 v93; // [rsp+88h] [rbp-50h]
  unsigned __int64 v94; // [rsp+90h] [rbp-48h]
  unsigned __int64 v95; // [rsp+98h] [rbp-40h]

  v12 = a2;
  v84 = 0;
  v13 = a1;
  v82 = 0;
  v14 = 0;
  v83 = 0;
  if ( (a11 & 0xFFFFCCFF) != 0
    || (a11 & 0x3000) == 0
    || (a11 & 0x100) == 0 && (a11 & 0x200) != 0
    || !a1
    || !a2
    || a4 != 1
    || !a3 )
  {
    return 32782;
  }
  if ( a9 == 2 )
  {
    if ( !a7 || !a8 || !*a7 || !a7[1] || !*a8 || !a8[1] )
      return 32782;
LABEL_19:
    v17 = *(_DWORD *)(a12 + 20);
    if ( a5 || a9 )
    {
      if ( *(_DWORD *)(a12 + 28) != 2 )
        return 32782;
      v82 = SymCryptSizeofIntFromDigits(v17);
      v83 = SymCryptSizeofIntFromDigits(2 * v17);
      v84 = SymCryptSizeofDivisorFromDigits(v17);
      v19 = v17;
      v20 = 16 * v17;
      v85 = 16 * v17;
      v21 = (v17 << 8) + 192;
      v22 = (v17 << 8) + 64;
      if ( 16 * v17 > v21 )
        v21 = 16 * v17;
      v95 = v21;
      v23 = v17 << 7;
      v94 = v22;
      v24 = (v17 << 7) + 64;
      if ( 32 * v17 > v20 )
        v19 = 2 * v17;
      v25 = (unsigned int)(16 * v19);
      v92 = v17 << 6;
      v26 = 2 * v92 + 128;
      v27 = v17 * (v20 < 32 * v17 ? 32 : 16);
      if ( v24 > (unsigned int)v25 )
        v27 = v24;
      v28 = v27;
      v29 = v27 + 2 * (3 * v92 + 256);
      v30 = v22;
      v31 = v23 + v29;
      v90 = v31;
      if ( v31 > v22 )
        v30 = v31;
      v32 = v30 + v26;
      v33 = v92 + 64;
      if ( v20 > (int)v92 + 64 )
        v33 = 16 * v17;
      v34 = v17 << 7;
      v35 = v33;
      v80 = (v17 + 1) << 6;
      if ( v24 > (unsigned int)v25 )
        v25 = (unsigned int)(v34 + 64);
      v88 = v34 + 64;
      v91 = v17 << 7;
      v36 = v25 + 6 * v92;
      v37 = v80;
      v93 = v36 + v34 + 512;
      if ( v85 > (int)v92 + 64 )
        v37 = v85;
      if ( v90 > v35 )
        v37 = v36 + v34 + 512;
      v38 = (unsigned int)(v88 + v34);
      v39 = (unsigned int)v38;
      if ( v90 > v22 )
        v38 = v93;
      v40 = v26 + v38;
      v89 = v39;
      v41 = v37;
      if ( v32 > v37 )
        v41 = v40;
      v42 = v23 + 128;
      v14 = v82;
      if ( v90 > v22 )
        v22 = v28 + ((v17 + 1) << 9);
      v43 = v22 + v42;
      if ( v90 > v35 )
        LODWORD(v35) = v28 + ((v17 + 1) << 9);
      if ( v32 > v37 )
        LODWORD(v35) = v43;
      if ( v95 > v41 )
        LODWORD(v35) = v95;
      v18 = v84 + v82 + v83 + (_DWORD)v35;
      if ( a5 )
      {
        v44 = v91 + 128 + v88;
        v45 = 4480 * v17 + 64;
        if ( v85 > (v17 << 8) + 192 )
          v44 = 16 * v17;
        v46 = (unsigned int)(v92 + 64);
        if ( v44 > (int)v92 + 64 )
          v46 = (unsigned int)v95;
        v47 = v80;
        if ( v44 > (int)v92 + 64 )
          v47 = v44;
        if ( v90 > v46 )
          v47 = v93;
        v48 = v47;
        if ( v45 > v47 )
          v48 = v88 + v91 + 4224 * v17;
        v49 = v48;
        if ( v94 > v48 )
          v49 = v89;
        if ( v90 > v46 )
          v46 = v90;
        v50 = *(_DWORD *)(a12 + 12);
        if ( v45 > v47 )
          v46 = 4480 * v17 + 64;
        if ( v94 > v48 )
          v46 = v94;
        if ( v85 + 16 > v49 )
          v46 = v85 + 16;
        v51 = SymCryptSizeofIntFromDigits(v17 + 1);
        v52 = SymCryptSizeofIntFromDigits(v17) + v51;
        if ( v18 <= v46
                  + v52
                  + (unsigned int)SymCryptSizeofIntFromDigits(1LL)
                  + (((v50 >> 9) + (((v50 & 0x1FF) + 511) >> 9)) << 8) )
        {
          v53 = *(_DWORD *)(a12 + 12);
          v54 = SymCryptSizeofIntFromDigits(v17 + 1);
          v55 = SymCryptSizeofIntFromDigits(v17) + v54;
          LODWORD(v18) = v46
                       + v55
                       + SymCryptSizeofIntFromDigits(1LL)
                       + (((v53 >> 9) + (((v53 & 0x1FF) + 511) >> 9)) << 8);
        }
      }
      v12 = a2;
      v13 = a1;
    }
    else
    {
      LODWORD(v18) = (v17 << 8) + 192;
      if ( 16 * v17 > (unsigned int)v18 )
        LODWORD(v18) = 16 * v17;
    }
    v56 = SymCryptCallbackAlloc((unsigned int)v18);
    if ( !v56 )
      return 32783;
    v57 = SymCryptIntFromModulus(*(_QWORD *)(a12 + 120));
    v15 = SymCryptIntSetValue(v13, v12, a10, v57);
    if ( v15 )
    {
LABEL_110:
      SymCryptWipe(v56, (unsigned int)v18);
      SymCryptCallbackFree(v56);
      return v15;
    }
    v58 = SymCryptIntFromModulus(*(_QWORD *)(a12 + 120));
    v59 = SymCryptIntBitsizeOfValue(v58);
    *(_DWORD *)(a12 + 16) = v59;
    if ( v59 > *(_DWORD *)(a12 + 12) )
    {
LABEL_81:
      v15 = 32782;
      goto LABEL_110;
    }
    if ( v59 < 0x100 )
    {
LABEL_83:
      v15 = 32769;
      goto LABEL_110;
    }
    v60 = *(_QWORD *)(a12 + 120);
    v61 = SymCryptIntFromModulus(v60);
    SymCryptIntToModulus(v61, v60, v59, 1, v56, (unsigned int)v18);
    v62 = 0LL;
    *(_DWORD *)(a12 + 24) = 1;
    do
    {
      *(_QWORD *)(a12 + 8 * v62 + 56) = *(_QWORD *)(a3 + 8 * v62);
      v62 = (unsigned int)(v62 + 1);
    }
    while ( (unsigned int)v62 < *(_DWORD *)(a12 + 24) );
    if ( a5 )
    {
      v15 = SymCryptRsakeyCalculatePrimesFromPrivateExponent(a12, a5, a6, a10, v56, v18);
      if ( v15 )
        goto LABEL_110;
      v87 = SymCryptIntCreate(v56, v14, v17);
      v86 = v14 + v56;
      v65 = v18 - v82;
    }
    else
    {
      if ( !a9 )
      {
        v79 = a11;
        goto LABEL_106;
      }
      v63 = v14;
      v64 = SymCryptIntCreate(v56, v14, v17);
      v87 = v64;
      v65 = v18 - v82;
      v66 = 0LL;
      v86 = v63 + v56;
      *(_DWORD *)(a12 + 48) = 0;
      if ( *(_DWORD *)(a12 + 28) )
      {
        while ( 1 )
        {
          v15 = SymCryptIntSetValue(a7[v66], a8[v66], a10, v64);
          if ( v15 )
            goto LABEL_110;
          v67 = SymCryptIntBitsizeOfValue(v87);
          *(_DWORD *)(a12 + 4 * v66 + 32) = v67;
          v68 = SymCryptDigitsFromBits(v67);
          *(_DWORD *)(a12 + 4 * v66 + 40) = v68;
          if ( *(_DWORD *)(a12 + 48) > v68 )
            v68 = *(_DWORD *)(a12 + 48);
          *(_DWORD *)(a12 + 48) = v68;
          if ( *(_DWORD *)(a12 + 4 * v66 + 32) < 0x80u )
            goto LABEL_83;
          v66 = (unsigned int)(v66 + 1);
          if ( (unsigned int)v66 >= *(_DWORD *)(a12 + 28) )
            break;
          v64 = v87;
        }
      }
      SymCryptRsakeyCreateAllObjects((_DWORD *)a12);
      v69 = 0LL;
      for ( i = 0; (unsigned int)v69 < *(_DWORD *)(a12 + 28); i = v69 )
      {
        v70 = (unsigned int)v69;
        v71 = SymCryptIntFromModulus(*(_QWORD *)(a12 + 8 * v69 + 128));
        v15 = SymCryptIntSetValue(a7[v70], a8[v70], a10, v71);
        if ( v15 )
          goto LABEL_110;
        v72 = SymCryptIntFromModulus(*(_QWORD *)(a12 + 8 * v70 + 128));
        if ( (SymCryptIntGetValueLsbits32(v72) & 1) == 0 )
          goto LABEL_81;
        v73 = *(_QWORD *)(a12 + 8 * v70 + 128);
        v74 = *(_DWORD *)(a12 + 16);
        v75 = SymCryptIntFromModulus(v73);
        SymCryptIntToModulus(v75, v73, v74, 10, v86, v65);
        v69 = (unsigned int)(i + 1);
      }
    }
    v76 = v83 + v86;
    v77 = SymCryptIntCreate(v86, v83, 2 * v17);
    v78 = SymCryptDivisorCreate(v76, v84, v17);
    v79 = a11;
    v15 = SymCryptRsakeyCalculatePrivateFields(a12, v78, v87, v77, v84 + v76, v65 - v83 - v84, a11 & 0x200);
    if ( v15 )
      goto LABEL_110;
    *(_BYTE *)(a12 + 8) = 1;
LABEL_106:
    *(_DWORD *)a12 = v79;
    if ( (a11 & 0x100) == 0 )
    {
      if ( (g_SymCryptFipsSelftestsPerformed & 8) == 0 )
      {
        SymCryptRsaSelftest();
        _InterlockedOr(&g_SymCryptFipsSelftestsPerformed, 8u);
      }
      *(_DWORD *)a12 |= 1u;
    }
    goto LABEL_110;
  }
  if ( !a9 )
    goto LABEL_19;
  return 32782;
}
