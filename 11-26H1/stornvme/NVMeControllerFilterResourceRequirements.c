/*
 * XREFs of NVMeControllerFilterResourceRequirements @ 0x140016B24
 * Callers:
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 * Callees:
 *     GetProcessorInformation @ 0x14000E550 (GetProcessorInformation.c)
 *     GetProcessorGroupInformation @ 0x14001465C (GetProcessorGroupInformation.c)
 *     IsPci3MsiInterrupt @ 0x140015CFC (IsPci3MsiInterrupt.c)
 *     memmove @ 0x140032740 (memmove.c)
 *     memset @ 0x140032A40 (memset.c)
 */

void *__fastcall NVMeControllerFilterResourceRequirements(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  unsigned int v6; // r14d
  char v7; // r12
  __int16 v8; // si
  void *result; // rax
  char ProcessorInformation; // al
  __int64 v11; // r11
  __int64 v12; // rbx
  unsigned int v13; // r15d
  __int64 v14; // rdx
  unsigned int v15; // r15d
  _BYTE *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r8
  unsigned int i; // edx
  bool v20; // al
  int v21; // edx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // r10d
  int v25; // r11d
  __int16 v26; // cx
  __int64 v27; // rax
  __int64 v28; // r8
  unsigned int v29; // r11d
  int v30; // edx
  __int64 v31; // r8
  unsigned int v32; // r9d
  __int64 v33; // r10
  __int64 v34; // r8
  unsigned int v35; // r8d
  unsigned int v36; // edx
  int v37; // edx
  _OWORD *v38; // rcx
  unsigned int v39; // r8d
  __int64 v40; // rax
  unsigned int v41; // ecx
  unsigned int j; // edx
  __int64 v43; // r8
  __int64 v44; // rax
  const void *v45; // rdx
  unsigned int *v46; // rdx
  __int64 v47; // r8
  int v48; // eax
  unsigned int v49; // r13d
  unsigned int v50; // esi
  unsigned int v51; // r9d
  __int64 v52; // rdx
  int v53; // r10d
  int v54; // r14d
  __int64 v55; // r15
  __int64 v56; // r12
  int v57; // eax
  unsigned __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned int v60; // r12d
  int v61; // r14d
  unsigned int v62; // r13d
  __int64 v63; // r15
  int v64; // eax
  unsigned __int64 v65; // rdx
  __int64 v66; // r12
  int v67; // r14d
  unsigned int v68; // r12d
  __int64 v69; // r15
  int v70; // eax
  unsigned __int64 v71; // rdx
  __int64 v72; // rax
  unsigned int v73; // [rsp+40h] [rbp-30h]
  unsigned int v74; // [rsp+44h] [rbp-2Ch]
  unsigned int v75; // [rsp+48h] [rbp-28h]
  unsigned int v76; // [rsp+4Ch] [rbp-24h]
  int v77; // [rsp+4Ch] [rbp-24h]
  unsigned int v78; // [rsp+50h] [rbp-20h]
  __int64 v79; // [rsp+58h] [rbp-18h]
  int v81; // [rsp+C0h] [rbp+50h] BYREF
  unsigned int v82; // [rsp+C8h] [rbp+58h] BYREF

  v4 = a2;
  v76 = 0;
  v6 = 0;
  v78 = 0;
  v7 = 1;
  v8 = 4;
  if ( !GetProcessorGroupInformation(a1, a2, a3, a4) )
  {
    *(_DWORD *)(a1 + 28) = 9;
    return (void *)StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
  }
  ProcessorInformation = GetProcessorInformation(a1);
  LODWORD(v11) = 0;
  if ( !ProcessorInformation )
  {
    *(_DWORD *)(a1 + 28) = 10;
    return (void *)StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
  }
  v12 = *(_QWORD *)(v4 + 8) + 32LL;
  v13 = *(_DWORD *)(*(_QWORD *)(v4 + 8) + 36LL);
  v73 = v13;
  if ( v13 )
  {
    v14 = *(_QWORD *)(v4 + 8) + 41LL;
    v15 = 0;
    do
    {
      if ( IsPci3MsiInterrupt(v14 - 1) )
      {
        ++v6;
      }
      else if ( *v16 == 1 && (v16[3] & 1) != 0 )
      {
        ++v15;
      }
      v14 = (__int64)(v16 + 32);
    }
    while ( v17 != 1 );
    v78 = v15;
    v13 = v73;
  }
  v18 = *(unsigned __int16 *)(a1 + 234);
  if ( v6 <= (int)v18 + 1 )
  {
    if ( g_HeteroSystem == (_BYTE)v11 )
      goto LABEL_51;
    if ( v6 <= 1 )
      goto LABEL_51;
    if ( v6 >= (unsigned int)v18 )
      goto LABEL_51;
    v82 = v11;
    v81 = v11;
    v75 = v11;
    v74 = v11;
    v48 = StorPortExtendedFunction(0LL, a1, v18, 1701672526LL);
    LODWORD(v11) = 0;
    if ( v48 )
      goto LABEL_51;
    v49 = *(_DWORD *)(a1 + 300);
    if ( v49 >= v6 )
      v49 = v6 >> 1;
    v50 = 0;
    if ( v6 > 2 )
    {
      v51 = *(_DWORD *)(v12 + 4);
      while ( 1 )
      {
        if ( v50 >= v51 )
          goto LABEL_75;
        if ( IsPci3MsiInterrupt(32LL * v50 + v12 + 8) )
          break;
        ++v50;
      }
      *(_DWORD *)(v52 + v12 + 16) = v53;
      *(_WORD *)(v52 + v12 + 12) |= 4u;
      ++v50;
      *(_DWORD *)(v52 + v12 + 20) = v53;
      *(_DWORD *)(v52 + v12 + 24) = v11;
      *(_DWORD *)(v52 + v12 + 28) = 3;
      *(_QWORD *)(v52 + v12 + 32) = v11;
    }
LABEL_75:
    v54 = v11;
    v55 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL);
    while ( v50 < *(_DWORD *)(v12 + 4) && v49 )
    {
      if ( IsPci3MsiInterrupt(32LL * v50 + v12 + 8) )
      {
        do
        {
          if ( !v55 )
            goto LABEL_86;
          while ( 1 )
          {
            v56 = 1LL << v54;
            if ( ((1LL << v54) & v55) != 0 )
              break;
            ++v54;
          }
          LOWORD(v81) = v76;
          BYTE2(v81) = v54;
          v57 = StorPortExtendedFunction(56LL, a1, &v81, &v82);
          LODWORD(v11) = 0;
          if ( v57 )
            goto LABEL_50;
          v58 = v82;
          v55 &= ~(1LL << v54++);
        }
        while ( *(_BYTE *)(*(_QWORD *)(a1 + 264) + 72LL * v82 + 4) );
        v59 = 32LL * v50;
        *(_WORD *)(v59 + v12 + 12) |= 4u;
        ++v75;
        *(_DWORD *)(v59 + v12 + 16) = -2;
        *(_DWORD *)(v59 + v12 + 20) = -2;
        *(_WORD *)(v59 + v12 + 26) = v76;
        *(_WORD *)(v59 + v12 + 24) = 4;
        *(_DWORD *)(v59 + v12 + 28) = 3;
        *(_QWORD *)(v59 + v12 + 32) = v56;
        *(_BYTE *)v58 = 1;
        v55 &= ~*(_QWORD *)(*(_QWORD *)(a1 + 264) + 72LL * v82 + 24);
        if ( --v49 && !v55 )
        {
LABEL_86:
          v60 = v76;
          if ( v76 >= (unsigned int)*(unsigned __int16 *)(a1 + 232) - 1 )
            goto LABEL_50;
          v54 = v11;
          ++v76;
          v55 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL * (v60 + 1) + 8);
        }
      }
      ++v50;
    }
    v61 = v11;
    v77 = 1;
    v62 = v11;
    v63 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL);
    while ( v50 < *(_DWORD *)(v12 + 4) )
    {
      if ( IsPci3MsiInterrupt(v12 + 32LL * v50 + 8) )
      {
        do
        {
          if ( !v63 )
            goto LABEL_98;
          while ( 1 )
          {
            v79 = 1LL << v61;
            if ( ((1LL << v61) & v63) != 0 )
              break;
            ++v61;
          }
          LOWORD(v81) = v62;
          BYTE2(v81) = v61;
          v64 = StorPortExtendedFunction(56LL, a1, &v81, &v82);
          LODWORD(v11) = 0;
          if ( v64 )
            goto LABEL_50;
          v65 = v82;
          v63 &= ~(1LL << v61++);
        }
        while ( *(_BYTE *)(*(_QWORD *)(a1 + 264) + 72LL * v82 + 4) != 1 );
        ++v74;
        v66 = 32LL * v50;
        *(_WORD *)(v66 + v12 + 12) |= 4u;
        *(_DWORD *)(v66 + v12 + 16) = -2;
        *(_DWORD *)(v66 + v12 + 20) = -2;
        *(_QWORD *)(v66 + v12 + 32) = v79;
        *(_WORD *)(v66 + v12 + 24) = 4;
        *(_WORD *)(v66 + v12 + 26) = v62;
        *(_DWORD *)(v66 + v12 + 28) = 3;
        *(_BYTE *)v65 = 1;
        v63 &= ~*(_QWORD *)(*(_QWORD *)(a1 + 264) + 72LL * v82 + 24);
        if ( !v63 )
        {
LABEL_98:
          if ( v62 >= (unsigned int)*(unsigned __int16 *)(a1 + 232) - 1 )
            break;
          ++v62;
          v61 = v11;
          v63 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL * v62 + 8);
        }
      }
      ++v50;
    }
    v67 = v11;
    v68 = v11;
    v69 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL);
    while ( 1 )
    {
      if ( v50 >= *(_DWORD *)(v12 + 4) )
        goto LABEL_50;
      if ( IsPci3MsiInterrupt(v12 + 32LL * v50 + 8) )
      {
        while ( 1 )
        {
          if ( !v69 )
            goto LABEL_115;
          while ( ((1LL << v67) & v69) == 0 )
            ++v67;
          LOWORD(v81) = v68;
          BYTE2(v81) = v67;
          v70 = StorPortExtendedFunction(56LL, a1, &v81, &v82);
          LODWORD(v11) = 0;
          if ( v70 )
            goto LABEL_50;
          v71 = v82;
          v69 &= ~(1LL << v67);
          if ( *(unsigned __int8 *)(*(_QWORD *)(a1 + 264) + 72LL * v82 + 4) == v77 && !*(_BYTE *)v82 )
            break;
          ++v67;
        }
        v72 = 32LL * v50;
        *(_WORD *)(v72 + v12 + 12) |= 4u;
        *(_DWORD *)(v72 + v12 + 16) = -2;
        *(_DWORD *)(v72 + v12 + 20) = -2;
        *(_WORD *)(v72 + v12 + 24) = 4;
        *(_WORD *)(v72 + v12 + 26) = v68;
        *(_DWORD *)(v72 + v12 + 28) = 3;
        *(_QWORD *)(v72 + v12 + 32) = 1LL << v67;
        *(_BYTE *)v71 = 1;
        if ( v77 == 1 )
          ++v74;
        else
          ++v75;
        ++v67;
        v69 &= ~*(_QWORD *)(*(_QWORD *)(a1 + 264) + 72LL * v82 + 24);
        if ( !v69 )
        {
LABEL_115:
          if ( v68 >= (unsigned int)*(unsigned __int16 *)(a1 + 232) - 1 )
          {
            if ( v50 >= *(_DWORD *)(v12 + 4) - 1 )
              goto LABEL_123;
            if ( v74 >= *(_DWORD *)(a1 + 312) )
            {
              if ( v75 >= *(_DWORD *)(a1 + 308) )
                goto LABEL_50;
              v77 = v11;
            }
            v68 = v11;
            v69 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL);
          }
          else
          {
            v69 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL * ++v68 + 8);
          }
          v67 = v11;
        }
      }
