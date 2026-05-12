/*
 * XREFs of sub_1401AC4FC @ 0x1401AC4FC
 * Callers:
 *     sub_1401AC450 @ 0x1401AC450 (sub_1401AC450.c)
 *     sub_1401B0BC0 @ 0x1401B0BC0 (sub_1401B0BC0.c)
 * Callees:
 *     sub_140015A14 @ 0x140015A14 (sub_140015A14.c)
 *     sub_140016754 @ 0x140016754 (sub_140016754.c)
 *     sub_140017A20 @ 0x140017A20 (sub_140017A20.c)
 *     sub_140017C40 @ 0x140017C40 (sub_140017C40.c)
 *     sub_140017D90 @ 0x140017D90 (sub_140017D90.c)
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_14001F6B0 @ 0x14001F6B0 (sub_14001F6B0.c)
 *     sub_14001F93C @ 0x14001F93C (sub_14001F93C.c)
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_1400212C0 @ 0x1400212C0 (sub_1400212C0.c)
 *     sub_14002285C @ 0x14002285C (sub_14002285C.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     sub_140039168 @ 0x140039168 (sub_140039168.c)
 *     sub_140039200 @ 0x140039200 (sub_140039200.c)
 *     sub_14003FC20 @ 0x14003FC20 (sub_14003FC20.c)
 *     sub_140067F78 @ 0x140067F78 (sub_140067F78.c)
 *     sub_140067FD4 @ 0x140067FD4 (sub_140067FD4.c)
 *     sub_1400681AC @ 0x1400681AC (sub_1400681AC.c)
 */

