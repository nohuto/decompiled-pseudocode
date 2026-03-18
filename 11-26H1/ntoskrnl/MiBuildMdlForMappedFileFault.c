/*
 * XREFs of MiBuildMdlForMappedFileFault @ 0x14036EBF0
 * Callers:
 *     MiResolveMappedFileFault @ 0x14036F5D0 (MiResolveMappedFileFault.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiChangePageAttribute @ 0x1402D8660 (MiChangePageAttribute.c)
 *     MiGetContainingPageTable @ 0x1402D9BF0 (MiGetContainingPageTable.c)
 *     RtlSetAllBitsEx @ 0x14036F430 (RtlSetAllBitsEx.c)
 *     MiAdvanceFaultList @ 0x14036F4A0 (MiAdvanceFaultList.c)
 *     RtlSetBitsEx @ 0x14036F510 (RtlSetBitsEx.c)
 *     MiProtectionToCacheAttribute @ 0x140372270 (MiProtectionToCacheAttribute.c)
 *     MiGetHardFaultPages @ 0x140372958 (MiGetHardFaultPages.c)
 *     MiReduceMappedFileReadBehind @ 0x1404B1B98 (MiReduceMappedFileReadBehind.c)
 *     MiReduceMappedFileReadAhead @ 0x1404B3720 (MiReduceMappedFileReadAhead.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall MiBuildMdlForMappedFileFault(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned int a7,
        _BYTE *a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rdi
  __int64 v12; // rbx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdx
  _QWORD *v17; // r14
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  _BYTE *v20; // r15
  __int64 v21; // r13
  __int64 v22; // r12
  unsigned int v23; // eax
  unsigned __int64 v24; // rdi
  __int64 *v25; // r12
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // r11
  __int64 v28; // r15
  unsigned __int64 v29; // rsi
  __int64 v30; // rdx
  char *v31; // r8
  unsigned __int64 i; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // r10
  unsigned __int64 v35; // rsi
  unsigned __int64 *v36; // r15
  __int16 v37; // r8
  __int64 v38; // r8
  __int64 v39; // rsi
  __int64 v40; // rdi
  unsigned __int64 v41; // rax
  unsigned __int64 ContainingPageTable; // r13
  unsigned int v43; // r14d
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  signed __int64 v46; // rcx
  signed __int64 v47; // rax
  signed __int64 v48; // rcx
  unsigned int v49; // ecx
  unsigned __int64 v50; // rdi
  __int64 result; // rax
  unsigned int v52; // r8d
  unsigned __int64 v53; // rdx
  unsigned __int64 j; // rax
  unsigned __int64 *v55; // rax
  __int64 v56; // rsi
  __int64 v57; // r8
  bool v58; // cc
  __int64 v59; // rdi
  unsigned __int64 v60; // rsi
  unsigned int v61; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v62; // [rsp+48h] [rbp-B8h]
  __int64 v63; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v64; // [rsp+58h] [rbp-A8h]
  _QWORD *v65; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v67; // [rsp+68h] [rbp-98h]
  __int128 v69; // [rsp+78h] [rbp-88h] BYREF
  __int64 v70; // [rsp+88h] [rbp-78h]
  unsigned int v71; // [rsp+90h] [rbp-70h]
  _BYTE *v72; // [rsp+98h] [rbp-68h]
  __int64 v73; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v74; // [rsp+A8h] [rbp-58h]
  __int64 v75; // [rsp+B0h] [rbp-50h]
  __int64 v76; // [rsp+B8h] [rbp-48h]
  __int64 v77; // [rsp+C0h] [rbp-40h]
  __int64 v78; // [rsp+C8h] [rbp-38h]
  __int64 v79; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD *v80; // [rsp+D8h] [rbp-28h]
  _OWORD v81[4]; // [rsp+E0h] [rbp-20h] BYREF

  v10 = a9;
  v12 = *(_QWORD *)(a1 + 168);
  v74 = *(unsigned __int64 **)(a1 + 240);
  v72 = a8;
  v80 = v81;
  memset(v81, 0, sizeof(v81));
  v77 = v12;
  v79 = 512LL;
  RtlSetAllBitsEx(&v79);
  v14 = a2;
  v15 = 0LL;
  v73 = 0LL;
  if ( a2 <= a3 )
  {
    do
    {
      if ( *(_QWORD *)v14 == v12 )
      {
        *((_BYTE *)v80 + (((v14 >> 3) & 0x1FF) >> 3)) &= ~(1 << ((v14 >> 3) & 7));
        ++v15;
      }
      v14 += 8LL;
    }
    while ( v14 <= a3 );
    v10 = a9;
  }
  v16 = v15;
  if ( v15 > a5 )
    v16 = a5;
  v63 = 0LL;
  v70 = 0LL;
  v69 = 0LL;
  if ( a6 == -1 )
  {
    v17 = (_QWORD *)v69;
    v65 = (_QWORD *)v69;
  }
  else
  {
    v17 = (_QWORD *)(48 * a6 - 0x220000000000LL);
    v18 = v69;
    v65 = v17;
    *(_QWORD *)&v69 = v17;
    *v17 = v18;
    if ( !*((_QWORD *)&v69 + 1) )
      *((_QWORD *)&v69 + 1) = 48 * a6 - 0x220000000000LL;
    v63 = 1LL;
    v70 = 1LL;
  }
  if ( v70 == v16 )
  {
    v21 = a1;
    v20 = v72;
  }
  else
  {
    v19 = v12;
    if ( (v12 & 0x400) == 0 )
    {
      if ( qword_140E2D740 && (v12 & 0x10) == 0 )
        v19 = v12 & qword_140E2D748;
      v73 = 48 * ((v19 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v19 = *(_QWORD *)(v73 + 16);
    }
    v20 = v72;
    v21 = a1;
    MiGetHardFaultPages((unsigned int)&v69, v16, a4, (_DWORD)v72, v10, a1, v19, a10);
    v17 = (_QWORD *)v69;
    v63 = v70;
    v65 = (_QWORD *)v69;
  }
  v22 = (unsigned int)v70;
  v78 = (unsigned int)v70;
  if ( (unsigned int)v70 != v15 )
  {
    if ( !(_DWORD)v70 )
    {
      if ( v20 && !*(_QWORD *)(v10 + 128) )
        v20[1] = 2;
      return 0LL;
    }
    v59 = ((unsigned __int64)v74 >> 3) & 0x1FF;
    v60 = v15 - MiReduceMappedFileReadBehind(&v79, v59, v15 - (unsigned int)v70);
    if ( v22 != v60 )
      MiReduceMappedFileReadAhead(&v79, (unsigned int)v59, v60 - v22);
  }
  v23 = MiProtectionToCacheAttribute(a7);
  v24 = v79;
  v25 = (__int64 *)(v21 + 320);
  v26 = 0LL;
  v71 = v23;
  if ( v79 )
  {
    v27 = a2 & 0xFFFFFFFFFFFFF000uLL;
    v67 = a2 & 0xFFFFFFFFFFFFF000uLL;
    do
    {
      if ( v24 <= v26 )
      {
        v35 = 0LL;
        v62 = v26;
        v64 = 0LL;
        v24 = v26;
      }
      else
      {
        v28 = 0LL;
        v64 = 0LL;
        v29 = (unsigned __int64)v80 + 8 * ((v24 - 1) >> 6);
        v30 = *((_QWORD *)v80 + (v26 >> 6)) | ((1LL << v26) - 1);
        v31 = (char *)v80 + 8 * (v26 >> 6);
        for ( i = (unsigned __int64)(v31 + 8); ; i += 8LL )
        {
          v33 = ~v30;
          if ( v33 )
            break;
          if ( i > v29 )
            goto LABEL_22;
          v30 = *((_QWORD *)v31 + 1);
          v31 += 8;
        }
        _BitScanForward64((unsigned __int64 *)&v34, v33);
        v62 = ((v31 - (char *)v80) >> 3 << 6) + (unsigned int)v34;
        if ( v62 > v24 )
        {
LABEL_22:
          v62 = v24;
          v35 = 0LL;
          goto LABEL_23;
        }
        for ( j = ~(v33 | ((1LL << v34) - 1)); !j; j = *v55 )
        {
          v28 += 64LL;
          v55 = (unsigned __int64 *)(v31 + 8);
          if ( (unsigned __int64)(v31 + 8) > v29 )
          {
            LODWORD(j) = 64;
            goto LABEL_83;
          }
          v31 += 8;
        }
        _BitScanForward64(&j, j);
LABEL_83:
        v56 = v24;
        v57 = (v31 - (char *)v80) >> 3 << 6;
        v58 = v57 + (unsigned __int64)(unsigned int)j <= v24;
        v24 = v62;
        if ( v58 )
          v56 = v57 + (unsigned int)j;
        v35 = v56 - v62;
        v64 = v35;
LABEL_23:
        v27 = v67;
      }
      if ( v26 )
      {
        v52 = 0;
        v53 = v24 - v26;
        if ( v24 - v26 >= 2 && (v25 > &qword_140E35FF8 || &v25[(unsigned int)(v53 - 1)] < &qword_140E35FF8) )
        {
          do
            v52 += 2;
          while ( v52 < (v53 & 0xFFFFFFFFFFFFFFFEuLL) );
          memset64(v25, qword_140E35FF8, v53 & 0xFFFFFFFE);
          v25 += (unsigned int)v53 & 0xFFFFFFFE;
          v24 = v62;
        }
        for ( ; v52 < v53; ++v25 )
        {
          ++v52;
          *v25 = qword_140E35FF8;
        }
        *(_DWORD *)(v21 + 188) |= 0x40000u;
      }
      v36 = (unsigned __int64 *)(v27 + 8 * v24);
      RtlSetBitsEx(&v79, v24, v35);
      v61 = 0;
      if ( v35 )
      {
        v37 = v12;
        v12 = v63;
        v38 = v37 & 0x400;
        v76 = (unsigned int)v38;
        v75 = v21 + 32;
        do
        {
          v39 = (__int64)v17;
          if ( v17 )
          {
            --v12;
            v65 = (_QWORD *)*v17;
            v70 = v12;
          }
          v40 = (__int64)(v17 + 0x44000000000LL) / 48;
          *v25++ = v40;
          v41 = *v36;
          if ( !v38 )
            v41 = *(_QWORD *)(v73 + 16);
          v17[2] = v41;
          if ( v72 && *v72 == 1 )
            MiAdvanceFaultList(v72);
          ContainingPageTable = MiGetContainingPageTable((ULONG_PTR)v36);
          v43 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v43 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v43);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v39 + 24) < 0 );
          }
          *(_QWORD *)(v39 + 24) &= 0xFFFFFF0000000000uLL;
          *(_QWORD *)(v39 + 40) |= 0x8000000000000000uLL;
          *(_DWORD *)(v39 + 32) = *(_DWORD *)(v39 + 32) & 0xFFFF0000 | 1;
          *(_DWORD *)(v39 + 32) |= 0x200000u;
          *(_QWORD *)v39 = v75;
          v44 = *(_DWORD *)(a1 + 188);
          if ( v36 == v74 )
            v45 = v44 >> 11;
          else
            v45 = v44 >> 14;
          if ( (*(_QWORD *)(v39 + 40) & 0x20000000000000LL) == 0 )
            *(_DWORD *)(v39 + 32) = ((char)v45 << 24) ^ (*(_DWORD *)(v39 + 32) ^ ((char)v45 << 24)) & 0xF8FFFFFF;
          v46 = *(_QWORD *)(v39 + 40);
          v47 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v39 + 40),
                  ContainingPageTable ^ (v46 ^ ContainingPageTable) & 0xFFFFFF0000000000uLL,
                  v46);
          if ( v46 != v47 )
          {
            do
            {
              v48 = v47;
              v47 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v39 + 40),
                      ContainingPageTable ^ (v47 ^ ContainingPageTable) & 0xFFFFFF0000000000uLL,
                      v47);
            }
            while ( v48 != v47 );
          }
          v49 = v71;
          *(_QWORD *)(v39 + 8) = v36;
          *(_DWORD *)(v39 + 32) = *(_DWORD *)(v39 + 32) & 0xFFF8FFFF | 0x20000;
          if ( ((*(_DWORD *)(v39 + 32) >> 22) & 3) != v49 )
            MiChangePageAttribute(v39, v49);
          *(_QWORD *)(v39 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
          *(_QWORD *)(v39 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v38 = v76;
          if ( v76 )
          {
            v50 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFF0000000000C1FuLL | (32
                                                                         * (a7 & 0x1F | ((v40 & 0xFFFFFFFFFFLL) << 7) | 0x40));
            if ( qword_140E2D740 )
            {
              if ( (qword_140E2D740 & v50) != 0 )
                v50 |= 0x10uLL;
              else
                v50 |= qword_140E2D740;
            }
            *v36 = v50;
          }
          ++v36;
          v35 = v64;
          v17 = v65;
          ++v61;
        }
        while ( v61 < v64 );
        v21 = a1;
        v24 = v62;
        v63 = v12;
        LOWORD(v12) = v77;
      }
      if ( !v70 )
        break;
      v27 = v67;
      v26 = v35 + v24;
      v24 = v79;
    }
    while ( v26 != v79 );
  }
  result = (unsigned int)v78;
  *(_DWORD *)(v21 + 184) = (unsigned int)(((__int64)v25 - v21 - 320) >> 3) << 12;
  return result;
}
