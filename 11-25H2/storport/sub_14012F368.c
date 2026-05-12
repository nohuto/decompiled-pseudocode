/*
 * XREFs of sub_14012F368 @ 0x14012F368
 * Callers:
 *     sub_140127AAC @ 0x140127AAC (sub_140127AAC.c)
 *     sub_14012DC60 @ 0x14012DC60 (sub_14012DC60.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14002D010 @ 0x14002D010 (sub_14002D010.c)
 *     sub_140037A5C @ 0x140037A5C (sub_140037A5C.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     sub_140072E4C @ 0x140072E4C (sub_140072E4C.c)
 *     sub_1400BC1F4 @ 0x1400BC1F4 (sub_1400BC1F4.c)
 *     sub_1400BC3A4 @ 0x1400BC3A4 (sub_1400BC3A4.c)
 *     sub_14012B310 @ 0x14012B310 (sub_14012B310.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14012F368(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  bool v4; // r12
  __int64 v5; // rsi
  __int64 v6; // r14
  int *v7; // rdi
  char v8; // r13
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // r15d
  unsigned int v13; // r10d
  unsigned int i; // r9d
  int *v15; // rax
  unsigned int v16; // r8d
  int v17; // r10d
  int *v18; // rbx
  unsigned int v19; // r11d
  unsigned int v20; // ecx
  unsigned int v21; // edx
  char *v22; // rax
  int v23; // edx
  unsigned int v24; // r9d
  unsigned int v25; // r11d
  unsigned int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rbx
  int v29; // ecx
  unsigned int v30; // r11d
  __int64 v31; // r15
  int *v32; // rax
  int v33; // r11d
  __int64 v34; // r10
  unsigned int v35; // edx
  __int128 v36; // xmm0
  unsigned int v37; // r9d
  int *v38; // rdi
  char *v39; // rax
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r10
  _QWORD *v43; // rax
  KSPIN_LOCK *v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rcx
  int v47; // r15d
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // r10d
  int v51; // r11d
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  char v58; // [rsp+30h] [rbp-D0h] BYREF
  char v59; // [rsp+31h] [rbp-CFh] BYREF
  char v60; // [rsp+32h] [rbp-CEh] BYREF
  unsigned int v61; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v62; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v64; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+50h] [rbp-B0h] BYREF
  int *v66; // [rsp+58h] [rbp-A8h] BYREF
  int v67; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v69; // [rsp+90h] [rbp-70h]
  __int64 v70; // [rsp+98h] [rbp-68h]
  __int64 *v71; // [rsp+A0h] [rbp-60h]
  __int64 v72; // [rsp+A8h] [rbp-58h]
  __int64 *v73; // [rsp+B0h] [rbp-50h]
  __int64 v74; // [rsp+B8h] [rbp-48h]
  __int64 *v75; // [rsp+C0h] [rbp-40h]
  __int64 v76; // [rsp+C8h] [rbp-38h]
  int **v77; // [rsp+D0h] [rbp-30h]
  __int64 v78; // [rsp+D8h] [rbp-28h]
  __int64 *v79; // [rsp+E0h] [rbp-20h]
  __int64 v80; // [rsp+E8h] [rbp-18h]
  __int64 *v81; // [rsp+F0h] [rbp-10h]
  __int64 v82; // [rsp+F8h] [rbp-8h]
  int **v83; // [rsp+100h] [rbp+0h]
  __int64 v84; // [rsp+108h] [rbp+8h]
  unsigned int *v85; // [rsp+110h] [rbp+10h]
  __int64 v86; // [rsp+118h] [rbp+18h]
  __int64 *v87; // [rsp+120h] [rbp+20h]
  __int64 v88; // [rsp+128h] [rbp+28h]
  __int64 *v89; // [rsp+130h] [rbp+30h]
  __int64 v90; // [rsp+138h] [rbp+38h]
  __int64 *v91; // [rsp+140h] [rbp+40h]
  __int64 v92; // [rsp+148h] [rbp+48h]

  v62 = a3;
  v4 = 0;
  v65 = a4;
  v5 = 0LL;
  v66 = a2;
  v6 = 0LL;
  v64 = a1;
  v7 = a2;
  v8 = 1;
  v61 = 0;
  if ( byte_1401687E9 )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v10 == 1314278989 )
  {
    v6 = *(_QWORD *)(a1 + 64);
    v11 = *(_QWORD *)(v10 + 16);
    v63 = *(_QWORD *)(v10 + 8);
LABEL_8:
    v4 = sub_14012B310(v11);
    goto LABEL_9;
  }
  if ( *(_DWORD *)v10 != 1314275652 )
    return 3221225485LL;
  v5 = *(_QWORD *)(a1 + 64);
  v63 = *(_QWORD *)(v10 + 32);
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 400) + 184LL) & 0x40000000) != 0 )
  {
    v11 = *(_QWORD *)(v10 + 1136);
    goto LABEL_8;
  }
LABEL_9:
  v12 = v7[2];
  v13 = 0;
  for ( i = 104; v13 < v12; v13 = v17 + 1 )
  {
    v15 = sub_14002D010(v7, v13);
    v18 = v15;
    if ( v15 )
    {
      v19 = v15[2];
      i += 56;
      v20 = v19;
      if ( v19 <= v16 )
        v20 = v16;
      v21 = 0;
      v61 = v20;
      if ( v19 )
      {
        do
        {
          v22 = sub_140072E4C(v18, v21);
          v26 = v24 + 24;
          if ( !v22 )
            v26 = v24;
          v21 = v23 + 1;
          i = v26;
        }
        while ( v21 < v25 );
      }
    }
  }
  v27 = sub_1400143E0(64LL, i, 1330667858LL, v64);
  v28 = v27;
  if ( !v27 )
    return 3221225626LL;
  *(_DWORD *)v27 = 3;
  *(_DWORD *)(v27 + 96) = v12;
  *(_QWORD *)(v27 + 88) = v62;
  if ( v5 )
    sub_1400BC1F4((unsigned int *)v5, (__int64)v7, v27);
  v29 = *(_DWORD *)(v28 + 96);
  v30 = 0;
  *(_QWORD *)(v28 + 8) |= 0x20uLL;
  if ( v29 )
  {
    while ( 1 )
    {
      v31 = 56LL * v30;
      v32 = sub_14002D010(v7, v30);
      *(_QWORD *)(v31 + v28 + 136) = v34;
      v35 = v32[2];
      *(_DWORD *)(v31 + v28 + 132) = v35;
      *(_DWORD *)(v31 + v28 + 128) = v32[3];
      v36 = *((_OWORD *)v32 + 1);
      *(_QWORD *)(v31 + v28 + 120) = 1LL;
      *(_OWORD *)(v31 + v28 + 104) = v36;
      if ( (v7[3] & 0x100) != 0 )
        *(_QWORD *)(v31 + v28 + 120) = 3LL;
      if ( v35 > 1 )
        break;
      v37 = 0;
      if ( v35 )
        goto LABEL_28;
LABEL_31:
      v30 = v33 + 1;
      if ( v30 >= *(_DWORD *)(v28 + 96) )
        goto LABEL_32;
    }
    v8 = 0;
    v37 = 0;
LABEL_28:
    v38 = v32;
    do
    {
      v39 = sub_140072E4C(v38, v37);
      v41 = 3 * v40;
      v37 = v40 + 1;
      *(_DWORD *)(v42 + 8 * v41 + 16) = *((_DWORD *)v39 + 6);
      *(_QWORD *)(v42 + 8 * v41 + 8) = *((_QWORD *)v39 + 2);
      *(_QWORD *)(v42 + 8 * v41) = *((_QWORD *)v39 + 1);
    }
    while ( v37 < *(_DWORD *)(v31 + v28 + 132) );
    v7 = v66;
    goto LABEL_31;
  }
LABEL_32:
  if ( v6 )
  {
    if ( !v8 )
      *(_QWORD *)(v28 + 32) = sub_14012C7A0;
    *(_QWORD *)(v28 + 16) = sub_14012BD90;
    *(_QWORD *)(v28 + 24) = sub_14012C740;
    *(_QWORD *)(v28 + 48) = sub_14012CFC0;
    *(_QWORD *)(v28 + 40) = sub_14012D2A0;
    *(_QWORD *)(v28 + 56) = sub_1401282C0;
    if ( v4 || (v7[3] & 3) != 0 )
      goto LABEL_44;
    *(_QWORD *)(v28 + 64) = sub_14012C500;
    *(_QWORD *)(v28 + 72) = sub_14012C1B0;
    v43 = (_QWORD *)(*(_QWORD *)(v6 + 128) + 104LL);
    v43[1] = v43;
    *v43 = v43;
    v44 = (KSPIN_LOCK *)(*(_QWORD *)(v6 + 128) + 128LL);
  }
  else
  {
    if ( !v8 )
      *(_QWORD *)(v28 + 32) = sub_140127890;
    *(_QWORD *)(v28 + 16) = sub_140126C00;
    *(_QWORD *)(v28 + 24) = sub_1401276A0;
    *(_QWORD *)(v28 + 48) = sub_1401288B0;
    *(_QWORD *)(v28 + 40) = sub_140128B00;
    *(_QWORD *)(v28 + 56) = sub_1401282C0;
    if ( v4 || (v7[3] & 3) != 0 )
      goto LABEL_44;
    *(_QWORD *)(v28 + 64) = sub_1401273F0;
    *(_QWORD *)(v28 + 72) = sub_140127120;
    v45 = (_QWORD *)(*(_QWORD *)(v5 + 160) + 144LL);
    v45[1] = v45;
    *v45 = v45;
    v44 = (KSPIN_LOCK *)(*(_QWORD *)(v5 + 160) + 168LL);
  }
  KeInitializeSpinLock(v44);
LABEL_44:
  v47 = PoFxRegisterDevice(v64, v28, v65);
  if ( v47 >= 0 )
  {
    if ( v4 )
      sub_1400BC3A4(v63, v7[3] & 0x40);
    if ( v6 )
    {
      if ( (unsigned int)dword_140168178 > 5 )
      {
        if ( sub_14003F840(v46, 0x400000000000LL) )
        {
          v52 = *(_QWORD *)(v6 + 16);
          v53 = *(_QWORD *)(v52 + 128);
          v70 = 16LL;
          v69 = v53 + 1032;
          v71 = (__int64 *)(v6 + 160);
          v72 = 16LL;
          v54 = *(unsigned int *)(*(_QWORD *)(v52 + 128) + 56LL);
          v73 = (__int64 *)&v67;
          v59 = *(_BYTE *)(v6 + 100);
          v75 = (__int64 *)&v59;
          v60 = *(_BYTE *)(v6 + 101);
          v77 = (int **)&v60;
          v58 = *(_BYTE *)(v6 + 102);
          v79 = (__int64 *)&v58;
          v81 = &v65;
          LODWORD(v66) = v7[2];
          v83 = &v66;
          v85 = &v61;
          LODWORD(v62) = v7[3];
          v87 = &v62;
          v89 = &v63;
          v91 = &v64;
          v67 = v54;
          v74 = 4LL;
          v76 = 1LL;
          v78 = 1LL;
          v80 = 1LL;
          LODWORD(v65) = v49;
          v82 = 4LL;
          v84 = 4LL;
          v86 = 4LL;
          v88 = 4LL;
          LODWORD(v63) = v51;
          v90 = 4LL;
          LODWORD(v64) = v50;
          v92 = 4LL;
          sub_140037A5C(v54, byte_14015AFCF, v48, v49, 0xEu, v68);
        }
      }
    }
    else if ( v5 && (unsigned int)dword_140168178 > 5 && sub_14003F840((unsigned int)*v7, 0x400000000000LL) )
    {
      v70 = 16LL;
      v69 = v5 + 1032;
      LODWORD(v64) = v55;
      v71 = &v64;
      LODWORD(v63) = v7[2];
      v73 = &v63;
      LODWORD(v62) = v61;
      v75 = &v62;
      LODWORD(v66) = v7[3];
      v77 = &v66;
      v79 = &v65;
      v72 = 4LL;
      v74 = 4LL;
      v76 = 4LL;
      v78 = 4LL;
      LODWORD(v65) = v57;
      v80 = 4LL;
      sub_140037A5C(v55, (unsigned __int8 *)dword_14015B096, v56, v57, 8u, v68);
    }
  }
  ExFreePoolWithTag((PVOID)v28, 0x4F506152u);
  return (unsigned int)v47;
}
