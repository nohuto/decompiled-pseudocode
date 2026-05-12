/*
 * XREFs of RaGetUnitStorageDeviceProperty @ 0x1401B2700
 * Callers:
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1401B2580 (RaUnitStorageQueryDevicePropertyIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaGetUnitStorageDeviceProperty(__int64 a1, void *a2, unsigned int *a3)
{
  __int64 v3; // r15
  unsigned int v7; // ebx
  unsigned __int8 v8; // cl
  bool v9; // al
  bool v10; // zf
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  _OWORD *v18; // rdx
  __int128 v19; // xmm0
  int v20; // eax
  size_t v21; // r8
  unsigned int v22; // edx
  signed int v23; // ecx
  __int64 i; // rax
  char v25; // dl
  __int64 result; // rax
  _DWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int128 v30; // xmm1
  __int64 v31; // xmm0_8
  __int64 v32; // r15
  _BYTE *v33; // rcx
  _BYTE *v34; // rcx
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm0
  _OWORD *v42; // rdx
  __int64 v43; // rax
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  _DWORD Src[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v51; // [rsp+28h] [rbp-D8h]
  int v52; // [rsp+30h] [rbp-D0h]
  int v53; // [rsp+34h] [rbp-CCh]
  int v54; // [rsp+38h] [rbp-C8h]
  int v55; // [rsp+3Ch] [rbp-C4h]
  _BYTE v56[8]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v57[49]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v58[25]; // [rsp+79h] [rbp-87h] BYREF
  _BYTE v59[261]; // [rsp+ABh] [rbp-55h] BYREF

  v3 = *(_QWORD *)(a1 + 112);
  v51 = 0LL;
  memset_0(v56, 0, 0x16CuLL);
  v7 = *a3;
  Src[0] = 40;
  Src[1] = 396;
  if ( v7 > 0x18C )
    v7 = 396;
  if ( (*(_BYTE *)(a1 + 136) & 4) != 0 )
  {
    LODWORD(v51) = 0x1000000;
  }
  else if ( v3 )
  {
    v8 = *(_BYTE *)(v3 + 1);
    LOBYTE(v51) = *(_BYTE *)v3 & 0x1F;
    BYTE1(v51) = v8 & 0x7F;
    v9 = (*(_BYTE *)(v3 + 7) & 2) != 0;
    BYTE2(v51) = v8 >> 7;
    BYTE3(v51) = v9;
  }
  v10 = *(_QWORD *)(a1 + 160) == 0LL;
  v55 = *(_DWORD *)(a1 + 3432);
  if ( !v10 )
  {
    v11 = *(_QWORD *)(a1 + 160);
    if ( *(_BYTE *)(v11 + 8) )
    {
      v12 = *(_OWORD *)(v11 + 8);
      HIDWORD(v51) = 40;
      *(_OWORD *)v57 = v12;
    }
    v10 = *(_WORD *)(a1 + 122) == 0;
    v13 = *(_OWORD *)(v11 + 25);
    v52 = 57;
    v14 = *(_OWORD *)(v11 + 41);
    v53 = 122;
    *(_OWORD *)&v57[17] = v13;
    v15 = *(_OWORD *)(v11 + 57);
    *(_OWORD *)&v57[33] = v14;
    v16 = *(_OWORD *)(v11 + 73);
    *(_OWORD *)v58 = v15;
    v17 = *(_OWORD *)(v11 + 90);
    *(_OWORD *)&v58[8] = v16;
    *(_OWORD *)((char *)&v58[16] + 1) = v17;
    if ( !v10 )
    {
      v54 = 139;
      memset_0(v59, 0, 0x100uLL);
      v18 = *(_OWORD **)(a1 + 128);
      if ( *(_WORD *)(a1 + 120) <= 0x100u )
      {
        memmove(v59, v18, *(unsigned __int16 *)(a1 + 120));
        goto LABEL_24;
      }
      v33 = v59;
LABEL_37:
      v34 = v33 + 128;
      v35 = v18[1];
      *((_OWORD *)v34 - 8) = *v18;
      v36 = v18[2];
      *((_OWORD *)v34 - 7) = v35;
      v37 = v18[3];
      *((_OWORD *)v34 - 6) = v36;
      v38 = v18[4];
      *((_OWORD *)v34 - 5) = v37;
      v39 = v18[5];
      *((_OWORD *)v34 - 4) = v38;
      v40 = v18[6];
      *((_OWORD *)v34 - 3) = v39;
      *((_OWORD *)v34 - 2) = v40;
      v41 = v18[7];
      v42 = v18 + 8;
      *((_OWORD *)v34 - 1) = v41;
      v43 = *((_QWORD *)v42 + 14);
      v44 = v42[1];
      *(_OWORD *)v34 = *v42;
      v45 = v42[2];
      *((_OWORD *)v34 + 1) = v44;
      v46 = v42[3];
      *((_OWORD *)v34 + 2) = v45;
      v47 = v42[4];
      *((_OWORD *)v34 + 3) = v46;
      v48 = v42[5];
      *((_OWORD *)v34 + 4) = v47;
      v49 = v42[6];
      *((_OWORD *)v34 + 5) = v48;
      *((_OWORD *)v34 + 6) = v49;
      *((_QWORD *)v34 + 14) = v43;
      *((_DWORD *)v34 + 30) = *((_DWORD *)v42 + 30);
      *((_WORD *)v34 + 62) = *((_WORD *)v42 + 62);
      v34[126] = *((_BYTE *)v42 + 126);
      v59[187] = 0;
      goto LABEL_24;
    }
    goto LABEL_14;
  }
  if ( !*(_QWORD *)(a1 + 152)
    || ((v27 = *(_DWORD **)(a1 + 24), *v27 != 1094997074)
      ? (*v27 != 1314275652
       ? (v28 = 232LL)
       : (v28 = (__int64)(v27 + 100)))
      : (v28 = (__int64)(v27 + 152)),
        (*(_DWORD *)(*(_QWORD *)v28 + 184LL) & 0x40) == 0) )
  {
    v10 = *(_WORD *)(a1 + 122) == 0;
    v19 = *(_OWORD *)(v3 + 16);
    *(_QWORD *)v57 = *(_QWORD *)(v3 + 8);
    v20 = *(_DWORD *)(v3 + 32);
    *(_OWORD *)&v57[9] = v19;
    *(_DWORD *)&v57[26] = v20;
    HIDWORD(v51) = 40;
    v52 = 49;
    v53 = 66;
    if ( !v10 )
    {
      v54 = 71;
      memset_0(&v57[31], 0, 0x100uLL);
      v18 = *(_OWORD **)(a1 + 128);
      if ( *(_WORD *)(a1 + 120) <= 0x100u )
      {
        memmove(&v57[31], v18, *(unsigned __int16 *)(a1 + 120));
        goto LABEL_24;
      }
      v33 = &v57[31];
      goto LABEL_37;
    }
LABEL_14:
    v54 = 0;
    goto LABEL_24;
  }
  v10 = *(_WORD *)(a1 + 122) == 0;
  v29 = *(_QWORD *)(a1 + 152);
  v52 = 40;
  v53 = 81;
  v30 = *(_OWORD *)(v29 + 16);
  *(_OWORD *)v57 = *(_OWORD *)v29;
  v31 = *(_QWORD *)(v29 + 32);
  *(_QWORD *)&v57[41] = *(_QWORD *)(v29 + 41);
  *(_OWORD *)&v57[16] = v30;
  *(_QWORD *)&v57[32] = v31;
  if ( v10 )
    goto LABEL_14;
  v32 = *(unsigned __int16 *)(a1 + 120);
  v54 = 90;
  v21 = (unsigned int)v32;
  if ( (unsigned int)v32 >= 0x14 )
    v21 = 20LL;
  memmove((char *)v58 + 1, *(const void **)(a1 + 128), v21);
  v22 = 21;
  if ( (unsigned __int64)(v32 + 1) < 0x15 )
    v22 = v32 + 1;
  if ( v22 )
  {
    *((_BYTE *)v58 + v22) = 0;
    v23 = v22 - 2;
    for ( i = v22 - 2LL; i >= 0; --i )
    {
      v25 = *((_BYTE *)v58 + i + 1);
      if ( v25 == 32 )
      {
        *((_BYTE *)v58 + i + 1) = 0;
      }
      else if ( v25 )
      {
        break;
      }
      --v23;
    }
    *((_BYTE *)&v58[1] + v23) = 0;
  }
LABEL_24:
  memmove(a2, Src, v7);
  result = 0LL;
  *a3 = v7;
  return result;
}
