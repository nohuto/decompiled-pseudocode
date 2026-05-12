/*
 * XREFs of sub_140019650 @ 0x140019650
 * Callers:
 *     sub_140018EE0 @ 0x140018EE0 (sub_140018EE0.c)
 * Callees:
 *     sub_1400066C0 @ 0x1400066C0 (sub_1400066C0.c)
 *     sub_14004E598 @ 0x14004E598 (sub_14004E598.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_140056A18 @ 0x140056A18 (sub_140056A18.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140068140 @ 0x140068140 (sub_140068140.c)
 *     sub_140094DE8 @ 0x140094DE8 (sub_140094DE8.c)
 *     sub_140095F04 @ 0x140095F04 (sub_140095F04.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_14017BF84 @ 0x14017BF84 (sub_14017BF84.c)
 *     sub_14017C2EC @ 0x14017C2EC (sub_14017C2EC.c)
 *     sub_14017C99C @ 0x14017C99C (sub_14017C99C.c)
 *     sub_14017CD1C @ 0x14017CD1C (sub_14017CD1C.c)
 *     sub_14017DB34 @ 0x14017DB34 (sub_14017DB34.c)
 *     sub_14017DF08 @ 0x14017DF08 (sub_14017DF08.c)
 *     sub_14017E2A0 @ 0x14017E2A0 (sub_14017E2A0.c)
 *     sub_14017E628 @ 0x14017E628 (sub_14017E628.c)
 *     sub_140181DD4 @ 0x140181DD4 (sub_140181DD4.c)
 *     sub_14018213C @ 0x14018213C (sub_14018213C.c)
 *     sub_1401AA69C @ 0x1401AA69C (sub_1401AA69C.c)
 *     sub_1401ACC34 @ 0x1401ACC34 (sub_1401ACC34.c)
 *     sub_1401AFC7C @ 0x1401AFC7C (sub_1401AFC7C.c)
 *     sub_1401B1388 @ 0x1401B1388 (sub_1401B1388.c)
 */

