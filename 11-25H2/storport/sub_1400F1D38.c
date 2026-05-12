/*
 * XREFs of sub_1400F1D38 @ 0x1400F1D38
 * Callers:
 *     sub_1400CD79C @ 0x1400CD79C (sub_1400CD79C.c)
 *     sub_1400EA590 @ 0x1400EA590 (sub_1400EA590.c)
 *     sub_1400F045C @ 0x1400F045C (sub_1400F045C.c)
 *     sub_1400F2220 @ 0x1400F2220 (sub_1400F2220.c)
 *     sub_140130818 @ 0x140130818 (sub_140130818.c)
 * Callees:
 *     sub_14002CDD0 @ 0x14002CDD0 (sub_14002CDD0.c)
 *     sub_14008F0E0 @ 0x14008F0E0 (sub_14008F0E0.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400BCA54 @ 0x1400BCA54 (sub_1400BCA54.c)
 *     sub_1400DF484 @ 0x1400DF484 (sub_1400DF484.c)
 *     sub_1400DFC54 @ 0x1400DFC54 (sub_1400DFC54.c)
 *     sub_1400F0DFC @ 0x1400F0DFC (sub_1400F0DFC.c)
 *     sub_1400F24C8 @ 0x1400F24C8 (sub_1400F24C8.c)
 *     sub_140130F80 @ 0x140130F80 (sub_140130F80.c)
 */

__int64 __fastcall sub_1400F1D38(__int64 a1, char a2, int a3)
{
  unsigned int v3; // kr00_4
  char v4; // r13
  int v5; // esi
  unsigned int v6; // r12d
  int v7; // edi
  __int64 v8; // rbx
  int v9; // r15d
  bool v10; // zf
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // r15d
  unsigned int v17; // eax
  __int64 v18; // r13
  int v19; // eax
  int v20; // r15d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rcx
  signed __int32 v29[8]; // [rsp+0h] [rbp-B9h] BYREF
  int *v30; // [rsp+20h] [rbp-99h]
  int v31[4]; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v32; // [rsp+B0h] [rbp-9h]
  __int128 v33[5]; // [rsp+C0h] [rbp+7h] BYREF
  int v34; // [rsp+120h] [rbp+67h] BYREF
  char v35; // [rsp+128h] [rbp+6Fh]
  int v36; // [rsp+130h] [rbp+77h]
  unsigned int v37; // [rsp+138h] [rbp+7Fh]

  v36 = a3;
  v35 = a2;
  v37 = 0;
  v3 = *(_DWORD *)(a1 + 1204);
  v32 = 0LL;
  v34 = 0;
  v31[0] = 0;
  v4 = *(_BYTE *)(a1 + 1728);
  v5 = 0;
  v6 = v3 / 0xA;
  v7 = 0;
  v8 = MEMORY[0xFFFFF78000000014];
  v9 = a3;
  v10 = (*(_BYTE *)(a1 + 136) & 2) == 0;
  v35 = v4;
  if ( v10 )
  {
    if ( v4 == 1 )
    {
      sub_1400F0DFC(a1, 0x14u, 4LL, 0);
      v30 = &v34;
      sub_1400F0DFC(a1, 0x1Cu, 4LL, 0);
      LOBYTE(v14) = v34;
    }
    else
    {
      v12 = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 20LL);
      v13 = *(_QWORD *)(a1 + 920);
      v37 = v12;
      v14 = *(_DWORD *)(v13 + 28);
      v34 = v14;
    }
    v15 = v37;
    if ( (v37 & 1) == 0 || (v14 & 1) != 0 )
      goto LABEL_25;
    v16 = 0;
    if ( v6 )
    {
      while ( 1 )
      {
        if ( (v14 & 1) != 0 )
        {
LABEL_19:
          v15 = v37;
          goto LABEL_20;
        }
        if ( sub_1400BCA54(a1) )
          break;
        if ( sub_14008F0E0() )
        {
LABEL_23:
          v7 = 4;
          goto LABEL_39;
        }
        sub_14002CDD0(0x2710u);
        if ( v4 == 1 )
        {
          v30 = &v34;
          sub_1400F0DFC(a1, 0x1Cu, 4LL, 0);
          LOBYTE(v14) = v34;
        }
        else
        {
          v14 = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 28LL);
          v34 = v14;
        }
        if ( ++v16 >= v6 )
          goto LABEL_19;
      }
LABEL_24:
      v7 = 1;
      goto LABEL_39;
    }
