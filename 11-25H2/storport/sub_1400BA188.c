/*
 * XREFs of sub_1400BA188 @ 0x1400BA188
 * Callers:
 *     sub_14003B440 @ 0x14003B440 (sub_14003B440.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14009F87C @ 0x14009F87C (sub_14009F87C.c)
 *     sub_1400AD8A0 @ 0x1400AD8A0 (sub_1400AD8A0.c)
 *     sub_1400B251C @ 0x1400B251C (sub_1400B251C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void __fastcall sub_1400BA188(__int64 a1)
{
  __int64 v1; // r14
  void *v2; // r13
  _BYTE *v3; // rax
  int v4; // eax
  int v5; // eax
  __int64 i; // rdi
  __int64 v7; // r9
  _BYTE *v8; // rax
  _BYTE *v9; // rbx
  char v10; // si
  int v11; // eax
  __int64 v12; // rdi
  unsigned int v13; // r12d
  char v14; // al
  char v15; // al
  int v16; // edx
  unsigned int v17; // r15d
  __int16 v18; // r9
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  PVOID *v21; // rbx
  __int64 v22; // rdi
  int v23; // [rsp+78h] [rbp-190h]
  int v24; // [rsp+188h] [rbp-80h] BYREF
  int v25; // [rsp+18Ch] [rbp-7Ch]
  __int64 v26; // [rsp+190h] [rbp-78h]
  _DWORD v27[17]; // [rsp+198h] [rbp-70h] BYREF
  int v28; // [rsp+1DCh] [rbp-2Ch]
  int v29; // [rsp+1E0h] [rbp-28h]
  int v30; // [rsp+1E4h] [rbp-24h]
  int v31; // [rsp+1E8h] [rbp-20h]
  unsigned __int64 v32; // [rsp+1F0h] [rbp-18h]
  unsigned __int64 v33; // [rsp+1F8h] [rbp-10h]
  unsigned __int64 v34; // [rsp+200h] [rbp-8h]
  unsigned __int64 v35; // [rsp+208h] [rbp+0h]
  unsigned __int64 v36; // [rsp+210h] [rbp+8h]
  unsigned __int64 v37; // [rsp+218h] [rbp+10h]
  __int16 v38; // [rsp+220h] [rbp+18h]
  char v39; // [rsp+222h] [rbp+1Ah]
  char v40; // [rsp+223h] [rbp+1Bh]
  unsigned __int32 v41; // [rsp+224h] [rbp+1Ch]
  _BYTE *v42; // [rsp+228h] [rbp+20h]
  int v43; // [rsp+230h] [rbp+28h]
  _BYTE *v44; // [rsp+238h] [rbp+30h]
  int v45; // [rsp+240h] [rbp+38h]
  _BYTE *v46; // [rsp+248h] [rbp+40h]
  int v47; // [rsp+250h] [rbp+48h]
  _BYTE *v48; // [rsp+258h] [rbp+50h]
  int v49; // [rsp+260h] [rbp+58h]
  _BYTE *v50; // [rsp+268h] [rbp+60h]
  int v51; // [rsp+270h] [rbp+68h]
  _BYTE *v52; // [rsp+278h] [rbp+70h]
  int v53; // [rsp+280h] [rbp+78h]
  _BYTE *v54; // [rsp+288h] [rbp+80h]
  int v55; // [rsp+290h] [rbp+88h]
  _BYTE *v56; // [rsp+298h] [rbp+90h]
  int v57; // [rsp+2A0h] [rbp+98h]
  _QWORD Dst[8]; // [rsp+2A8h] [rbp+A0h] BYREF
  _DWORD v59[2]; // [rsp+2E8h] [rbp+E0h]
  _DWORD v60[2]; // [rsp+2F0h] [rbp+E8h]

  v26 = a1;
  v1 = a1;
  v60[0] = 218956546;
  v60[1] = 353439246;
  v24 = 256;
  v59[0] = 0x1000000;
  v59[1] = 256;
  v2 = 0LL;
  memset_0(Dst, 0, sizeof(Dst));
  memset_0(v27, 0, 0x110uLL);
  if ( (*(_DWORD *)(v1 + 2120) & 0x10) == 0 )
  {
    v3 = (_BYTE *)sub_1400143E0(256LL, 256LL, 1700028754LL, *(_QWORD *)(v1 + 8));
    v2 = v3;
    if ( v3 )
    {
      v4 = sub_14009F87C(v1, 0LL, 0, 0, (char *)&v24, v3);
      if ( (int)(v4 + 0x80000000) < 0 || v4 == -2147483643 )
      {
        for ( i = 0LL; ; i = (unsigned int)(v25 + 1) )
        {
          v25 = i;
          if ( (unsigned int)i >= 8 )
            break;
          v7 = *(_QWORD *)(v1 + 8);
          v24 = 4096;
          v8 = (_BYTE *)sub_1400143E0(256LL, 4096LL, 1700028754LL, v7);
          Dst[i] = v8;
          v9 = v8;
          if ( !v8 )
            goto LABEL_86;
          v10 = *((_BYTE *)v59 + i);
          v11 = sub_14009F87C(v1, 0LL, *((_BYTE *)v60 + i), v10, (char *)&v24, v8);
          if ( v11 >= 0 || v11 == -2147483643 )
          {
            v12 = (__int64)(v9 + 4);
            v13 = v24 - 4;
            switch ( *v9 & 0x3F )
            {
              case 2:
                v42 = v9;
                v43 = v24;
                break;
              case 3:
                v44 = v9;
                v45 = v24;
                break;
              case 13:
                v15 = v9[1];
                if ( v15 )
                {
                  if ( v15 == 1 )
                  {
                    v48 = v9;
                    v49 = v24;
                  }
                }
                else
                {
                  v46 = v9;
                  v47 = v24;
                }
                break;
              case 14:
                v14 = v9[1];
                if ( v14 )
                {
                  if ( v14 == 1 )
                  {
                    v52 = v9;
                    v53 = v24;
                  }
                }
                else
                {
                  v50 = v9;
                  v51 = v24;
                }
                break;
              case 17:
                v54 = v9;
                v55 = v24;
                break;
              case 21:
                v56 = v9;
                v57 = v24;
                break;
            }
            if ( v13 >= 4 )
            {
              do
              {
                v16 = *(unsigned __int8 *)(v12 + 3);
                v17 = v16 + 4;
                if ( v13 < v16 + 4 )
                  break;
                v18 = __ROR2__(*(_WORD *)v12, 8);
                switch ( *v9 & 0x3F )
                {
                  case 2:
                    v20 = 0LL;
                    switch ( (_BYTE)v16 )
                    {
                      case 2:
                        v20 = (unsigned __int16)__ROR2__(*(_WORD *)(v12 + 4), 8);
                        break;
                      case 4:
                        v20 = _byteswap_ulong(*(_DWORD *)(v12 + 4));
                        break;
                      case 8:
                        v20 = _byteswap_uint64(*(_QWORD *)(v12 + 4));
                        break;
                    }
                    switch ( v18 )
                    {
                      case 2:
                        v32 = v20;
                        break;
                      case 3:
                        v33 = v20;
                        break;
                      case 6:
                        v34 = v20;
                        break;
                    }
                    break;
                  case 3:
                    v19 = 0LL;
                    switch ( (_BYTE)v16 )
                    {
                      case 2:
                        v19 = (unsigned __int16)__ROR2__(*(_WORD *)(v12 + 4), 8);
                        break;
                      case 4:
                        v19 = _byteswap_ulong(*(_DWORD *)(v12 + 4));
                        break;
                      case 8:
                        v19 = _byteswap_uint64(*(_QWORD *)(v12 + 4));
                        break;
                    }
                    switch ( v18 )
                    {
                      case 2:
                        v35 = v19;
                        break;
                      case 3:
                        v36 = v19;
                        break;
                      case 6:
                        v37 = v19;
                        break;
                    }
                    break;
                  case 13:
                    if ( !v9[1] && (_BYTE)v16 == 2 )
                    {
                      if ( v18 )
                      {
                        if ( v18 == 1 )
                          BYTE1(v27[0]) = *(_BYTE *)(v12 + 5);
                      }
                      else
                      {
                        LOBYTE(v27[0]) = *(_BYTE *)(v12 + 5);
                      }
                    }
                    break;
                  case 14:
                    if ( v9[1] )
                    {
                      if ( v10 == 1 && !v18 && (_BYTE)v16 == 2 )
                        v38 = __ROR2__(*(_WORD *)(v12 + 4), 8);
                    }
                    else
                    {
                      sub_1400B251C(v12, v18, v27);
                    }
                    break;
                  case 17:
                    if ( (_BYTE)v16 == 4 && v18 == 1 )
                      v39 = *(_BYTE *)(v12 + 7);
                    break;
                  default:
                    if ( (*v9 & 0x3F) == 0x15 && (_BYTE)v16 == 12 && !v18 )
                    {
                      v40 = *(_BYTE *)(v12 + 9);
                      v41 = _byteswap_ulong(*(_DWORD *)(v12 + 4));
                    }
                    break;
                }
                v13 -= v17;
                v12 += v17;
              }
              while ( v13 >= 4 );
              v1 = v26;
            }
          }
        }
        if ( (byte_1401694F4 & 0x40) != 0 )
          sub_1400AD8A0(
            v1 + 242,
            v1 + 177,
            v1 + 168,
            *(_DWORD *)(*(_QWORD *)(v1 + 24) + 56LL),
            *(_BYTE *)(v1 + 104),
            *(_BYTE *)(v1 + 105),
            *(_BYTE *)(v1 + 106),
            v1 + 2104,
            *(_QWORD *)(v1 + 24) + 5064LL,
            *(const wchar_t **)(*(_QWORD *)(v1 + 24) + 4720LL),
            (const char *)(v1 + 168),
            (const char *)(v1 + 177),
            (const char *)(v1 + 242),
            *(_BYTE *)(v1 + 506) & 1,
            v23,
            v27[0],
            SBYTE1(v27[0]),
            (const wchar_t *)v27 + 1,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41,
            v43,
            (__int64)v42,
            v45,
            (__int64)v44,
            v47,
            (__int64)v46,
            v49,
            (__int64)v48,
            v51,
            (__int64)v50,
            v53,
            (__int64)v52,
            v55,
            (__int64)v54,
            v57,
            (__int64)v56);
      }
      else if ( v4 != -1073741670 )
      {
        v5 = *(_DWORD *)(v1 + 2120);
        if ( (v5 & 1) == 0 )
          *(_DWORD *)(v1 + 2120) = v5 | 0x10;
      }
    }
  }
LABEL_86:
  v21 = (PVOID *)Dst;
  v22 = 8LL;
  do
  {
    if ( *v21 )
      ExFreePoolWithTag(*v21, 0x65546152u);
    ++v21;
    --v22;
  }
  while ( v22 );
  if ( v2 )
    ExFreePoolWithTag(v2, 0x65546152u);
}
