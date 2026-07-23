/*
 * XREFs of MiBuildMdlForMappedFileFault @ 0x140370990
 * Callers:
 *     MiResolveMappedFileFault @ 0x140371380 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     RtlSetAllBitsEx @ 0x1403711E0 (RtlSetAllBitsEx.c)
 *     MiAdvanceFaultList @ 0x140371250 (MiAdvanceFaultList.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     MiProtectionToCacheAttribute @ 0x140374020 (MiProtectionToCacheAttribute.c)
 *     MiGetHardFaultPages @ 0x140374708 (MiGetHardFaultPages.c)
 *     MiReduceMappedFileReadBehind @ 0x1404ABF14 (MiReduceMappedFileReadBehind.c)
 *     MiReduceMappedFileReadAhead @ 0x1404ACCEC (MiReduceMappedFileReadAhead.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
  unsigned __int64 v28; // rsi
  __int64 v29; // rdx
  char *v30; // r8
  unsigned __int64 i; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // r11
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rdi
  unsigned __int64 *v37; // r15
  __int16 v38; // r8
  __int64 v39; // r8
  __int64 v40; // rsi
  __int64 v41; // rdi
  unsigned __int64 v42; // rax
  unsigned __int64 ContainingPageTable; // r13
  unsigned int v44; // r14d
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  signed __int64 v47; // rcx
  signed __int64 v48; // rax
  signed __int64 v49; // rcx
  unsigned int v50; // ecx
  unsigned __int64 v51; // rdi
  __int64 result; // rax
  unsigned int v53; // r8d
  unsigned __int64 v54; // rdx
  unsigned __int64 j; // rax
  unsigned __int64 *v56; // rax
  __int64 v57; // rdi
  unsigned __int64 v58; // rsi
  __int64 v59; // rsi
  __int64 v60; // r8
  unsigned int v61; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v63; // [rsp+48h] [rbp-B8h]
  __int64 v64; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v65; // [rsp+58h] [rbp-A8h]
  _QWORD *v66; // [rsp+60h] [rbp-A0h]
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
  v64 = 0LL;
  v70 = 0LL;
  v69 = 0LL;
  if ( a6 == -1 )
  {
    v17 = (_QWORD *)v69;
    v66 = (_QWORD *)v69;
  }
  else
  {
    v17 = (_QWORD *)(48 * a6 - 0x220000000000LL);
    v18 = v69;
    v66 = v17;
    *(_QWORD *)&v69 = v17;
    *v17 = v18;
    if ( !*((_QWORD *)&v69 + 1) )
      *((_QWORD *)&v69 + 1) = 48 * a6 - 0x220000000000LL;
    v64 = 1LL;
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
      if ( qword_140E2D8C0 && (v12 & 0x10) == 0 )
        v19 = v12 & qword_140E2D8C8;
      v73 = 48 * ((v19 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v19 = *(_QWORD *)(v73 + 16);
    }
    v20 = v72;
    v21 = a1;
    MiGetHardFaultPages((unsigned int)&v69, v16, a4, (_DWORD)v72, v10, a1, v19, a10);
    v17 = (_QWORD *)v69;
    v64 = v70;
    v66 = (_QWORD *)v69;
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
    v57 = ((unsigned __int64)v74 >> 3) & 0x1FF;
    v58 = v15 - MiReduceMappedFileReadBehind(&v79, v57, v15 - (unsigned int)v70);
    if ( v22 != v58 )
      MiReduceMappedFileReadAhead(&v79, (unsigned int)v57, v58 - v22);
  }
  v23 = MiProtectionToCacheAttribute(a7);
  v24 = v79;
  v25 = (__int64 *)(v21 + 320);
  v26 = 0LL;
  v71 = v23;
  if ( v79 )
  {
    v27 = a2 & 0xFFFFFFFFFFFFF000uLL;
    v63 = a2 & 0xFFFFFFFFFFFFF000uLL;
    do
    {
      if ( v24 <= v26 )
      {
        v35 = 0LL;
        v67 = v26;
        v65 = 0LL;
        v34 = v26;
      }
      else
      {
        v65 = 0LL;
        v28 = (unsigned __int64)v80 + 8 * ((v24 - 1) >> 6);
        v29 = *((_QWORD *)v80 + (v26 >> 6)) | ((1LL << v26) - 1);
        v30 = (char *)v80 + 8 * (v26 >> 6);
        for ( i = (unsigned __int64)(v30 + 8); ; i += 8LL )
        {
          v32 = ~v29;
          if ( v32 )
            break;
          if ( i > v28 )
          {
            v35 = 0LL;
            v34 = v24;
            v67 = v24;
            goto LABEL_23;
          }
          v29 = *((_QWORD *)v30 + 1);
          v30 += 8;
        }
        _BitScanForward64((unsigned __int64 *)&v33, v32);
        v34 = (unsigned int)v33 + ((v30 - (char *)v80) >> 3 << 6);
        v67 = v34;
        if ( v34 <= v24 )
        {
          for ( j = ~(v32 | ((1LL << v33) - 1)); !j; j = *v56 )
          {
            v56 = (unsigned __int64 *)(v30 + 8);
            if ( (unsigned __int64)(v30 + 8) > v28 )
            {
              LODWORD(j) = 64;
              goto LABEL_89;
            }
            v30 += 8;
          }
          _BitScanForward64(&j, j);
LABEL_89:
          v27 = v63;
          v59 = v24;
          v60 = (v30 - (char *)v80) >> 3 << 6;
          if ( v60 + (unsigned __int64)(unsigned int)j <= v24 )
            v59 = v60 + (unsigned int)j;
          v35 = v59 - v34;
          v65 = v35;
        }
        else
        {
          v35 = 0LL;
          v34 = v24;
          v27 = v63;
          v67 = v24;
        }
      }
LABEL_23:
      if ( v26 )
      {
        v53 = 0;
        v54 = v34 - v26;
        if ( v34 - v26 >= 2 && (v25 > &qword_140E36178 || &v25[(unsigned int)(v54 - 1)] < &qword_140E36178) )
        {
          do
            v53 += 2;
          while ( v53 < (v54 & 0xFFFFFFFFFFFFFFFEuLL) );
          memset64(v25, qword_140E36178, v54 & 0xFFFFFFFE);
          v25 += (unsigned int)v54 & 0xFFFFFFFE;
        }
        for ( ; v53 < v54; ++v25 )
        {
          ++v53;
          *v25 = qword_140E36178;
        }
        *(_DWORD *)(v21 + 188) |= 0x40000u;
      }
      v36 = v67;
      v37 = (unsigned __int64 *)(v27 + 8 * v34);
      RtlSetBitsEx(&v79, v67, v35);
      v61 = 0;
      if ( v35 )
      {
        v38 = v12;
        v12 = v64;
        v39 = v38 & 0x400;
        v76 = (unsigned int)v39;
        v75 = v21 + 32;
        do
        {
          v40 = (__int64)v17;
          if ( v17 )
          {
            --v12;
            v66 = (_QWORD *)*v17;
            v70 = v12;
          }
          v41 = (__int64)(v17 + 0x44000000000LL) / 48;
          *v25++ = v41;
          v42 = *v37;
          if ( !v39 )
            v42 = *(_QWORD *)(v73 + 16);
          v17[2] = v42;
          if ( v72 && *v72 == 1 )
            MiAdvanceFaultList(v72);
          ContainingPageTable = MiGetContainingPageTable((ULONG_PTR)v37);
          v44 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v44 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v44);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v40 + 24) < 0 );
          }
          *(_QWORD *)(v40 + 24) &= 0xFFFFFF0000000000uLL;
          *(_QWORD *)(v40 + 40) |= 0x8000000000000000uLL;
          *(_DWORD *)(v40 + 32) = *(_DWORD *)(v40 + 32) & 0xFFFF0000 | 1;
          *(_DWORD *)(v40 + 32) |= 0x200000u;
          *(_QWORD *)v40 = v75;
          v45 = *(_DWORD *)(a1 + 188);
          if ( v37 == v74 )
            v46 = v45 >> 11;
          else
            v46 = v45 >> 14;
          if ( (*(_QWORD *)(v40 + 40) & 0x20000000000000LL) == 0 )
            *(_DWORD *)(v40 + 32) = ((char)v46 << 24) ^ (*(_DWORD *)(v40 + 32) ^ ((char)v46 << 24)) & 0xF8FFFFFF;
          v47 = *(_QWORD *)(v40 + 40);
          v48 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v40 + 40),
                  ContainingPageTable ^ (v47 ^ ContainingPageTable) & 0xFFFFFF0000000000uLL,
                  v47);
          if ( v47 != v48 )
          {
            do
            {
              v49 = v48;
              v48 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v40 + 40),
                      ContainingPageTable ^ (v48 ^ ContainingPageTable) & 0xFFFFFF0000000000uLL,
                      v48);
            }
            while ( v49 != v48 );
          }
          v50 = v71;
          *(_QWORD *)(v40 + 8) = v37;
          *(_DWORD *)(v40 + 32) = *(_DWORD *)(v40 + 32) & 0xFFF8FFFF | 0x20000;
          if ( ((*(_DWORD *)(v40 + 32) >> 22) & 3) != v50 )
            MiChangePageAttribute(v40, v50);
          *(_QWORD *)(v40 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
          *(_QWORD *)(v40 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v39 = v76;
          if ( v76 )
          {
            v51 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFF0000000000C1FuLL | (32
                                                                         * (a7 & 0x1F | ((v41 & 0xFFFFFFFFFFLL) << 7) | 0x40));
            if ( qword_140E2D8C0 )
            {
              if ( (qword_140E2D8C0 & v51) != 0 )
                v51 |= 0x10uLL;
              else
                v51 |= qword_140E2D8C0;
            }
            *v37 = v51;
          }
          ++v37;
          v35 = v65;
          v17 = v66;
          ++v61;
        }
        while ( v61 < v65 );
        v21 = a1;
        v36 = v67;
        v64 = v12;
        LOWORD(v12) = v77;
      }
      if ( !v70 )
        break;
      v27 = v63;
      v26 = v35 + v36;
      v24 = v79;
    }
    while ( v26 != v79 );
  }
  result = (unsigned int)v78;
  *(_DWORD *)(v21 + 184) = (unsigned int)(((__int64)v25 - v21 - 320) >> 3) << 12;
  return result;
}
