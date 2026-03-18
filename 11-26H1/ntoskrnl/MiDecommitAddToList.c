/*
 * XREFs of MiDecommitAddToList @ 0x140323520
 * Callers:
 *     MiDecommitHandleValidPte @ 0x14029F85C (MiDecommitHandleValidPte.c)
 *     MiDeleteVa @ 0x140322AC0 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x140360150 (MiDecommitPages.c)
 * Callees:
 *     KeFlushTb @ 0x1402507D0 (KeFlushTb.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiTransferSoftwarePte @ 0x140297830 (MiTransferSoftwarePte.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetPagePrivilege @ 0x1402F9878 (MiGetPagePrivilege.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x14031C28C (MiWritePteShadow.c)
 *     MiLogPageAccess @ 0x140320930 (MiLogPageAccess.c)
 *     MiUnlockWsle @ 0x140324658 (MiUnlockWsle.c)
 *     MiTerminateWsle @ 0x140324930 (MiTerminateWsle.c)
 *     MiSanitizeShadowPxe @ 0x140342108 (MiSanitizeShadowPxe.c)
 *     MiWriteValidPteVolatile @ 0x14044AF20 (MiWriteValidPteVolatile.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x140472790 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiCompressTbFlushList @ 0x1404DAB9C (MiCompressTbFlushList.c)
 *     MiLogRemoveWsleEvent @ 0x140507AB4 (MiLogRemoveWsleEvent.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     qsort @ 0x140536F00 (qsort.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
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
  unsigned __int64 v18; // r13
  int v19; // edi
  int v20; // r12d
  int v21; // r9d
  unsigned __int64 v22; // rax
  unsigned int v23; // edi
  char v24; // di
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  char v28; // cl
  char v29; // al
  _QWORD *v30; // rdi
  int v31; // eax
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rbx
  __int64 v39; // rdi
  unsigned __int64 v40; // rsi
  int i; // r11d
  int v42; // r9d
  __int64 v43; // r10
  unsigned __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // rdx
  int v47; // r8d
  __int64 v48; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v51; // rcx
  __int64 v52; // rcx
  _KPROCESS *v53; // r8
  unsigned __int64 v54; // r9
  __int64 v55; // rdx
  int v56; // ecx
  ULONG *v57; // rax
  unsigned __int64 *v58; // rcx
  __int64 v59; // rdi
  unsigned __int64 v60; // r9
  unsigned __int64 *v61; // r8
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
  unsigned __int64 v81; // r8
  unsigned __int64 v82; // rax
  __int64 v83; // rax
  _KPROCESS *v84; // rax
  unsigned __int64 v85; // r8
  unsigned __int64 v86; // rcx
  __int64 v87; // rax
  _QWORD *v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // r8
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rcx
  char v94; // r9
  int v95; // eax
  char v96; // cl
  __int64 v97; // rdx
  signed __int32 v99[8]; // [rsp+0h] [rbp-B8h] BYREF
  int v100; // [rsp+30h] [rbp-88h]
  int v101; // [rsp+34h] [rbp-84h]
  int v102; // [rsp+38h] [rbp-80h]
  int v103; // [rsp+3Ch] [rbp-7Ch]
  int v104; // [rsp+40h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-70h]
  __int64 v106; // [rsp+50h] [rbp-68h]
  __int64 v107; // [rsp+58h] [rbp-60h]
  unsigned __int64 v108; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v109; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v110; // [rsp+70h] [rbp-48h]
  __int64 v111; // [rsp+78h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v111 = v2;
  v108 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v5 = *(_DWORD *)(a1 + 100);
  v6 = (((a2 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v106 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD *)v6;
  v110 = (unsigned __int8)v5 >> 4;
  BugCheckParameter2 = v6;
  if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v48 = v7;
    if ( (v7 & 1) != 0 && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v51 = *(_QWORD *)(KernelWaitTime + 8 * ((v6 >> 3) & 0x1FF));
          if ( (v51 & 0x20) != 0 )
            v48 = v7 | 0x20;
          v7 = v48 | 0x42;
          if ( (v51 & 0x42) == 0 )
            v7 = v48;
        }
        v3 = v108;
      }
    }
  }
  if ( (v7 & 0x80u) != 0LL || v3 < 0xFFFFF68000000000uLL || v3 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v8 = 0xFFFFDE0000000000uLL;
    v102 = 0;
    v9 = 0xFFFFFFFFFFLL;
    v103 = 0;
    v10 = 0;
    v11 = 0;
    v100 = 1;
    v12 = 48 * ((v7 >> 12) & 0xFFFFFFFFFFLL);
    v107 = v12;
    v13 = v12 - 0x220000000000LL;
    v14 = *(_DWORD *)(a1 + 116);
    if ( (v14 & 0x100) != 0 )
    {
      v100 = 0;
      v101 = 1;
      v16 = 0;
    }
    else
    {
      if ( (v14 & 0x60) != 0 )
      {
        v16 = 74;
        v100 = 0;
        v103 = 1;
        v17 = 1;
        v102 = 0;
        v107 = 48 * ((v7 >> 12) & 0xFFFFFFFFFFLL);
        goto LABEL_11;
      }
      if ( (v5 & 0xF0) == 0x60 )
      {
        v102 = 0;
        v101 = 1;
        v16 = 74;
        v103 = 0;
        v107 = 48 * ((v7 >> 12) & 0xFFFFFFFFFFLL);
      }
      else
      {
        v15 = *(_QWORD *)v6;
        if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v52 = *(_QWORD *)v6;
          if ( (v15 & 1) != 0 && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
          {
            if ( (MiFlags & 0x1800000) != 0 )
            {
              v53 = KeGetCurrentThread()->ApcState.Process;
              if ( v53->AddressPolicy != 1 )
              {
                v54 = v53[2].KernelWaitTime;
                if ( v54 )
                {
                  v55 = *(_QWORD *)(v54 + 8 * ((v6 >> 3) & 0x1FF));
                  if ( (v55 & 0x20) != 0 )
                    v52 = v15 | 0x20;
                  v15 = v52 | 0x42;
                  if ( (v55 & 0x42) == 0 )
                    v15 = v52;
                }
                v10 = v102;
              }
            }
            v12 = v107;
          }
          v11 = v103;
        }
        v101 = 1;
        v16 = HIBYTE(v15) & 0xF | (16 * ((v15 >> 60) & 7));
        v102 = v10;
        v103 = v11;
        v100 = 1;
        v107 = v12;
      }
    }
  }
  else
  {
    v10 = 1;
    v103 = 0;
    v102 = 1;
    v9 = 0xFFFFFFFFFFLL;
    v100 = 1;
    v8 = 0xFFFFDE0000000000uLL;
    v107 = 48 * ((v7 >> 12) & 0xFFFFFFFFFFLL);
    v13 = v107 - 0x220000000000LL;
    v16 = (*(_QWORD *)(v107 - 0x220000000000LL) >> 46) & 7;
    v101 = 1;
  }
  v17 = v101;
  if ( *(__int64 *)(v13 + 40) < 0 )
    v17 = 0;
LABEL_11:
  v101 = v17;
  if ( (v5 & 0xF0) == 0 )
    goto LABEL_12;
  if ( !v10 )
  {
    if ( (v16 & 0xF) == 9 )
    {
      v16 = v16 & 0xF0 | 0xA;
      MiWriteValidPteVolatile(BugCheckParameter2, 0x80000000LL);
      v88 = *(_QWORD **)(a1 + 24);
      v100 = 0;
      ++*v88;
      goto LABEL_12;
    }
    if ( (v5 & 0xF0) != 0x20 && (v5 & 0xF0) != 0x40
      || ((*(_DWORD *)(v106 + 184) & 0xF) == 1
        ? (v57 = &MiSystemPartition)
        : (v57 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(v106 + 174))),
          !v57[4539]) )
    {
LABEL_145:
      if ( (v5 & 0xF0) == 0x60 )
      {
        v74 = *(_DWORD *)(v2 + 12376) == 0;
        v100 = 0;
        if ( v74 )
        {
          v89 = *(_QWORD **)(a1 + 24);
          *(_QWORD *)(a1 + 8) = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v13 + 40) >> 43) & 0x3FFLL));
          ++*v89;
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
    v58 = (unsigned __int64 *)BugCheckParameter2;
    LODWORD(v59) = -1;
    v60 = (__int64)(BugCheckParameter2 << 25) >> 16;
    if ( v60 < 0xFFFFF68000000000uLL || v60 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v61 = (unsigned __int64 *)(((v60 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v62 = *v61;
      if ( (unsigned __int64)v61 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v61 <= 0xFFFFF6FB7DBED7F8uLL
        && (v62 & 1) != 0
        && ((v62 & 0x20) == 0 || (v62 & 0x42) == 0) )
      {
        v79 = MiPteHasShadow();
        if ( v79 )
        {
          v82 = v79[2].KernelWaitTime;
          if ( v82 )
          {
            v83 = *(_QWORD *)(v82 + 8 * ((v81 >> 3) & 0x1FF));
            if ( (v83 & 0x20) != 0 )
              v80 |= 0x20uLL;
            v62 = v80 | 0x42;
            if ( (v83 & 0x42) == 0 )
              v62 = v80;
          }
        }
      }
      v59 = HIBYTE(v62) & 0xF;
      if ( (_DWORD)v59 == 7 )
        goto LABEL_144;
      v58 = (unsigned __int64 *)BugCheckParameter2;
    }
    v63 = *v58;
    if ( (unsigned __int64)v58 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v58 <= 0xFFFFF6FB7DBED7F8uLL
      && (v63 & 1) != 0
      && ((v63 & 0x20) == 0 || (v63 & 0x42) == 0) )
    {
      v84 = MiPteHasShadow();
      if ( v84 )
      {
        v86 = v84[2].KernelWaitTime;
        if ( v86 )
        {
          v87 = *(_QWORD *)(v86 + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
          if ( (v87 & 0x20) != 0 )
            v85 |= 0x20uLL;
          v63 = v85 | 0x42;
          if ( (v87 & 0x42) == 0 )
            v63 = v85;
        }
      }
    }
    if ( (v63 & 0x20) == 0 )
    {
LABEL_144:
      v2 = v111;
      goto LABEL_145;
    }
    v64 = *(_DWORD *)(v106 + 184);
    if ( (v64 & 0xF) != 0 )
    {
      if ( !_bittest64(&MiFlags, 0x26u) || (v64 & 0x40) == 0 )
        goto LABEL_143;
    }
    else if ( !*(_QWORD *)(v106 + 624) && (*(_QWORD *)(v106 - 656) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
    {
      goto LABEL_143;
    }
    if ( (*(_DWORD *)(v106 + 184) & 0xF) != 0 )
    {
      if ( (MiGetPagePrivilege((_QWORD *)(v8 + 48 * (v9 & (v63 >> 12))), 2LL, 0LL) & 0x41) != 0 )
        goto LABEL_136;
    }
    else if ( v60 < 0x7FFFFFFF0000LL
           && (*(_QWORD *)(v106 + 624)
            || (PagePrivilege = MiGetPagePrivilege((_QWORD *)(v8 + 48 * (v9 & (v63 >> 12))), 2LL, 0LL)) != 0
            && ((*(_BYTE *)(v106 - 656) & 1) != 0 || (PagePrivilege & 8) == 0)) )
    {
LABEL_136:
      if ( (_DWORD)v59 )
        goto LABEL_144;
    }
LABEL_143:
    MiLogPageAccess(v106, BugCheckParameter2);
    goto LABEL_144;
  }
LABEL_147:
  if ( (*(_DWORD *)(a1 + 112) & 0x20) != 0 && (v5 & 0xF0) != 0x30 )
    goto LABEL_181;
LABEL_12:
  v18 = v108;
  v104 = 0;
  v19 = 0;
  v20 = 0;
  if ( (v16 & 0xF) == 8 )
  {
    v19 = 1;
    v20 = MiUnlockWsle(v106, v108, v13, 1LL);
    v104 = v20;
  }
  v21 = v100;
  if ( v100 )
  {
    if ( !v19 )
    {
      LODWORD(v22) = MiTerminateWsle(v106, v108, (*(_DWORD *)(a1 + 100) >> 18) & 7, 6, (__int64)&v104);
      if ( !(_DWORD)v22 )
        return v22;
      v20 = v104;
      v21 = v100;
    }
    if ( v102 )
    {
      v23 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v23 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v23);
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
      v21 = v100;
    }
    v24 = v101;
    goto LABEL_23;
  }
  v24 = v101;
  v66 = 0;
  if ( v101 && !v103 )
  {
    v104 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v104);
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
    v21 = v100;
    *(_QWORD *)(v13 + 24) |= 0x4000000000000000uLL;
    v66 = 64;
  }
  if ( v110 == 6 )
  {
    v67 = *(_DWORD *)(v13 + 32);
    if ( (!(_WORD)v67 || (unsigned __int16)v67 > 2u && ((_WORD)v67 != 3 || (v67 & 0x80000) == 0))
      && ((*(_QWORD *)(v13 + 40) >> 43) & 0x3FF) != **(_WORD **)(a1 + 8) )
    {
      KeBugCheckEx(0x1Au, 0x406uLL, BugCheckParameter2, v107 / 48, (unsigned __int16)*(_DWORD *)(v13 + 32));
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
    v108 = v69;
    v73 = 0;
    if ( (unsigned __int64)v68 >= v70 && (unsigned __int64)v68 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v95 = MiSanitizeShadowPxe(0LL, &v108, v69);
      v69 = v108;
      v73 = v95;
    }
    *v68 = v69;
    if ( v73 )
      MiWritePteShadow();
  }
  else
  {
    if ( (MiFlags & 0x8000000) != 0 )
      _mm_lfence();
    v94 = _InterlockedExchange64(v68, v69);
    if ( (unsigned __int64)v68 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v68 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    if ( (v94 & 0x20) == 0 )
      goto LABEL_175;
  }
  v20 = 1;
LABEL_175:
  v21 = v100;
LABEL_176:
  if ( v66 )
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_23:
  v25 = v111;
  if ( !*(_DWORD *)(v111 + 12376) )
    *(_QWORD *)(a1 + 88) = v18;
  *(_QWORD *)(v25 + 8LL * *(unsigned int *)(v25 + 12376) + 12384) = v7;
  v26 = *(unsigned int *)(v25 + 16488);
  ++*(_DWORD *)(v25 + 12376);
  v27 = v25 + 8 * v26;
  *(_DWORD *)(v27 + 16496) = 0;
  v28 = *(_BYTE *)(v27 + 16497) & 3;
  *(_BYTE *)(v27 + 16496) = v16;
  if ( v21 )
    v28 |= 1u;
  v29 = v24;
  v30 = (_QWORD *)BugCheckParameter2;
  *(_BYTE *)(v27 + 16497) = v28 & 0xFD | (2 * v29);
  *(_WORD *)(v27 + 16498) = ((unsigned int)v30 >> 3) & 0x1FF;
  v31 = *(_DWORD *)(v25 + 16488);
  if ( !v31 )
    *(_QWORD *)(v25 + 16480) = v18;
  LODWORD(v22) = v31 + 1;
  *(_DWORD *)(v25 + 16488) = v22;
  v32 = *(_QWORD *)(a1 + 128);
  if ( v32 )
  {
    if ( v101 && !v103 )
    {
      v37 = *(_QWORD *)(a1 + 8);
      v104 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v104);
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
      if ( (*(_DWORD *)(v13 + 16) & 4) != 0
        && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v37, v13 + 16)
        && (unsigned __int16)*(_DWORD *)(v13 + 32) == 1 )
      {
        v90 = *(_QWORD *)(v13 + 16);
        *(_QWORD *)(v13 + 16) = v90 & 0xFFFFFFFFFFFFFFFBuLL;
        if ( v90 )
        {
          if ( qword_140E2D740 && (v90 & 0x10) == 0 )
            HIDWORD(v90) &= HIDWORD(qword_140E2D748);
          v32 = MiTransferSoftwarePte(
                  v32,
                  *(_QWORD *)(v37 + 8LL * ((unsigned __int16)v90 >> 12) + 22304),
                  HIDWORD(v90),
                  2);
        }
      }
      LOBYTE(v22) = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v30 = (_QWORD *)BugCheckParameter2;
    }
    *v30 = v32;
  }
  else if ( (unsigned __int64)v30 < 0xFFFFF6FB7DBED000uLL
         || (LOBYTE(v22) = -1, (unsigned __int64)v30 > 0xFFFFF6FB7DBEDFFFuLL) )
  {
    ++*(_DWORD *)(a1 + 96);
    LOBYTE(v22) = (*(_BYTE *)(a1 + 112) & 0x10) != 0;
    if ( (((*(_DWORD *)(a1 + 100) & 0x1C0000) == 0) & (unsigned __int8)v22) != 0 )
    {
      v109 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      v33 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      if ( (unsigned __int64)&v109 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v109 <= 0xFFFFF6FB7DBED7F8uLL )
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
              v78 = *(_QWORD *)(v77 + 8 * (((unsigned __int64)&v109 >> 3) & 0x1FF));
              if ( (v78 & 0x20) != 0 )
                v75 = *(_QWORD *)&CLFS_LSN_NULL_EXT | 0x20LL;
              v33 = v75 | 0x42;
              if ( (v78 & 0x42) == 0 )
                v33 = v75;
            }
          }
        }
      }
      _InterlockedOr(v99, 0);
      v34 = (unsigned int)KiTbFlushTimeStamp;
      if ( v33 )
      {
        if ( qword_140E2D740 )
        {
          v96 = v33;
          v97 = v33 & qword_140E2D748;
          v33 &= ~0x10uLL;
          if ( (v96 & 0x10) == 0 )
            v33 = v97;
        }
      }
      else
      {
        v33 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      }
      v35 = v33 & 0x800000007FFFFFFFuLL | ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 31);
      if ( qword_140E2D740 )
      {
        if ( (qword_140E2D740 & v35) != 0 )
          v35 |= 0x10uLL;
        else
          v35 |= qword_140E2D740;
      }
      v109 = v35;
      v36 = v35;
      if ( qword_140E2D740 )
      {
        v34 = qword_140E2D748 & v35;
        if ( (v35 & 0x10) == 0 )
          v36 = qword_140E2D748 & v35;
      }
      v22 = v36 >> 31;
      if ( (_DWORD)v22 )
      {
        v20 = 0;
        *v30 = v35;
      }
      else
      {
        LOBYTE(v22) = KeFlushTb((_KPROCESS *)2, (volatile _KAFFINITY_EX *)1, v34);
        *v30 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      }
    }
  }
  if ( !v20 )
    goto LABEL_74;
  v38 = *(_QWORD *)(a1 + 16);
  v39 = 1LL;
  v40 = v18;
  if ( *(_DWORD *)(v38 + 8) != 1 )
  {
    v56 = *(_DWORD *)(v38 + 16);
    if ( (v56 & 4) == 0 )
    {
      LOBYTE(v22) = 0;
      if ( v18 >= 0xFFFFF68000000000uLL )
      {
        LOBYTE(v22) = -1;
        if ( v18 <= 0xFFFFF6FFFFFFFFFFuLL )
          *(_DWORD *)(v38 + 16) = v56 | 4;
      }
    }
  }
LABEL_56:
  for ( i = 0; ; i = 1 )
  {
    v42 = *(_DWORD *)(v38 + 28);
    if ( v42 )
    {
      LODWORD(v22) = *(_DWORD *)(v38 + 16);
      if ( (v22 & 2) == 0 )
      {
        v43 = v38 + 8LL * (unsigned int)(v42 - 1);
        v22 = *(_QWORD *)(v43 + 40);
        if ( (v22 & 0xC00) != 0
          || (v44 = *(_QWORD *)(v43 + 40) & 0x3FFLL,
              (*(_QWORD *)(v43 + 40) & 0xFFFFFFFFFFFFF000uLL) + ((v44 + 1) << 12) != v40)
          || v44 + v39 <= v44 )
        {
          v22 = *(_QWORD *)(v38 + 8LL * (unsigned int)(v42 - 1) + 40);
          if ( (v22 & 0xC00) != 0 )
            goto LABEL_65;
        }
        else
        {
          if ( v44 + v39 <= 0x3FF )
          {
            *(_QWORD *)(v38 + 32) += v39;
            *(_QWORD *)(v43 + 40) = (v22 + v39) ^ (v22 ^ (v22 + v39)) & 0xFFFFFFFFFFFFFC00uLL;
            goto LABEL_74;
          }
          v22 = *(_QWORD *)(v38 + 8LL * (unsigned int)(v42 - 1) + 40);
        }
        if ( (v22 & 0xFFFFFFFFFFFFF000uLL) == v40 + (v39 << 12) )
        {
          v22 &= 0x3FFu;
          if ( v22 + v39 <= 0x3FF && v22 + v39 > v22 )
          {
            v22 = (unsigned int)(v42 - 1);
            v91 = *(_QWORD *)(v38 + 8 * v22 + 40);
            v92 = v38 + 8 * v22;
            *(_QWORD *)(v38 + 32) += v39;
            v93 = v91 - (v39 << 12);
            LOBYTE(v22) = v93 + v39;
            *(_QWORD *)(v92 + 40) = (v93 + v39) ^ (v93 ^ (v93 + v39)) & 0xFFFFFFFFFFFFFC00uLL;
            goto LABEL_74;
          }
        }
      }
    }
LABEL_65:
    v45 = *(unsigned int *)(v38 + 28);
    if ( (_DWORD)v45 != *(_DWORD *)(v38 + 12) )
      break;
    if ( i )
    {
      if ( !*(_BYTE *)(v38 + 25) )
        *(_BYTE *)(v38 + 25) = 1;
      goto LABEL_74;
    }
    if ( *(_BYTE *)(v38 + 25) )
      goto LABEL_74;
    qsort((void *)(v38 + 40), *(unsigned int *)(v38 + 28), 8uLL, MiTbFlushSort);
    LOBYTE(v22) = MiCompressTbFlushList(v38);
  }
  while ( v39 )
  {
    v46 = 1024LL;
    if ( (unsigned __int64)(v39 - 1) <= 0x3FF )
      v46 = v39;
    *(_QWORD *)(v38 + 8 * v45 + 40) = v40 & 0xFFFFFFFFFFFFF000uLL | (v46 - 1) & 0x3FF;
    v47 = *(_DWORD *)(v38 + 28);
    *(_QWORD *)(v38 + 32) += v46;
    v45 = (unsigned int)(v47 + 1);
    LOBYTE(v22) = 0;
    v40 += v46 << 12;
    *(_DWORD *)(v38 + 28) = v45;
    v39 -= v46;
    if ( v39 && (_DWORD)v45 == *(_DWORD *)(v38 + 12) )
      goto LABEL_56;
  }
LABEL_74:
  if ( v110 == 3 || (LODWORD(v22) = *(_DWORD *)(a1 + 112), (v22 & 0x20) == 0) && v110 && v110 != 6 )
  {
    if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
      LOBYTE(v22) = MiLogRemoveWsleEvent(v18, v110);
  }
  return v22;
}
