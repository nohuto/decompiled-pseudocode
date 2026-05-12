/*
 * XREFs of sub_1401251CC @ 0x1401251CC
 * Callers:
 *     sub_140088700 @ 0x140088700 (sub_140088700.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140088878 @ 0x140088878 (sub_140088878.c)
 *     sub_140088944 @ 0x140088944 (sub_140088944.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400BC8A4 @ 0x1400BC8A4 (sub_1400BC8A4.c)
 *     sub_1400BD6D8 @ 0x1400BD6D8 (sub_1400BD6D8.c)
 *     sub_1400BDDB0 @ 0x1400BDDB0 (sub_1400BDDB0.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122670 @ 0x140122670 (sub_140122670.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     sub_140123D24 @ 0x140123D24 (sub_140123D24.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1401251CC(union _SLIST_HEADER *SystemArgument2, __int64 a2, _QWORD *a3, _BYTE *a4)
{
  ULONGLONG Alignment; // rdi
  unsigned __int64 *v5; // r12
  ULONGLONG v6; // rax
  __int64 v9; // rsi
  int v10; // r14d
  unsigned __int64 v11; // rbx
  __int64 result; // rax
  unsigned int *v13; // r11
  char v14; // r9
  __int64 v15; // rcx
  ULONGLONG v16; // rdx
  const wchar_t *v17; // r9
  int v18; // r10d
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  unsigned int v22; // edi
  ULONGLONG v23; // rdx
  bool v24; // al
  char v25; // cl
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  unsigned __int8 v30; // al
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  bool v34; // zf
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  __int64 v38; // rcx
  const wchar_t *v39; // r9
  __int64 v40; // rbx
  __int64 v41; // rax
  unsigned int v42; // r12d
  PHYSICAL_ADDRESS *v43; // rsi
  __int64 v44; // r8
  int v45; // ebx
  unsigned int v46; // r13d
  PVOID v47; // rdi
  unsigned int v48; // r8d
  LONGLONG QuadPart; // rcx
  _DWORD *v50; // rbx
  __int64 v51; // r13
  _DWORD *v52; // r11
  _DWORD *v53; // r8
  int v54; // edx
  int v55; // r8d
  __int64 v56; // rdx
  _DWORD *v57; // rax
  _DWORD *v58; // rcx
  const void *Region; // rdx
  int v60; // eax
  unsigned __int64 v61; // rsi
  _DWORD *v62; // rcx
  unsigned __int64 v63; // rax
  int v64; // edx
  char v65; // [rsp+A8h] [rbp-80h] BYREF
  unsigned __int8 v66; // [rsp+A9h] [rbp-7Fh]
  ULONGLONG v67; // [rsp+B0h] [rbp-78h]
  unsigned int v68; // [rsp+B8h] [rbp-70h]
  unsigned __int64 v69; // [rsp+C0h] [rbp-68h]
  void *Dst[2]; // [rsp+C8h] [rbp-60h] BYREF
  PVOID P; // [rsp+D8h] [rbp-50h]
  __int64 v72; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v73; // [rsp+E8h] [rbp-40h]
  _DWORD *v74; // [rsp+F0h] [rbp-38h]
  const void *v75; // [rsp+F8h] [rbp-30h]
  bool v76; // [rsp+158h] [rbp+30h]
  unsigned __int64 v77; // [rsp+158h] [rbp+30h]

  Alignment = SystemArgument2[37].Alignment;
  v5 = a3 + 7;
  v6 = SystemArgument2[8].Alignment;
  *a4 = 1;
  v72 = 0LL;
  v74 = 0LL;
  *(_OWORD *)Dst = 0LL;
  v68 = *(_DWORD *)(v6 + 200);
  v65 = 0;
  v9 = 0LL;
  v73 = 0LL;
  v10 = 0;
  v67 = Alignment;
  v11 = 0LL;
  v76 = 1;
  P = 0LL;
  v69 = 0LL;
  a3[7] = 0LL;
  result = sub_140088878((__int64)a3, 0, &v72, &v65);
  if ( (int)result >= 0 )
  {
    v13 = (unsigned int *)v72;
    v14 = v65;
    v15 = *(unsigned __int8 *)(v72 + 8);
    v66 = *(_BYTE *)(v72 + 8);
    if ( v65 )
    {
      if ( (unsigned __int8)v15 < 0xC0u )
      {
        sub_1400A870C(
          (__int64)SystemArgument2,
          0,
          3,
          (__int64)L"NVMeDataTypeLogPageEx protocol query request for non-vendor-specific log page identifier",
          L"IRP Status",
          13,
          0LL,
          0,
          0LL,
          0,
          0LL,
          0,
          0LL,
          0,
          0LL,
          0,
          0LL,
          0,
          0LL,
          0);
        return 3221225485LL;
      }
      v9 = v72;
      v74 = (_DWORD *)v72;
    }
    v16 = SystemArgument2[77].Alignment;
    v75 = (const void *)v16;
    if ( v16 )
    {
      if ( (*(_DWORD *)(v16 + 4 * v15) & 1) == 0 )
      {
        v17 = L"Invalid log page identifier in protocol query request";
LABEL_13:
        sub_1400A870C(
          (__int64)SystemArgument2,
          0,
          3,
          (__int64)v17,
          L"IRP Status",
          2,
          0LL,
          0,
          0LL,
          0,
          0LL,
          0,
          0LL,
          0,
          0LL,
          0,
          0LL,
          0,
          0LL,
          0);
        return 3221225474LL;
      }
      LOBYTE(v15) = v66;
    }
    if ( v65 && (*(_DWORD *)(v9 + 36) & 0x800000) != 0 )
    {
      v17 = L"Protocol query request contains unsupported OT for log page offset";
      goto LABEL_13;
    }
    v18 = 3;
    if ( (unsigned __int8)v15 <= 0x12u )
    {
      if ( (unsigned __int8)v15 != 18 )
      {
        if ( (unsigned __int8)v15 <= 5u )
        {
          if ( (unsigned __int8)v15 == 5 )
          {
            v10 = -1;
            v22 = 4096;
            v23 = v67;
            v25 = *(_BYTE *)(v67 + 261) >> 1;
            goto LABEL_54;
          }
          if ( (_BYTE)v15 )
          {
            v19 = (unsigned __int8)v15 - 1;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( !v20 )
              {
                v23 = v67;
                v22 = 512;
                v10 = -((*(_BYTE *)(v67 + 261) & 1) == 0);
                goto LABEL_55;
              }
              v21 = v20 - 1;
              if ( v21 )
              {
                if ( v21 == 1 )
                {
                  v22 = 4096;
LABEL_25:
                  v10 = -1;
LABEL_26:
                  v23 = v67;
LABEL_55:
                  if ( v13[5] < v22 )
                    goto LABEL_137;
                  v24 = v76;
LABEL_66:
                  v77 = v69;
                  if ( v22 && v24 )
                  {
                    if ( v66 )
                    {
                      if ( v66 == 5 )
                      {
                        Region = (const void *)SystemArgument2[76].Alignment;
                      }
                      else
                      {
                        if ( v66 != 18 )
                        {
                          if ( v14 )
                          {
                            v38 = a2;
                            v10 = *(_DWORD *)(v9 + 44);
                            if ( !a2 )
                            {
                              if ( (unsigned int)(v10 - 1) <= 0xFFFFFFFD )
                              {
                                v39 = L"Adapter protocol query log page request specified invalid NSID";
LABEL_138:
                                sub_1400A870C(
                                  (__int64)SystemArgument2,
                                  0,
                                  v18,
                                  (__int64)v39,
                                  L"IRP Status",
                                  13,
                                  0LL,
                                  0,
                                  0LL,
                                  0,
                                  0LL,
                                  0,
                                  0LL,
                                  0,
                                  0LL,
                                  0,
                                  0LL,
                                  0,
                                  0LL,
                                  0);
                                return 3221225485LL;
                              }
                              goto LABEL_80;
                            }
                            if ( v10 )
                            {
                              v39 = L"Namespace protocol query log page request cannot specify NSID";
                              goto LABEL_138;
                            }
                          }
                          else
                          {
                            if ( v10 == -1 )
                              goto LABEL_80;
                            v38 = a2;
                            v10 = -1;
                            if ( !a2 )
                              goto LABEL_80;
                          }
                          v10 = *(_DWORD *)(v38 + 56);
LABEL_80:
                          if ( (*(_BYTE *)(v23 + 261) & 4) != 0 )
                          {
                            if ( v14 )
                            {
                              v40 = *(unsigned int *)(v9 + 32);
                              v41 = *(unsigned int *)(v9 + 28);
                            }
                            else
                            {
                              v40 = v13[7];
                              v41 = v13[3];
                            }
                            v11 = v41 | (v40 << 32);
                            v73 = v11;
                          }
                          if ( v14
                            && 4
                             * (*(unsigned __int16 *)(v9 + 10) | ((unsigned __int64)(unsigned __int16)*(_DWORD *)(v9 + 12) << 16))
                             + 4 > v22 )
                          {
                            v39 = L"Protocol query log page request specifies transfer length larger than buffer";
                            goto LABEL_138;
                          }
                          if ( !v69 )
                            goto LABEL_92;
                          if ( v11 < v69 )
                          {
                            if ( v22 > (int)v69 - (int)v11 )
                              v22 = v69 - v11;
LABEL_92:
                            v42 = v68;
                            if ( v22 <= v68 )
                              v42 = v22;
                            v43 = sub_1401225EC(SystemArgument2);
                            if ( !v43 )
                            {
                              v45 = -1073741670;
                              v46 = v42;
LABEL_96:
                              v47 = P;
LABEL_126:
                              if ( Dst[0] )
                                sub_1400F5FEC((__int64)SystemArgument2, v46, v44, (__int64)Dst[0], (__int64)Dst[1]);
                              if ( v47 )
                                ExFreePoolWithTag(v47, 0x4C4E6152u);
                              return (unsigned int)v45;
                            }
                            v45 = sub_1400E736C((__int64)SystemArgument2, v42, v44, Dst, &Dst[1], 0);
                            v46 = v42;
                            if ( v45 < 0 )
                            {
LABEL_110:
                              _interlockedbittestandreset((volatile signed __int32 *)(v43->QuadPart + 4256), 3u);
                              sub_140122C20(SystemArgument2, (__int64)v43);
                              goto LABEL_96;
                            }
                            memset_0(Dst[0], 0, v42);
                            *(_DWORD *)(v43->QuadPart + 4256) |= 1u;
                            *(_DWORD *)(v43->QuadPart + 4256) |= 0x20u;
                            *(_DWORD *)(v43->QuadPart + 4256) |= 2u;
                            *(_DWORD *)(v43->QuadPart + 4256) &= ~0x40u;
                            *(_WORD *)(v43->QuadPart + 4252) = 0;
                            *(_QWORD *)(v43->QuadPart + 4184) = a3;
                            *(_QWORD *)(v43->QuadPart + 4192) = sub_140123DD0;
                            *(_QWORD *)(v43->QuadPart + 4200) = v43;
                            QuadPart = v43->QuadPart;
                            if ( a2 )
                              *(_QWORD *)(QuadPart + 4216) = a2;
                            else
                              *(_QWORD *)(QuadPart + 4224) = SystemArgument2[8].Alignment;
                            v50 = (_DWORD *)v72;
                            v51 = v73;
                            LOBYTE(v48) = v66;
                            *(void **)(v43->QuadPart + 4160) = Dst[0];
                            *(void **)(v43->QuadPart + 4168) = Dst[1];
                            *(_DWORD *)(v43->QuadPart + 4248) = v42;
                            sub_1400BC8A4(
                              (__int64)SystemArgument2,
                              v43->QuadPart + 4096,
                              v48,
                              v42,
                              (__int64)Dst[1],
                              v10,
                              v51,
                              v50[8],
                              v43->QuadPart,
                              v43[1].QuadPart);
                            v52 = 0LL;
                            if ( v65 )
                            {
                              v53 = v74;
                              v54 = (v42 >> 2) - 1;
                              *(_DWORD *)(v43->QuadPart + 4136) = v74[2];
                              *(_WORD *)(v43->QuadPart + 4138) = v54;
                              *(_DWORD *)(v43->QuadPart + 4140) = v53[3];
                              *(_WORD *)(v43->QuadPart + 4140) = HIWORD(v54);
                              *(_DWORD *)(v43->QuadPart + 4144) = v53[7];
                              *(_DWORD *)(v43->QuadPart + 4148) = v53[8];
                              *(_DWORD *)(v43->QuadPart + 4152) = v53[9];
                              *(_DWORD *)(v43->QuadPart + 4156) = 0;
                              *(_DWORD *)(v43->QuadPart + 4100) = v10;
                            }
                            else
                            {
                              *(_DWORD *)(v43->QuadPart + 4136) ^= ((unsigned __int16)*(_DWORD *)(v43->QuadPart + 4136) ^ (unsigned __int16)((unsigned __int16)v50[9] << 15)) & 0x8000;
                              *(_DWORD *)(v43->QuadPart + 4136) ^= ((unsigned __int16)*(_DWORD *)(v43->QuadPart + 4136) ^ (unsigned __int16)((unsigned __int16)v50[9] << 7)) & 0xF00;
                              if ( sub_1400BD6D8((__int64)SystemArgument2) )
                              {
                                v55 = v50[9] >> 8;
                                if ( (v50[9] & 0x7F00) != 0 )
                                {
                                  v69 = v77;
                                  if ( v66 >= 0xC0u )
                                  {
                                    v56 = v43->QuadPart;
                                    v69 = v77;
                                    *(_DWORD *)(v56 + 4152) ^= ((unsigned __int8)v55 ^ (unsigned __int8)*(_DWORD *)(v56 + 4152)) & 0x7F;
                                  }
                                }
                              }
                            }
                            if ( v22 <= v68 )
                            {
                              v58 = v52;
                            }
                            else
                            {
                              v57 = (_DWORD *)sub_1400143E0(
                                                72LL,
                                                56LL,
                                                1280205138LL,
                                                *(_QWORD *)(SystemArgument2[8].Alignment + 8));
                              P = v57;
                              v58 = v57;
                              if ( !v57 )
                              {
                                v45 = -1073741670;
                                v46 = v42;
                                goto LABEL_110;
                              }
                              v57[1] = 1;
                              *((_QWORD *)v57 + 4) = v51;
                              v57[11] = 0;
                              *((void **)v57 + 2) = Dst[0];
                              *((void **)v57 + 3) = Dst[1];
                              v57[3] = v42;
                              *v57 = v50[2];
                              v57[2] = v10;
                              v57[10] = v50[5];
                              *((_QWORD *)v57 + 6) = v69;
                            }
                            *(_QWORD *)(v43->QuadPart + 4208) = v58;
                            if ( v65 )
                            {
                              v45 = sub_140088944((__int64)a3);
                              v46 = v42;
                              if ( v45 < 0 )
                                goto LABEL_110;
                              *(_DWORD *)(v43->QuadPart + 4256) |= 0x400u;
                            }
                            v45 = sub_140122670((__int64)SystemArgument2, v43);
                            v46 = v42;
                            if ( v45 < 0 )
                              goto LABEL_110;
                            v45 = 259;
                            *a4 = 0;
                            return (unsigned int)v45;
                          }
                          return 3221225485LL;
                        }
                        Region = (const void *)SystemArgument2[77].Region;
                      }
                    }
                    else
                    {
                      Region = v75;
                    }
                    v60 = sub_140123D24((__int64)v13, Region, v22);
                    v45 = v60;
                    if ( v60 >= 0 && v60 != 259 )
                    {
                      v61 = *(unsigned int *)(a3[23] + 8LL);
                      if ( v65 )
                      {
                        v45 = sub_140088944((__int64)a3);
                        if ( v45 < 0 )
                        {
                          v46 = v22;
                          v47 = 0LL;
                          goto LABEL_126;
                        }
                        v62 = (_DWORD *)a3[3];
                        v63 = 72LL;
                        *v62 = 1;
                      }
                      else
                      {
                        v62 = (_DWORD *)a3[3];
                        v5 = a3 + 7;
                        v63 = 48LL;
                        *v62 = 48;
                      }
                      v64 = v62[7];
                      v62[1] = v63;
                      if ( v64 )
                        v63 = (unsigned int)(v64 + v62[6] + 8);
                      *v5 = v63;
                      if ( v63 > v61 )
                      {
                        a3[7] = v61;
                        return (unsigned int)-2147483643;
                      }
                      return (unsigned int)v45;
                    }
                    return (unsigned int)v45;
                  }
LABEL_137:
                  v39 = L"Invalid buffer length for log page in protocol query request";
                  goto LABEL_138;
                }
                goto LABEL_62;
              }
LABEL_27:
              v22 = 512;
              goto LABEL_25;
            }
            v22 = *(_DWORD *)(v72 + 20);
            v24 = v22 >= 0x40;
LABEL_64:
            v10 = -1;
            goto LABEL_65;
          }
          if ( !sub_1400BDDB0((__int64)SystemArgument2, 2u, 0) )
            return 3221225474LL;
          v14 = v65;
          v22 = 1024;
          v76 = v13[5] >= 0x400;
          goto LABEL_53;
        }
        v26 = (unsigned __int8)v15 - 6;
        if ( !v26 )
        {
          v22 = 564;
          goto LABEL_25;
        }
        v27 = v26 - 1;
        if ( !v27 || (v28 = v27 - 1) == 0 )
        {
          v22 = *(_DWORD *)(v72 + 20);
          v10 = -1;
          v23 = v67;
          v76 = v22 >= 0x200;
          v25 = *(_BYTE *)(v67 + 261) >> 3;
          goto LABEL_54;
        }
        v29 = v28 - 1;
        if ( !v29 )
          goto LABEL_27;
        if ( v29 == 4 )
        {
          v30 = *(_BYTE *)(Alignment + 261);
          v22 = *(_DWORD *)(v72 + 20);
          v23 = v67;
          v25 = v30 >> 4;
          v76 = v22 >= 0x200;
          if ( (v30 & 0x10) != 0 )
            v69 = (unsigned __int64)*(unsigned int *)(v67 + 352) << 16;
          v10 = -1;
LABEL_54:
          if ( (v25 & 1) == 0 )
            return 3221225474LL;
          goto LABEL_55;
        }
LABEL_62:
        v22 = *(_DWORD *)(v72 + 20);
        v24 = 1;
LABEL_65:
        v23 = v67;
        goto LABEL_66;
      }
      v22 = 1024;
      v76 = *(_DWORD *)(v72 + 20) >= 0x400u;
LABEL_53:
      v23 = v67;
      v25 = *(_BYTE *)(v67 + 261) >> 5;
      goto LABEL_54;
    }
    if ( (unsigned __int8)v15 > 0xC2u )
    {
      v36 = (unsigned __int8)v15 - 196;
      if ( !v36 )
        goto LABEL_63;
      v37 = v36 - 1;
      if ( !v37 )
        goto LABEL_63;
      v35 = v37 - 3;
      v34 = v35 == 0;
    }
    else
    {
      if ( (unsigned __int8)v15 == 194 )
        goto LABEL_63;
      v31 = (unsigned __int8)v15 - 19;
      if ( !v31 )
      {
        v22 = *(_DWORD *)(v72 + 20);
        v76 = v22 >= 0x1000;
        goto LABEL_53;
      }
      v32 = v31 - 109;
      if ( !v32 )
      {
        v22 = 64;
        goto LABEL_26;
      }
      v33 = v32 - 1;
      if ( !v33 )
      {
        v22 = 512;
        goto LABEL_26;
      }
      v35 = v33 - 63;
      v34 = v35 == 0;
    }
    if ( !v34 && v35 != 1 )
      goto LABEL_62;
LABEL_63:
    v22 = *(_DWORD *)(v72 + 20);
    v24 = 1;
    goto LABEL_64;
  }
  return result;
}