__int64 __fastcall sub_1401AC4FC(__int64 a1, char a2, __int64 a3)
{
  char *v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // r15
  char *v7; // r13
  char v8; // bl
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rbp
  ULONG v13; // r14d
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  _DWORD *v21; // rcx
  int v22; // r14d
  char *v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  bool v27; // zf
  __int64 v28; // rax
  __int64 v29; // rcx
  char v30; // al
  char v31; // al
  _QWORD *v32; // r12
  int v33; // eax
  _DWORD *v34; // rax
  int v35; // ecx
  __int64 v37; // r8
  __int64 v38; // rax
  char v39; // al
  __int64 v40; // rax
  PDEVICE_OBJECT v41; // rcx
  int v42; // eax
  unsigned __int16 v43; // dx
  int v44; // r8d
  int v45; // r9d
  _BYTE *v46; // rcx
  char v47; // al
  __int64 v48; // r14
  volatile signed __int32 *v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rcx
  char v52; // dl
  __int64 v53; // r12
  __int64 v54; // rcx
  __int64 v55; // [rsp+20h] [rbp-88h]
  __int64 v56; // [rsp+28h] [rbp-80h]
  __int64 v57; // [rsp+30h] [rbp-78h]
  _DWORD *v58; // [rsp+38h] [rbp-70h]
  _DWORD *v59; // [rsp+40h] [rbp-68h]
  char *v60; // [rsp+48h] [rbp-60h]
  __int64 v61; // [rsp+50h] [rbp-58h]
  ULONG v65; // [rsp+C8h] [rbp+20h]

  v3 = 0LL;
  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0LL;
  v61 = 0LL;
  v7 = 0LL;
  v57 = 0LL;
  v8 = 0;
  v60 = 0LL;
  v9 = *(_DWORD *)v5;
  if ( *(_DWORD *)v5 == 1094997074 )
  {
    v12 = 0LL;
    v58 = (_DWORD *)v5;
    v11 = v5;
  }
  else if ( v9 == 1431193940 )
  {
    v11 = *(_QWORD *)(v5 + 24);
    v12 = v5;
    v58 = (_DWORD *)v11;
  }
  else
  {
    v58 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    if ( v9 == 1314275652 )
      v10 = v5;
    if ( v10 )
    {
      v22 = -1073741637;
      v34 = (_DWORD *)(a3 + 16);
      goto LABEL_64;
    }
  }
  v13 = *(_DWORD *)(a3 + 16);
  v65 = v13;
  v59 = (_DWORD *)(a3 + 16);
  if ( a2 == 9 && *(_DWORD *)(a3 + 16) <= **(_DWORD **)(a3 + 24) )
    v13 = **(_DWORD **)(a3 + 24);
  if ( *(_DWORD *)v11 == 1314275652 )
  {
    v14 = v11 + 176;
    v15 = v11 + 274;
  }
  else if ( *(_DWORD *)v11 == 1094997074 )
  {
    v14 = v11 + 384;
    v15 = v11 + 482;
  }
  else
  {
    v14 = 0LL;
    v15 = 98LL;
  }
  v57 = v14;
  v3 = (char *)sub_140015A14(*(_QWORD *)(v11 + 8), 0x17u, *(_BYTE *)(v14 + 98), 0);
  if ( !v3 )
    goto LABEL_88;
  v17 = 316LL;
  if ( *(_DWORD *)v11 != 1314275652 )
    v17 = 524LL;
  v18 = sub_14002285C(((*(_DWORD *)(v17 + v11) + 7) & 0xFFFFFFF8) + 1184, v16, (_QWORD *)v11);
  v61 = v18;
  if ( !v18 )
  {
LABEL_88:
    v34 = v59;
    v22 = -1073741801;
    goto LABEL_64;
  }
  v6 = v18 + 48;
  sub_140017C40(v18 + 48, v19, 0, 0LL);
  *(_QWORD *)(v6 + 176) = *((_QWORD *)v3 + 6);
  *(_QWORD *)(v6 + 168) = v3;
  v20 = sub_140039200(v6, *(void **)(a3 + 24), v13);
  v21 = v59;
  v22 = v20;
  if ( v20 >= 0 )
  {
    if ( *(_BYTE *)(v57 + 98) == 1 )
    {
      v7 = &v3[*((unsigned int *)v3 + 13)];
      *((_DWORD *)v3 + 5) = 23;
      v37 = *((unsigned int *)v3 + 30);
      *((_QWORD *)v3 + 12) = v6;
      v23 = &v3[v37];
      v38 = *(_QWORD *)(a3 + 24);
      *((_DWORD *)v3 + 15) = v65;
      *((_QWORD *)v3 + 8) = v38;
      *((_DWORD *)v3 + 6) = 320;
      *((_DWORD *)v3 + 10) = 10;
      *(_DWORD *)v23 = 96;
      *((_DWORD *)v23 + 1) = 16;
      v23[8] = a2;
      *((_QWORD *)v23 + 2) = *(_QWORD *)(a3 + 8);
      v24 = *((_QWORD *)v3 + 8);
      v60 = v3;
    }
    else
    {
      v23 = 0LL;
      *((_QWORD *)v3 + 6) = v6;
      v3[2] = 23;
      v24 = *(_QWORD *)(a3 + 24);
      *((_DWORD *)v3 + 4) = v65;
      v3[4] = a2;
      *((_QWORD *)v3 + 3) = v24;
      *(_WORD *)v3 = 88;
      *((_QWORD *)v3 + 4) = *(_QWORD *)(a3 + 8);
      *((_DWORD *)v3 + 3) = 320;
      *((_DWORD *)v3 + 5) = 10;
    }
    *(_QWORD *)(v6 + 184) = v24;
    v25 = v61 + 1184;
    v26 = *v58;
    if ( v3[2] == 40 )
    {
      v27 = v26 == 1314275652;
      v28 = 316LL;
      if ( !v27 )
        v28 = 524LL;
      if ( ((*(_DWORD *)(v28 + v11) + 7) & 0xFFFFFFF8) != 0 )
        *((_QWORD *)v3 + 13) = v25;
    }
    else
    {
      v27 = v26 == 1314275652;
      v40 = 316LL;
      if ( !v27 )
        v40 = 524LL;
      if ( ((*(_DWORD *)(v40 + v11) + 7) & 0xFFFFFFF8) != 0 )
        *((_QWORD *)v3 + 7) = v25;
    }
    v29 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v29 == 1431193940 )
    {
      v30 = *(_BYTE *)(v29 + 104);
      if ( *(_BYTE *)v15 == 1 )
      {
        v7[8] = v30;
        v7[9] = *(_BYTE *)(v29 + 105);
        v31 = *(_BYTE *)(v29 + 106);
LABEL_25:
        v7[10] = v31;
        goto LABEL_26;
      }
      v3[5] = v30;
      v3[6] = *(_BYTE *)(v29 + 105);
      v39 = *(_BYTE *)(v29 + 106);
    }
    else
    {
      v46 = *(_BYTE **)(v11 + 144);
      if ( *(_BYTE *)v15 == 1 )
        v23[9] = 1;
      else
        v3[9] = 1;
      v47 = *(_BYTE *)v15;
      if ( v46 == (_BYTE *)(v11 + 144) )
      {
        if ( v47 == 1 )
        {
          *((_WORD *)v7 + 4) = 0;
          v7[10] = 0;
        }
        else
        {
          *(_WORD *)(v3 + 5) = 0;
          v3[7] = 0;
        }
LABEL_26:
        KeInitializeEvent((PRKEVENT)(v6 + 664), NotificationEvent, 0);
        sub_14003FC20(v6, (__int64)sub_140038660);
        if ( v3[2] == 40 )
        {
          if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 )
          {
            if ( (HIDWORD(off_140168120->Timer) & 0x40) != 0 && BYTE1(off_140168120->Timer) >= 4u )
              sub_1400681AC(
                (__int64)off_140168120->AttachedDevice,
                0xBu,
                (__int64)&unk_14014E978,
                v6,
                v60,
                *((_QWORD *)v60 + 13));
            v41 = off_140168120;
            if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
              && (HIDWORD(off_140168120->Timer) & 0x40) != 0
              && BYTE1(off_140168120->Timer) >= 4u )
            {
              v42 = (unsigned __int8)v7[10];
              v43 = 12;
              v44 = (unsigned __int8)v7[9];
              v45 = (unsigned __int8)v7[8];
              goto LABEL_112;
            }
          }
        }
        else if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 )
        {
          if ( (HIDWORD(off_140168120->Timer) & 0x40) != 0 && BYTE1(off_140168120->Timer) >= 4u )
            sub_1400681AC(
              (__int64)off_140168120->AttachedDevice,
              0xDu,
              (__int64)&unk_14014E978,
              v6,
              v3,
              *((_QWORD *)v3 + 7));
          v41 = off_140168120;
          if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
            && (HIDWORD(off_140168120->Timer) & 0x40) != 0
            && BYTE1(off_140168120->Timer) >= 4u )
          {
            v42 = (unsigned __int8)v3[7];
            v43 = 14;
            v44 = (unsigned __int8)v3[6];
            v45 = (unsigned __int8)v3[5];
LABEL_112:
            LODWORD(v56) = v42;
            LODWORD(v55) = v44;
            sub_140067F78((__int64)v41->AttachedDevice, v43, (__int64)&unk_14014E978, v45, v55, v56);
          }
        }
        if ( v12 )
        {
          v48 = *(_QWORD *)(v12 + 24);
          if ( *(_QWORD *)(v48 + 4960) )
          {
            sub_1400212C0(*(_QWORD *)(v12 + 24), 0LL, 1LL);
            v8 = 2;
          }
          if ( sub_140021280(v12) )
          {
            if ( (*(_BYTE *)(v48 + 108) & 1) != 0 )
            {
              _InterlockedAdd64((volatile signed __int64 *)(v12 + 2168), 1uLL);
              if ( (*(_BYTE *)(v48 + 108) & 2) != 0 )
                _InterlockedAdd64((volatile signed __int64 *)(v12 + 2176), 1uLL);
            }
            v49 = *(volatile signed __int32 **)(v12 + 1872);
            if ( (v49[37] & 1) != 0 )
            {
              _InterlockedAdd(v49 + 36, 1u);
              v49 = *(volatile signed __int32 **)(v12 + 1872);
            }
            v50 = 5LL;
            v51 = *(_QWORD *)v49;
            if ( !*(_DWORD *)(v12 + 1036) )
              v50 = 1LL;
            PoFxActivateComponent(v51, 0LL, v50);
            v8 |= 1u;
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v12 + 1864));
          }
          v32 = v58 + 1240;
        }
        else
        {
          v32 = (_QWORD *)(v11 + 4960);
          if ( *(_QWORD *)(v11 + 4960) )
            sub_1400212C0(v11, 0LL, 1LL);
        }
        if ( *(_BYTE *)(v11 + 4370) )
          v33 = sub_140017D90(v11, (_QWORD *)v6);
        else
          v33 = sub_1400184D0(v11, v6);
        v22 = v33;
        if ( v33 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v6 + 664), Executive, 0, 0, 0LL);
          v22 = sub_1400229C8(v3[3]);
        }
        if ( v12 )
        {
          if ( (*(_BYTE *)(v6 + 17) & 2) != 0 )
          {
            sub_14001F6B0(v12, *(_DWORD *)(v6 + 748));
            *(_BYTE *)(v6 + 17) &= ~2u;
          }
          v53 = *(_QWORD *)(v12 + 24);
          if ( (v8 & 1) != 0 && sub_140021280(v12) )
          {
            PoFxIdleComponent(**(_QWORD **)(v12 + 1872), 0LL, 0LL);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v12 + 1864));
          }
          if ( (unsigned __int8)v8 < 2u || !*(_QWORD *)(v53 + 4960) )
            goto LABEL_37;
          v54 = v53;
        }
        else
        {
          if ( !*v32 )
          {
LABEL_37:
            v21 = v59;
            if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
              && (HIDWORD(off_140168120->Timer) & 0x40) != 0
              && BYTE1(off_140168120->Timer) >= 4u )
            {
              LODWORD(v55) = v22;
              sub_140067FD4((__int64)off_140168120->AttachedDevice, 0xFu, (__int64)&unk_14014E978, v6, v55);
              v21 = v59;
            }
            goto LABEL_39;
          }
          if ( (*(_BYTE *)(v6 + 17) & 1) != 0 )
          {
            sub_14001F93C(v11, *(unsigned int *)(v6 + 748));
            *(_BYTE *)(v6 + 17) &= ~1u;
          }
          v54 = v11;
        }
        sub_140021110(v54, 0LL, 0LL);
        goto LABEL_37;
      }
      v52 = v46[40];
      if ( v47 == 1 )
      {
        v7[8] = v52;
        v7[9] = v46[41];
        v31 = v46[42];
        goto LABEL_25;
      }
      v3[5] = v52;
      v3[6] = v46[41];
      v39 = v46[42];
    }
    v3[7] = v39;
    goto LABEL_26;
  }
LABEL_39:
  v34 = v21;
  if ( v22 < 0 )
  {
LABEL_64:
    v35 = 0;
    goto LABEL_42;
  }
  if ( v3[2] == 40 )
    v35 = *((_DWORD *)v60 + 15);
  else
    v35 = *((_DWORD *)v3 + 4);
LABEL_42:
  *v34 = v35;
  if ( v61 )
  {
    sub_140017A20(v6, 0);
    sub_140016754(v11, v61);
  }
  if ( v3 )
  {
    if ( *(_BYTE *)(v57 + 98) == 1 )
    {
      *((_QWORD *)v3 + 10) = 0LL;
      *((_QWORD *)v3 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)v3 + 6) = 0LL;
      *((_QWORD *)v3 + 7) = 0LL;
    }
    sub_140039168(v3);
  }
  return (unsigned int)v22;
}