LABEL_123:
      ++v50;
    }
  }
  v73 = v18 - v6 + v13 + 1;
  for ( i = 0; i < *(_DWORD *)(v12 + 4); i = v21 + 1 )
  {
    v20 = IsPci3MsiInterrupt(v12 + 32LL * i + 8);
    v26 = 0;
    if ( !v20 )
      continue;
    if ( v23 )
    {
      while ( !_bittest64(&v23, v24) )
        ++v24;
    }
    if ( g_HeteroSystem )
    {
      if ( !v7 )
      {
        v8 = 4;
LABEL_31:
        v27 = 1LL << v24;
        v26 = v25;
        goto LABEL_26;
      }
      v8 = 0;
      v7 = 0;
    }
    else if ( v8 == 4 )
    {
      goto LABEL_31;
    }
    v27 = 0LL;
LABEL_26:
    v28 = 32 * v22;
    *(_WORD *)(v28 + v12 + 12) |= 4u;
    *(_QWORD *)(v28 + v12 + 32) = v27;
    *(_WORD *)(v28 + v12 + 26) = v26;
    *(_DWORD *)(v28 + v12 + 16) = -2;
    *(_DWORD *)(v28 + v12 + 20) = -2;
    *(_WORD *)(v28 + v12 + 24) = v8;
    *(_DWORD *)(v28 + v12 + 28) = 3;
    if ( (v23 & ~(1LL << v24)) == 0 && v25 == *(unsigned __int16 *)(a1 + 232) - 1 )
    {
      i = v21 + 1;
      break;
    }
  }
  v29 = *(_DWORD *)(v12 + 4);
  while ( 1 )
  {
    if ( i >= v29 )
    {
      LODWORD(v11) = 0;
      goto LABEL_42;
    }
    if ( IsPci3MsiInterrupt(v12 + 32LL * i + 8) )
      break;
    i = v30 + 1;
  }
  LODWORD(v11) = 0;
  if ( v33 )
  {
    while ( !_bittest64(&v33, v32) )
      ++v32;
  }
  v34 = 32 * v31;
  *(_WORD *)(v34 + v12 + 12) |= 4u;
  i = v30 + 1;
  *(_DWORD *)(v34 + v12 + 16) = -2;
  *(_DWORD *)(v34 + v12 + 20) = -2;
  *(_DWORD *)(v34 + v12 + 24) = 4;
  *(_DWORD *)(v34 + v12 + 28) = 3;
  *(_QWORD *)(v34 + v12 + 32) = 1LL << v32;
