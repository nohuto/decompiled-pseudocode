/*
 * XREFs of sub_140CAEB24 @ 0x140CAEB24
 * Callers:
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     KeKvaShadowingActive @ 0x1404DF8A8 (KeKvaShadowingActive.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KeGuardDispatchICall @ 0x140C816F0 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_140CAEB24(__int64 a1, int a2, __int64 a3, int a4)
{
  PIMAGE_NT_HEADERS v5; // rax
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  int v11; // eax
  bool v12; // zf
  char v13; // cl
  unsigned int v14; // r9d
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // r8
  BOOL v20; // r11d
  char v26; // r9
  char v27; // r10
  unsigned __int64 v33; // rax
  BOOL v34; // ecx
  _DWORD *v35; // r8
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  _DWORD *v38; // r10
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  unsigned __int128 v42; // rax
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // r9d
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  int v48; // r8d
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  BOOL v51; // ecx
  unsigned __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // ebx
  unsigned int v58; // ecx
  int v59; // eax
  int v60; // r9d
  char v61; // cl
  int v62; // eax
  unsigned __int64 v63; // rax
  __int64 v64; // rcx
  unsigned int v65; // r9d
  unsigned int v66; // r9d
  int v67; // ebx
  __int64 v68; // r14
  _QWORD *v69; // rax
  void *v70; // rcx
  __int64 v71; // rdx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned __int64 *v73; // rcx
  int v74; // edx
  int v75; // r8d
  _KIDTENTRY64 *v76; // r10
  _KIDTENTRY64 *v77; // rbx
  __int64 v78; // r9
  unsigned __int64 *v79; // rcx
  int v80; // eax
  unsigned __int8 v81; // dl
  unsigned __int64 v82; // rcx
  unsigned __int64 v83; // rax
  _KIDTENTRY64 *IdtBase; // [rsp+30h] [rbp-58h]
  int v87; // [rsp+A0h] [rbp+18h]
  BOOL v88; // [rsp+A8h] [rbp+20h]
  int v89; // [rsp+A8h] [rbp+20h]
  int v90; // [rsp+A8h] [rbp+20h]
  int v91; // [rsp+A8h] [rbp+20h]

  v87 = a3;
  if ( a4 )
  {
    *(_WORD *)((unsigned int)KeGuardDispatchICall - a2 + a3) = -7937;
    *(_BYTE *)((unsigned int)KeGuardCheckICall - a2 + a3) = -61;
  }
  *(_QWORD *)(a1 + 2280) = 0x140000000uLL;
  v5 = RtlImageNtHeader((PVOID)0x140000000LL);
  *(_QWORD *)(a1 + 2296) = v5;
  *(_QWORD *)(a1 + 2288) = 0x140000000LL + v5->OptionalHeader.SizeOfImage;
  *(_DWORD *)(a1 + 2252) = dword_140FFC740;
  *(_DWORD *)(a1 + 2256) = dword_140FFC778;
  *(_DWORD *)(a1 + 2260) = KeIstStackSize;
  if ( (_DWORD)qword_140FFC748 != 8 )
    KeBugCheckEx(__ROR4__(-402653175, 123), 4uLL, 0LL, qword_140FFC748, 8uLL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  *(_QWORD *)(a1 + 2264) = *(_QWORD *)(*(unsigned int *)(a1 + 2256)
                                     + *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(a1 + 1136))(254LL));
  __writecr8(CurrentIrql);
  *(_WORD *)(a1 + 2200) = -12472;
  IdtBase = KeGetPcr()->IdtBase;
  *(_KIDTENTRY64 *)(a1 + 2152) = IdtBase[1];
  *(_KIDTENTRY64 *)(a1 + 2168) = IdtBase[2];
  *(_KIDTENTRY64 *)(a1 + 2184) = IdtBase[18];
  v7 = __rdtsc();
  v8 = __ROR8__(v7, 3);
  v9 = ((0x7010008004002001LL * (v8 ^ v7)) ^ (((v8 ^ v7) * (unsigned __int128)0x7010008004002001uLL) >> 64)) % 0xB;
  if ( v9 > 5 )
  {
    switch ( v9 )
    {
      case 6u:
        v14 = __ROR4__(__ROL4__(1464235086, 24), 24);
        break;
      case 7u:
        v10 = 1;
        v11 = 1666411585;
        goto LABEL_12;
      case 8u:
        v10 = 2;
        v11 = 1113876033;
        goto LABEL_12;
      case 9u:
        v13 = 33;
        v11 = 1480806214;
        goto LABEL_16;
      default:
        v15 = __rdtsc();
        v16 = __ROR8__(v15, 3);
        v17 = (((v16 ^ v15) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * (v16 ^ v15));
        v14 = ((((((v17 % 0x1A + 97) << 8) | ((v17 >> 5) % 0x1A + 65)) << 8) | ((v17 >> 10) % 0x1A + 97)) << 8) | ((v17 >> 15) % 0x1A + 65);
        break;
    }
  }
  else if ( v9 == 5 )
  {
    v14 = __ROR4__(__ROL4__(1766089295, 5), 5);
  }
  else if ( v9 )
  {
    if ( v9 != 1 )
    {
      if ( v9 != 2 )
      {
        if ( v9 == 3 )
        {
          v13 = 15;
          v11 = 1920421956;
        }
        else
        {
          v10 = v9 % 3;
          if ( v9 % 3 )
          {
            v11 = 1886800198;
            goto LABEL_12;
          }
          v13 = 3 * (v9 + 2);
          v11 = 1886800198;
        }
LABEL_16:
        v14 = __ROR4__(__ROL4__(v11, v13), v13);
        goto LABEL_31;
      }
      v10 = 2;
      v11 = 1634559043;
LABEL_12:
      v12 = v10 == 1;
      v13 = v9;
      if ( v12 )
      {
        v14 = __ROL4__(__ROR4__(v11, v9), v9);
        goto LABEL_31;
      }
      goto LABEL_16;
    }
    v14 = __ROL4__(__ROR4__(1700422467, 1), 1);
  }
  else
  {
    v14 = __ROR4__(__ROL4__(1665295171, 6), 6);
  }
LABEL_31:
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 256))(64LL, 432LL, v14);
  *(_QWORD *)(a1 + 2304) = v18;
  if ( !v18 )
    return 0LL;
  *(_QWORD *)(a1 + 2304) = (v18 + 128) & 0xFFFFFFFFFFFFFF80uLL;
  *(_DWORD *)(a1 + 2204) = -2025323249;
  *(_DWORD *)(a1 + 2208) = 1686184972;
  *(_DWORD *)(a1 + 2212) = -16838620;
  *(_DWORD *)(a1 + 2216) = -817299457;
  *(_BYTE *)(a1 + 2202) = -61;
  v19 = *(_QWORD *)(a1 + 2016);
  v20 = 0;
  if ( *(_BYTE *)(v19 + *(_QWORD *)(a1 + 1656)) == *(_BYTE *)(a1 + 1664) )
  {
    _RAX = 0LL;
    __asm { cpuid }
    v26 = *(_BYTE *)(v19 + *(_QWORD *)(a1 + 1648));
    v27 = *(_BYTE *)(v19 + *(_QWORD *)(a1 + 1640));
    if ( (unsigned int)_RAX >= 7 )
    {
      _RAX = 7LL;
      __asm { cpuid }
      v20 = (_RBX & 0x800) != 0;
    }
    if ( *(_BYTE *)(v19 + *(_QWORD *)(a1 + 1632)) == 6
      && (v26 == 60 && v27 == 3 || v26 == 63 && v27 == 2 || v26 == 69 && v27 == 1 || v26 == 70 && v27 == 1) )
    {
      v20 = 0;
    }
  }
  if ( v20 )
    *(_BYTE *)(a1 + 2203) |= 4u;
  if ( (unsigned int)KeKvaShadowingActive() )
    *(_BYTE *)(a1 + 2203) |= 8u;
  v33 = __readcr4();
  if ( (v33 & 0x100000000LL) != 0 )
    *(_DWORD *)(a1 + 2524) |= 0x800000u;
  if ( (v33 & 0x200000) != 0 )
    *(_BYTE *)(a1 + 2203) |= 0x40u;
  *(_DWORD *)(a1 + 2220) = 606896968;
  *(_WORD *)(a1 + 2224) = 18434;
  *(_BYTE *)(a1 + 2226) = -49;
  v34 = MEMORY[0xFFFFF78000000289] != 0;
  if ( (NtBuildNumber & 0xF0000000) == 0xC0000000 )
    v34 = 1;
  v88 = v34;
  v35 = (_DWORD *)(a1 + 2520);
  if ( (*(_DWORD *)(a1 + 2520) & 0x8000000) == 0 )
  {
    *(_DWORD *)(*(unsigned int *)(a1 + 2060) + a1 + 11) = -*(_DWORD *)(a1 + 2060);
    v36 = __rdtsc();
    v37 = __ROR8__(v36, 3);
    v38 = (_DWORD *)(a1 + 2520);
    if ( !(((0x7010008004002001LL * (v37 ^ v36)) ^ (((v37 ^ v36) * (unsigned __int128)0x7010008004002001uLL) >> 64))
         % 0xA)
      && (*v35 & 0x40008000) == 0
      && *(_DWORD *)(a1 + 2136) != 7 )
    {
      *(_BYTE *)(a1 + 2203) |= 1u;
      v38 = (_DWORD *)(a1 + 2520);
    }
    v39 = __rdtsc();
    v40 = __ROR8__(v39, 3);
    if ( !(((0x7010008004002001LL * (v40 ^ v39)) ^ (((v40 ^ v39) * (unsigned __int128)0x7010008004002001uLL) >> 64))
         % 0xA)
      && (*v35 & 0x40008000) == 0
      && (*(_DWORD *)(a1 + 2524) & 0x800000) == 0
      && *(_DWORD *)(a1 + 2136) != 7 )
    {
      *(_BYTE *)(a1 + 2203) |= 2u;
    }
    v41 = __rdtsc();
    v42 = (__ROR8__(v41, 3) ^ v41) * (unsigned __int128)0x7010008004002001uLL;
    if ( (((unsigned __int8)v42 ^ BYTE8(v42)) & 3) == 0
      && (*v38 & 0x40008000) == 0
      && v88
      && (*(_DWORD *)(a1 + 2524) & 0x800000) == 0
      && *(_DWORD *)(a1 + 2136) != 7 )
    {
      *(_BYTE *)(a1 + 2203) |= 0x20u;
    }
    v43 = __rdtsc();
    v44 = __ROR8__(v43, 3);
    if ( !(((0x7010008004002001LL * (v44 ^ v43)) ^ (((v44 ^ v43) * (unsigned __int128)0x7010008004002001uLL) >> 64))
         % 0xA)
      && (*(_DWORD *)(a1 + 2520) & 0x40008000) == 0
      && v88
      && (*(_DWORD *)(a1 + 2524) & 0x800000) == 0
      && *(_DWORD *)(a1 + 2136) != 7 )
    {
      *(_BYTE *)(a1 + 2203) |= 0x10u;
    }
  }
  if ( dword_140FFC088 )
  {
    v45 = *(_DWORD *)(a1 + 2520);
    if ( (v45 & 0x8000000) == 0 )
    {
      v46 = __rdtsc();
      v47 = __ROR8__(v46, 3);
      if ( ((0x7010008004002001LL * (v47 ^ v46)) ^ (((v47 ^ v46) * (unsigned __int128)0x7010008004002001uLL) >> 64))
         % 0xA < 5 )
      {
        v48 = *(_DWORD *)(a1 + 2524) | 0x400;
        *(_DWORD *)(a1 + 2524) = v48;
        if ( (v45 & 0x40000000) == 0 && (v48 & 0x800000) == 0 )
        {
          v49 = __rdtsc();
          v50 = __ROR8__(v49, 3);
          if ( ((0x7010008004002001LL * (v50 ^ v49)) ^ (((v50 ^ v49) * (unsigned __int128)0x7010008004002001uLL) >> 64))
             % 0xA < 3
            && *(_DWORD *)(a1 + 2136) != 7 )
          {
            *(_DWORD *)(a1 + 2524) = v48 | 0x800;
          }
        }
      }
    }
  }
  v51 = 0;
  if ( MEMORY[0xFFFFF78000000289] )
    v51 = (*(_BYTE *)(a1 + 2203) & 4) != 0;
  if ( (NtBuildNumber & 0xF0000000) == 0xC0000000 )
    v51 = 1;
  if ( !v51 )
    goto LABEL_141;
  if ( (*(_DWORD *)(a1 + 2520) & 0x48000000) != 0 )
    goto LABEL_141;
  if ( *(_DWORD *)(a1 + 2136) == 7 )
    goto LABEL_141;
  if ( (*(_DWORD *)(a1 + 2524) & 0x810000) != 0 )
    goto LABEL_141;
  v52 = __rdtsc();
  v53 = __ROR8__(v52, 3);
  if ( ((0x7010008004002001LL * (v53 ^ v52)) ^ (((v53 ^ v52) * (unsigned __int128)0x7010008004002001uLL) >> 64)) % 0xA >= 3 )
    goto LABEL_141;
  v54 = qword_140FFC080;
  if ( !qword_140FFC080 )
  {
    v55 = __rdtsc();
    v56 = __ROR8__(v55, 3);
    v57 = ((0x7010008004002001LL * (v56 ^ v55)) ^ (((v56 ^ v55) * (unsigned __int128)0x7010008004002001uLL) >> 64))
        % 0xB;
    if ( v57 > 5 )
    {
      switch ( v57 )
      {
        case 6u:
          v61 = 24;
          v90 = __ROL4__(1464235086, 24) ^ 6;
          goto LABEL_124;
        case 7u:
          v58 = 1;
          v59 = 1666411585;
          goto LABEL_108;
        case 8u:
          v58 = 2;
          v59 = 1113876033;
          goto LABEL_108;
      }
      if ( v57 != 9 )
      {
        v63 = __rdtsc();
        v64 = __ROR8__(v63, 3);
        v65 = (((v64 ^ v63) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * (v64 ^ v63));
        v66 = ((((((v65 % 0x1A + 97) << 8) | ((v65 >> 5) % 0x1A + 65)) << 8) | ((v65 >> 10) % 0x1A + 97)) << 8) | ((v65 >> 15) % 0x1A + 65);
        goto LABEL_126;
      }
      v61 = 33;
      v62 = 1480806214;
    }
    else
    {
      switch ( v57 )
      {
        case 5u:
          v61 = 5;
          v89 = __ROL4__(1766089295, 5);
LABEL_104:
          v60 = v89;
LABEL_125:
          v66 = __ROR4__(v60, v61);
LABEL_126:
          v67 = 5248;
          v68 = 64LL;
          v69 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 256))(64LL, 5248LL, v66);
          v70 = v69;
          qword_140FFC080 = (__int64)v69;
          if ( v69 )
          {
            v71 = 656LL;
            do
            {
              *v69++ = 0LL;
              v67 -= 8;
              --v71;
            }
            while ( v71 );
            for ( ; v67; --v67 )
            {
              *(_BYTE *)v69 = 0;
              v69 = (_QWORD *)((char *)v69 + 1);
            }
            PhysicalAddress = MmGetPhysicalAddress(v70);
            v73 = (unsigned __int64 *)qword_140FFC080;
            *(_QWORD *)(qword_140FFC080 + 5144) = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
            v74 = 512;
            v75 = 512;
            v76 = IdtBase;
            v77 = IdtBase;
            v78 = 64LL;
            do
            {
              *v73++ = v77->Alignment;
              v77 = (_KIDTENTRY64 *)((char *)v77 + 8);
              v75 -= 8;
              --v78;
            }
            while ( v78 );
            for ( ; v75; --v75 )
            {
              *(_BYTE *)v73 = v77->OffsetLow;
              v73 = (unsigned __int64 *)((char *)v73 + 1);
              v77 = (_KIDTENTRY64 *)((char *)v77 + 1);
            }
            v79 = (unsigned __int64 *)(qword_140FFC080 + 512);
            do
            {
              *v79++ = v76->Alignment;
              v76 = (_KIDTENTRY64 *)((char *)v76 + 8);
              v74 -= 8;
              --v68;
            }
            while ( v68 );
            for ( ; v74; --v74 )
            {
              *(_BYTE *)v79 = v76->OffsetLow;
              v79 = (unsigned __int64 *)((char *)v79 + 1);
              v76 = (_KIDTENTRY64 *)((char *)v76 + 1);
            }
            v54 = qword_140FFC080;
            *(_WORD *)(qword_140FFC080 + 68) &= ~0x8000u;
            *(_WORD *)(v54 + 64) = v54;
            *(_WORD *)(v54 + 70) = WORD1(v54);
            *(_DWORD *)(v54 + 72) = HIDWORD(v54);
            goto LABEL_140;
          }
          return 0LL;
        case 0u:
          v61 = 6;
          v90 = __ROL4__(1665295171, 6);
          goto LABEL_124;
        case 1u:
          v61 = 1;
          v91 = __ROR4__(1700422467, 1);
          goto LABEL_123;
        case 2u:
          v58 = 2;
          v59 = 1634559043;
          goto LABEL_108;
        case 3u:
          v61 = 15;
          v62 = 1920421956;
          break;
        default:
          v58 = v57 % 3;
          if ( v57 % 3 )
          {
            v59 = 1886800198;
LABEL_108:
            v12 = v58 == 1;
            v61 = v57;
            if ( v12 )
            {
              v91 = __ROR4__(v59, v57);
LABEL_123:
              v66 = __ROL4__(v91, v61);
              goto LABEL_126;
            }
            v89 = __ROL4__(v59, v57);
            goto LABEL_104;
          }
          v61 = 3 * (v57 + 2);
          v62 = 1886800198;
          break;
      }
    }
    v90 = v57 ^ __ROL4__(v62, v61);
LABEL_124:
    v60 = v57 ^ v90;
    goto LABEL_125;
  }
LABEL_140:
  *(_DWORD *)(a1 + 2524) |= 0x8000u;
  *(_QWORD *)(a1 + 2272) = v54;
  *(_DWORD *)(a1 + 2324) = v87 - a1 + (unsigned int)KiMceThunk - a2;
  *(_DWORD *)(a1 + 2227) = 686588744;
  *(_DWORD *)(a1 + 2231) = -2092428801;
  *(_WORD *)(a1 + 2235) = 10436;
  *(_BYTE *)(a1 + 2237) = -61;
LABEL_141:
  v80 = *(_DWORD *)(a1 + 2520);
  if ( (v80 & 0x40000000) != 0 )
  {
    v80 |= 0x4000000u;
    *(_DWORD *)(a1 + 2520) = v80;
  }
  if ( (v80 & 0x4000000) == 0 )
  {
    v81 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    v82 = __readcr0();
    __writecr0(v82 & 0xFFFFFFFFFFFEFFFFuLL);
    v83 = __readcr0();
    if ( v82 != v83 )
      __writecr0(v82);
    __writecr8(v81);
  }
  return a1;
}
