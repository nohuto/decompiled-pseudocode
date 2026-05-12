/*
 * XREFs of sub_140043DEC @ 0x140043DEC
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_1400583CC @ 0x1400583CC (sub_1400583CC.c)
 *     sub_14006B358 @ 0x14006B358 (sub_14006B358.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_14017AF58 @ 0x14017AF58 (sub_14017AF58.c)
 *     sub_14017B0EC @ 0x14017B0EC (sub_14017B0EC.c)
 */

__int64 __fastcall sub_140043DEC(__int64 a1, char a2, unsigned int *a3)
{
  int v5; // ebp
  char v6; // r13
  char v7; // r10
  char v8; // r9
  char v9; // r11
  unsigned int v10; // edi
  _DWORD *v11; // r15
  unsigned int v12; // edx
  int v13; // r14d
  _DWORD *v14; // rcx
  _DWORD *v15; // rax
  _DWORD *v16; // r8
  _DWORD *v17; // rcx
  _DWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // dl
  char v22; // al
  unsigned int v23; // eax
  unsigned int v24; // ecx
  _WORD *v25; // rdx
  _QWORD *v26; // r13
  unsigned int v27; // r14d
  int v28; // ecx
  unsigned int v29; // r15d
  unsigned int v30; // eax
  unsigned int v31; // r15d
  __int64 v32; // rcx
  unsigned __int16 epi16; // r11
  unsigned __int64 v34; // rdx
  __int64 v35; // r9
  unsigned int v36; // edx
  unsigned int v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // eax
  unsigned int v40; // ecx
  char v42; // [rsp+50h] [rbp-A8h]
  char v43; // [rsp+51h] [rbp-A7h]
  char v44; // [rsp+52h] [rbp-A6h]
  char v45; // [rsp+53h] [rbp-A5h]
  _QWORD *v46; // [rsp+58h] [rbp-A0h]
  int v47; // [rsp+60h] [rbp-98h] BYREF
  _BYTE Dst[148]; // [rsp+64h] [rbp-94h] BYREF
  char v50; // [rsp+110h] [rbp+18h]
  char v51; // [rsp+118h] [rbp+20h]

  v44 = 0;
  v50 = 0;
  v5 = 0;
  v45 = 0;
  v6 = 0;
  v51 = 0;
  v42 = 0;
  v7 = 0;
  v43 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( !a3 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x10) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_140055930(off_140168120->AttachedDevice, 22LL, &unk_14014A2D8);
    }
    v10 = -1056964602;
    goto LABEL_118;
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x10) == 0 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x10) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_140055930(off_140168120->AttachedDevice, 23LL, &unk_14014A2D8);
    }
    goto LABEL_12;
  }
  v11 = a3 + 1;
  if ( (byte_1401694F0 & 0x10) != 0 )
  {
    sub_1400583CC(a1, (unsigned int)&unk_140149D40, (_DWORD)a3, *a3, *v11, a3[2], a3[3], a3[4], a3[5], a3[6]);
    v7 = 0;
    v8 = 0;
    v9 = 0;
  }
  v12 = *a3;
  v13 = 3;
  v14 = v11;
  if ( *a3 && *v11 >= 0xCu )
  {
    v6 = 1;
    v14 = a3 + 1;
  }
  v15 = v11;
  if ( v12 >= 2 && *v11 >= 0x18u )
  {
    v7 = 1;
    v44 = 1;
    v13 = 7;
    v15 = v14;
  }
  v16 = v15;
  if ( v12 >= 3 && *v15 >= 0x28u )
  {
    v8 = 1;
    v50 = 1;
    v13 |= 0x18u;
    v16 = a3 + 1;
  }
  v17 = v15;
  if ( v12 >= 4 && *v15 >= 0x28u )
  {
    v45 = 1;
    v13 |= 0x20u;
    v17 = v16;
  }
  v18 = v17;
  if ( v12 >= 5 && *v17 >= 0x28u )
  {
    if ( !KeGetCurrentIrql() )
    {
      memset_0(Dst, 0, 0x54uLL);
      v47 = 1;
      if ( *(_BYTE *)(a1 + 4370) )
      {
        if ( !(unsigned __int8)sub_14017B0EC(a1 + 880, v19) )
          sub_14017AF58(v20, *(_QWORD *)(a1 + 32), a1 + 384);
        if ( (int)sub_14006B358(a1 + 880, &v47) >= 0 && (Dst[12] & 2) != 0 )
          v13 |= 0x40u;
      }
    }
    v7 = v44;
    v18 = a3 + 1;
    v8 = v50;
    v9 = 1;
    v51 = 1;
  }
  if ( *a3 < 6 || *v18 < 0x28u )
  {
    v21 = 0;
  }
  else
  {
    v21 = 1;
    v13 |= 0x80u;
    v42 = 1;
  }
  if ( *a3 < 7 || *v18 < 0x28u )
  {
    v22 = 0;
  }
  else
  {
    v22 = 1;
    v13 |= 0x100u;
    v43 = 1;
  }
  if ( !v6 && !v7 && !v8 && !v45 && !v9 && !v21 && !v22 )
  {
    if ( !a2 )
    {
      v10 = -1056964602;
      goto LABEL_118;
    }
    *a3 = 1;
    a3[1] = 12;
    goto LABEL_56;
  }
  if ( a2 )
  {
LABEL_56:
    a3[2] = v13;
    v5 = v13;
    goto LABEL_118;
  }
  v23 = a3[2];
  if ( (~v13 & v23) != 0 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x10) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_140055930(off_140168120->AttachedDevice, 24LL, &unk_14014A2D8);
    }
    v10 = -1056964607;
    goto LABEL_118;
  }
  if ( (v23 & 2) != 0 )
  {
    v5 = 2;
    *(_DWORD *)(a1 + 4664) = -a3[3];
  }
  v24 = a3[2];
  if ( (v24 & 1) == 0 )
  {
    if ( v7 && (v24 & 4) != 0 || (v24 & 0x20) != 0 )
      goto LABEL_12;
    goto LABEL_97;
  }
  v25 = (_WORD *)(a1 + 4660);
  v5 |= 1u;
  *(_WORD *)(a1 + 4660) |= 1u;
  if ( *(_BYTE *)(a1 + 4369) != 1
    || (v46 = (_QWORD *)(a1 + 4680), !*(_QWORD *)(a1 + 4680))
    || (v26 = (_QWORD *)(a1 + 4360), !*(_QWORD *)(a1 + 4360)) )
  {
LABEL_88:
    v24 = a3[2];
LABEL_97:
    if ( v50 && (v24 & 8) != 0 )
    {
      v5 |= 8u;
      a3[6] = *(_DWORD *)(a1 + 4656);
    }
    else
    {
      v36 = v24;
      if ( !v50 )
        goto LABEL_104;
    }
    v36 = v24;
    if ( (v24 & 0x10) == 0 )
    {
LABEL_104:
      v37 = v36;
      if ( v45 && (v36 & 0x20) != 0 )
      {
        v5 |= 0x20u;
        *(_BYTE *)(a1 + 4371) |= 2u;
        v37 = a3[2];
      }
      v38 = v37;
      if ( v9 && (v37 & 0x40) != 0 )
      {
        v5 |= 0x40u;
        *(_BYTE *)(a1 + 4371) |= 4u;
        v38 = a3[2];
      }
      v39 = v38;
      if ( v42 && (v38 & 0x80u) != 0 )
      {
        v5 |= 0x80u;
        *(_BYTE *)(a1 + 4371) |= 8u;
        v39 = a3[2];
      }
      v40 = v39;
      if ( v43 && (v39 & 0x100) != 0 )
      {
        *(_BYTE *)(a1 + 4371) |= 0x10u;
        v40 = a3[2];
        v5 |= 0x100u;
      }
      if ( (byte_1401694F0 & 0x10) != 0 )
        sub_1400583CC(v40, (unsigned int)&unk_14014A580, (_DWORD)v16, *a3, a3[1], v40, a3[3], a3[4], a3[5], a3[6]);
      goto LABEL_118;
    }
    if ( (v5 & 1) != 0 )
    {
      v5 |= 0x10u;
      *(_BYTE *)(a1 + 4371) |= 1u;
      v36 = a3[2];
      goto LABEL_104;
    }
LABEL_12:
    v10 = -1056964607;
    goto LABEL_118;
  }
  v27 = 0;
  v28 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 4352) + 4LL);
  v29 = v28 - 1;
  if ( !v7 || (v46 = (_QWORD *)(a1 + 4680), (a3[2] & 4) == 0) )
  {
LABEL_74:
    *v25 = (4 * v28) | 3;
    v31 = v29 + 1;
    *(_WORD *)(a1 + 4662) = KeQueryActiveGroupCount();
    if ( v27 < v31 )
    {
      v32 = 16LL * v27;
      do
      {
        epi16 = _mm_extract_epi16(*(__m128i *)(v32 + *v26), 4);
        v34 = *(_QWORD *)(v32 + *v26);
        if ( epi16 != 0xFFFF )
        {
          if ( v50 && (a3[2] & 0xC) == 0xC )
          {
            v5 |= 8u;
            *(_WORD *)(*((_QWORD *)a3 + 4) + v32 + 8) = epi16;
            *(_QWORD *)(v32 + *((_QWORD *)a3 + 4)) = v34;
          }
          if ( v27 < 0xFF )
          {
            for ( LODWORD(v16) = 0; v34; v34 >>= 1 )
            {
              if ( (v34 & 1) != 0 )
              {
                v35 = (unsigned int)v16 + (epi16 << 6);
                if ( *(_BYTE *)(v35 + *v46) == 0xFF )
                  *(_BYTE *)(v35 + *v46) = v27;
              }
              LODWORD(v16) = (_DWORD)v16 + 1;
            }
          }
        }
        ++v27;
        v32 += 16LL;
      }
      while ( v27 < v31 );
    }
    v9 = v51;
    goto LABEL_88;
  }
  v27 = a3[4];
  v30 = a3[5];
  if ( v27 <= v30 && v30 <= v29 )
  {
    v25 = (_WORD *)(a1 + 4660);
    v26 = (_QWORD *)(a1 + 4360);
    v29 = a3[5];
    LOWORD(v28) = v30 - v27 + 1;
    v5 |= 4u;
    v46 = (_QWORD *)(a1 + 4680);
    goto LABEL_74;
  }
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 0x10) != 0
    && BYTE1(off_140168120->Timer) >= 2u )
  {
    sub_140055930(off_140168120->AttachedDevice, 25LL, &unk_14014A2D8);
  }
  v10 = -1056964607;
LABEL_118:
  if ( v5 != a3[2] )
  {
    if ( (v5 & 2) != 0 )
      *(_DWORD *)(a1 + 4664) = 0;
    if ( (v5 & 1) != 0 )
    {
      *(_BYTE *)(a1 + 4371) &= ~1u;
      *(_WORD *)(a1 + 4660) = 0;
    }
    if ( (v5 & 0x20) != 0 )
      *(_BYTE *)(a1 + 4371) &= ~2u;
  }
  return v10;
}
