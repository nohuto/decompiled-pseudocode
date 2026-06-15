/*
 * XREFs of sub_140013D70 @ 0x140013D70
 * Callers:
 *     sub_140014350 @ 0x140014350 (sub_140014350.c)
 *     sub_140015070 @ 0x140015070 (sub_140015070.c)
 * Callees:
 *     sub_140013C20 @ 0x140013C20 (sub_140013C20.c)
 *     sub_140014E60 @ 0x140014E60 (sub_140014E60.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140013D70(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // r14d
  int v5; // esi
  __int64 (__fastcall *v7)(); // rcx
  void *v8; // rax
  unsigned int v9; // edx
  int v10; // r12d
  char v11; // al
  DWORD v12; // r15d
  void *v13; // rax
  void *v14; // rax
  void *v15; // rax
  DWORD v16; // eax
  int v17; // ecx
  __int64 v18; // r12
  int v19; // r8d
  __int64 v20; // rcx
  double v21; // xmm0_8
  int v22; // ecx
  double v23; // xmm0_8
  double v24; // xmm1_8
  int v25; // eax
  __int128 v27; // xmm0
  __int64 v28; // rax
  DWORD LastError; // eax
  int v30; // ecx
  int v31; // r8d
  __int64 v32; // r15
  __int64 v33; // rax
  __int128 v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int128 v38; // xmm0
  __int64 v39; // rax
  __int64 bAlertable; // [rsp+20h] [rbp-E0h]
  int v41; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v42; // [rsp+38h] [rbp-C8h]
  __int64 v43; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+60h] [rbp-A0h]
  int v47; // [rsp+64h] [rbp-9Ch]
  __int64 v48; // [rsp+78h] [rbp-88h]
  __int64 (__fastcall *v49)(); // [rsp+80h] [rbp-80h]
  _DWORD v50[2]; // [rsp+88h] [rbp-78h]
  __int128 v51; // [rsp+90h] [rbp-70h]
  __int128 v52; // [rsp+A0h] [rbp-60h]
  __int128 v53; // [rsp+B0h] [rbp-50h]
  __int128 v54; // [rsp+C0h] [rbp-40h]
  __int128 v55; // [rsp+D0h] [rbp-30h]
  __int128 v56; // [rsp+E0h] [rbp-20h]
  __int128 v57; // [rsp+F0h] [rbp-10h]
  __int128 v58; // [rsp+100h] [rbp+0h]
  _BYTE v59[16]; // [rsp+110h] [rbp+10h] BYREF
  __int64 *v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  int *v62; // [rsp+130h] [rbp+30h]
  __int64 v63; // [rsp+138h] [rbp+38h]
  int *v64; // [rsp+140h] [rbp+40h]
  __int64 v65; // [rsp+148h] [rbp+48h]
  HANDLE Handles; // [rsp+150h] [rbp+50h] BYREF
  __int128 v67; // [rsp+158h] [rbp+58h]
  __int128 v68; // [rsp+168h] [rbp+68h]
  __int64 v69; // [rsp+178h] [rbp+78h]

  v2 = HIDWORD(v45);
  v3 = HIDWORD(v45);
  v4 = HIDWORD(v45);
  v5 = HIDWORD(v45);
  *(_BYTE *)(a1 + 272) = 1;
  v42 = 0;
  v48 = a2;
  v7 = sub_140048300;
  do
  {
    v8 = *(void **)(a1 + 280);
    v9 = 1;
    v69 = 0LL;
    v50[0] = 0;
    v10 = 1;
    v67 = 0LL;
    Handles = v8;
    v68 = 0LL;
    v41 = 1;
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    v55 = 0LL;
    v49 = sub_140048300;
    v50[1] = v2;
    v46 = 1;
    if ( sub_140015070 == *(__int64 (__fastcall **)())(a1 + 216) )
    {
      v11 = *(_BYTE *)(a1 + 4681);
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          v7 = *(__int64 (__fastcall **)())(a1 + 408);
          if ( v7 )
          {
            v36 = sub_1400B6010(v7);
            *(_QWORD *)&v51 = sub_1400386A0;
            DWORD2(v51) = 0;
            v10 = 5;
            *(_QWORD *)&v67 = v36;
            v12 = 2;
            HIDWORD(v51) = v4;
            v47 = 4;
            goto LABEL_15;
          }
        }
      }
      else if ( *(_QWORD *)(a1 + 312) )
      {
        *(_QWORD *)&v67 = *(_QWORD *)(a1 + 312);
        v10 = 3;
        *(_QWORD *)&v51 = sub_140015930;
        v12 = 2;
        DWORD2(v51) = 0;
        HIDWORD(v51) = v3;
        v47 = 2;
        goto LABEL_15;
      }
      v12 = 1;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 288) )
      {
        v9 = 2;
        *(_QWORD *)&v67 = *(_QWORD *)(a1 + 288);
        v41 = 2;
        v10 = 33;
        *(_QWORD *)&v51 = sub_140048300;
        DWORD2(v51) = 0;
        HIDWORD(v51) = v5;
        v47 = 32;
      }
      v13 = *(void **)(a1 + 416);
      if ( v13 )
      {
        v10 |= 0x10u;
        *(_QWORD *)&v56 = sub_140048300;
        DWORD2(v56) = 0;
        v34 = v56;
        *(&Handles + v9) = v13;
        v35 = 2LL * v9;
        *(&v46 + v9++) = 16;
        v41 = v9;
        *(_OWORD *)&v50[2 * v35 - 2] = v34;
      }
      if ( !*(_BYTE *)(a1 + 4681) )
      {
        v14 = *(void **)(a1 + 312);
        if ( v14 )
        {
          v10 |= 2u;
          *(_QWORD *)&v57 = sub_140015930;
          DWORD2(v57) = 0;
          v27 = v57;
          *(&Handles + v9) = v14;
          v28 = 2LL * v9;
          *(&v46 + v9++) = 2;
          v41 = v9;
          *(_OWORD *)&v50[2 * v28 - 2] = v27;
        }
      }
      v7 = *(__int64 (__fastcall **)())(a1 + 408);
      if ( v7 )
      {
        v32 = v9;
        *(&Handles + v9) = (HANDLE)sub_1400B6010(v7);
        *(&v46 + v32) = 4;
        *(_QWORD *)&v58 = sub_1400386A0;
        v10 |= 4u;
        DWORD2(v58) = 0;
        v33 = 2LL * (unsigned int)v32;
        v12 = v41 + 1;
        *(_OWORD *)&v50[2 * v33 - 2] = v58;
      }
      else
      {
        v12 = v41;
      }
    }
LABEL_15:
    v15 = *(void **)(a1 + 296);
    if ( v15 && v15 != (void *)-1LL )
    {
      LODWORD(v7) = v12;
      v10 |= 8u;
      DWORD2(v45) = 0;
      *(&Handles + v12) = v15;
      *(_QWORD *)&v45 = sub_140026AE0;
      v38 = v45;
      v39 = 2LL * v12;
      *(&v46 + v12++) = 8;
      *(_OWORD *)&v50[2 * v39 - 2] = v38;
    }
    if ( (byte_1400E8401 & 8) != 0 )
    {
      v41 = v10;
      v60 = &v43;
      v43 = a1;
      v62 = &v41;
      v61 = 8LL;
      v63 = 4LL;
      sub_140014E60((_DWORD)v7, (unsigned int)&unk_1400C5620, 0, 3, (__int64)v59);
    }
    v16 = WaitForMultipleObjectsEx(v12, &Handles, 0, 0xFFFFFFFF, 0);
    v18 = v16;
    if ( v16 == -1 )
    {
      LastError = GetLastError();
      if ( (byte_1400E8401 & 8) != 0 )
      {
        LODWORD(v43) = LastError;
        v41 = -1;
        v60 = &v44;
        v44 = a1;
        v62 = &v41;
        v64 = (int *)&v43;
        v61 = 8LL;
        v63 = 4LL;
        v65 = 4LL;
        sub_140014E60(v30, (unsigned int)&unk_1400C5640, v31, 4, (__int64)v59);
      }
    }
    else if ( v12 <= v16 )
    {
      if ( (byte_1400E8401 & 8) != 0 )
      {
        LODWORD(bAlertable) = v16;
        sub_140013C20(v17, (int)&unk_1400C5640, a1, -2, bAlertable);
      }
    }
    else
    {
      QueryPerformanceCounter((LARGE_INTEGER *)(a1 + 4672));
      v20 = *(_QWORD *)(a1 + 4672);
      if ( v20 < 0 )
      {
        v37 = *(_QWORD *)(a1 + 4672) & 1LL | (*(_QWORD *)(a1 + 4672) >> 1);
        v21 = (double)(int)v37 + (double)(int)v37;
      }
      else
      {
        v21 = (double)(int)v20;
      }
      v22 = qword_1400B7000;
      v23 = v21 * 10000000.0;
      if ( qword_1400B7000 < 0 )
      {
        v22 = qword_1400B7000 & 1;
        v24 = (double)(int)(v22 | ((unsigned __int64)qword_1400B7000 >> 1))
            + (double)(int)(v22 | ((unsigned __int64)qword_1400B7000 >> 1));
      }
      else
      {
        v24 = (double)(int)qword_1400B7000;
      }
      *(_QWORD *)(a1 + 4664) = (unsigned int)(int)(v23 / v24);
      v25 = *(&v46 + v18);
      v42 = v25;
      if ( (byte_1400E8401 & 8) != 0 )
      {
        v41 = v25;
        LODWORD(v43) = 0;
        v60 = &v44;
        v44 = a1;
        v62 = (int *)&v43;
        v64 = &v41;
        v61 = 8LL;
        v63 = 4LL;
        v65 = 4LL;
        sub_140014E60(v22, (unsigned int)&unk_1400C5640, v19, 4, (__int64)v59);
      }
      sub_1400B6010(a1 + (int)v50[4 * v18]);
    }
    v7 = sub_140048300;
  }
  while ( *(_BYTE *)(a1 + 272) );
  return v42;
}
