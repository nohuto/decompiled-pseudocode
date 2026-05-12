/*
 * XREFs of sub_140075474 @ 0x140075474
 * Callers:
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 *     sub_1400ED16C @ 0x1400ED16C (sub_1400ED16C.c)
 *     sub_1400ED47C @ 0x1400ED47C (sub_1400ED47C.c)
 * Callees:
 *     sub_14000FB90 @ 0x14000FB90 (sub_14000FB90.c)
 *     sub_14001F350 @ 0x14001F350 (sub_14001F350.c)
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_140037B0C @ 0x140037B0C (sub_140037B0C.c)
 *     sub_140038378 @ 0x140038378 (sub_140038378.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_14005A5C4 @ 0x14005A5C4 (sub_14005A5C4.c)
 *     sub_1400720B0 @ 0x1400720B0 (sub_1400720B0.c)
 *     sub_14007B31C @ 0x14007B31C (sub_14007B31C.c)
 *     sub_14007B47C @ 0x14007B47C (sub_14007B47C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_140075474(
        __int64 a1,
        __int64 a2,
        int a3,
        __int16 a4,
        const int *a5,
        unsigned __int16 a6,
        void *a7,
        unsigned __int16 a8,
        void *a9)
{
  __int64 v10; // r13
  __int64 v12; // rdi
  bool v13; // zf
  int *v15; // r15
  __int64 *v16; // rax
  char v17; // r8
  int v18; // r10d
  __int64 v19; // r13
  char v20; // al
  char v21; // r11
  bool v22; // cl
  __int64 v23; // r10
  __int64 v24; // r12
  unsigned __int8 v25; // al
  __int64 v26; // rax
  char v27; // cl
  int v28; // edx
  char v29; // al
  const char *v30; // rax
  char v31; // al
  __int64 v32; // rdx
  int *v33; // r9
  int *v34; // r8
  _DWORD *v35; // r12
  int v36; // edx
  int *v37; // rcx
  int v38; // r8d
  int v39; // edx
  unsigned int v40; // ecx
  __int128 v41; // xmm0
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r12
  const wchar_t *v45; // rcx
  const char *v46; // r8
  const char *v47; // rdx
  const char *v48; // rax
  const wchar_t *v49; // rcx
  const char *v50; // r8
  const char *v51; // rdx
  const char *v52; // rax
  const wchar_t *v53; // rcx
  const char *v54; // r8
  const char *v55; // rdx
  const char *v56; // rax
  int *v57; // rdx
  int v58; // r9d
  __int64 v59; // r8
  __int64 v60; // r9
  struct _DEVICE_OBJECT *v61; // rcx
  size_t Size; // [rsp+40h] [rbp-110h]
  char v63; // [rsp+D0h] [rbp-80h]
  __int16 v64; // [rsp+D1h] [rbp-7Fh] BYREF
  char v65; // [rsp+D3h] [rbp-7Dh]
  char v66; // [rsp+D4h] [rbp-7Ch] BYREF
  int v67; // [rsp+D8h] [rbp-78h] BYREF
  __int16 v68; // [rsp+DCh] [rbp-74h]
  int v69; // [rsp+E0h] [rbp-70h] BYREF
  unsigned int v70; // [rsp+E4h] [rbp-6Ch]
  __int64 v71; // [rsp+E8h] [rbp-68h]
  const char *v72; // [rsp+F0h] [rbp-60h]
  const wchar_t *v73; // [rsp+F8h] [rbp-58h]
  __int64 v74; // [rsp+100h] [rbp-50h]
  void *Src; // [rsp+108h] [rbp-48h]
  void *v76; // [rsp+110h] [rbp-40h]
  int *v77; // [rsp+118h] [rbp-38h]
  int v78[4]; // [rsp+120h] [rbp-30h] BYREF
  __int128 v79; // [rsp+130h] [rbp-20h] BYREF
  int v80[4]; // [rsp+140h] [rbp-10h] BYREF
  _OWORD v81[2]; // [rsp+150h] [rbp+0h] BYREF
  int v82; // [rsp+170h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR v83[2]; // [rsp+180h] [rbp+30h] BYREF
  __int128 *v84; // [rsp+1A0h] [rbp+50h]
  __int64 v85; // [rsp+1A8h] [rbp+58h]
  int *v86; // [rsp+1B0h] [rbp+60h]
  __int64 v87; // [rsp+1B8h] [rbp+68h]
  int *v88; // [rsp+1C0h] [rbp+70h]
  __int64 v89; // [rsp+1C8h] [rbp+78h]
  char *v90; // [rsp+1D0h] [rbp+80h]
  __int64 v91; // [rsp+1D8h] [rbp+88h]
  __int16 *v92; // [rsp+1E0h] [rbp+90h]
  __int64 v93; // [rsp+1E8h] [rbp+98h]
  char *v94; // [rsp+1F0h] [rbp+A0h]
  __int64 v95; // [rsp+1F8h] [rbp+A8h]
  _DWORD *v96; // [rsp+200h] [rbp+B0h]
  __int64 v97; // [rsp+208h] [rbp+B8h]
  __int64 v98; // [rsp+210h] [rbp+C0h]
  _DWORD v99[2]; // [rsp+218h] [rbp+C8h] BYREF
  char v100[16]; // [rsp+220h] [rbp+D0h] BYREF
  char v101[16]; // [rsp+230h] [rbp+E0h] BYREF
  int *v102; // [rsp+240h] [rbp+F0h]
  __int64 v103; // [rsp+248h] [rbp+F8h]
  char v104[16]; // [rsp+250h] [rbp+100h] BYREF
  __int64 retaddr; // [rsp+2A8h] [rbp+158h]

  v73 = (const wchar_t *)a5;
  v76 = a7;
  v10 = a2;
  Src = a9;
  v12 = 0LL;
  v67 = -1;
  v13 = *(_DWORD *)a1 == 1314275652;
  v68 = a4;
  v69 = a3;
  v71 = a2;
  v70 = 0;
  *(_OWORD *)v78 = 0LL;
  v82 = 0;
  *(_OWORD *)v80 = 0LL;
  v65 = 0;
  v79 = 0LL;
  v72 = 0LL;
  memset(v81, 0, sizeof(v81));
  if ( v13 )
    return 3238002690LL;
  sub_1400403EC(*(_QWORD *)(a1 + 16), (__int64)v78);
  v15 = (int *)&dword_140149108;
  v79 = *(_OWORD *)(a1 + 5064);
  if ( !v10 )
  {
    v26 = sub_14005A5C4(a1);
    v27 = *(_BYTE *)(a1 + 104);
    v12 = v26;
    v28 = *(_DWORD *)(a1 + 92);
    v23 = *(_QWORD *)(a1 + 8);
    v74 = v23;
    v19 = (unsigned __int16)(((v27 >> 15) & 2) + 1) | 4u;
    if ( !v28 )
      LOWORD(v19) = ((v27 >> 15) & 2) + 1;
    v29 = *(_BYTE *)(a1 + 110);
    if ( (v29 & 1) != 0 )
    {
      v21 = 0;
    }
    else
    {
      v21 = 1;
      *(_BYTE *)(a1 + 110) = v29 | 1;
    }
    LODWORD(v30) = a3;
    if ( (a3 & 3) == 1 && v27 >= 0 && !v28 )
    {
      v31 = *(_BYTE *)(a1 + 109);
      if ( (v31 & 8) == 0 )
      {
        v65 = 1;
        *(_BYTE *)(a1 + 109) = v31 | 8;
      }
    }
    v24 = v12;
    v64 = *(_WORD *)((char *)&v67 + 1);
    v63 = v67;
    if ( !v12 )
      goto LABEL_38;
LABEL_32:
    v30 = *(const char **)(v12 + 160);
    if ( v30 )
    {
      v30 += 90;
    }
    else
    {
      v32 = *(_QWORD *)(v12 + 152);
      if ( !v32
        || (LODWORD(v30) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 24) + 608LL) + 184LL),
            ((unsigned __int8)v30 & 0x40) == 0) )
      {
LABEL_38:
        if ( (v19 & 6) == 0 || (v69 & 2) != 0 )
          LOBYTE(v30) = 0;
        else
          LODWORD(v30) = byte_140168D34 == 0;
        v67 = (int)v30;
        if ( (v21 || (_BYTE)v30) && !_InterlockedCompareExchange(&dword_1401688C0, 1, 0) )
        {
          if ( v12 )
          {
            v33 = (int *)(v12 + 177);
            v34 = (int *)(v12 + 168);
          }
          else
          {
            v33 = (int *)&dword_140149108;
            v34 = (int *)&dword_140149108;
            v74 = v23;
          }
          if ( v71 )
          {
            v35 = (_DWORD *)(v12 + 3432);
            v36 = *(_DWORD *)(v12 + 3432);
          }
          else
          {
            v36 = *(_DWORD *)(a1 + 4276);
            v35 = (_DWORD *)(v24 + 3432);
          }
          v37 = (int *)&v79;
          if ( v71 )
            v37 = v80;
          LODWORD(Size) = a6;
          v77 = v37;
          sub_14007B31C((int)v37, v36, (int)v78, (int)v33, v68, v19, v34, v33, Size, v76);
          v39 = v67;
          if ( (_BYTE)v67 )
          {
            v40 = a8;
            if ( !v71 )
              v35 = (_DWORD *)(a1 + 4276);
            BYTE1(v81[0]) = *v35;
            WORD3(v81[0]) = v68;
            *((_QWORD *)&v81[1] + 1) = 0LL;
            v82 = 0;
            LOBYTE(v81[0]) = 1;
            v41 = *(_OWORD *)v77;
            WORD1(v81[0]) = v19;
            WORD2(v81[0]) = 1;
            *(_OWORD *)((char *)v81 + 8) = v41;
            if ( Src )
            {
              if ( a8 > 8u )
                v40 = 8;
              memmove((char *)&v81[1] + 8, Src, v40);
              v39 = v67;
            }
          }
          v10 = v71;
          v42 = a1;
          if ( v71 )
            v42 = v12;
          sub_14007B47C(v74, v39, v38, (unsigned __int64)v81 & -(__int64)((_BYTE)v39 != 0), v42);
          _InterlockedExchange(&dword_1401688C0, 0);
        }
        else
        {
          v10 = v71;
        }
        goto LABEL_64;
      }
      v30 = (const char *)(v32 + 41);
    }
    v72 = v30;
    goto LABEL_38;
  }
  if ( *(_WORD *)v10 == 1 && *(_DWORD *)(v10 + 4) >= 4u )
  {
    LOBYTE(v67) = *(_BYTE *)(v10 + 8);
    v63 = v67;
    BYTE1(v67) = *(_BYTE *)(v10 + 9);
    LOBYTE(v64) = BYTE1(v67);
    BYTE2(v67) = *(_BYTE *)(v10 + 10);
    HIBYTE(v64) = BYTE2(v67);
    v16 = sub_14001F350(a1, v67);
    v12 = (__int64)v16;
    if ( !v16 )
    {
      v70 = -1056964601;
LABEL_64:
      v25 = v63;
      goto LABEL_65;
    }
    *(_OWORD *)v80 = *(_OWORD *)(v16 + 263);
    v17 = *((_BYTE *)v16 + 506);
    v18 = *((_DWORD *)v16 + 259);
    v74 = v16[1];
    LOWORD(v19) = (2 * (v17 & 1)) | 4;
    if ( !v18 )
      LOWORD(v19) = 2 * (v17 & 1);
    v20 = *((_BYTE *)v16 + 507);
    if ( (v20 & 8) != 0 )
    {
      v21 = 0;
    }
    else
    {
      v21 = 1;
      *(_BYTE *)(v12 + 507) = v20 | 8;
    }
    v22 = 0;
    if ( (a3 & 3) == 1 )
      v22 = !(v17 & 1);
    if ( v22 && !v18 && (v17 & 0x20) == 0 )
    {
      v65 = 1;
      *(_BYTE *)(v12 + 506) = v17 | 0x20;
    }
    v23 = v74;
    v24 = v12;
    goto LABEL_32;
  }
  v70 = -1056964601;
  v64 = *(_WORD *)((char *)&v67 + 1);
  v25 = v67;
  v63 = v67;
LABEL_65:
  sub_14000FB90(
    a1,
    44,
    a1,
    retaddr,
    (__int64)v73,
    HIBYTE(v64) | (unsigned __int64)(((unsigned __int8)v64 | (v25 << 8)) << 8),
    0LL);
  v44 = *(_QWORD *)&v78[2];
  if ( byte_140168DAA )
  {
    if ( (v69 & 1) != 0 )
    {
      if ( (byte_1401694F5 & 8) != 0 )
      {
        v45 = (const wchar_t *)&unk_140149394;
        if ( *(_QWORD *)(a1 + 5080) )
          v45 = *(const wchar_t **)(a1 + 5080);
        if ( v12 )
        {
          v46 = (const char *)(v12 + 242);
          v47 = (const char *)(v12 + 177);
          v48 = (const char *)(v12 + 168);
        }
        else
        {
          v46 = (const char *)&dword_140149108;
          v47 = (const char *)&dword_140149108;
          v48 = (const char *)&dword_140149108;
        }
        sub_1400720B0(
          (__int64)v45,
          &stru_14014B058,
          (__int64)v46,
          *(_DWORD *)(a1 + 392),
          *(_DWORD *)(a1 + 936),
          *(_DWORD *)(a1 + 944),
          *(_DWORD *)(a1 + 948),
          *(_DWORD *)(a1 + 56),
          v63,
          v64,
          SHIBYTE(v64),
          (__int64)v80,
          (__int64)&v79,
          *(const wchar_t **)&v78[2],
          v48,
          v47,
          v46,
          v45,
          v72,
          v68,
          v73,
          a6,
          (__int64)v76,
          a8,
          (__int64)Src,
          v69);
      }
    }
    else if ( (v69 & 2) != 0 )
    {
      if ( (byte_1401694F5 & 8) != 0 )
      {
        v49 = (const wchar_t *)&unk_140149394;
        if ( *(_QWORD *)(a1 + 5080) )
          v49 = *(const wchar_t **)(a1 + 5080);
        if ( v12 )
        {
          v50 = (const char *)(v12 + 242);
          v51 = (const char *)(v12 + 177);
          v52 = (const char *)(v12 + 168);
        }
        else
        {
          v50 = (const char *)&dword_140149108;
          v51 = (const char *)&dword_140149108;
          v52 = (const char *)&dword_140149108;
        }
        sub_1400720B0(
          (__int64)v49,
          &stru_140149E68,
          (__int64)v50,
          *(_DWORD *)(a1 + 392),
          *(_DWORD *)(a1 + 936),
          *(_DWORD *)(a1 + 944),
          *(_DWORD *)(a1 + 948),
          *(_DWORD *)(a1 + 56),
          v63,
          v64,
          SHIBYTE(v64),
          (__int64)v80,
          (__int64)&v79,
          *(const wchar_t **)&v78[2],
          v52,
          v51,
          v50,
          v49,
          v72,
          v68,
          v73,
          a6,
          (__int64)v76,
          a8,
          (__int64)Src,
          v69);
      }
    }
    else if ( (byte_1401694F5 & 8) != 0 )
    {
      v53 = (const wchar_t *)&unk_140149394;
      if ( *(_QWORD *)(a1 + 5080) )
        v53 = *(const wchar_t **)(a1 + 5080);
      if ( v12 )
      {
        v54 = (const char *)(v12 + 242);
        v55 = (const char *)(v12 + 177);
        v56 = (const char *)(v12 + 168);
      }
      else
      {
        v54 = (const char *)&dword_140149108;
        v55 = (const char *)&dword_140149108;
        v56 = (const char *)&dword_140149108;
      }
      sub_1400720B0(
        (__int64)v53,
        &stru_14014A3A0,
        (__int64)v54,
        *(_DWORD *)(a1 + 392),
        *(_DWORD *)(a1 + 936),
        *(_DWORD *)(a1 + 944),
        *(_DWORD *)(a1 + 948),
        *(_DWORD *)(a1 + 56),
        v63,
        v64,
        SHIBYTE(v64),
        (__int64)v80,
        (__int64)&v79,
        *(const wchar_t **)&v78[2],
        v56,
        v55,
        v54,
        v53,
        v72,
        v68,
        v73,
        a6,
        (__int64)v76,
        a8,
        (__int64)Src,
        v69);
    }
  }
  if ( (unsigned int)dword_140168178 > 5 && sub_14003F840(v43, 0x400000000000LL) )
  {
    v85 = 16LL;
    v84 = &v79;
    v86 = v80;
    v57 = (int *)(v12 + 168);
    v69 = *(_DWORD *)(a1 + 56);
    v88 = &v69;
    v66 = v63;
    v90 = &v66;
    v92 = &v64;
    v94 = (char *)&v64 + 1;
    v96 = v99;
    v99[0] = LOWORD(v78[0]);
    v87 = 16LL;
    v89 = 4LL;
    v91 = 1LL;
    v93 = 1LL;
    v95 = 1LL;
    v97 = 2LL;
    v98 = v44;
    v99[1] = 0;
    if ( !v12 )
      v57 = (int *)&dword_140149108;
    sub_140038378((__int64)v100, v57);
    if ( v12 )
      v15 = (int *)(v12 + 177);
    sub_140038378((__int64)v101, v15);
    v102 = &v67;
    v67 = v58;
    v103 = 4LL;
    sub_140037B0C((__int64)v104, (const int *)v73);
    sub_140037A5C((__int64)v83, (unsigned __int8 *)dword_140155FCD, v59, v60, 0xEu, v83);
  }
  if ( v65 )
  {
    if ( v10 )
      v61 = *(struct _DEVICE_OBJECT **)(v12 + 8);
    else
      v61 = *(struct _DEVICE_OBJECT **)(a1 + 8);
    IoInvalidateDeviceState(v61);
  }
  return v70;
}
