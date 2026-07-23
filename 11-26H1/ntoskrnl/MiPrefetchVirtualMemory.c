/*
 * XREFs of MiPrefetchVirtualMemory @ 0x1403A2470
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14029F764 (MiInPageSingleKernelStack.c)
 *     MiBuildForkPte @ 0x1402ECBF4 (MiBuildForkPte.c)
 *     MmCopyMemory @ 0x14033B4D0 (MmCopyMemory.c)
 *     MiPrefetchRestOfCluster @ 0x1404C5E4C (MiPrefetchRestOfCluster.c)
 *     NtSetInformationVirtualMemory @ 0x1408F7E60 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualMemory @ 0x140A57D94 (MmPrefetchVirtualMemory.c)
 *     MiPrefetchDriverPages @ 0x140AAF940 (MiPrefetchDriverPages.c)
 * Callees:
 *     MiInitializeDemandCoalesceContext @ 0x140206BB0 (MiInitializeDemandCoalesceContext.c)
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiFreePageChain @ 0x140292004 (MiFreePageChain.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     MiLeapPrefetch @ 0x1403164F4 (MiLeapPrefetch.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiVaIsUltra @ 0x14033A650 (MiVaIsUltra.c)
 *     MiAdvanceFaultList @ 0x140371250 (MiAdvanceFaultList.c)
 *     MiIssueHardFaultIo @ 0x140390800 (MiIssueHardFaultIo.c)
 *     MiGetInPageAutoBoostLock @ 0x14039A2BC (MiGetInPageAutoBoostLock.c)
 *     MiPfCompletePrefetchIos @ 0x1403A19F0 (MiPfCompletePrefetchIos.c)
 *     MiPfIssueCoalesceCandidates @ 0x1403A1CC0 (MiPfIssueCoalesceCandidates.c)
 *     MiDereferenceInPageAutoBoostLock @ 0x1403A1D7C (MiDereferenceInPageAutoBoostLock.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiPrefetchPreallocatePages @ 0x1406FBE0C (MiPrefetchPreallocatePages.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiPrefetchVirtualMemory(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v4; // r12
  __int64 v5; // r10
  _DWORD *v6; // r14
  unsigned __int64 v7; // r13
  unsigned __int64 CurrentThread; // rdx
  bool v9; // cf
  __int64 v10; // rsi
  int v11; // ebx
  int v12; // edi
  ULONG *v13; // r11
  __int64 v14; // r10
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 LeafVa; // r9
  unsigned __int64 v18; // r9
  unsigned int v19; // eax
  __int64 v20; // r11
  __int64 v21; // r14
  unsigned __int64 *v22; // r15
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // r15
  int v27; // r10d
  __int64 v28; // rcx
  int v29; // r9d
  unsigned int v30; // eax
  _QWORD *v31; // rdx
  bool v32; // zf
  unsigned __int64 v33; // rcx
  struct _KTHREAD *v34; // rax
  struct _KLOCK_ENTRIES *v35; // r9
  int v36; // edi
  int v37; // esi
  int v38; // eax
  __int64 v39; // r8
  __int64 v40; // r9
  int v42; // eax
  __int64 v43; // r9
  unsigned int v44; // r14d
  __int64 v45; // r15
  __int64 v46; // rsi
  __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  unsigned int v49; // r9d
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 *v52; // rax
  int v53; // ecx
  __int64 v54; // rdx
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  int v57; // [rsp+40h] [rbp-C0h]
  int v58; // [rsp+44h] [rbp-BCh]
  __int64 v59; // [rsp+48h] [rbp-B8h]
  __int64 v61; // [rsp+58h] [rbp-A8h]
  _QWORD *v62; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v63; // [rsp+68h] [rbp-98h]
  __int64 v64; // [rsp+70h] [rbp-90h] BYREF
  __int64 v65; // [rsp+78h] [rbp-88h]
  unsigned __int64 v66; // [rsp+80h] [rbp-80h]
  unsigned __int64 v67; // [rsp+88h] [rbp-78h]
  unsigned __int64 v68; // [rsp+90h] [rbp-70h]
  _QWORD *v69; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR **v70; // [rsp+A0h] [rbp-60h]
  __int64 v71[2]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v72; // [rsp+B8h] [rbp-48h]
  int v73; // [rsp+C0h] [rbp-40h]
  _BYTE v74[28]; // [rsp+C4h] [rbp-3Ch] BYREF
  struct _KTHREAD *v75; // [rsp+E0h] [rbp-20h]
  _DWORD *v76; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v77; // [rsp+F8h] [rbp-8h]
  __int128 v78; // [rsp+100h] [rbp+0h] BYREF
  __int128 v79; // [rsp+110h] [rbp+10h]
  __int128 v80; // [rsp+120h] [rbp+20h]
  _OWORD v81[3]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v82; // [rsp+160h] [rbp+60h]
  int v83; // [rsp+168h] [rbp+68h]

  v4 = 0LL;
  *(_DWORD *)((char *)&v64 + 2) = 0;
  HIWORD(v64) = 0;
  memset(v74, 0, sizeof(v74));
  v5 = a2;
  memset(v81, 0, sizeof(v81));
  v82 = 0LL;
  v6 = (_DWORD *)a3;
  v83 = 0;
  v7 = 0LL;
  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  v76 = (_DWORD *)a3;
  v57 = 0;
  v58 = 0;
  v9 = *(_BYTE *)(CurrentThread + 1454) < 2u;
  v10 = *(_QWORD *)(CurrentThread + 184);
  v77 = 0LL;
  v59 = CurrentThread;
  if ( !v9 || (a4 & 0x80u) == 0 && stru_140E2ED08.WaitBlock[0].Thread != (struct _KTHREAD *)-1LL )
    return 3221225626LL;
  v73 = a4;
  v70 = &v69;
  v69 = &v69;
  v71[1] = (__int64)v71;
  v71[0] = (__int64)v71;
  LOWORD(v64) = 1;
  v65 = v5;
  v66 = a1;
  v67 = 0LL;
  v68 = 0LL;
  v72 = 0LL;
  v75 = 0LL;
  memset(&v74[4], 0, 24);
  v11 = a4 & 0x10000;
  if ( (a4 & 0x10000) != 0 )
  {
    MiInitializeDemandCoalesceContext(v81, 512LL, 1uLL, 0);
    CurrentThread = v59;
    v5 = a2;
  }
  if ( v6 == (_DWORD *)1 )
  {
    v13 = &MiSystemPartition;
    LOBYTE(v12) = 0;
  }
  else
  {
    v12 = v6[46];
    if ( (v12 & 0xF) != 0 )
      return 3221225485LL;
    v13 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v10 + 1198));
  }
  ++*(_BYTE *)(CurrentThread + 1454);
  --*(_WORD *)(CurrentThread + 484);
  v61 = (__int64)v13;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_10:
        if ( v67 >= v66 )
          goto LABEL_66;
        if ( (v73 & 0x20000) != 0 && (*(_DWORD *)(CurrentThread + 1440) & 1) != 0 )
        {
          v36 = -1073741749;
          v57 = -1073741749;
          goto LABEL_67;
        }
        a3 = 16 * v67;
        v14 = 16 * v67 + v5;
        v15 = *(_QWORD *)(v14 + 8);
        CurrentThread = ((unsigned __int64)(*(_DWORD *)v14 & 0xFFF) + v15 + 4095) >> 12;
        if ( v68 >= CurrentThread )
          goto LABEL_91;
        if ( !v15 )
        {
          v67 = v66;
          v68 = 0LL;
          goto LABEL_66;
        }
        v16 = *(_QWORD *)v14 + (v68 << 12);
        LeafVa = v16;
        if ( v16 < qword_140E2DFC0 || v16 > qword_140E2DFD0 )
          break;
        v5 = a2;
        v32 = ++v68 == ((unsigned __int64)(*(_DWORD *)(a3 + v65) & 0xFFF) + *(_QWORD *)(a3 + v65 + 8) + 4095LL) >> 12;
        CurrentThread = v59;
        if ( v32 )
        {
          v33 = v67 + 1;
          v67 = v33;
          v68 = 0LL;
          if ( v33 < v66 && !*(_QWORD *)(v65 + 16 * v33 + 8) )
            v67 = v66;
        }
      }
      if ( v16 < 0xFFFF800000000000uLL || !MiVaIsUltra(*(_QWORD *)v14 + (v68 << 12)) )
        break;
LABEL_91:
      MiAdvanceFaultList(&v64);
      CurrentThread = v59;
      v5 = a2;
    }
    if ( v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v16 >= 0xFFFFF6C000000000uLL )
        goto LABEL_91;
      LeafVa = MiGetLeafVa(v16);
    }
    if ( LeafVa >= 0xFFFF800000000000uLL )
    {
      if ( v6 != (_DWORD *)1 )
        goto LABEL_91;
    }
    else if ( v6 == (_DWORD *)1 || (v12 & 0xF) != 0 )
    {
      goto LABEL_91;
    }
    if ( (v73 & 0x80u) == 0 )
    {
      v18 = *((_QWORD *)v13 + 2808);
      if ( v18 < 0x120 )
      {
        v19 = 0;
        v20 = *((_QWORD *)v13 + 2) + 13856LL;
        while ( v19 < (unsigned __int16)KeNumberNodes )
        {
          v21 = 0LL;
          v22 = (unsigned __int64 *)v20;
          while ( v21 <= 1 )
          {
            a3 = *v22;
            for ( CurrentThread = 0LL;
                  (unsigned int)CurrentThread < dword_140E2D90C;
                  CurrentThread = (unsigned int)(CurrentThread + 1) )
            {
              v18 += *(unsigned __int16 *)(a3 + 16LL * (unsigned int)CurrentThread);
              if ( v18 >= 0x120 )
              {
                v13 = (ULONG *)v61;
                v4 = 0LL;
                v7 = v77;
                LODWORD(v6) = (_DWORD)v76;
                goto LABEL_31;
              }
            }
            ++v21;
            ++v22;
          }
          v20 += 56320LL;
          ++v19;
        }
LABEL_66:
        v36 = v57;
LABEL_67:
        v37 = v58;
        goto LABEL_68;
      }
LABEL_31:
      v23 = *((_QWORD *)v13 + 2931);
      v24 = *((_QWORD *)v13 + 2888);
      if ( v24 >= v23 || v23 - v24 < 0x1080 )
        goto LABEL_66;
      if ( *((__int64 *)v13 + 2816) < 288 )
        break;
    }
    if ( v11 )
      MiPrefetchPreallocatePages(
        (unsigned int)&v78,
        (unsigned int)&v64,
        (_DWORD)v13,
        (_DWORD)v6,
        v14,
        v16,
        (__int64)v81);
    if ( !v7 )
    {
      v34 = (struct _KTHREAD *)MiGetInPageAutoBoostLock();
      v75 = v34;
      if ( !v34 )
        goto LABEL_103;
      v77 = KeAbPreAcquire((__int64)v34, 0LL, 0LL, v35);
      v7 = v77;
      if ( !v77 )
      {
        if ( v75 )
        {
          MiDereferenceInPageAutoBoostLock((volatile signed __int64 *)&v75->Header.Lock);
          v75 = 0LL;
        }
LABEL_103:
        v7 = 1LL;
        v77 = 1LL;
        goto LABEL_37;
      }
      if ( (KiAbpGlobalState & 1) != 0 )
        *(_BYTE *)(v77 + 33) |= 2u;
      else
        *(_BYTE *)(v77 + 10) = 1;
    }
LABEL_37:
    v25 = v67;
    v26 = v68;
    v27 = MmAccessFault(0LL, v16);
    if ( BYTE1(v64) == 2 )
    {
      if ( (v73 & 0x80u) == 0 )
        goto LABEL_66;
LABEL_84:
      BYTE1(v64) = 0;
      goto LABEL_43;
    }
    if ( BYTE1(v64) == 1 )
      goto LABEL_84;
    a3 = v67;
    if ( v67 == v25 && v68 == v26 )
    {
      CurrentThread = ((unsigned __int64)(*(_DWORD *)(v65 + 16 * v67) & 0xFFF) + *(_QWORD *)(v65 + 16 * v67 + 8)
                                                                               + 4095LL) >> 12;
      if ( ++v68 == CurrentThread )
      {
        a3 = v67 + 1;
        v67 = a3;
        v68 = 0LL;
        if ( a3 < v66 )
        {
          a3 *= 2LL;
          if ( !*(_QWORD *)(v65 + 8 * a3 + 8) )
            v67 = v66;
        }
      }
    }
LABEL_43:
    if ( v27 < 0 )
    {
      v58 = v27;
      v37 = v27;
      if ( v27 != -1073741819 || v67 == v66 || !(unsigned int)MiLeapPrefetch(&v64, 0LL) )
        goto LABEL_77;
    }
    if ( v72 < 0x200000 )
      goto LABEL_45;
    v44 = 0;
    v63 = (__int64 *)&v62;
    v45 = 0LL;
    v62 = &v62;
    while ( 1 )
    {
      v28 = v71[0];
      v46 = v71[0];
      if ( (__int64 *)v71[0] == v71 )
        break;
      if ( *(_DWORD *)(v71[0] + 184) >= 0x100000u && v62 == &v62 )
      {
        v54 = *(_QWORD *)v71[0];
        if ( *(_QWORD *)(*(_QWORD *)v71[0] + 8LL) != v71[0]
          || (v55 = *(_QWORD **)(v71[0] + 8), *v55 != v71[0])
          || (*v55 = v54,
              *(_QWORD *)(v54 + 8) = v55,
              v72 -= *(unsigned int *)(v28 + 184),
              MiIssueHardFaultIo(v28, 0, 0LL),
              v56 = v70,
              *v70 != (ULONG_PTR *)&v69) )
        {
LABEL_125:
          __fastfail(3u);
        }
        *(_QWORD *)(v46 + 8) = v70;
        *(_QWORD *)v46 = &v69;
        *v56 = v46;
        v70 = (ULONG_PTR **)v46;
      }
      else
      {
        if ( v62 == &v62 )
        {
          if ( v72 < 0x100000 )
            goto LABEL_46;
          v45 = *(_QWORD *)(v71[0] + 96);
          v28 = v71[0];
          if ( (*(_DWORD *)(v71[0] + 188) & 0x400000) != 0 )
            v4 = *(_QWORD *)(*(_QWORD *)(v71[0] + 192) + 24LL);
          else
            v4 = *(_QWORD *)(v71[0] + 200);
        }
        if ( v45 <= *(_QWORD *)(v28 + 96)
          && ((*(_DWORD *)(v28 + 188) & 0x400000) == 0
            ? (v47 = *(_QWORD *)(v71[0] + 200))
            : (v47 = *(_QWORD *)(*(_QWORD *)(v71[0] + 192) + 24LL)),
              v4 == v47
           && (v48 = *(_QWORD *)(v71[0] + 96) - v45, v49 = v48 + *(_DWORD *)(v71[0] + 184), v48 <= 0x20000)
           && (a3 = v49 + v44, (unsigned int)a3 <= 0x100000)) )
        {
          v50 = *(_QWORD *)v71[0];
          if ( *(_QWORD *)(*(_QWORD *)v71[0] + 8LL) != v71[0] )
            goto LABEL_125;
          v51 = *(_QWORD **)(v71[0] + 8);
          if ( *v51 != v71[0] )
            goto LABEL_125;
          *v51 = v50;
          *(_QWORD *)(v50 + 8) = v51;
          v52 = v63;
          if ( (_QWORD **)*v63 != &v62 )
            goto LABEL_125;
          *(_QWORD *)(v46 + 8) = v63;
          *(_QWORD *)v46 = &v62;
          v44 += v49;
          *v52 = v46;
          v45 += v49;
          v63 = (__int64 *)v46;
          v72 -= *(unsigned int *)(v46 + 184);
        }
        else
        {
          if ( (int)MiPfIssueCoalesceCandidates(&v62, v44, (__int64)&v69) < 0 )
            goto LABEL_45;
          v44 = 0;
        }
      }
    }
    if ( v62 != &v62 )
    {
      MiPfIssueCoalesceCandidates(&v62, v44, (__int64)&v69);
LABEL_45:
      v28 = v71[0];
    }
LABEL_46:
    v4 = 0LL;
    v13 = (ULONG *)v61;
    CurrentThread = v59;
    v5 = a2;
    v6 = v76;
    if ( (v73 & 0x400) != 0 )
    {
      v29 = 0;
      v30 = 0;
      while ( 1 )
      {
        v31 = v69;
        a3 = (unsigned __int64)&v69;
        if ( !v30 )
        {
          v31 = (_QWORD *)v28;
          a3 = (unsigned __int64)v71;
        }
        if ( v31 != (_QWORD *)a3 )
          break;
LABEL_51:
        v13 = (ULONG *)v61;
        ++v30;
        CurrentThread = v59;
        v5 = a2;
        v6 = v76;
        if ( v30 >= 2 )
          goto LABEL_10;
      }
      while ( ++v29 != 4 )
      {
        v31 = (_QWORD *)*v31;
        if ( v31 == (_QWORD *)a3 )
          goto LABEL_51;
      }
      v6 = v76;
      v42 = MiPfCompletePrefetchIos((ULONG_PTR *)&v69, v71, v76);
      if ( v42 < 0 )
      {
        v53 = v57;
        if ( v57 >= 0 )
          v53 = v42;
        v57 = v53;
      }
      v13 = (ULONG *)v61;
      CurrentThread = v59;
      v5 = a2;
      v72 = 0LL;
      if ( v7 > 1 )
      {
        KeAbPostReleaseEx(v75, v7, a3, v43);
        v7 = 0LL;
        v77 = 0LL;
        MiDereferenceInPageAutoBoostLock((volatile signed __int64 *)&v75->Header.Lock);
        v13 = (ULONG *)v61;
        CurrentThread = v59;
        v5 = a2;
        v75 = 0LL;
      }
    }
  }
  v37 = v58;
LABEL_77:
  v36 = v57;
LABEL_68:
  if ( v11 )
  {
    MiFreePageChain((__int64)&v74[4], CurrentThread, a3);
    if ( (_DWORD)v79 )
      MiReleaseNonPagedResources(v61, 512LL);
  }
  v38 = MiPfCompletePrefetchIos((ULONG_PTR *)&v69, v71, v76);
  if ( v38 < 0 )
  {
    v36 = v57;
    if ( v57 >= 0 )
      v36 = v38;
  }
  else if ( v36 >= 0 && v37 < 0 && (v73 & 0x8000) != 0 )
  {
    v36 = v37;
  }
  if ( v77 > 1 )
  {
    KeAbPostReleaseEx(v75, v77, v39, v40);
    MiDereferenceInPageAutoBoostLock((volatile signed __int64 *)&v75->Header.Lock);
    v75 = 0LL;
  }
  KeLeaveCriticalRegionThread(v59);
  --*(_BYTE *)(v59 + 1454);
  return (unsigned int)v36;
}
