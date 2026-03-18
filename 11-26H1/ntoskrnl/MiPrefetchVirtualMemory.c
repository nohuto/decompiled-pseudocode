/*
 * XREFs of MiPrefetchVirtualMemory @ 0x1403A0710
 * Callers:
 *     MiInPageSingleKernelStack @ 0x1402A0214 (MiInPageSingleKernelStack.c)
 *     MiBuildForkPte @ 0x14030AB74 (MiBuildForkPte.c)
 *     MmCopyMemory @ 0x140339450 (MmCopyMemory.c)
 *     MiPrefetchRestOfCluster @ 0x1404CC6B0 (MiPrefetchRestOfCluster.c)
 *     NtSetInformationVirtualMemory @ 0x1408F18A0 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualMemory @ 0x140A4EAA4 (MmPrefetchVirtualMemory.c)
 *     MiPrefetchDriverPages @ 0x140AB1A20 (MiPrefetchDriverPages.c)
 * Callees:
 *     MiInitializeDemandCoalesceContext @ 0x140206AD0 (MiInitializeDemandCoalesceContext.c)
 *     KeAbPostReleaseEx @ 0x140272670 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     MiReleaseNonPagedResources @ 0x14028C070 (MiReleaseNonPagedResources.c)
 *     MiFreePageChain @ 0x140292AA4 (MiFreePageChain.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     MiLeapPrefetch @ 0x1403144C4 (MiLeapPrefetch.c)
 *     MiGetLeafVa @ 0x140326060 (MiGetLeafVa.c)
 *     MiVaIsUltra @ 0x1403385D0 (MiVaIsUltra.c)
 *     MiAdvanceFaultList @ 0x14036F4A0 (MiAdvanceFaultList.c)
 *     MiIssueHardFaultIo @ 0x14038EA50 (MiIssueHardFaultIo.c)
 *     MiGetInPageAutoBoostLock @ 0x14039855C (MiGetInPageAutoBoostLock.c)
 *     MiPfCompletePrefetchIos @ 0x14039FC90 (MiPfCompletePrefetchIos.c)
 *     MiPfIssueCoalesceCandidates @ 0x14039FF60 (MiPfIssueCoalesceCandidates.c)
 *     MiDereferenceInPageAutoBoostLock @ 0x1403A001C (MiDereferenceInPageAutoBoostLock.c)
 *     MmAccessFault @ 0x1403A2390 (MmAccessFault.c)
 *     MiPrefetchPreallocatePages @ 0x1406F719C (MiPrefetchPreallocatePages.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
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
  __int64 v41; // rdx
  int v43; // eax
  __int64 v44; // r9
  unsigned int v45; // r14d
  __int64 v46; // r15
  __int64 v47; // rsi
  __int64 v48; // rcx
  unsigned __int64 v49; // rcx
  unsigned int v50; // r9d
  __int64 v51; // rcx
  _QWORD *v52; // rax
  __int64 *v53; // rax
  int v54; // ecx
  __int64 v55; // rdx
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  int v58; // [rsp+40h] [rbp-C0h]
  int v59; // [rsp+44h] [rbp-BCh]
  __int64 v60; // [rsp+48h] [rbp-B8h]
  __int64 v62; // [rsp+58h] [rbp-A8h]
  _QWORD *v63; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v64; // [rsp+68h] [rbp-98h]
  __int64 v65; // [rsp+70h] [rbp-90h] BYREF
  __int64 v66; // [rsp+78h] [rbp-88h]
  unsigned __int64 v67; // [rsp+80h] [rbp-80h]
  unsigned __int64 v68; // [rsp+88h] [rbp-78h]
  unsigned __int64 v69; // [rsp+90h] [rbp-70h]
  _QWORD *v70; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR **v71; // [rsp+A0h] [rbp-60h]
  __int64 v72[2]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v73; // [rsp+B8h] [rbp-48h]
  int v74; // [rsp+C0h] [rbp-40h]
  _BYTE v75[28]; // [rsp+C4h] [rbp-3Ch] BYREF
  struct _KTHREAD *v76; // [rsp+E0h] [rbp-20h]
  _DWORD *v77; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v78; // [rsp+F8h] [rbp-8h]
  __int128 v79; // [rsp+100h] [rbp+0h] BYREF
  __int128 v80; // [rsp+110h] [rbp+10h]
  __int128 v81; // [rsp+120h] [rbp+20h]
  _OWORD v82[3]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v83; // [rsp+160h] [rbp+60h]
  int v84; // [rsp+168h] [rbp+68h]

  v4 = 0LL;
  *(_DWORD *)((char *)&v65 + 2) = 0;
  HIWORD(v65) = 0;
  memset(v75, 0, sizeof(v75));
  v5 = a2;
  memset(v82, 0, sizeof(v82));
  v83 = 0LL;
  v6 = (_DWORD *)a3;
  v84 = 0;
  v7 = 0LL;
  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  v77 = (_DWORD *)a3;
  v58 = 0;
  v59 = 0;
  v9 = *(_BYTE *)(CurrentThread + 1454) < 2u;
  v10 = *(_QWORD *)(CurrentThread + 184);
  v78 = 0LL;
  v60 = CurrentThread;
  if ( !v9 || (a4 & 0x80u) == 0 && stru_140E2EB88.WaitBlock[0].Thread != (struct _KTHREAD *)-1LL )
    return 3221225626LL;
  v74 = a4;
  v71 = &v70;
  v70 = &v70;
  v72[1] = (__int64)v72;
  v72[0] = (__int64)v72;
  LOWORD(v65) = 1;
  v66 = v5;
  v67 = a1;
  v68 = 0LL;
  v69 = 0LL;
  v73 = 0LL;
  v76 = 0LL;
  memset(&v75[4], 0, 24);
  v11 = a4 & 0x10000;
  if ( (a4 & 0x10000) != 0 )
  {
    MiInitializeDemandCoalesceContext(v82, 512LL, 1uLL, 0);
    CurrentThread = v60;
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
    v13 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(v10 + 1198));
  }
  ++*(_BYTE *)(CurrentThread + 1454);
  --*(_WORD *)(CurrentThread + 484);
  v62 = (__int64)v13;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_10:
        if ( v68 >= v67 )
          goto LABEL_66;
        if ( (v74 & 0x20000) != 0 && (*(_DWORD *)(CurrentThread + 1440) & 1) != 0 )
        {
          v36 = -1073741749;
          v58 = -1073741749;
          goto LABEL_67;
        }
        a3 = 16 * v68;
        v14 = 16 * v68 + v5;
        v15 = *(_QWORD *)(v14 + 8);
        CurrentThread = ((unsigned __int64)(*(_DWORD *)v14 & 0xFFF) + v15 + 4095) >> 12;
        if ( v69 >= CurrentThread )
          goto LABEL_91;
        if ( !v15 )
        {
          v68 = v67;
          v69 = 0LL;
          goto LABEL_66;
        }
        v16 = *(_QWORD *)v14 + (v69 << 12);
        LeafVa = v16;
        if ( v16 < qword_140E2DE40 || v16 > qword_140E2DE50 )
          break;
        v5 = a2;
        v32 = ++v69 == ((unsigned __int64)(*(_DWORD *)(a3 + v66) & 0xFFF) + *(_QWORD *)(a3 + v66 + 8) + 4095LL) >> 12;
        CurrentThread = v60;
        if ( v32 )
        {
          v33 = v68 + 1;
          v68 = v33;
          v69 = 0LL;
          if ( v33 < v67 && !*(_QWORD *)(v66 + 16 * v33 + 8) )
            v68 = v67;
        }
      }
      if ( v16 < 0xFFFF800000000000uLL || !MiVaIsUltra(*(_QWORD *)v14 + (v69 << 12)) )
        break;
LABEL_91:
      MiAdvanceFaultList(&v65);
      CurrentThread = v60;
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
    if ( (v74 & 0x80u) == 0 )
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
                  (unsigned int)CurrentThread < dword_140E2D78C;
                  CurrentThread = (unsigned int)(CurrentThread + 1) )
            {
              v18 += *(unsigned __int16 *)(a3 + 16LL * (unsigned int)CurrentThread);
              if ( v18 >= 0x120 )
              {
                v13 = (ULONG *)v62;
                v4 = 0LL;
                v7 = v78;
                LODWORD(v6) = (_DWORD)v77;
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
        v36 = v58;
LABEL_67:
        v37 = v59;
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
        (unsigned int)&v79,
        (unsigned int)&v65,
        (_DWORD)v13,
        (_DWORD)v6,
        v14,
        v16,
        (__int64)v82);
    if ( !v7 )
    {
      v34 = (struct _KTHREAD *)MiGetInPageAutoBoostLock();
      v76 = v34;
      if ( !v34 )
        goto LABEL_103;
      v78 = KeAbPreAcquire((__int64)v34, 0LL, 0LL, v35);
      v7 = v78;
      if ( !v78 )
      {
        if ( v76 )
        {
          MiDereferenceInPageAutoBoostLock((volatile signed __int64 *)&v76->Header.Lock);
          v76 = 0LL;
        }
LABEL_103:
        v7 = 1LL;
        v78 = 1LL;
        goto LABEL_37;
      }
      if ( (KiAbpGlobalState & 1) != 0 )
        *(_BYTE *)(v78 + 33) |= 2u;
      else
        *(_BYTE *)(v78 + 10) = 1;
    }
LABEL_37:
    v25 = v68;
    v26 = v69;
    v27 = MmAccessFault(0LL, v16);
    if ( BYTE1(v65) == 2 )
    {
      if ( (v74 & 0x80u) == 0 )
        goto LABEL_66;
LABEL_84:
      BYTE1(v65) = 0;
      goto LABEL_43;
    }
    if ( BYTE1(v65) == 1 )
      goto LABEL_84;
    a3 = v68;
    if ( v68 == v25 && v69 == v26 )
    {
      CurrentThread = ((unsigned __int64)(*(_DWORD *)(v66 + 16 * v68) & 0xFFF) + *(_QWORD *)(v66 + 16 * v68 + 8)
                                                                               + 4095LL) >> 12;
      if ( ++v69 == CurrentThread )
      {
        a3 = v68 + 1;
        v68 = a3;
        v69 = 0LL;
        if ( a3 < v67 )
        {
          a3 *= 2LL;
          if ( !*(_QWORD *)(v66 + 8 * a3 + 8) )
            v68 = v67;
        }
      }
    }
LABEL_43:
    if ( v27 < 0 )
    {
      v59 = v27;
      v37 = v27;
      if ( v27 != -1073741819 || v68 == v67 || !(unsigned int)MiLeapPrefetch(&v65, 0LL) )
        goto LABEL_77;
    }
    if ( v73 < 0x200000 )
      goto LABEL_45;
    v45 = 0;
    v64 = (__int64 *)&v63;
    v46 = 0LL;
    v63 = &v63;
    while ( 1 )
    {
      v28 = v72[0];
      v47 = v72[0];
      if ( (__int64 *)v72[0] == v72 )
        break;
      if ( *(_DWORD *)(v72[0] + 184) >= 0x100000u && v63 == &v63 )
      {
        v55 = *(_QWORD *)v72[0];
        if ( *(_QWORD *)(*(_QWORD *)v72[0] + 8LL) != v72[0]
          || (v56 = *(_QWORD **)(v72[0] + 8), *v56 != v72[0])
          || (*v56 = v55,
              *(_QWORD *)(v55 + 8) = v56,
              v73 -= *(unsigned int *)(v28 + 184),
              MiIssueHardFaultIo(v28, 0, 0LL),
              v57 = v71,
              *v71 != (ULONG_PTR *)&v70) )
        {
LABEL_125:
          __fastfail(3u);
        }
        *(_QWORD *)(v47 + 8) = v71;
        *(_QWORD *)v47 = &v70;
        *v57 = v47;
        v71 = (ULONG_PTR **)v47;
      }
      else
      {
        if ( v63 == &v63 )
        {
          if ( v73 < 0x100000 )
            goto LABEL_46;
          v46 = *(_QWORD *)(v72[0] + 96);
          v28 = v72[0];
          if ( (*(_DWORD *)(v72[0] + 188) & 0x400000) != 0 )
            v4 = *(_QWORD *)(*(_QWORD *)(v72[0] + 192) + 24LL);
          else
            v4 = *(_QWORD *)(v72[0] + 200);
        }
        if ( v46 <= *(_QWORD *)(v28 + 96)
          && ((*(_DWORD *)(v28 + 188) & 0x400000) == 0
            ? (v48 = *(_QWORD *)(v72[0] + 200))
            : (v48 = *(_QWORD *)(*(_QWORD *)(v72[0] + 192) + 24LL)),
              v4 == v48
           && (v49 = *(_QWORD *)(v72[0] + 96) - v46, v50 = v49 + *(_DWORD *)(v72[0] + 184), v49 <= 0x20000)
           && (a3 = v50 + v45, (unsigned int)a3 <= 0x100000)) )
        {
          v51 = *(_QWORD *)v72[0];
          if ( *(_QWORD *)(*(_QWORD *)v72[0] + 8LL) != v72[0] )
            goto LABEL_125;
          v52 = *(_QWORD **)(v72[0] + 8);
          if ( *v52 != v72[0] )
            goto LABEL_125;
          *v52 = v51;
          *(_QWORD *)(v51 + 8) = v52;
          v53 = v64;
          if ( (_QWORD **)*v64 != &v63 )
            goto LABEL_125;
          *(_QWORD *)(v47 + 8) = v64;
          *(_QWORD *)v47 = &v63;
          v45 += v50;
          *v53 = v47;
          v46 += v50;
          v64 = (__int64 *)v47;
          v73 -= *(unsigned int *)(v47 + 184);
        }
        else
        {
          if ( (int)MiPfIssueCoalesceCandidates(&v63, v45, (__int64)&v70) < 0 )
            goto LABEL_45;
          v45 = 0;
        }
      }
    }
    if ( v63 != &v63 )
    {
      MiPfIssueCoalesceCandidates(&v63, v45, (__int64)&v70);
LABEL_45:
      v28 = v72[0];
    }
LABEL_46:
    v4 = 0LL;
    v13 = (ULONG *)v62;
    CurrentThread = v60;
    v5 = a2;
    v6 = v77;
    if ( (v74 & 0x400) != 0 )
    {
      v29 = 0;
      v30 = 0;
      while ( 1 )
      {
        v31 = v70;
        a3 = (unsigned __int64)&v70;
        if ( !v30 )
        {
          v31 = (_QWORD *)v28;
          a3 = (unsigned __int64)v72;
        }
        if ( v31 != (_QWORD *)a3 )
          break;
LABEL_51:
        v13 = (ULONG *)v62;
        ++v30;
        CurrentThread = v60;
        v5 = a2;
        v6 = v77;
        if ( v30 >= 2 )
          goto LABEL_10;
      }
      while ( ++v29 != 4 )
      {
        v31 = (_QWORD *)*v31;
        if ( v31 == (_QWORD *)a3 )
          goto LABEL_51;
      }
      v6 = v77;
      v43 = MiPfCompletePrefetchIos((ULONG_PTR *)&v70, v72, v77);
      if ( v43 < 0 )
      {
        v54 = v58;
        if ( v58 >= 0 )
          v54 = v43;
        v58 = v54;
      }
      v13 = (ULONG *)v62;
      CurrentThread = v60;
      v5 = a2;
      v73 = 0LL;
      if ( v7 > 1 )
      {
        KeAbPostReleaseEx(v76, v7, a3, v44);
        v7 = 0LL;
        v78 = 0LL;
        MiDereferenceInPageAutoBoostLock((volatile signed __int64 *)&v76->Header.Lock);
        v13 = (ULONG *)v62;
        CurrentThread = v60;
        v5 = a2;
        v76 = 0LL;
      }
    }
  }
  v37 = v59;
LABEL_77:
  v36 = v58;
LABEL_68:
  if ( v11 )
  {
    MiFreePageChain((__int64)&v75[4], CurrentThread, a3);
    if ( (_DWORD)v80 )
      MiReleaseNonPagedResources(v62, 512LL);
  }
  v38 = MiPfCompletePrefetchIos((ULONG_PTR *)&v70, v72, v77);
  if ( v38 < 0 )
  {
    v36 = v58;
    if ( v58 >= 0 )
      v36 = v38;
  }
  else if ( v36 >= 0 && v37 < 0 && (v74 & 0x8000) != 0 )
  {
    v36 = v37;
  }
  v41 = v78;
  if ( v78 > 1 )
  {
    KeAbPostReleaseEx(v76, v78, v39, v40);
    MiDereferenceInPageAutoBoostLock((volatile signed __int64 *)&v76->Header.Lock);
    v76 = 0LL;
  }
  KeLeaveCriticalRegionThread(v60, v41, v39);
  --*(_BYTE *)(v60 + 1454);
  return (unsigned int)v36;
}
