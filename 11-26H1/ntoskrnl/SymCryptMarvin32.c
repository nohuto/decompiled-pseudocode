/*
 * XREFs of SymCryptMarvin32 @ 0x140558268
 * Callers:
 *     HvpGenerateLogEntryChecksums @ 0x140AA86B4 (HvpGenerateLogEntryChecksums.c)
 *     HvpLogEntryCheckHeaderChecksum @ 0x140B4E490 (HvpLogEntryCheckHeaderChecksum.c)
 *     HvpLogEntryCheckDataChecksum @ 0x140B55D88 (HvpLogEntryCheckDataChecksum.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMarvin32(int *a1, unsigned __int16 *a2, unsigned __int64 a3, _DWORD *a4)
{
  int v4; // r11d
  int v5; // r10d
  unsigned __int64 v6; // rbx
  int v7; // eax
  int v8; // r10d
  int v9; // eax
  int v10; // r10d
  int v11; // eax
  int v12; // eax
  int v13; // r10d
  int v14; // r11d
  int v15; // r10d
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r8
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // r10d
  unsigned int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // r10d
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // r10d
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // r10d
  int v39; // edx
  int v40; // ecx
  int v41; // edx
  int v42; // eax
  int v43; // edx
  __int64 result; // rax
  int v45; // ecx
  int v46; // edx

  v4 = *a1;
  v5 = a1[1];
  if ( a3 > 7 )
  {
    v6 = ((a3 - 8) >> 3) + 1;
    a3 += -8LL * v6;
    do
    {
      v7 = v4 + *(_DWORD *)a2;
      v8 = v5 ^ v7;
      v9 = __ROL4__(v7, 20) + v8;
      v10 = v9 ^ __ROL4__(v8, 9);
      v11 = *((_DWORD *)a2 + 1) + __ROL4__(v9, 27);
      a2 += 4;
      v12 = v10 + v11;
      v13 = v12 ^ __ROL4__(v10, 19);
      v14 = __ROL4__(v12, 20) + v13;
      v15 = v14 ^ __ROL4__(v13, 9);
      v4 = v15 + __ROL4__(v14, 27);
      v5 = __ROL4__(v15, 19);
      --v6;
    }
    while ( v6 );
  }
  if ( !a3 )
    goto LABEL_19;
  v16 = a3 - 1;
  if ( !v16 )
    goto LABEL_17;
  v17 = v16 - 1;
  if ( !v17 )
    goto LABEL_15;
  v18 = v17 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( !v19 )
    {
LABEL_18:
      v35 = v4 + *(_DWORD *)a2;
      v36 = __ROL4__(v35, 20);
      v37 = v5 ^ v35;
      v38 = (v36 + v37) ^ __ROL4__(v37, 9);
      v4 = v38 + __ROL4__(v36 + v37, 27);
      v5 = __ROL4__(v38, 19);
LABEL_19:
      v26 = 128;
      goto LABEL_20;
    }
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 == 1 )
        {
          v22 = v4 + *(_DWORD *)a2;
          v23 = __ROL4__(v22, 20);
          v24 = v5 ^ v22;
          v25 = (v23 + v24) ^ __ROL4__(v24, 9);
          v4 = v25 + __ROL4__(v23 + v24, 27);
          v5 = __ROL4__(v25, 19);
          a2 += 2;
          goto LABEL_13;
        }
        goto LABEL_18;
      }
      v27 = v4 + *(_DWORD *)a2;
      v28 = __ROL4__(v27, 20);
      v29 = v5 ^ v27;
      v30 = (v28 + v29) ^ __ROL4__(v29, 9);
      v4 = v30 + __ROL4__(v28 + v29, 27);
      v5 = __ROL4__(v30, 19);
      a2 += 2;
LABEL_15:
      v26 = *a2 | 0x800000;
      goto LABEL_20;
    }
    v31 = v4 + *(_DWORD *)a2;
    v32 = __ROL4__(v31, 20);
    v33 = v5 ^ v31;
    v34 = (v32 + v33) ^ __ROL4__(v33, 9);
    v4 = v34 + __ROL4__(v32 + v33, 27);
    v5 = __ROL4__(v34, 19);
    a2 += 2;
LABEL_17:
    v26 = *(unsigned __int8 *)a2 | 0x8000;
    goto LABEL_20;
  }
LABEL_13:
  v26 = *a2 | (*((unsigned __int8 *)a2 + 2) << 16) | 0x80000000;
LABEL_20:
  v39 = v5 ^ (v4 + v26);
  v40 = __ROL4__(v4 + v26, 20) + v39;
  v41 = v40 ^ __ROL4__(v39, 9);
  v42 = __ROL4__(v40, 27) + v41;
  v43 = v42 ^ __ROL4__(v41, 19);
  result = (unsigned int)__ROL4__(v42, 20);
  v45 = result + v43;
  v46 = (result + v43) ^ __ROL4__(v43, 9);
  a4[1] = __ROL4__(v46, 19);
  *a4 = v46 + __ROL4__(v45, 27);
  return result;
}
