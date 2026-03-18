/*
 * XREFs of sub_140010C10 @ 0x140010C10
 * Callers:
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 * Callees:
 *     sub_1400070B0 @ 0x1400070B0 (sub_1400070B0.c)
 *     sub_14000C6F0 @ 0x14000C6F0 (sub_14000C6F0.c)
 *     sub_140017FC0 @ 0x140017FC0 (sub_140017FC0.c)
 *     sub_140018810 @ 0x140018810 (sub_140018810.c)
 *     sub_1400188B0 @ 0x1400188B0 (sub_1400188B0.c)
 *     sub_140018A60 @ 0x140018A60 (sub_140018A60.c)
 *     sub_14001F398 @ 0x14001F398 (sub_14001F398.c)
 *     sub_140023944 @ 0x140023944 (sub_140023944.c)
 */

char __fastcall sub_140010C10(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v2; // kr00_4
  unsigned int v3; // esi
  unsigned int v5; // r15d
  int v6; // ebx
  unsigned int v7; // eax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r14
  unsigned int v11; // r10d
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r9
  int v14; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 *v18; // rbp
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 *v23; // rbp
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int i; // ebp
  __int64 v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r8
  int v37; // eax
  unsigned int v38; // ebp
  int v39; // eax
  signed __int32 v41[8]; // [rsp+0h] [rbp-48h] BYREF
  int v42; // [rsp+20h] [rbp-28h]
  __int64 v43; // [rsp+28h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 1560);
  v2 = *(_DWORD *)(a1 + 204);
  *(_DWORD *)(a1 + 24) &= 0xFFFFFDFE;
  v3 = 0;
  v5 = v2 / 0xA;
  LOBYTE(v6) = 0;
  sub_140018810(a1);
  if ( *(_QWORD *)(a1 + 3720) )
    sub_14001F398(a1);
  v7 = *(_DWORD *)(v1 + 88);
  if ( v7 )
  {
    v8 = 10000 * (v7 / 0x2710uLL);
    v9 = v8 + 10000;
    if ( v7 == v8 )
      v9 = v7;
    v10 = v9 / 0x2710;
  }
  else
  {
    LODWORD(v10) = 500;
  }
  v11 = *(unsigned __int8 *)(a1 + 47);
  if ( (_BYTE)v11 )
  {
    v12 = 100 * ((unsigned int)v10 / 0x64uLL);
    v13 = v12 + 100;
    if ( (unsigned int)v10 == v12 )
      v13 = (unsigned int)v10;
    v14 = *(unsigned __int8 *)(a1 + 47);
    v15 = v13 / 0x64;
    if ( (unsigned int)v15 > v11 )
      v14 = v15;
    LODWORD(v10) = 100 * v14;
  }
  sub_1400070B0(a1);
  sub_140018A60(a1);
  v18 = (__int64 *)(a1 + 3712);
  if ( a1 != -3712 )
  {
    v19 = *v18;
    if ( *v18 )
    {
      if ( *(_QWORD *)(a1 + 3936) )
      {
        v43 = *(_QWORD *)(a1 + 3936);
        v42 = 1;
        if ( !(unsigned int)StorPortExtendedFunction(83LL, a1, v19, 4096LL) )
          *v18 = 0LL;
      }
    }
  }
  v20 = *(_QWORD *)(a1 + 4224);
  if ( v20 )
  {
    StorPortExtendedFunction(1LL, a1, v20, v17);
    *(_QWORD *)(a1 + 4224) = 0LL;
  }
  v21 = *(_QWORD *)(a1 + 4232);
  if ( v21 )
  {
    if ( a1 != -4232 && *(_QWORD *)(a1 + 4240) )
    {
      v43 = *(_QWORD *)(a1 + 4240);
      v42 = 1;
      StorPortExtendedFunction(83LL, a1, v21, 1024LL);
    }
    *(_QWORD *)(a1 + 4232) = 0LL;
    *(_QWORD *)(a1 + 4240) = 0LL;
  }
  v22 = *(_QWORD *)(a1 + 4248);
  if ( v22 )
  {
    if ( a1 != -4248 && *(_QWORD *)(a1 + 4256) )
    {
      v43 = *(_QWORD *)(a1 + 4256);
      v42 = 1;
      StorPortExtendedFunction(83LL, a1, v22, 1024LL);
    }
    *(_QWORD *)(a1 + 4248) = 0LL;
    *(_QWORD *)(a1 + 4256) = 0LL;
  }
  v23 = (__int64 *)(a1 + 3928);
  if ( a1 != -3928 )
  {
    v24 = *v23;
    if ( *v23 )
    {
      if ( *(_QWORD *)(a1 + 3944) )
      {
        v43 = *(_QWORD *)(a1 + 3944);
        v42 = 1;
        if ( !(unsigned int)StorPortExtendedFunction(83LL, a1, v24, 512LL) )
          *v23 = 0LL;
      }
    }
  }
  v25 = *(_QWORD *)(a1 + 3984);
  if ( v25 )
    StorPortExtendedFunction(1LL, a1, v25, v17);
  sub_14000C6F0((_QWORD *)a1, v16, v25, v17);
  v27 = *(_QWORD *)(a1 + 248);
  if ( v27 )
  {
    StorPortExtendedFunction(1LL, a1, v27, v26);
    *(_QWORD *)(a1 + 248) = 0LL;
  }
  *(_DWORD *)(a1 + 232) = 0;
  sub_1400188B0(a1);
  sub_140017FC0(a1);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 224); ++i )
    {
      v30 = *(_QWORD *)(a1 + 8LL * i + 1672);
      if ( v30 )
        StorPortExtendedFunction(1LL, a1, v30, v28);
    }
  }
  v31 = (_QWORD *)(a1 + 1672);
  v32 = 31LL;
  do
  {
    *v31 = 0LL;
    v31[1] = 0LL;
    v31[2] = 0LL;
    v31 += 8;
    *(v31 - 5) = 0LL;
    *(v31 - 4) = 0LL;
    *(v31 - 3) = 0LL;
    *(v31 - 2) = 0LL;
    *(v31 - 1) = 0LL;
    --v32;
  }
  while ( v32 );
  *v31 = 0LL;
  v31[1] = 0LL;
  v31[2] = 0LL;
  v31[3] = 0LL;
  v31[4] = 0LL;
  v31[5] = 0LL;
  v31[6] = 0LL;
  v33 = *(_QWORD *)(a1 + 3808);
  *(_DWORD *)(a1 + 212) = 0;
  if ( v33 )
  {
    StorPortExtendedFunction(1LL, a1, v33, v28);
    *(_QWORD *)(a1 + 3808) = 0LL;
  }
  v34 = *(_QWORD *)(a1 + 4264);
  if ( v34 )
  {
    StorPortExtendedFunction(34LL, a1, v34, v28);
    *(_QWORD *)(a1 + 4264) = 0LL;
    *(_DWORD *)(a1 + 4272) = 0;
  }
  sub_140023944(a1);
  v36 = *(_QWORD *)(a1 + 1536);
  if ( v36 )
  {
    if ( a1 != -1536 && *(_QWORD *)(a1 + 1544) )
    {
      v43 = *(_QWORD *)(a1 + 1544);
      v42 = 1;
      StorPortExtendedFunction(83LL, a1, v36, 12288LL);
    }
    *(_QWORD *)(a1 + 1536) = 0LL;
    *(_QWORD *)(a1 + 1544) = 0LL;
  }
  *(_OWORD *)(a1 + 1408) = 0LL;
  *(_OWORD *)(a1 + 1424) = 0LL;
  *(_OWORD *)(a1 + 1440) = 0LL;
  *(_OWORD *)(a1 + 1456) = 0LL;
  *(_OWORD *)(a1 + 1472) = 0LL;
  *(_OWORD *)(a1 + 1488) = 0LL;
  *(_OWORD *)(a1 + 1504) = 0LL;
  *(_OWORD *)(a1 + 1520) = 0LL;
  if ( (*(_DWORD *)(a1 + 24) & 0x8000) != 0 )
  {
    v37 = *(unsigned __int8 *)(a1 + 142);
    if ( !(_BYTE)v37 )
      return 1;
    if ( (unsigned int)v10 <= 100 * v37 )
      LODWORD(v10) = 100 * v37;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) & 0xFFFF3FFF | 0x4000;
  _InterlockedOr(v41, 0);
  v38 = 0;
  if ( !(_DWORD)v10 )
    goto LABEL_65;
  while ( 1 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
    if ( (v6 & 0xC) == 8 )
      break;
    StorPortExtendedFunction(81LL, a1, 10000LL, v35);
    if ( ++v38 >= (unsigned int)v10 )
      goto LABEL_65;
  }
  if ( v38 >= (unsigned int)v10 )
LABEL_65:
    *(_DWORD *)(a1 + 24) |= 0x200000u;
  if ( (*(_DWORD *)(a1 + 56) & 0x2000) != 0 && (*(_BYTE *)(a1 + 12) & 2) != 0 && (v6 & 1) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) &= ~1u;
    _InterlockedOr(v41, 0);
    v39 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
    if ( !v5 )
      v5 = 3000;
    while ( (v39 & 1) != 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 176) + 40LL) == -1LL )
      {
        *(_DWORD *)(a1 + 24) |= 0x1000000u;
        return 1;
      }
      StorPortExtendedFunction(81LL, a1, 10000LL, v35);
      ++v3;
      v39 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
      if ( v3 >= v5 )
        return 1;
    }
  }
  return 1;
}