LABEL_42:
  v35 = *(_DWORD *)(v12 + 4);
  while ( i < v35 )
  {
    if ( IsPci3MsiInterrupt(v12 + 32LL * i + 8) )
    {
      do
      {
        if ( !IsPci3MsiInterrupt(v12 + 32LL * v36 + 8) && v37 != v39 )
        {
          v40 = 32LL * v39;
          *(_OWORD *)(v40 + v12 + 8) = *v38;
          *(_OWORD *)(v40 + v12 + 24) = v38[1];
        }
        v36 = v37 + 1;
      }
      while ( v36 < *(_DWORD *)(v12 + 4) );
      break;
    }
    i = v36 + 1;
  }
LABEL_50:
  v13 = v73;
  v4 = a2;
LABEL_51:
  if ( v78 > (unsigned int)v11 )
  {
    v41 = v11;
    for ( j = v11; j < *(_DWORD *)(v12 + 4); ++j )
    {
      v43 = 32LL * j;
      if ( *(_BYTE *)(v43 + v12 + 9) != 1 || (*(_BYTE *)(v43 + v12 + 12) & 1) == 0 )
      {
        if ( j != v41 )
        {
          v44 = 32LL * v41;
          *(_OWORD *)(v44 + v12 + 8) = *(_OWORD *)(v43 + v12 + 8);
          *(_OWORD *)(v44 + v12 + 24) = *(_OWORD *)(v43 + v12 + 24);
        }
        ++v41;
      }
    }
    v13 += v41 - j;
  }
  v45 = (const void *)(v12 + 32LL * *(unsigned int *)(v12 + 4) + 8);
  memmove(
    (void *)(v12 + 32LL * v13 + 8),
    v45,
    (unsigned int)*(_QWORD *)(v4 + 8) + **(_DWORD **)(v4 + 8) - (unsigned int)v45);
  v46 = *(unsigned int **)(v4 + 8);
  result = (void *)(*v46 - 32LL * (*(_DWORD *)(v12 + 4) - v13));
  v47 = (32 * (*(_DWORD *)(v12 + 4) - v13)) >> 2;
  if ( (_DWORD)v47 )
    result = memset((char *)v46 + (_QWORD)result, 0, 4 * v47);
  *(_DWORD *)(v12 + 4) = v13;
  return result;
}
