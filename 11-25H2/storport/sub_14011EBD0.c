/*
 * XREFs of sub_14011EBD0 @ 0x14011EBD0
 * Callers:
 *     sub_140117A50 @ 0x140117A50 (sub_140117A50.c)
 *     sub_140118950 @ 0x140118950 (sub_140118950.c)
 *     sub_1401190B0 @ 0x1401190B0 (sub_1401190B0.c)
 *     sub_14011ACA0 @ 0x14011ACA0 (sub_14011ACA0.c)
 *     sub_14011C9D0 @ 0x14011C9D0 (sub_14011C9D0.c)
 * Callees:
 *     sub_140114720 @ 0x140114720 (sub_140114720.c)
 *     sub_1401152F0 @ 0x1401152F0 (sub_1401152F0.c)
 *     sub_140115430 @ 0x140115430 (sub_140115430.c)
 *     sub_1401155A0 @ 0x1401155A0 (sub_1401155A0.c)
 *     sub_140118560 @ 0x140118560 (sub_140118560.c)
 *     sub_14011DA00 @ 0x14011DA00 (sub_14011DA00.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14011EBD0(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6,
        ULONG a7,
        union _SLIST_HEADER *a8,
        unsigned __int16 *a9,
        _BYTE *a10)
{
  __int64 v10; // r14
  signed __int32 v11; // esi
  unsigned int v12; // r12d
  unsigned int v13; // edi
  int v14; // r8d
  __int64 v15; // rax
  unsigned __int64 v16; // r11
  __int64 v17; // rax
  unsigned int v18; // ebp
  __int64 v19; // rdx
  unsigned __int64 v20; // r10
  char v21; // r9
  unsigned __int64 v22; // r15
  __int64 v23; // r15
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r13
  int v28; // r9d
  unsigned int v29; // r10d
  int v30; // esi
  unsigned int v31; // r14d
  __int64 v32; // r12
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  __int16 v35; // r11
  unsigned int v36; // ecx
  int v37; // eax
  __int64 v38; // rcx
  char v39; // cl
  __int64 v40; // rdi
  unsigned int v41; // ebp
  unsigned int v42; // esi
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  char v46; // al
  __int64 v47; // rbp
  union _SLIST_HEADER *v48; // r15
  unsigned __int16 *v49; // r14
  __int64 v50; // rax
  int v51; // ecx
  int v52; // edi
  __int64 v53; // rsi
  __int64 v54; // rax
  KIRQL v55; // r13
  __int64 v56; // rdi
  signed __int32 v57; // eax
  unsigned int v58; // ecx
  __int64 v60; // rdi
  int v61; // [rsp+38h] [rbp-E0h]
  int v62; // [rsp+48h] [rbp-D0h]
  char v63; // [rsp+60h] [rbp-B8h] BYREF
  char v64; // [rsp+61h] [rbp-B7h]
  int v65; // [rsp+64h] [rbp-B4h]
  __int16 v66; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v67; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v68; // [rsp+78h] [rbp-A0h]
  __int64 v69; // [rsp+80h] [rbp-98h]
  __int64 v70; // [rsp+88h] [rbp-90h]
  __int64 v71; // [rsp+90h] [rbp-88h]
  unsigned int v72; // [rsp+98h] [rbp-80h]
  int v73; // [rsp+A0h] [rbp-78h]
  unsigned int v74; // [rsp+A4h] [rbp-74h]
  int v75; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v76; // [rsp+B0h] [rbp-68h]
  __int64 v77; // [rsp+B8h] [rbp-60h]
  __int64 v78; // [rsp+C0h] [rbp-58h]
  __int64 v79; // [rsp+C8h] [rbp-50h] BYREF
  int v84; // [rsp+140h] [rbp+28h]

  v10 = *(_QWORD *)(a1 + 16);
  v11 = -1073741823;
  v12 = 0;
  v13 = 0;
  v14 = *(_DWORD *)(a1 + 420);
  v76 = *(_QWORD *)(a2 + 184);
  v63 = 0;
  v75 = 0;
  v79 = 0LL;
  v66 = 0;
  v15 = HIDWORD(*(_QWORD *)(v10 + 136));
  LOBYTE(v15) = v15 & 1;
  v16 = a4;
  v71 = v15;
  v17 = *(_QWORD *)(a2 + 8);
  v67 = a6;
  v64 = 0;
  v73 = v14;
  v18 = *(_DWORD *)(v17 + 44);
  v74 = 0;
  v19 = *(_QWORD *)(v17 + 32) + v18;
  v68 = a5;
  v72 = a4;
  v78 = v19;
  if ( a10 )
  {
    *a10 = 0;
    v10 = *(_QWORD *)(a1 + 16);
  }
  if ( v14 )
  {
    v20 = *(unsigned int *)(a1 + 420);
    v21 = *(_BYTE *)(a1 + 419);
    v67 = v20;
    v22 = ((unsigned int)v16 & ((_DWORD)v20 - 1)) - 1LL + v20 + ((unsigned int)a5 & ((_DWORD)v20 - 1));
    if ( v21 )
      v23 = (unsigned int)(v16 >> v21) + (unsigned int)(v22 >> v21);
    else
      v23 = (unsigned int)(v22 / v20) + (unsigned int)(v16 / v20);
  }
  else
  {
    LODWORD(v23) = a4 / a6;
    v70 = a4 / a6;
    if ( !(a4 % a6) )
      goto LABEL_10;
    v23 = (unsigned int)(v23 + 1);
  }
  v70 = v23;
LABEL_10:
  v24 = 0LL;
  v65 = 0;
  v77 = 0LL;
  v69 = 0LL;
  do
  {
    v25 = (__int64)ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v10 + 888) + 8LL * a7));
    if ( !v25 )
    {
      v25 = sub_140114720(v10, a7);
      if ( !v25 )
      {
        if ( v24 )
        {
          do
          {
            v60 = *(_QWORD *)(v24 + 96);
            *(_QWORD *)(v24 + 88) = 0LL;
            *(_DWORD *)(v24 + 108) = 0;
            *(_DWORD *)(v24 + 104) = 0;
            ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v10 + 888) + 8LL * a7), (PSLIST_ENTRY)v24);
            v24 = v60;
          }
          while ( v60 );
        }
        sub_140118560(a1, a2, a7);
        return 2147483665LL;
      }
    }
    if ( v24 )
    {
      *(_QWORD *)(v77 + 96) = v25;
    }
    else
    {
      v24 = v25;
      v69 = v25;
    }
    v77 = v25;
    ++v65;
  }
  while ( v65 != (_DWORD)v23 );
  *(_QWORD *)(v25 + 96) = 0LL;
  v26 = v24;
  v27 = a1;
  v28 = 0;
  *(_DWORD *)(v24 + 116) = 0;
  *(_DWORD *)(v24 + 108) = 0;
  *(_DWORD *)(v24 + 48) = a4;
  *(_DWORD *)(v24 + 112) = 0;
  *(_WORD *)(v24 + 120) = 0;
  if ( (_DWORD)v23 )
  {
    v29 = v72;
    v30 = 0;
    v31 = v67;
    v32 = v78;
    while ( 1 )
    {
      v29 -= v13;
      v33 = v68;
      *(_DWORD *)(v26 + 104) = 1;
      *(_QWORD *)(v26 + 24) = a2;
      *(_DWORD *)(v26 + 112) = 0;
      *(_WORD *)(v26 + 32) = v23;
      *(_WORD *)(v26 + 34) = v28;
      *(_QWORD *)(v26 + 16) = a1;
      *(_DWORD *)(v26 + 48) = a4;
      *(_DWORD *)(v26 + 36) = v29;
      v68 = v13 + v33;
      *(_QWORD *)(v26 + 40) = v68;
      *(_DWORD *)(v26 + 56) = v18;
      *(_DWORD *)(v26 + 60) = v30;
      *(_QWORD *)(v26 + 80) = v32;
      if ( v28 )
        goto LABEL_26;
      if ( v73 && (v13 = v31, (v34 = a5 % v31) != 0) )
      {
        if ( v31 >= v31 - v34 )
          v13 = v31 - v34;
      }
      else
      {
LABEL_26:
        v13 = v29;
        if ( v31 < v29 )
          v13 = v31;
      }
      *(_DWORD *)(v26 + 52) = v13;
      if ( ++v28 >= (unsigned int)v23 )
        break;
      v35 = v18;
      v32 += v13;
      if ( (v18 & 0xFFF) != 0 )
      {
        v36 = v13 + v18;
        if ( v13 > 4096 - v18 )
          v36 &= 0xFFFu;
        v18 = v36;
      }
      else
      {
        v18 = v13 & 0xFFF;
      }
      v26 = *(_QWORD *)(v26 + 96);
      v37 = v30 + ((v13 + (unsigned __int64)(v35 & 0xFFF) + 4095) >> 12);
      v30 = v37 - 1;
      if ( (v18 & 0xFFF) == 0 )
        v30 = v37;
    }
    v24 = v69;
    v11 = -1073741823;
    v12 = v74;
  }
  v38 = v76;
  *(_QWORD *)(v24 + 72) = *(_QWORD *)(v76 + 24);
  _InterlockedExchange64((volatile __int64 *)(v38 + 24), v24);
  *(_QWORD *)(v24 + 64) = *(_QWORD *)(v38 + 8);
  _InterlockedExchange64((volatile __int64 *)(v38 + 8), 0x8765432100000003uLL);
  v39 = v71;
  if ( !(_BYTE)v71 )
  {
    v40 = v24;
    v41 = 0;
    if ( (_DWORD)v23 )
    {
      v42 = a7;
      while ( 1 )
      {
        v43 = sub_1401155A0(*(_QWORD *)(a1 + 16), a7);
        v44 = v43;
        if ( !v43 )
          break;
        v45 = a2;
        *(_QWORD *)(v43 + 40) = a2;
        v46 = *(_BYTE *)(v43 + 126) & 0xFE;
        *(_QWORD *)(v44 + 32) = a1;
        ++v41;
        *(_BYTE *)(v44 + 126) = v46 | (a3 != 0) | 2;
        *(_QWORD *)(v44 + 96) = *(_QWORD *)(v40 + 40);
        *(_QWORD *)(v44 + 104) = 0LL;
        *(_DWORD *)(v44 + 112) = 0;
        *(_DWORD *)(v44 + 116) = *(_DWORD *)(v40 + 52);
        *(_QWORD *)(v44 + 64) = 0LL;
        *(_QWORD *)(v44 + 72) = 0LL;
        *(_QWORD *)(v44 + 80) = *(_QWORD *)(v40 + 80);
        *(_QWORD *)(v44 + 88) = v40;
        *(_QWORD *)(v40 + 88) = v44;
        v40 = *(_QWORD *)(v40 + 96);
        if ( v41 >= (unsigned int)v23 )
        {
          v39 = v71;
          v47 = v24;
          v84 = 0;
          goto LABEL_53;
        }
      }
      v11 = -1073741670;
LABEL_45:
      v48 = a8;
      v49 = a9;
      goto LABEL_46;
    }
  }
  v84 = 0;
  v47 = v24;
  if ( !(_DWORD)v23 )
    goto LABEL_45;
  v42 = a7;
  v45 = a2;
LABEL_53:
  v49 = a9;
  v48 = a8;
  while ( !v39 )
  {
    v50 = *(_QWORD *)(v47 + 88);
    v67 = *(_QWORD *)(v45 + 8);
    v76 = v50;
    v51 = *(_DWORD *)(v50 + 116);
    v52 = *(unsigned __int16 *)(v50 + 124);
    v53 = *(_QWORD *)(v50 + 16);
    v68 = *(_QWORD *)(v50 + 80);
    v54 = *(_QWORD *)(v27 + 16);
    v65 = v51;
    v69 = v54;
    v55 = KfRaiseIrql(2u);
    v62 = v52;
    v56 = v76;
    LOBYTE(v61) = a3 == 0;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int64, int, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int, __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v69 + 128) + 1144LL) + 8LL) + 112LL))(
            *(_QWORD *)(*(_QWORD *)(v69 + 128) + 1144LL),
            *(_QWORD *)(*(_QWORD *)(v69 + 128) + 8LL),
            v67,
            v68,
            v65,
            sub_1401172A0,
            v76,
            v61,
            v53,
            v62);
    if ( v11 == -1073741789 )
    {
      LOBYTE(v61) = a3 == 0;
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int64, int, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v69 + 128) + 1144LL) + 8LL) + 88LL))(
              *(_QWORD *)(*(_QWORD *)(v69 + 128) + 1144LL),
              *(_QWORD *)(*(_QWORD *)(v69 + 128) + 8LL),
              v67,
              v68,
              v65,
              sub_1401172A0,
              v56,
              v61);
    }
    if ( v55 < 2u )
      KeLowerIrql(v55);
    if ( v11 < 0 )
    {
      *(_DWORD *)(v47 + 112) = v11;
      _InterlockedExchange((volatile __int32 *)(v47 + 104), 5);
      _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 112), v11, 0);
      if ( _InterlockedIncrement((volatile signed __int32 *)(v24 + 116)) >= *(unsigned __int16 *)(v24 + 32) )
        goto LABEL_76;
      v63 = 0;
      if ( !v12 )
        goto LABEL_46;
      v27 = a1;
    }
    else
    {
      v27 = a1;
      v11 = 259;
      ++v12;
    }
LABEL_68:
    v47 = *(_QWORD *)(v47 + 96);
    if ( ++v84 >= (unsigned int)v70 )
      goto LABEL_46;
    v42 = a7;
    v45 = a2;
    v39 = v71;
  }
  v57 = sub_14011DA00(v47, v42, (__int64)v48, v49, (bool *)&v63, &v79, &v75, &v66, v64);
  v11 = v57;
  if ( v57 == 259 )
  {
    v49 = 0LL;
    v48 = 0LL;
    ++v12;
    if ( a10 )
      *a10 = 1;
    v64 = v12 % *(unsigned __int8 *)(*(_QWORD *)(v27 + 16) + 1730LL) == 0;
    goto LABEL_68;
  }
  if ( v57 == -2147483631 )
  {
    ++v12;
    goto LABEL_46;
  }
  if ( v63 || !v12 )
    goto LABEL_77;
  if ( *(unsigned __int16 *)(v24 + 32) - *(unsigned __int16 *)(v47 + 34) == 1 )
    goto LABEL_48;
  v58 = *(unsigned __int16 *)(v24 + 32) - *(unsigned __int16 *)(v47 + 34) - 1;
  if ( (int)(_InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 116), v58) + v58) >= *(unsigned __int16 *)(v24 + 32) )
  {
LABEL_76:
    v63 = 1;
    goto LABEL_77;
  }
LABEL_46:
  if ( v63 || !v12 )
  {
LABEL_77:
    sub_1401152F0(*(_QWORD **)(a1 + 16), v24);
    sub_140115430(*(_QWORD *)(a1 + 16), a7, v24, a2);
  }
  else
  {
LABEL_48:
    if ( (int)(v11 + 0x80000000) >= 0 && v11 != -2147483631 )
      v11 = 259;
  }
  if ( !(_BYTE)v71 && v11 == 259 && v49 )
    ExpInterlockedPushEntrySList(v48 + 4, (PSLIST_ENTRY)(v48[2].Alignment + ((unsigned __int64)*v49 << 7)));
  return (unsigned int)v11;
}