LABEL_20:
    if ( (v14 & 1) != 0 || v16 != v6 )
    {
LABEL_25:
      v17 = v15 & 0xFFFFFFFE;
      v37 = v17;
      if ( v4 == 1 )
      {
        sub_1400F24C8(a1, 20LL, 4LL);
        v30 = &v34;
        v18 = a1 + 920;
        sub_1400F0DFC(a1, 0x1Cu, 4LL, 0);
        LOBYTE(v19) = v34;
      }
      else
      {
        v18 = a1 + 920;
        *(_DWORD *)(*(_QWORD *)(a1 + 920) + 20LL) = v17;
        _InterlockedOr(v29, 0);
        v19 = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 28LL);
        v34 = v19;
      }
      v20 = 0;
      if ( v6 )
      {
        while ( (v19 & 1) != 0 )
        {
          if ( sub_1400BCA54(a1) )
            goto LABEL_24;
          if ( sub_14008F0E0() )
            goto LABEL_23;
          sub_14002CDD0(0x2710u);
          if ( v35 == 1 )
          {
            v30 = &v34;
            sub_1400F0DFC(a1, 0x1Cu, 4LL, 0);
            LOBYTE(v19) = v34;
          }
          else
          {
            v19 = *(_DWORD *)(*(_QWORD *)v18 + 28LL);
            v34 = v19;
          }
          if ( ++v20 >= v6 )
            goto LABEL_36;
        }
      }
      else
      {
LABEL_36:
        if ( (v19 & 1) != 0 && v20 == v6 )
          v7 = 3;
      }
    }
    else
    {
      v7 = 2;
    }
LABEL_39:
    v9 = v36;
    goto LABEL_40;
  }
  v5 = sub_1400DF484(a1, 0);
  if ( v5 >= 0 )
  {
    v5 = sub_1400DFC54(a1, v31);
    if ( v5 < 0 )
      v7 = 6;
  }
  else
  {
    v7 = 5;
  }
LABEL_40:
  v21 = *(_QWORD *)(a1 + 1272);
  if ( v21 )
  {
    v22 = *(_QWORD *)(v21 + 32);
    if ( v22 )
    {
      v23 = *(_QWORD *)(v22 + 16);
      if ( v23 )
      {
        v24 = *(unsigned __int8 *)(v23 + 62);
        if ( v7 )
          ++*(_DWORD *)(v23 + 12);
        else
          ++*(_DWORD *)(v23 + 8);
        v25 = 2 * v24;
        *(_QWORD *)(*(_QWORD *)(v23 + 64) + 8 * v25) = v8;
        *(_DWORD *)(*(_QWORD *)(v23 + 64) + 8 * v25 + 8) = v9;
        *(_DWORD *)(*(_QWORD *)(v23 + 64) + 8 * v25 + 12) = v7;
        if ( ++*(_BYTE *)(v23 + 62) >= *(_BYTE *)(v23 + 63) )
          *(_BYTE *)(v23 + 62) = 1;
      }
    }
  }
  v26 = *(_QWORD *)(a1 + 136);
  if ( (v26 & 2) == 0 )
  {
    if ( v7 )
    {
      switch ( v7 )
      {
        case 1:
          v5 = -1073741810;
          break;
        case 2:
        case 3:
          v5 = -2147483631;
          break;
        case 4:
          v5 = -1073741595;
          break;
        default:
          v5 = -1073741823;
          break;
      }
      goto LABEL_55;
    }
    v5 = 0;
LABEL_62:
    sub_1400A870C(
      a1,
      v9 != 2,
      4,
      (__int64)L"Controller reset succeeded",
      L"ResetReason",
      v9,
      L"Flags",
      v26,
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    *(_QWORD *)&v32 = v32 | 0x200;
    v28 = *(_QWORD *)(a1 + 128);
    v33[0] = v32;
    sub_140130F80(v28, v33, 0LL, 0LL);
    return (unsigned int)v5;
  }
  if ( v5 >= 0 )
    goto LABEL_62;
LABEL_55:
  sub_1400A870C(
    a1,
    1,
    2,
    (__int64)L"Controller reset failed",
    L"ResetReason",
    v9,
    L"FailureReason",
    v7,
    L"Status",
    v5,
    L"Flags",
    v26,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0);
  return (unsigned int)v5;
}
