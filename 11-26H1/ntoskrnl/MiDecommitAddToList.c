/*
 * XREFs of MiDecommitAddToList @ 0x140325550
 * Callers:
 *     MiDecommitHandleValidPte @ 0x14029EDAC (MiDecommitHandleValidPte.c)
 *     MiDeleteVa @ 0x140324AF0 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 * Callees:
 *     KeFlushTb @ 0x140252130 (KeFlushTb.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiTransferSoftwarePte @ 0x140296D90 (MiTransferSoftwarePte.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiLogPageAccess @ 0x140322960 (MiLogPageAccess.c)
 *     MiUnlockWsle @ 0x140326688 (MiUnlockWsle.c)
 *     MiTerminateWsle @ 0x140326960 (MiTerminateWsle.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 *     MiWriteValidPteVolatile @ 0x140443050 (MiWriteValidPteVolatile.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14046BF10 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiCompressTbFlushList @ 0x1404D427C (MiCompressTbFlushList.c)
 *     MiLogRemoveWsleEvent @ 0x140501484 (MiLogRemoveWsleEvent.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall MiDecommitAddToList(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // r8
  int v5; // r13d
  ULONG_PTR v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r10
  __int64 v9; // r11
  int v10; // r9d
  int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // r14
  int v14; // eax
  unsigned __int64 v15; // rax
  char v16; // si
  int v17; // eax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r13
  int v20; // edi
  int v21; // r12d
  int v22; // r9d
  unsigned __int64 v23; // rax
  unsigned int v24; // edi
  char v25; // di
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  char v29; // cl
  char v30; // al
  _QWORD *v31; // rdi
  int v32; // eax
  unsigned __int64 v33; // rbx
  __int64 v34; // rax
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rbx
  __int64 v40; // rdi
  unsigned __int64 v41; // rsi
  int i; // r11d
  int v43; // r9d
  __int64 v44; // r10
  unsigned __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // rdx
  int v48; // r8d
  __int64 v49; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v52; // rcx
  __int64 v53; // rcx
  _KPROCESS *v54; // r8
  unsigned __int64 v55; // r9
  __int64 v56; // rdx
  int v57; // ecx
  ULONG *v58; // rax
  unsigned __int64 *v59; // rcx
  __int64 v60; // rdi
  unsigned __int64 v61; // r9
  unsigned __int64 v62; // rdi
  unsigned __int64 v63; // rdx
  int v64; // ecx
  int PagePrivilege; // eax
  int v66; // r10d
  int v67; // eax
  volatile __int64 *v68; // r11
  __int64 v69; // r8
  unsigned __int64 v70; // r9
  __int64 v71; // rdx
  unsigned __int64 v72; // rcx
  int v73; // ecx
  bool v74; // zf
  __int64 v75; // rcx
  _KPROCESS *v76; // r8
  unsigned __int64 v77; // r9
  __int64 v78; // rdx
  _KPROCESS *v79; // rax
  unsigned __int64 v80; // rdx
  unsigned __int64 v81; // rax
  __int64 v82; // rax
  _KPROCESS *v83; // rax
  unsigned __int64 v84; // rcx
  __int64 v85; // rax
  _QWORD *v86; // rax
  _QWORD *v87; // rax
  __int64 v88; // r8
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // rcx
  char v92; // r9
  int v93; // eax
  char v94; // cl
  __int64 v95; // rdx
  signed __int32 v97[8]; // [rsp+0h] [rbp-B8h] BYREF
  int v98; // [rsp+30h] [rbp-88h]
  int v99; // [rsp+34h] [rbp-84h]
  int v100; // [rsp+38h] [rbp-80h]
  int v101; // [rsp+3Ch] [rbp-7Ch]
  int v102; // [rsp+40h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-70h]
  __int64 v104; // [rsp+50h] [rbp-68h]
  __int64 v105; // [rsp+58h] [rbp-60h]
  unsigned __int64 v106; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v107; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v108; // [rsp+70h] [rbp-48h]
  __int64 v109; // [rsp+78h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v109 = v2;
  v106 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v5 = *(_DWORD *)(a1 + 100);
  v6 = (((a2 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v104 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD *)v6;
  v108 = (unsigned __int8)v5 >> 4;
  BugCheckParameter2 = v6;
  if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v49 = v7;
    if ( (v7 & 1) != 0 && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v52 = *(_QWORD *)(KernelWaitTime + 8 * ((v6 >> 3) & 0x1FF));
          if ( (v52 & 0x20) != 0 )
            v49 = v7 | 0x20;
          v7 = v49 | 0x42;
          if ( (v52 & 0x42) == 0 )
            v7 = v49;
        }
        v3 = v106;
      }
    }
  }
  if ( (v7 & 0x80u) != 0LL || v3 < 0xFFFFF68000000000uLL || v3 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v8 = 0xFFFFDE0000000000uLL;
    v100 = 0;
    v9 = 0xFFFFFFFFFFLL;
    v101 = 0;
    v10 = 0;
    v11 = 0;
    v98 = 1;
    v12 = 48 * ((v7 >> 12) & 0xFFFFFFFFFFLL);
    v105 = v12;
    v13 = v12 - 0x220000000000LL;
    v14 = *(_DWORD *)(a1 + 116);
    if ( (v14 & 0x100) != 0 )
    {
      v98 = 0;
      v99 = 1;
      v16 = 0;
    }
    else
    {
      if ( (v14 & 0x60) != 0 )
      {
        v16 = 74;
        v98 = 0;
        v101 = 1;
        v17 = 1;
        v100 = 0;
        v105 = 48 * ((v7 >> 12) & 0xFFFFFFFFFFLL);
        goto LABEL_11;
      }
      if ( (v5 & 0xF0) == 0x60 )
      {
        v100 = 0;
        v99 = 1;
        v16 = 74;
        v101 = 0;
        v105 = 48 * ((v7 >> 12) & 0xFFFFFFFFFFLL);
      }
      else
      {
        v15 = *(_QWORD *)v6;
        if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v53 = *(_QWORD *)v6;
          if ( (v15 & 1) != 0 && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
          {
            if ( (MiFlags & 0x1800000) != 0 )
            {
              v54 = KeGetCurrentThread()->ApcState.Process;
              if ( v54->AddressPolicy != 1 )
              {
                v55 = v54[2].KernelWaitTime;
                if ( v55 )
                {
                  v56 = *(_QWORD *)(v55 + 8 * ((v6 >> 3) & 0x1FF));
                  if ( (v56 & 0x20) != 0 )
                    v53 = v15 | 0x20;
                  v15 = v53 | 0x42;
                  if ( (v56 & 0x42) == 0 )
                    v15 = v53;
                }
                v10 = v100;
              }
            }
            v12 = v105;
          }
          v11 = v101;
        }
        v99 = 1;
        v16 = HIBYTE(v15) & 0xF | (16 * ((v15 >> 60) & 7));
        v100 = v10;
        v101 = v11;
        v98 = 1;
        v105 = v12;
      }
    }
  }
  else
  {
    v10 = 1;
    v101 = 0;
    v100 = 1;
    v9 = 0xFFFFFFFFFFLL;
    v98 = 1;
    v8 = 0xFFFFDE0000000000uLL;
    v105 = 48 * ((v7 >> 12) & 0xFFFFFFFFFFLL);
    v13 = v105 - 0x220000000000LL;
    v16 = (*(_QWORD *)(v105 - 0x220000000000LL) >> 46) & 7;
    v99 = 1;
  }
  v17 = v99;
  if ( *(__int64 *)(v13 + 40) < 0 )
    v17 = 0;
LABEL_11:
  v99 = v17;
  v18 = 1023LL;
  if ( (v5 & 0xF0) == 0 )
    goto LABEL_12;
  if ( !v10 )
  {
    if ( (v16 & 0xF) == 9 )
    {
      v16 = v16 & 0xF0 | 0xA;
      MiWriteValidPteVolatile(BugCheckParameter2, 0x80000000LL);
      v86 = *(_QWORD **)(a1 + 24);
      v98 = 0;
      ++*v86;
      goto LABEL_12;
    }
    if ( (v5 & 0xF0) != 0x20 && (v5 & 0xF0) != 0x40
      || ((*(_DWORD *)(v104 + 184) & 0xF) == 1
        ? (v58 = &MiSystemPartition)
        : (v58 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v104 + 174))),
          !v58[4539]) )
    {
LABEL_145:
      if ( (v5 & 0xF0) == 0x60 )
      {
        v74 = *(_DWORD *)(v2 + 12376) == 0;
        v98 = 0;
        if ( v74 )
        {
          v87 = *(_QWORD **)(a1 + 24);
          *(_QWORD *)(a1 + 8) = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * (v18 & (*(_QWORD *)(v13 + 40) >> 43)));
          ++*v87;
          goto LABEL_12;
        }
      }
      else if ( (v16 & 0xF) != 8 )
      {
        goto LABEL_147;
      }
LABEL_181:
      ++**(_QWORD **)(a1 + 24);
      goto LABEL_12;
    }
    v59 = (unsigned __int64 *)BugCheckParameter2;
    LODWORD(v60) = -1;
    v61 = (__int64)(BugCheckParameter2 << 25) >> 16;
    if ( v61 < 0xFFFFF68000000000uLL || v61 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v18 = ((v61 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v62 = *(_QWORD *)v18;
      if ( v18 >= 0xFFFFF6FB7DBED000uLL
        && v18 <= 0xFFFFF6FB7DBED7F8uLL
        && (v62 & 1) != 0
        && ((v62 & 0x20) == 0 || (v62 & 0x42) == 0) )
      {
        v79 = MiPteHasShadow();
        if ( v79 )
        {
          v81 = v79[2].KernelWaitTime;
          if ( v81 )
          {
            v18 = (v18 >> 3) & 0x1FF;
            v82 = *(_QWORD *)(v81 + 8 * v18);
            if ( (v82 & 0x20) != 0 )
              v80 |= 0x20uLL;
            v62 = v80 | 0x42;
            if ( (v82 & 0x42) == 0 )
              v62 = v80;
          }
        }
      }
      v60 = HIBYTE(v62) & 0xF;
      if ( (_DWORD)v60 == 7 )
        goto LABEL_144;
      v59 = (unsigned __int64 *)BugCheckParameter2;
    }
    v63 = *v59;
    if ( (unsigned __int64)v59 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v59 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v18 = *v59;
      if ( (v63 & 1) != 0 && ((v63 & 0x20) == 0 || (v63 & 0x42) == 0) )
      {
        v83 = MiPteHasShadow();
        if ( v83 )
        {
          v84 = v83[2].KernelWaitTime;
          if ( v84 )
          {
            v85 = *(_QWORD *)(v84 + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
            if ( (v85 & 0x20) != 0 )
              v18 |= 0x20uLL;
            v63 = v18 | 0x42;
            if ( (v85 & 0x42) == 0 )
              v63 = v18;
          }
        }
      }
    }
    if ( (v63 & 0x20) == 0 )
    {
LABEL_144:
      v2 = v109;
      LODWORD(v18) = 1023;
      goto LABEL_145;
    }
    v64 = *(_DWORD *)(v104 + 184);
    if ( (v64 & 0xF) != 0 )
    {
      if ( !_bittest64(&MiFlags, 0x26u) || (v64 & 0x40) == 0 )
        goto LABEL_143;
    }
    else if ( !*(_QWORD *)(v104 + 624) && (*(_QWORD *)(v104 - 656) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
    {
      goto LABEL_143;
    }
    if ( (*(_DWORD *)(v104 + 184) & 0xF) != 0 )
    {
      if ( (MiGetPagePrivilege((_QWORD *)(v8 + 48 * (v9 & (v63 >> 12))), 2LL, 0LL) & 0x41) != 0 )
        goto LABEL_136;
    }
    else if ( v61 < 0x7FFFFFFF0000LL
           && (*(_QWORD *)(v104 + 624)
            || (PagePrivilege = MiGetPagePrivilege((_QWORD *)(v8 + 48 * (v9 & (v63 >> 12))), 2LL, 0LL)) != 0
            && ((*(_BYTE *)(v104 - 656) & 1) != 0 || (PagePrivilege & 8) == 0)) )
    {
LABEL_136:
      if ( (_DWORD)v60 )
        goto LABEL_144;
    }
LABEL_143:
    MiLogPageAccess(v104, BugCheckParameter2, v18);
    goto LABEL_144;
  }
LABEL_147:
  if ( (*(_DWORD *)(a1 + 112) & 0x20) != 0 && (v5 & 0xF0) != 0x30 )
    goto LABEL_181;
LABEL_12:
  v19 = v106;
  v102 = 0;
  v20 = 0;
  v21 = 0;
  if ( (v16 & 0xF) == 8 )
  {
    v20 = 1;
    v21 = MiUnlockWsle(v104, v106, v13, 1LL);
    v102 = v21;
  }
  v22 = v98;
  if ( v98 )
  {
    if ( !v20 )
    {
      LODWORD(v23) = MiTerminateWsle(v104, v106, (*(_DWORD *)(a1 + 100) >> 18) & 7, 6, (__int64)&v102);
      if ( !(_DWORD)v23 )
        return v23;
      v21 = v102;
      v22 = v98;
    }
    if ( v100 )
    {
      v24 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v24 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v24);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
      *(_QWORD *)(v13 + 24) |= 0x4000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v22 = v98;
    }
    v25 = v99;
    goto LABEL_23;
  }
  v25 = v99;
  v66 = 0;
  if ( v99 && !v101 )
  {
    v102 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v102);
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
    v22 = v98;
    *(_QWORD *)(v13 + 24) |= 0x4000000000000000uLL;
    v66 = 64;
  }
  if ( v108 == 6 )
  {
    v67 = *(_DWORD *)(v13 + 32);
    if ( (!(_WORD)v67 || (unsigned __int16)v67 > 2u && ((_WORD)v67 != 3 || (v67 & 0x80000) == 0))
      && ((*(_QWORD *)(v13 + 40) >> 43) & 0x3FF) != **(_WORD **)(a1 + 8) )
    {
      KeBugCheckEx(0x1Au, 0x406uLL, BugCheckParameter2, v105 / 48, (unsigned __int16)*(_DWORD *)(v13 + 32));
    }
    *(_QWORD *)BugCheckParameter2 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    goto LABEL_176;
  }
  v68 = (volatile __int64 *)BugCheckParameter2;
  v69 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v70 = 0xFFFFF6FB7DBED000uLL;
  v71 = *(_QWORD *)BugCheckParameter2;
  if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL && MiPteHasShadow() )
  {
    LOBYTE(v71) = v71 | 0x20;
  }
  else
  {
    v72 = ((unsigned __int64)MiFlags >> 28) & 3;
    if ( v72 <= 1 )
    {
      if ( v72 )
      {
        if ( (unsigned __int64)v68 >= 0xFFFFF6FB40000000uLL
          && (unsigned __int64)v68 <= 0xFFFFF6FB7FFFFFFFuLL
          && (v71 & 0x80u) == 0LL )
        {
          LOBYTE(v71) = v71 | 0x20;
        }
      }
      else
      {
        LOBYTE(v71) = v71 | 0x20;
      }
    }
    else if ( (MiFlags & 0x8000000) != 0 )
    {
      _mm_lfence();
    }
  }
  if ( (v71 & 0x20) != 0 )
  {
    v106 = v69;
    v73 = 0;
    if ( (unsigned __int64)v68 >= v70 && (unsigned __int64)v68 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v93 = MiSanitizeShadowPxe(0LL, &v106, v69);
      v69 = v106;
      v73 = v93;
    }
    *v68 = v69;
    if ( v73 )
      MiWritePteShadow();
  }
  else
  {
    if ( (MiFlags & 0x8000000) != 0 )
      _mm_lfence();
    v92 = _InterlockedExchange64(v68, v69);
    if ( (unsigned __int64)v68 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v68 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    if ( (v92 & 0x20) == 0 )
      goto LABEL_175;
  }
  v21 = 1;
LABEL_175:
  v22 = v98;
LABEL_176:
  if ( v66 )
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_23:
  v26 = v109;
  if ( !*(_DWORD *)(v109 + 12376) )
    *(_QWORD *)(a1 + 88) = v19;
  *(_QWORD *)(v26 + 8LL * *(unsigned int *)(v26 + 12376) + 12384) = v7;
  v27 = *(unsigned int *)(v26 + 16488);
  ++*(_DWORD *)(v26 + 12376);
  v28 = v26 + 8 * v27;
  *(_DWORD *)(v28 + 16496) = 0;
  v29 = *(_BYTE *)(v28 + 16497) & 3;
  *(_BYTE *)(v28 + 16496) = v16;
  if ( v22 )
    v29 |= 1u;
  v30 = v25;
  v31 = (_QWORD *)BugCheckParameter2;
  *(_BYTE *)(v28 + 16497) = v29 & 0xFD | (2 * v30);
  *(_WORD *)(v28 + 16498) = ((unsigned int)v31 >> 3) & 0x1FF;
  v32 = *(_DWORD *)(v26 + 16488);
  if ( !v32 )
    *(_QWORD *)(v26 + 16480) = v19;
  LODWORD(v23) = v32 + 1;
  *(_DWORD *)(v26 + 16488) = v23;
  v33 = *(_QWORD *)(a1 + 128);
  if ( v33 )
  {
    if ( v99 && !v101 )
    {
      v38 = *(_QWORD *)(a1 + 8);
      v102 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v102);
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
      if ( (*(_DWORD *)(v13 + 16) & 4) != 0
        && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v38, v13 + 16)
        && (unsigned __int16)*(_DWORD *)(v13 + 32) == 1 )
      {
        v88 = *(_QWORD *)(v13 + 16);
        *(_QWORD *)(v13 + 16) = v88 & 0xFFFFFFFFFFFFFFFBuLL;
        if ( v88 )
        {
          if ( qword_140E2D8C0 && (v88 & 0x10) == 0 )
            HIDWORD(v88) &= HIDWORD(qword_140E2D8C8);
          v33 = MiTransferSoftwarePte(
                  v33,
                  *(_QWORD *)(v38 + 8LL * ((unsigned __int16)v88 >> 12) + 22304),
                  HIDWORD(v88),
                  2);
        }
      }
      LOBYTE(v23) = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v31 = (_QWORD *)BugCheckParameter2;
    }
    *v31 = v33;
  }
  else if ( (unsigned __int64)v31 < 0xFFFFF6FB7DBED000uLL
         || (LOBYTE(v23) = -1, (unsigned __int64)v31 > 0xFFFFF6FB7DBEDFFFuLL) )
  {
    ++*(_DWORD *)(a1 + 96);
    LOBYTE(v23) = (*(_BYTE *)(a1 + 112) & 0x10) != 0;
    if ( (((*(_DWORD *)(a1 + 100) & 0x1C0000) == 0) & (unsigned __int8)v23) != 0 )
    {
      v107 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      v34 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      if ( (unsigned __int64)&v107 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v107 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v75 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        if ( (CLFS_LSN_NULL_EXT & 1) != 0
          && ((CLFS_LSN_NULL_EXT & 0x20) == 0 || (CLFS_LSN_NULL_EXT & 0x42) == 0)
          && (MiFlags & 0x1800000) != 0 )
        {
          v76 = KeGetCurrentThread()->ApcState.Process;
          if ( v76->AddressPolicy != 1 )
          {
            v77 = v76[2].KernelWaitTime;
            if ( v77 )
            {
              v78 = *(_QWORD *)(v77 + 8 * (((unsigned __int64)&v107 >> 3) & 0x1FF));
              if ( (v78 & 0x20) != 0 )
                v75 = *(_QWORD *)&CLFS_LSN_NULL_EXT | 0x20LL;
              v34 = v75 | 0x42;
              if ( (v78 & 0x42) == 0 )
                v34 = v75;
            }
          }
        }
      }
      _InterlockedOr(v97, 0);
      v35 = (unsigned int)KiTbFlushTimeStamp;
      if ( v34 )
      {
        if ( qword_140E2D8C0 )
        {
          v94 = v34;
          v95 = v34 & qword_140E2D8C8;
          v34 &= ~0x10uLL;
          if ( (v94 & 0x10) == 0 )
            v34 = v95;
        }
      }
      else
      {
        v34 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      }
      v36 = v34 & 0x800000007FFFFFFFuLL | ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 31);
      if ( qword_140E2D8C0 )
      {
        if ( (qword_140E2D8C0 & v36) != 0 )
          v36 |= 0x10uLL;
        else
          v36 |= qword_140E2D8C0;
      }
      v107 = v36;
      v37 = v36;
      if ( qword_140E2D8C0 )
      {
        v35 = qword_140E2D8C8 & v36;
        if ( (v36 & 0x10) == 0 )
          v37 = qword_140E2D8C8 & v36;
      }
      v23 = v37 >> 31;
      if ( (_DWORD)v23 )
      {
        v21 = 0;
        *v31 = v36;
      }
      else
      {
        LOBYTE(v23) = KeFlushTb((_KPROCESS *)2, (volatile _KAFFINITY_EX *)1, v35);
        *v31 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      }
    }
  }
  if ( !v21 )
    goto LABEL_74;
  v39 = *(_QWORD *)(a1 + 16);
  v40 = 1LL;
  v41 = v19;
  if ( *(_DWORD *)(v39 + 8) != 1 )
  {
    v57 = *(_DWORD *)(v39 + 16);
    if ( (v57 & 4) == 0 )
    {
      LOBYTE(v23) = 0;
      if ( v19 >= 0xFFFFF68000000000uLL )
      {
        LOBYTE(v23) = -1;
        if ( v19 <= 0xFFFFF6FFFFFFFFFFuLL )
          *(_DWORD *)(v39 + 16) = v57 | 4;
      }
    }
  }
LABEL_56:
  for ( i = 0; ; i = 1 )
  {
    v43 = *(_DWORD *)(v39 + 28);
    if ( v43 )
    {
      LODWORD(v23) = *(_DWORD *)(v39 + 16);
      if ( (v23 & 2) == 0 )
      {
        v44 = v39 + 8LL * (unsigned int)(v43 - 1);
        v23 = *(_QWORD *)(v44 + 40);
        if ( (v23 & 0xC00) != 0
          || (v45 = *(_QWORD *)(v44 + 40) & 0x3FFLL,
              (*(_QWORD *)(v44 + 40) & 0xFFFFFFFFFFFFF000uLL) + ((v45 + 1) << 12) != v41)
          || v45 + v40 <= v45 )
        {
          v23 = *(_QWORD *)(v39 + 8LL * (unsigned int)(v43 - 1) + 40);
          if ( (v23 & 0xC00) != 0 )
            goto LABEL_65;
        }
        else
        {
          if ( v45 + v40 <= 0x3FF )
          {
            *(_QWORD *)(v39 + 32) += v40;
            *(_QWORD *)(v44 + 40) = (v23 + v40) ^ (v23 ^ (v23 + v40)) & 0xFFFFFFFFFFFFFC00uLL;
            goto LABEL_74;
          }
          v23 = *(_QWORD *)(v39 + 8LL * (unsigned int)(v43 - 1) + 40);
        }
        if ( (v23 & 0xFFFFFFFFFFFFF000uLL) == v41 + (v40 << 12) )
        {
          v23 &= 0x3FFu;
          if ( v23 + v40 <= 0x3FF && v23 + v40 > v23 )
          {
            v23 = (unsigned int)(v43 - 1);
            v89 = *(_QWORD *)(v39 + 8 * v23 + 40);
            v90 = v39 + 8 * v23;
            *(_QWORD *)(v39 + 32) += v40;
            v91 = v89 - (v40 << 12);
            LOBYTE(v23) = v91 + v40;
            *(_QWORD *)(v90 + 40) = (v91 + v40) ^ (v91 ^ (v91 + v40)) & 0xFFFFFFFFFFFFFC00uLL;
            goto LABEL_74;
          }
        }
      }
    }
LABEL_65:
    v46 = *(unsigned int *)(v39 + 28);
    if ( (_DWORD)v46 != *(_DWORD *)(v39 + 12) )
      break;
    if ( i )
    {
      if ( !*(_BYTE *)(v39 + 25) )
        *(_BYTE *)(v39 + 25) = 1;
      goto LABEL_74;
    }
    if ( *(_BYTE *)(v39 + 25) )
      goto LABEL_74;
    qsort((void *)(v39 + 40), *(unsigned int *)(v39 + 28), 8uLL, MiTbFlushSort);
    LOBYTE(v23) = MiCompressTbFlushList(v39);
  }
  while ( v40 )
  {
    v47 = 1024LL;
    if ( (unsigned __int64)(v40 - 1) <= 0x3FF )
      v47 = v40;
    *(_QWORD *)(v39 + 8 * v46 + 40) = v41 & 0xFFFFFFFFFFFFF000uLL | (v47 - 1) & 0x3FF;
    v48 = *(_DWORD *)(v39 + 28);
    *(_QWORD *)(v39 + 32) += v47;
    v46 = (unsigned int)(v48 + 1);
    LOBYTE(v23) = 0;
    v41 += v47 << 12;
    *(_DWORD *)(v39 + 28) = v46;
    v40 -= v47;
    if ( v40 && (_DWORD)v46 == *(_DWORD *)(v39 + 12) )
      goto LABEL_56;
  }
LABEL_74:
  if ( v108 == 3 || (LODWORD(v23) = *(_DWORD *)(a1 + 112), (v23 & 0x20) == 0) && v108 && v108 != 6 )
  {
    if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
      LOBYTE(v23) = MiLogRemoveWsleEvent(v19, v108);
  }
  return v23;
}
