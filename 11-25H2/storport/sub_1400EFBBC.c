/*
 * XREFs of sub_1400EFBBC @ 0x1400EFBBC
 * Callers:
 *     sub_1400E7EF0 @ 0x1400E7EF0 (sub_1400E7EF0.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400C880C @ 0x1400C880C (sub_1400C880C.c)
 *     sub_1400C8C34 @ 0x1400C8C34 (sub_1400C8C34.c)
 *     sub_1400DCA20 @ 0x1400DCA20 (sub_1400DCA20.c)
 *     sub_140127AAC @ 0x140127AAC (sub_140127AAC.c)
 *     sub_14012B2E0 @ 0x14012B2E0 (sub_14012B2E0.c)
 *     sub_14012B860 @ 0x14012B860 (sub_14012B860.c)
 *     sub_14012B890 @ 0x14012B890 (sub_14012B890.c)
 *     sub_14012BC20 @ 0x14012BC20 (sub_14012BC20.c)
 *     sub_14012F9F4 @ 0x14012F9F4 (sub_14012F9F4.c)
 */

__int64 __fastcall sub_1400EFBBC(__int64 SystemArgument2)
{
  unsigned int *v2; // r15
  int v3; // esi
  unsigned int v4; // r12d
  int v5; // r13d
  __int64 v6; // rbp
  int v8; // ecx
  __int64 v9; // rbp
  __int64 v10; // rdx
  int v11; // esi
  __int64 v12; // rax
  unsigned int v13; // r9d
  __int64 v14; // rax
  int v15; // eax
  int v16; // r9d
  __int64 v17; // r10
  char v18; // r11
  __int64 v19; // rax
  char *v20; // rbx
  void *v21; // r13
  __int64 v22; // r13
  unsigned int v23; // eax
  int v24; // ecx
  int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // r9
  __int64 v29; // rcx
  unsigned int v30; // r9d
  __int64 v31; // rdx
  __int64 v32; // rax
  int v33; // r11d
  int v34; // r10d
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rsi
  unsigned __int8 v38; // cl
  __int64 v39; // rax
  __int64 v40; // r9
  int v41; // ecx
  PVOID v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  unsigned int v45; // r8d
  unsigned int v46; // r10d
  _DWORD *v47; // r9
  __int64 v48; // rax
  __int64 v49; // r9
  __int64 v50; // r11
  int v51; // r10d
  __int64 *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rbx
  int v55; // [rsp+28h] [rbp-D0h]
  char v56; // [rsp+A0h] [rbp-58h]
  __int64 v57; // [rsp+A8h] [rbp-50h]
  PVOID P; // [rsp+B0h] [rbp-48h]
  unsigned int v59; // [rsp+108h] [rbp+10h] BYREF
  int v60; // [rsp+110h] [rbp+18h]
  __int64 v61; // [rsp+118h] [rbp+20h]

  v2 = 0LL;
  LOBYTE(v59) = 0;
  v3 = 0;
  v57 = 0LL;
  v4 = 0;
  P = 0LL;
  v5 = 0;
  v56 = 0;
  v60 = 0;
  if ( byte_1401687E9 )
    return 0LL;
  v6 = *(_QWORD *)(SystemArgument2 + 128);
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 400) + 184LL) & 0x40000000) == 0 )
    return 3221225659LL;
  v8 = *(_DWORD *)(*(_QWORD *)(SystemArgument2 + 1048) + 48LL);
  if ( v8 == 4 )
    return 0LL;
  v9 = *(_QWORD *)(v6 + 160);
  if ( v8 == 3 )
  {
    sub_1400C880C((PVOID)SystemArgument2);
    if ( (*(_DWORD *)(v9 + 176) & 0x800) == 0 )
    {
      sub_1400C8C34((PVOID)SystemArgument2, 1u);
      sub_1400C880C((PVOID)SystemArgument2);
    }
    return 0LL;
  }
  if ( *(_BYTE *)v9 == 1 )
    return 0LL;
  sub_1400C880C((PVOID)SystemArgument2);
  if ( (*(_DWORD *)(v9 + 176) & 0x800) != 0 )
  {
    sub_1400C8C34((PVOID)SystemArgument2, 0);
    sub_1400C880C((PVOID)SystemArgument2);
  }
  if ( (unsigned __int8)sub_14012BC20(SystemArgument2) )
  {
    v12 = *(_QWORD *)(SystemArgument2 + 592);
    LOBYTE(v13) = 0;
    LODWORD(v61) = 0;
    if ( *(unsigned __int8 *)(v12 + 263) != -1 )
    {
      do
      {
        LOBYTE(v10) = v13;
        v14 = sub_14012B2E0(SystemArgument2, v10);
        v15 = sub_14012B860(v14);
        v18 = *(_BYTE *)(v17 + 3);
        v60 = v15;
        if ( (v18 & 2) != 0 )
        {
          ++v5;
        }
        else
        {
          ++v4;
          v3 = v16;
        }
        sub_1400A870C(
          SystemArgument2,
          1,
          4,
          (__int64)L"NVMe Power State",
          L"Max Power (uW)",
          v60,
          L"Non-Operational",
          (v18 & 2) != 0LL,
          L"Entry Latency (us)",
          *(_DWORD *)(v17 + 4),
          L"Exit Latency (us)",
          *(_DWORD *)(v17 + 8),
          L"Relative Read Throughput",
          *(_BYTE *)(v17 + 12) & 0x1F,
          L"Relative Read Latency",
          *(_BYTE *)(v17 + 13) & 0x1F,
          L"Relative Write Throughput",
          *(_BYTE *)(v17 + 14) & 0x1F,
          L"Relative Write Latency",
          *(_BYTE *)(v17 + 15) & 0x1F);
        v19 = *(_QWORD *)(SystemArgument2 + 592);
        v13 = v61 + 1;
        LODWORD(v61) = v13;
      }
      while ( v13 < (unsigned int)*(unsigned __int8 *)(v19 + 263) + 1 );
      v60 = v5;
      v56 = v3;
    }
    v61 = sub_1400143E0(
            64LL,
            (unsigned int)(32 * (v5 + 3)),
            1330667858LL,
            *(_QWORD *)(*(_QWORD *)(SystemArgument2 + 128) + 8LL));
    v20 = (char *)v61;
    if ( v61 )
    {
      if ( !v5
        || (v57 = sub_1400143E0(72LL, 64LL, 1414095186LL, *(_QWORD *)(*(_QWORD *)(SystemArgument2 + 128) + 8LL)),
            (v21 = (void *)v57) != 0LL)
        && (P = (PVOID)sub_1400143E0(72LL, 64LL, 1414095186LL, *(_QWORD *)(*(_QWORD *)(SystemArgument2 + 128) + 8LL))) != 0LL )
      {
        *((_DWORD *)v20 + 3) |= 0x40u;
        *(_DWORD *)v20 = 3;
        *((_DWORD *)v20 + 1) = 24;
        *((_DWORD *)v20 + 2) = 1;
        *((_DWORD *)v20 + 6) = 2;
        v22 = 40LL;
        *((_DWORD *)v20 + 7) = 40;
        *(_OWORD *)(v20 + 40) = xmmword_140153150;
        if ( *(_DWORD *)(*(_QWORD *)(SystemArgument2 + 1048) + 48LL) == 5 )
        {
          *((_DWORD *)v20 + 8) = 1;
        }
        else
        {
          v23 = v60 + 1;
          *((_DWORD *)v20 + 8) = v60 + 1;
          if ( v23 > 1 )
            *((_DWORD *)v20 + 3) |= 0x100u;
        }
        if ( *((_DWORD *)v20 + 8) > 8u )
          *((_DWORD *)v20 + 8) = 8;
        v24 = *((_DWORD *)v20 + 3) | 0x10;
        *((_DWORD *)v20 + 4) = -1;
        *((_DWORD *)v20 + 3) = v24;
        v25 = *(_DWORD *)(*(_QWORD *)(SystemArgument2 + 1048) + 48LL);
        if ( v25 == 2 )
        {
          *((_DWORD *)v20 + 3) = v24 | 4;
          *(_DWORD *)(v9 + 176) |= 2u;
        }
        else if ( v25 == 5 )
        {
          *((_DWORD *)v20 + 3) = v24 | 4;
          *((_DWORD *)v20 + 4) = *(_DWORD *)(*(_QWORD *)(SystemArgument2 + 1048) + 60LL);
        }
        v26 = *(_DWORD *)(*(_QWORD *)(SystemArgument2 + 1048) + 48LL);
        if ( v26 <= 1 || v26 - 3 <= 1 )
          *((_DWORD *)v20 + 3) |= 2u;
        *((_DWORD *)v20 + 3) |= 8u;
        v27 = *((_DWORD *)v20 + 8);
        v28 = 1LL;
        *((_QWORD *)v20 + 9) = 0LL;
        *((_QWORD *)v20 + 10) = 0LL;
        *((_DWORD *)v20 + 16) = 1;
        *((_DWORD *)v20 + 17) = 32;
        *((_DWORD *)v20 + 15) = v27 - 1;
        *((_DWORD *)v20 + 22) = -1;
        if ( v27 > 1 )
        {
          do
          {
            v29 = sub_14012B2E0(SystemArgument2, (unsigned int)(v3 + v28));
            v31 = 32LL * v30;
            v32 = v30;
            v28 = v30 + 1;
            *(_DWORD *)&v20[v31 + 64] = 1;
            *(_DWORD *)&v20[v31 + 68] = v33;
            *(_DWORD *)&v20[32 * v32 + 88] = v34;
            v35 = (unsigned int)(*(_DWORD *)(v29 + 4) + *(_DWORD *)(v29 + 8));
            *(_QWORD *)&v20[v31 + 80] = 0LL;
            *(_QWORD *)&v20[v31 + 72] = 10 * v35;
          }
          while ( (unsigned int)v28 < *((_DWORD *)v20 + 8) );
        }
        v11 = sub_140127AAC(*(_QWORD *)(SystemArgument2 + 128), v20, &v59, v28);
        if ( v11 >= 0 )
        {
          v37 = 0LL;
          v38 = 8 * v59;
          *(_BYTE *)(*(_QWORD *)(v9 + 8) + 64LL) = 1;
          v39 = *(_QWORD *)(v9 + 8);
          *(_DWORD *)(v9 + 176) ^= ((unsigned __int8)*(_DWORD *)(v9 + 176) ^ v38) & 8;
          *(_DWORD *)(v39 + 16) = (unsigned __int8)v20[32];
          *(_DWORD *)(*(_QWORD *)(v9 + 8) + 68LL) = 0;
          v40 = *(_QWORD *)(v9 + 8);
          *(_WORD *)(v9 + 181) = 0;
          *(_BYTE *)(v9 + 1) = v56;
          *(_DWORD *)(v9 + 200) = 200;
          *(_DWORD *)(v9 + 196) = 15;
          *(_DWORD *)(v9 + 208) = 2000;
          *(_DWORD *)(v9 + 204) = 100;
          *(_DWORD *)(v9 + 188) = 15;
          if ( *(_DWORD *)(v40 + 16) > 1u )
          {
            LOBYTE(v36) = *(_BYTE *)(v40 + 16) + v56 - 1;
            if ( sub_14012B2E0(SystemArgument2, v36) )
              *(_DWORD *)(v9 + 4) = 64;
          }
          v41 = *(_DWORD *)(*(_QWORD *)(SystemArgument2 + 1048) + 68LL);
          if ( v41 != -1 )
            *(_DWORD *)(v9 + 188) = v41;
          if ( v60 )
          {
            *(_QWORD *)(v40 + 120) = v57;
            v57 = 0LL;
            KeInitializeTimer(*(PKTIMER *)(*(_QWORD *)(v9 + 8) + 120LL));
            v42 = P;
            P = 0LL;
            *(_QWORD *)(*(_QWORD *)(v9 + 8) + 112LL) = v42;
            KeInitializeDpc(*(PRKDPC *)(*(_QWORD *)(v9 + 8) + 112LL), sub_14012BD30, *(PVOID *)(SystemArgument2 + 128));
            PoFxSetComponentLatency(**(_QWORD **)(v9 + 8), 0LL, 0LL);
            PoFxSetComponentResidency(**(_QWORD **)(v9 + 8), 0LL, 0LL);
          }
          v43 = sub_1400143E0(64LL, 24 * v4 + 40, 1330667858LL, *(_QWORD *)(*(_QWORD *)(SystemArgument2 + 128) + 8LL));
          v2 = (unsigned int *)v43;
          if ( v43 )
          {
            *(_DWORD *)v43 = 1;
            LOBYTE(v46) = 0;
            *(_DWORD *)(v43 + 4) = 40;
            *(_QWORD *)(v43 + 16) = 3LL;
            *(_DWORD *)(v43 + 24) = v4;
            *(_DWORD *)(v43 + 28) = 40;
            if ( v4 )
            {
              do
              {
                LOBYTE(v44) = v46;
                v47 = (unsigned int *)((char *)&v2[v37] + v2[7]);
                *v47 = 1;
                v47[1] = 24;
                v48 = sub_14012B2E0(SystemArgument2, v44);
                v45 = sub_14012B860(v48);
                *(_QWORD *)(v49 + 16) = v50;
                v46 = v51 + 1;
                v37 += 6LL;
                v44 = v45 / 0x3E8;
                *(_QWORD *)(v49 + 8) = v44;
              }
              while ( v46 < v4 );
            }
            v52 = *(__int64 **)(v9 + 8);
            v53 = *(_QWORD *)(SystemArgument2 + 128);
            v59 = 1;
            v11 = sub_14012F9F4(*(_QWORD *)(v53 + 8), v44, v45, (unsigned int)&v59, (__int64)v2, v55, *v52);
            if ( v11 >= 0 )
            {
              if ( sub_1400DCA20(*(_QWORD *)(v9 + 8), v59, (__int64)v2) )
              {
                v54 = 3LL;
                do
                {
                  *(_QWORD *)(*(_QWORD *)(v9 + 8) + v22) = -1LL;
                  v22 += 8LL;
                  --v54;
                }
                while ( v54 );
                v20 = (char *)v61;
              }
              *(_DWORD *)(v9 + 176) |= 4u;
              *(_QWORD *)(v9 + 48) = v2;
              *(_BYTE *)(v9 + 181) = v4;
              *(_BYTE *)(v9 + 182) = 0;
              sub_14012B890(SystemArgument2);
            }
          }
          else
          {
            v11 = -1073741670;
          }
        }
        v21 = (void *)v57;
      }
      else
      {
        v11 = -1073741670;
      }
      ExFreePoolWithTag(v20, 0x4F506152u);
      if ( P )
        ExFreePoolWithTag(P, 0x4F506152u);
      if ( v21 )
        ExFreePoolWithTag(v21, 0x4F506152u);
      if ( v11 < 0 && v2 )
        ExFreePoolWithTag(v2, 0x4F506152u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741436;
  }
  return (unsigned int)v11;
}
