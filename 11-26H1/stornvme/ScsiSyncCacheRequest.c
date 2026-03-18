/*
 * XREFs of ScsiSyncCacheRequest @ 0x140004E90
 * Callers:
 *     ScsiToNVMe @ 0x140002FA0 (ScsiToNVMe.c)
 * Callees:
 *     ProcessorToIoSqMappingBase @ 0x140004B70 (ProcessorToIoSqMappingBase.c)
 *     ProcessorToDedicatedIoSqMapping @ 0x140019430 (ProcessorToDedicatedIoSqMapping.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 */

__int64 __fastcall ScsiSyncCacheRequest(__int64 a1, __int64 a2)
{
  __int64 *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 *v7; // rax
  char v8; // r14
  __int64 v9; // r15
  unsigned int v10; // eax
  int v11; // r12d
  bool v12; // zf
  unsigned __int8 *v13; // r10
  unsigned int v14; // eax
  unsigned int *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // ecx
  unsigned int v20; // r8d
  unsigned int i; // edx
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int *v24; // rax
  __int64 v25; // r9
  unsigned __int16 v26; // r13
  __int64 v27; // rax
  unsigned int v28; // esi
  unsigned int v29; // ecx
  __int64 v30; // r14
  __int64 v31; // rcx
  __int64 v32; // rax
  __int16 v33; // ax
  unsigned __int8 v34; // cl
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  unsigned int v39; // edx
  bool v40; // [rsp+20h] [rbp-68h]
  unsigned int v41; // [rsp+24h] [rbp-64h] BYREF
  unsigned int v42; // [rsp+28h] [rbp-60h]
  __int128 v43; // [rsp+30h] [rbp-58h] BYREF
  int v44; // [rsp+40h] [rbp-48h] BYREF

  v4 = (__int64 *)(a2 + 104);
  v5 = 104LL;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v5 = 56LL;
  v6 = *(_QWORD *)(v5 + a2);
  if ( (v6 & 0xFFF) != 0 )
    v6 = v6 - (v6 & 0xFFF) + 4096;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 525LL) & 1) == 0 )
  {
    *(_BYTE *)(a2 + 3) = 1;
    return 0LL;
  }
  *(_BYTE *)(v6 + 4225) &= 0xFCu;
  v7 = (__int64 *)(a2 + 56);
  v8 = *(_BYTE *)(a2 + 2);
  if ( v8 == 40 )
    v7 = v4;
  v9 = *v7;
  v10 = *v7 & 0xFFF;
  if ( v10 )
    v9 = v9 - v10 + 4096;
  v11 = 0;
  v41 = 0;
  v12 = (*(_BYTE *)(v9 + 4225) & 1) == 0;
  v40 = 0;
  v42 = 0;
  if ( !v12 )
    goto LABEL_58;
  v44 = 0;
  v13 = 0LL;
  v43 = 0LL;
  if ( v8 == 40 )
  {
    if ( !*(_DWORD *)(a2 + 20) )
    {
      v14 = *(_DWORD *)(a2 + 56);
      if ( v14 )
      {
        v15 = (unsigned int *)(a2 + 120);
        v16 = v14;
        while ( 1 )
        {
          v17 = *v15;
          if ( (unsigned int)v17 < 0x80 || (unsigned int)v17 > *(_DWORD *)(a2 + 16) )
            goto LABEL_20;
          v18 = a2 + v17;
          if ( *(_DWORD *)(a2 + v17) == 64 )
          {
            if ( *(_BYTE *)(v18 + 10) )
              goto LABEL_61;
          }
          else
          {
            if ( *(_DWORD *)(a2 + v17) != 65 )
            {
              if ( *(_DWORD *)(a2 + v17) == 66 && *(_DWORD *)(v18 + 12) )
                v13 = (unsigned __int8 *)(v18 + 32);
              goto LABEL_20;
            }
            if ( *(_BYTE *)(v18 + 10) )
LABEL_61:
              v13 = (unsigned __int8 *)(v18 + 24);
          }
LABEL_20:
          ++v15;
          if ( !--v16 )
            goto LABEL_21;
        }
      }
    }
  }
  else if ( !v8 && *(_BYTE *)(a2 + 10) )
  {
    v13 = (unsigned __int8 *)(a2 + 72);
LABEL_21:
    if ( v13 )
    {
      v19 = *v13;
      if ( v19 == 138 || (v36 = v19 - 40) == 0 || (v37 = v36 - 2) == 0 || v37 == 94 )
      {
        if ( v8 == 40 )
        {
          v20 = *(_DWORD *)(a2 + 56);
          if ( v20 )
          {
            for ( i = 0; i < v20; ++i )
            {
              v22 = *(unsigned int *)(a2 + 4LL * i + 120);
              if ( (unsigned int)v22 >= 0x80 && (unsigned int)v22 < *(_DWORD *)(a2 + 16) )
              {
                v23 = a2 + v22;
                if ( *(_DWORD *)v23 == 128 )
                  goto LABEL_32;
              }
            }
          }
        }
        v24 = (unsigned int *)(a2 + 16);
        v23 = 0LL;
        if ( v8 == 40 )
LABEL_32:
          v24 = (unsigned int *)(a2 + 60);
        if ( v24 )
          v42 = *v24;
        if ( v23 )
          v40 = (*(_BYTE *)(v23 + 8) & 2) != 0;
      }
    }
  }
  *(_QWORD *)&v43 = 0x1400000002LL;
  StorPortExtendedFunction(15LL, a1, a2, &v43);
  v26 = WORD4(v43);
  if ( (_WORD)v44 == 0xFFFF && BYTE2(v44) == 0xFF )
    StorPortExtendedFunction(17LL, a1, &v44, v25);
  StorPortExtendedFunction(56LL, a1, &v44, &v41);
  v27 = 24LL;
  v28 = v41;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v27 = 12LL;
  if ( (*(_BYTE *)(v9 + 4225) & 1) != 0 )
  {
LABEL_58:
    v33 = *(_WORD *)(a1 + 384);
  }
  else
  {
    if ( *(_BYTE *)(a1 + 20) )
    {
      v32 = *(_QWORD *)(a1 + 936);
    }
    else
    {
      v29 = *(unsigned __int16 *)(a1 + 234);
      if ( v41 >= v29 )
        v28 = v41 % v29;
      v30 = 72LL * v28;
      v31 = *(_QWORD *)(a1 + 264);
      if ( (*(_DWORD *)(v27 + a2) & 0x4000) != 0 )
      {
        if ( !*(_QWORD *)(v31 + v30 + 64) )
          ProcessorToDedicatedIoSqMapping(a1, v28, v26);
        v32 = *(_QWORD *)(v30 + *(_QWORD *)(a1 + 264) + 64);
      }
      else
      {
        if ( !*(_QWORD *)(v31 + v30 + 56) )
          ProcessorToIoSqMappingBase(a1, v28, v26, 0);
        v32 = *(_QWORD *)(v30 + *(_QWORD *)(a1 + 264) + 56);
      }
      if ( *(_BYTE *)(a1 + 3752) && v42 )
      {
        v38 = *(_DWORD *)(a1 + 3764);
        if ( (v38 & 0x80u) == 0 && (v42 > *(_DWORD *)(a1 + 3760) || v40) )
        {
          LOWORD(v39) = *(_WORD *)(a1 + 334) + v28 % (unsigned __int16)(*(_WORD *)(a1 + 332) - *(_WORD *)(a1 + 334));
        }
        else
        {
          if ( (v38 & 0x40) != 0 )
          {
            v33 = *(_WORD *)(208LL * (v28 % *(unsigned __int16 *)(a1 + 332)) + *(_QWORD *)(a1 + 936) + 48);
            goto LABEL_51;
          }
          v39 = v28 % *(unsigned __int16 *)(a1 + 334);
        }
        v33 = *(_WORD *)(208LL * (unsigned __int16)v39 + *(_QWORD *)(a1 + 936) + 48);
        goto LABEL_51;
      }
    }
    v33 = *(_WORD *)(v32 + 48);
  }
LABEL_51:
  *(_WORD *)(v9 + 4212) = v33;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v34 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v34 = *(_BYTE *)(a2 + 7);
  if ( (unsigned int)v34 < *(_DWORD *)(a1 + 224) && *(_QWORD *)(a1 + 8LL * v34 + 1672) )
  {
    _mm_lfence();
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v34 + 1672) + 16LL);
  }
  *(_DWORD *)(v6 + 4100) = v11;
  *(_BYTE *)(v6 + 4096) = 0;
  return 0LL;
}
