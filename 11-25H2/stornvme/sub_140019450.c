/*
 * XREFs of sub_140019450 @ 0x140019450
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006540 @ 0x140006540 (sub_140006540.c)
 *     sub_14000D710 @ 0x14000D710 (sub_14000D710.c)
 *     sub_14000F840 @ 0x14000F840 (sub_14000F840.c)
 *     sub_140018CB0 @ 0x140018CB0 (sub_140018CB0.c)
 *     sub_140018EE8 @ 0x140018EE8 (sub_140018EE8.c)
 *     sub_140018F3C @ 0x140018F3C (sub_140018F3C.c)
 *     sub_140018F90 @ 0x140018F90 (sub_140018F90.c)
 *     sub_140018FE4 @ 0x140018FE4 (sub_140018FE4.c)
 *     sub_1400192CC @ 0x1400192CC (sub_1400192CC.c)
 *     sub_14001942C @ 0x14001942C (sub_14001942C.c)
 *     sub_14001A0DC @ 0x14001A0DC (sub_14001A0DC.c)
 *     sub_14001E95C @ 0x14001E95C (sub_14001E95C.c)
 *     sub_1400238C8 @ 0x1400238C8 (sub_1400238C8.c)
 *     sub_140023944 @ 0x140023944 (sub_140023944.c)
 *     sub_1400239EC @ 0x1400239EC (sub_1400239EC.c)
 *     sub_140023B24 @ 0x140023B24 (sub_140023B24.c)
 *     sub_14002EE0C @ 0x14002EE0C (sub_14002EE0C.c)
 *     sub_14002EE7C @ 0x14002EE7C (sub_14002EE7C.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140019450(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r14
  unsigned int v7; // esi
  int v8; // r12d
  __int64 v9; // r9
  char v10; // cl
  char v11; // cl
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rax
  char v18; // cl
  int v19; // eax
  __int64 v20; // r8
  unsigned int v21; // eax
  unsigned __int16 v22; // r9
  unsigned int v23; // edx
  unsigned __int16 v24; // r8
  int v25; // eax
  int v26; // eax
  bool v27; // zf
  int v28; // ecx
  int v29; // ecx
  __int64 v30; // r8
  __int64 *v31; // r12
  __int64 v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rdx
  char v36; // r8
  int v37; // edx
  __int64 v38; // r9
  int v39; // eax
  int v40; // eax
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+70h] [rbp-98h]
  int v48; // [rsp+78h] [rbp-90h]
  _BYTE v49[96]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v50; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v51; // [rsp+F8h] [rbp-10h]
  __int128 v52; // [rsp+108h] [rbp+0h]
  __int128 v53; // [rsp+118h] [rbp+10h]
  __int128 v54; // [rsp+128h] [rbp+20h]
  __int128 v55; // [rsp+138h] [rbp+30h] BYREF

  v55 = 0LL;
  v6 = *(_QWORD *)(a5 + 64);
  sub_140032C80(v49, 0LL, 88LL);
  v7 = 2;
  v8 = *(_DWORD *)(a1 + 24) & 2;
  v47 = 0LL;
  LOBYTE(v46) = 0;
  *(_QWORD *)((char *)&v55 + 1) = 0x101010101010101LL;
  *(_WORD *)((char *)&v55 + 9) = 257;
  BYTE12(v55) = 1;
  if ( !*(_BYTE *)(a5 + 197) )
    BYTE14(v55) = 1;
  StorPortExtendedFunction(103LL, a1, 16LL, &v55);
  if ( !v8 )
  {
    v10 = byte_1400421B8;
    qword_1400420B0[(unsigned __int8)byte_1400421B8] = a1;
    byte_1400421B8 = (v10 + 1) & 0xF;
  }
  v11 = *(_BYTE *)(a5 + 197);
  *(_BYTE *)(a1 + 20) = v11;
  if ( (*(_DWORD *)(a5 + 200) & 2) != 0 )
  {
    *(_DWORD *)(a1 + 4056) |= 0x1000u;
    return 4LL;
  }
  if ( v11 )
  {
    if ( !v6 )
    {
      *(_DWORD *)(a1 + 28) = 2;
      goto LABEL_85;
    }
    StorPortExtendedFunction(45LL, a1, v6, 152LL);
    *(_WORD *)(a1 + 4) = *(_WORD *)v6;
    *(_WORD *)(a1 + 6) = *(_WORD *)(v6 + 2);
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(v6 + 4);
    *(_QWORD *)(a1 + 168) = *(_QWORD *)(v6 + 8);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(v6 + 16);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(v6 + 32);
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(v6 + 48);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(v6 + 64);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(v6 + 80);
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(v6 + 96);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(v6 + 112);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(v6 + 128);
    *(_DWORD *)(a1 + 160) = *(_DWORD *)(v6 + 144);
    v13 = *(_DWORD *)(v6 + 148);
    *(_DWORD *)(a1 + 56) |= 4u;
    *(_DWORD *)(a1 + 216) = v13;
  }
  else
  {
    sub_140032C80(&v50, 0LL, 64LL);
    if ( (unsigned int)sub_140018FE4() )
    {
      *(_DWORD *)(a1 + 4340) = *(_DWORD *)(a5 + 4);
      *(_DWORD *)(a1 + 4344) = *(_DWORD *)(a5 + 100);
    }
    if ( (unsigned int)StorPortGetBusData(a1, 4LL, *(unsigned int *)(a5 + 4), *(unsigned int *)(a5 + 100), &v50, 64) != 64 )
    {
      *(_DWORD *)(a1 + 28) = 3;
      v7 = 3;
      goto LABEL_85;
    }
    *(_DWORD *)(a1 + 4) = v50;
    *(_BYTE *)(a1 + 8) = BYTE8(v50);
    if ( sub_14001942C(a1) )
    {
      v14 = *((_QWORD *)&v51 + 1);
      v15 = 4294963200LL;
      v16 = HIDWORD(v51);
    }
    else
    {
      v14 = v51;
      v15 = 4294950912LL;
      v16 = DWORD1(v51);
    }
    *(_QWORD *)(a1 + 168) = v15 & v14 | (v16 << 32);
  }
  v17 = (_QWORD *)sub_14002EE0C(a1, a5);
  *(_QWORD *)(a1 + 176) = v17;
  if ( v17 )
  {
    *(_QWORD *)(a1 + 192) = *v17;
    v18 = HIDWORD(*(_QWORD *)(a1 + 192)) & 0xF;
    *(_DWORD *)(a1 + 184) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 8LL);
    *(_DWORD *)(a1 + 200) = 4 << v18;
    if ( sub_14001942C(a1) )
      *(_BYTE *)(a1 + 195) = 1;
    *(_DWORD *)(a1 + 204) = 500 * *(unsigned __int8 *)(a1 + 195);
    if ( !*(_BYTE *)(a1 + 20) && !v8 )
      sub_14002EE7C(a1);
    v19 = 3;
    if ( *(_DWORD *)(a5 + 20) != 1 )
      v19 = 1;
    *(_DWORD *)(a1 + 16) = v19;
    if ( (unsigned int)StorPortExtendedFunction(97LL, a1, 1LL, &v46) )
      *(_DWORD *)(a1 + 4056) &= ~0x10000u;
    else
      *(_DWORD *)(a1 + 4056) = ((_BYTE)v46 != 0 ? 0x10000 : 0) | *(_DWORD *)(a1 + 4056) & 0xFFFEFFFF;
    v9 = 32LL;
    v21 = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 320) = 1048640;
    if ( *(_BYTE *)(a1 + 20) )
    {
      *(_WORD *)(a1 + 324) = 32;
      if ( v21 )
      {
        if ( v21 > 0x20 )
          LOWORD(v21) = 32;
      }
      else
      {
        LOWORD(v21) = 32;
      }
      *(_WORD *)(a1 + 326) = v21;
      *(_WORD *)(a1 + 328) = v21;
    }
    else
    {
      v22 = 256;
      v23 = 1024;
      *(_WORD *)(a1 + 324) = 256;
      v24 = -1;
      if ( v21 )
      {
        v23 = v21;
        if ( v21 >= 0xFFFF )
          v22 = -1;
        else
          v22 = *(_WORD *)(a1 + 36);
      }
      if ( v23 >= (unsigned __int64)(unsigned __int16)*(_DWORD *)(a1 + 192) + 1 )
        v23 = (unsigned __int16)*(_DWORD *)(a1 + 192) + 1;
      if ( v23 < 0xFFFF )
        v24 = v23;
      *(_WORD *)(a1 + 326) = v24;
      if ( v24 > v22 )
        v22 = v24;
      *(_WORD *)(a1 + 328) = v22;
      v25 = sub_140018F90();
      v9 = 32LL;
      byte_140042208 = v25 != 0;
    }
    *(_DWORD *)(a5 + 48) = 3;
    *(_BYTE *)(a5 + 81) = 1;
    *(_BYTE *)(a5 + 145) = 0;
    *(_DWORD *)(a5 + 148) = 1;
    if ( *(_DWORD *)(a5 + 20) == 1 )
    {
      *(_QWORD *)(a5 + 152) = sub_140008F00;
      v26 = 2;
    }
    else
    {
      v26 = 1;
    }
    *(_DWORD *)(a5 + 160) = v26;
    v27 = *(_BYTE *)(a5 + 144) == 0x80;
    *(_DWORD *)(a5 + 216) = 0;
    if ( v27 )
      *(_BYTE *)(a5 + 144) = 2;
    v28 = *(_DWORD *)(a5 + 220) | 2;
    *(_BYTE *)(a5 + 147) = 0;
    v29 = v28 | 0x29;
    v27 = byte_140042208 == 0;
    *(_DWORD *)(a5 + 220) = v29;
    if ( !v27 )
    {
      v29 |= 0x80u;
      *(_DWORD *)(a5 + 220) = v29;
    }
    if ( (*(_DWORD *)(a1 + 56) & 2) == 0 )
    {
      v29 |= 4u;
      *(_DWORD *)(a5 + 220) = v29;
    }
    if ( (*(_DWORD *)(a1 + 56) & 0x800000) == 0 )
      *(_DWORD *)(a5 + 220) = v29 | 0x80000000;
    *(_DWORD *)(a5 + 24) = 0x200000;
    if ( !v8 )
    {
      StorPortExtendedFunction(32LL, a1, a1 + 4264, 32LL);
      if ( !sub_140018CB0(a1, a5) )
        goto LABEL_85;
      if ( !*(_BYTE *)(a1 + 20) )
      {
        v30 = *(unsigned int *)(a1 + 112);
        if ( (_DWORD)v30 )
        {
          v31 = (__int64 *)(a1 + 3808);
          if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, v30, 1701672526LL) )
          {
            v32 = *v31;
            if ( *v31 )
            {
              v33 = *(_DWORD *)(a1 + 112);
              if ( (v33 & 3) != 0 )
              {
                if ( v33 )
                  sub_140032C80(v32, 0LL, *(unsigned int *)(a1 + 112));
              }
              else
              {
                v34 = v33 >> 2;
                if ( v34 )
                  sub_140032C80(v32, 0LL, 4LL * v34);
              }
            }
          }
        }
        sub_1400238C8(a1);
        sub_140023B24(a1);
        if ( (unsigned int)sub_140018F3C() )
          *(_DWORD *)(a1 + 4336) |= 2u;
        if ( (unsigned int)sub_140018EE8() )
          *(_DWORD *)(a1 + 4336) |= 4u;
      }
    }
    if ( !(unsigned int)sub_14000F840(a1, 1, v20, v9) )
    {
      LOBYTE(v35) = 1;
      if ( !(unsigned int)sub_14001E95C(a1, v35) )
      {
        v36 = *(_BYTE *)(*(_QWORD *)(a1 + 1560) + 77LL);
        if ( v36 )
          v37 = (1 << v36) * (1 << ((*(_BYTE *)(a1 + 198) & 0xF) + 12));
        else
          v37 = -1;
        *(_DWORD *)(a1 + 208) = v37;
        *(_DWORD *)(a5 + 24) = sub_140006540((_DWORD *)a1);
        *(_DWORD *)(a5 + 212) = 32;
        *(_DWORD *)(a5 + 204) = 32;
        *(_DWORD *)(a5 + 208) = 32;
        *(_DWORD *)(a5 + 28) = 513;
        *(_BYTE *)(a5 + 72) = 1;
        *(_BYTE *)(a5 + 97) = 1;
        *(_BYTE *)(a5 + 146) = -1;
        if ( !*(_BYTE *)(a1 + 20) )
        {
          v39 = *(_DWORD *)(v38 + 96);
          v50 = xmmword_140038B48;
          v51 = xmmword_140038B38;
          v52 = xmmword_140038B68;
          v53 = xmmword_140038B58;
          v40 = v39 & 2;
          if ( v40 )
            v54 = xmmword_140038B28;
          StorPortExtendedFunction(26LL, a1, (unsigned int)(v40 != 0) + 4, &v50);
        }
        *(_DWORD *)(a1 + 24) &= ~2u;
        return 1;
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 28) = 4;
    v7 = 3;
  }
LABEL_85:
  v41 = *(_QWORD *)(a1 + 4264);
  if ( v41 )
  {
    StorPortExtendedFunction(34LL, a1, v41, v9);
    *(_QWORD *)(a1 + 4264) = 0LL;
    *(_DWORD *)(a1 + 4272) = 0;
  }
  v42 = *(_QWORD *)(a1 + 3808);
  if ( v42 )
  {
    StorPortExtendedFunction(1LL, a1, v42, v9);
    *(_QWORD *)(a1 + 3808) = 0LL;
  }
  v43 = *(_QWORD *)(a1 + 360);
  if ( v43 )
  {
    StorPortExtendedFunction(1LL, a1, v43, v9);
    *(_QWORD *)(a1 + 360) = 0LL;
  }
  v44 = *(_QWORD *)(a1 + 368);
  if ( v44 )
  {
    StorPortExtendedFunction(1LL, a1, v44, v9);
    *(_QWORD *)(a1 + 368) = 0LL;
  }
  v45 = *(_QWORD *)(a1 + 376);
  if ( v45 )
  {
    StorPortExtendedFunction(1LL, a1, v45, v9);
    *(_QWORD *)(a1 + 376) = 0LL;
  }
  sub_140023944(a1);
  sub_1400239EC(a1);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    sub_14000D710(a1);
    sub_14001A0DC(a1);
    sub_1400192CC(a1, (__int64)v49);
    v47 = *(unsigned int *)(a1 + 24);
    HIDWORD(v47) = *(_DWORD *)(a1 + 28);
    v48 = -1056964606;
    StorPortNotification(4109LL, a1, 0LL);
  }
  return v7;
}