__int64 __fastcall sub_140019650(__int64 a1, __int64 a2)
{
  int v4; // edi
  int v5; // edx
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  int v8; // ecx
  int v9; // eax
  bool v10; // zf
  char *v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  void *v14; // rdx
  unsigned __int64 v15; // rdx
  char v16; // r15
  _BYTE *v17; // r9
  unsigned __int8 v18; // r10
  char v19; // si
  char v20; // r11
  char v21; // r12
  char *v22; // r11
  unsigned int *v23; // r13
  __int64 v24; // rax
  unsigned __int64 v25; // r14
  char v26; // cl
  char v27; // r8
  char *v28; // rax
  unsigned int v29; // eax
  char v30; // al
  char v31; // r12
  PDEVICE_OBJECT v32; // rcx
  unsigned int v33; // eax
  unsigned __int64 v34; // r8
  signed __int32 v35; // eax
  signed __int32 v36; // ett
  char v38; // [rsp+60h] [rbp-19h]
  char v39; // [rsp+61h] [rbp-18h]
  unsigned int v40; // [rsp+64h] [rbp-15h]
  int v41; // [rsp+68h] [rbp-11h]
  unsigned int v42; // [rsp+6Ch] [rbp-Dh]
  __int128 v43; // [rsp+70h] [rbp-9h] BYREF
  __int128 v44; // [rsp+80h] [rbp+7h] BYREF

  v44 = 0LL;
  LOBYTE(v4) = 0;
  v6 = sub_1400066C0(a1, a2, 1);
  v40 = v6;
  v7 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
  if ( byte_140168DAA )
  {
    IoGetActivityIdIrp(a2, &v44);
    if ( v7 > 0x16 || (v9 = 4718720, !_bittest(&v9, v7)) )
    {
      if ( (byte_1401694F2 & 0x20) != 0 )
        sub_140056A18(v8, v5, (unsigned int)&v44, a2, v7, 0, *(_QWORD *)(a1 + 8));
    }
  }
  if ( (v6 & 0x80000000) != 0 )
  {
    v10 = byte_140168DAA == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v6;
    if ( v10 )
      goto LABEL_74;
    v43 = 0LL;
    IoGetActivityIdIrp(a2, &v43);
    v12 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v12 )
    {
      case 0xE:
        if ( (byte_1401694F2 & 8) == 0 )
          goto LABEL_74;
        v14 = &unk_140148B18;
        break;
      case 0xF:
        if ( byte_1401694F1 >= 0 )
          goto LABEL_74;
        v15 = *(_QWORD *)(v12 + 8);
        v16 = 0;
        v17 = 0LL;
        v38 = 0;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v21 = 0;
        if ( *(_BYTE *)(v15 + 2) != 40 )
        {
          v26 = *(_BYTE *)(v15 + 72);
          v17 = *(_BYTE **)(v15 + 32);
          v18 = *(_BYTE *)(v15 + 11);
          v16 = *(_BYTE *)(v15 + 4);
          if ( !*(_BYTE *)(v15 + 2) )
            goto LABEL_50;
          goto LABEL_74;
        }
        v22 = 0LL;
        v39 = 0;
        if ( *(_DWORD *)(v15 + 20) )
          goto LABEL_74;
        LODWORD(v11) = 0;
        v41 = 0;
        v42 = *(_DWORD *)(v15 + 56);
        if ( !v42 )
          goto LABEL_47;
        v23 = (unsigned int *)(v15 + 120);
        while ( 1 )
        {
          v24 = *v23;
          if ( (unsigned int)v24 >= 0x80 )
          {
            v25 = *(unsigned int *)(v15 + 16);
            if ( (unsigned int)v24 < (unsigned int)v25 )
            {
              if ( *(_DWORD *)(v24 + v15) == 64 )
              {
                LODWORD(v11) = v24 + 40;
                if ( v24 + 40 <= v25 )
                {
                  if ( *(_BYTE *)(v24 + v15 + 10) )
                    v22 = (char *)(v24 + v15 + 24);
                  v17 = *(_BYTE **)(v24 + v15 + 16);
LABEL_45:
                  v18 = *(_BYTE *)(v24 + v15 + 9);
                  v16 = *(_BYTE *)(v24 + v15 + 8);
LABEL_46:
                  v6 = v40;
LABEL_47:
                  if ( v22 )
                  {
                    v26 = *v22;
                    v20 = 0;
LABEL_50:
                    LOBYTE(v11) = v26 - 8;
                    if ( ((unsigned __int8)v11 & 0x5D) == 0 )
                    {
                      v27 = *(_BYTE *)(v15 + 3);
                      if ( v27 == 1 || !v17 || !v18 )
                        goto LABEL_69;
                      LOBYTE(v15) = 0;
                      v11 = &v17[v18];
                      v28 = v17 + 8;
                      if ( (unsigned __int8)((*v17 & 0x7F) - 114) <= 1u )
                      {
                        if ( v28 <= v11 )
                        {
                          LOBYTE(v15) = 1;
                          v20 = v17[2];
                          v19 = v17[1] & 0xF;
                          v21 = v17[3];
                        }
                      }
                      else
                      {
                        if ( v28 <= v11 )
                        {
                          v19 = v17[2] & 0xF;
                          v29 = v18;
                          if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
                            v29 = (unsigned __int8)v17[7] + 8;
                          v11 = v17 + 13;
                          v15 = (unsigned __int64)&v17[v29];
                          if ( (unsigned __int64)(v17 + 13) > v15 )
                            v38 = 0;
                          else
                            v38 = v17[12];
                          if ( (unsigned __int64)(v17 + 14) <= v15 )
                            v21 = *v11;
                          LOBYTE(v15) = 1;
                        }
                        v20 = v38;
                      }
                      if ( (_BYTE)v15 )
                      {
                        LOBYTE(v4) = v20;
                        v30 = v21;
                      }
                      else
                      {
LABEL_69:
                        v19 = 0;
                        v30 = 0;
                      }
                      sub_140052E64(
                        (_DWORD)v11,
                        v15,
                        (unsigned int)&v43,
                        a2,
                        *(_DWORD *)(a2 + 48),
                        v27,
                        v16,
                        v19,
                        v4,
                        v30,
                        a2);
                    }
                  }
LABEL_74:
                  IofCompleteRequest((PIRP)a2, 0);
                  return v6;
                }
              }
              else
              {
                LODWORD(v11) = *(_DWORD *)(v24 + v15) - 65;
                if ( *(_DWORD *)(v24 + v15) == 65 )
                {
                  LODWORD(v11) = v24 + 56;
                  if ( v24 + 56 <= v25 )
                  {
                    v39 = 1;
                    if ( *(_BYTE *)(v24 + v15 + 10) )
                      v22 = (char *)(v24 + v15 + 24);
                    v16 = *(_BYTE *)(v24 + v15 + 8);
                    v17 = *(_BYTE **)(v24 + v15 + 16);
                    v18 = *(_BYTE *)(v24 + v15 + 9);
                  }
                }
                else if ( *(_DWORD *)(v24 + v15) == 66 )
                {
                  LODWORD(v11) = v24 + 40;
                  if ( v24 + 40 <= v25 )
                  {
                    if ( *(_DWORD *)(v24 + v15 + 12) )
                      v22 = (char *)(v24 + v15 + 32);
                    v17 = *(_BYTE **)(v24 + v15 + 24);
                    goto LABEL_45;
                  }
                }
              }
              if ( v39 )
                goto LABEL_46;
              LODWORD(v11) = v41;
            }
          }
          LODWORD(v11) = (_DWORD)v11 + 1;
          ++v23;
          v41 = (int)v11;
          if ( (unsigned int)v11 >= v42 )
            goto LABEL_46;
        }
      case 0x1B:
        if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
        {
          if ( (byte_1401694F2 & 0x40) != 0 )
          {
            v13 = *(int **)(a2 + 56);
            if ( v13 )
              v4 = *v13;
            sub_140056AB0((_DWORD)v11, v12, (unsigned int)&v43, a2, v4, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_74;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
          goto LABEL_74;
        v14 = &unk_140149FE8;
        break;
      default:
        goto LABEL_74;
    }
    sub_140052F3C(v11, v14, &v43, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_74;
  }
  v31 = 1;
  v32 = off_140168120;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 2) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8(off_140168120->AttachedDevice, 10LL, &unk_14014D880, a1, a2, v7);
  }
  if ( v7 > 0xC )
  {
    if ( v7 > 0x13 )
    {
      if ( v7 == 20 )
      {
        v33 = sub_1401AFC7C(a1, a2);
        goto LABEL_127;
      }
      if ( v7 == 21 )
        goto LABEL_110;
      if ( v7 != 22 )
      {
        if ( v7 == 23 )
        {
          v33 = sub_14018213C(a1, a2);
          goto LABEL_92;
        }
        if ( v7 == 25 )
        {
          v33 = sub_14017C2EC(a1, a2);
          goto LABEL_127;
        }
LABEL_110:
        v33 = sub_14017C99C(v32, a2);
        goto LABEL_127;
      }
      if ( byte_140168DAA && (byte_1401694F2 & 0x20) != 0 )
        sub_140056A18(
          *(_QWORD *)(a2 + 184),
          v5,
          (unsigned int)&v44,
          a2,
          v7,
          *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL),
          *(_QWORD *)(a1 + 8));
      v33 = sub_14004E598(a1, a2);
    }
    else
    {
      if ( v7 != 19 )
        goto LABEL_110;
      if ( byte_140168DAA && (byte_1401694F2 & 0x20) != 0 )
        sub_140056A18(
          *(_QWORD *)(a2 + 184),
          v5,
          (unsigned int)&v44,
          a2,
          19,
          *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL),
          *(_QWORD *)(a1 + 8));
      v33 = sub_14017DB34(a1, a2);
    }
  }
  else
  {
    if ( v7 == 12 )
    {
      v33 = sub_14017CD1C(a1, a2);
      goto LABEL_127;
    }
    if ( v7 <= 6 )
    {
      switch ( v7 )
      {
        case 6u:
          goto LABEL_90;
        case 0u:
          v33 = sub_1401B1388(a1, a2);
          goto LABEL_127;
        case 1u:
          v33 = sub_14017DF08(a1, a2);
          goto LABEL_127;
      }
      if ( v7 != 2 )
      {
        if ( v7 != 3 )
        {
          if ( v7 == 4 )
            v33 = sub_14017E628(a1, a2);
          else
            v33 = sub_14017E2A0(a1, a2);
          goto LABEL_127;
        }
LABEL_90:
        v33 = sub_14017BF84(a1, a2);
        goto LABEL_127;
      }
      v33 = sub_140095F04(a1, a2);
LABEL_92:
      v31 = 0;
      goto LABEL_127;
    }
    if ( v7 != 7 )
    {
      if ( v7 == 8 )
      {
        v33 = sub_140094DE8(a1, a2);
        goto LABEL_127;
      }
      if ( v7 == 9 )
      {
        v33 = sub_1401ACC34(a1, a2);
        goto LABEL_127;
      }
      if ( v7 - 10 <= 1 )
      {
        v33 = sub_140181DD4(v32, a2);
        goto LABEL_127;
      }
      goto LABEL_110;
    }
    if ( byte_140168DAA && (byte_1401694F2 & 0x20) != 0 )
      sub_140056A18(
        *(_QWORD *)(a2 + 184),
        v5,
        (unsigned int)&v44,
        a2,
        7,
        *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL),
        *(_QWORD *)(a1 + 8));
    v33 = sub_1401AA69C(a1, a2);
  }
LABEL_127:
  v6 = v33;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 2) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_140068140(off_140168120->AttachedDevice, 11LL, &unk_14014D880, a1, a2, v7, v33);
  }
  if ( v31 )
  {
    v34 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v35 = *(_DWORD *)(v34 + *(_QWORD *)(a1 + 40));
    while ( (v35 & 1) == 0 )
    {
      v36 = v35;
      v35 = _InterlockedCompareExchange((volatile signed __int32 *)(v34 + *(_QWORD *)(a1 + 40)), v35 - 2, v35);
      if ( v36 == v35 )
        return v6;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
  }
  return v6;
}
