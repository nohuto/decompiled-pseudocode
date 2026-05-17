/*
 * XREFs of RtlpHpAllocateHeapSlow @ 0x180097E10
 * Callers:
 *     RtlpHpAllocateHeap @ 0x180071440 (RtlpHpAllocateHeap.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18000F040 (EtwEventWriteTransfer.c)
 *     RtlpHpVsContextAllocate @ 0x180012CA4 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhContextFree @ 0x180019DA0 (RtlpHpLfhContextFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18001A070 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpExtrasAppend @ 0x18001A390 (RtlpHpExtrasAppend.c)
 *     RtlpHpSegFreeInternal @ 0x18001AD38 (RtlpHpSegFreeInternal.c)
 *     RtlpCallInterceptRoutine @ 0x18001C570 (RtlpCallInterceptRoutine.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x18003F520 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     TpSetTimerEx @ 0x180069020 (TpSetTimerEx.c)
 *     RtlpHpLargeFree @ 0x18008918C (RtlpHpLargeFree.c)
 *     RtlpHpStackLoggingEnabled @ 0x1800895B0 (RtlpHpStackLoggingEnabled.c)
 *     RtlpHpLargeAlloc @ 0x18008A18C (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180092C30 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1800933DC (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1800BF1B0 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpStackTraceAddStack @ 0x1800C0100 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x1800C14C0 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpSegAlloc @ 0x1800E0094 (RtlpHpSegAlloc.c)
 *     RtlpHpPgContextAllocate @ 0x18010CAD0 (RtlpHpPgContextAllocate.c)
 *     RtlpLogHeapAllocateEvent @ 0x1801131DC (RtlpLogHeapAllocateEvent.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x1801212E4 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     RtlHeapZero @ 0x1801642D0 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpAllocateHeapSlow(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // ebp
  int v7; // ecx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r13
  unsigned int v14; // edi
  __int64 v15; // rax
  signed __int64 v16; // r9
  __int64 Slow; // rbx
  int v18; // ecx
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // r14
  __int64 v22; // rbx
  unsigned int v23; // ecx
  __int64 v24; // rax
  void **TlsExpansionSlots; // rdx
  __int64 v26; // rdi
  __int64 v27; // r8
  unsigned __int64 v28; // rcx
  __int64 v29; // rbp
  __int64 v30; // r11
  unsigned __int64 v31; // r11
  struct _TEB *v32; // r9
  int v33; // r10d
  __int64 v34; // r14
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r8
  _DWORD *v39; // r8
  unsigned __int64 i; // rcx
  __int16 v44; // cx
  int v45; // esi
  signed __int64 v46; // rdi
  signed __int64 v47; // rax
  unsigned __int64 v48; // rdi
  struct _TEB *v49; // r8
  int v50; // ebx
  __int64 v51; // r14
  unsigned __int64 v52; // rcx
  bool v53; // cf
  unsigned __int64 v54; // r12
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // r9
  unsigned __int64 v57; // rdx
  int v58; // r11d
  unsigned int v59; // ebp
  volatile signed __int64 *v60; // rbx
  volatile signed __int64 *v61; // r8
  __int64 v66; // rdx
  unsigned __int64 v69; // rcx
  unsigned int v70; // ecx
  signed __int64 v72; // rcx
  signed __int64 v73; // rax
  unsigned int v74; // ebp
  __int64 v75; // rbx
  bool v76; // cc
  unsigned int v77; // ebp
  __int16 v78; // cx
  signed __int64 v79; // rax
  __int64 v80; // r12
  char v81; // dl
  unsigned __int64 v82; // rdx
  signed __int64 v83; // rtt
  unsigned __int64 v84; // r8
  signed __int64 v85; // rax
  signed __int64 v86; // rax
  signed __int64 v87; // rtt
  signed __int64 v88; // rdx
  __int64 v89; // rax
  int v90; // r10d
  unsigned __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rax
  int v94; // eax
  __int64 v95; // r10
  __int64 v96; // r8
  char v97; // cl
  unsigned __int64 v98; // r11
  __int64 v99; // r11
  unsigned __int64 v100; // rdx
  __int64 v101; // rdx
  __int64 v102; // r8
  unsigned __int64 *v103; // [rsp+20h] [rbp-B8h]
  unsigned __int8 v104; // [rsp+30h] [rbp-A8h]
  int v105; // [rsp+34h] [rbp-A4h]
  int v106; // [rsp+38h] [rbp-A0h]
  int v107; // [rsp+3Ch] [rbp-9Ch]
  int v108; // [rsp+40h] [rbp-98h]
  __int64 v109; // [rsp+48h] [rbp-90h]
  unsigned __int8 v110; // [rsp+4Ch] [rbp-8Ch]
  int v112; // [rsp+58h] [rbp-80h]
  int v113; // [rsp+5Ch] [rbp-7Ch]
  __int128 v114; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 v115; // [rsp+70h] [rbp-68h] BYREF
  void *v116; // [rsp+78h] [rbp-60h] BYREF
  int v117; // [rsp+80h] [rbp-58h]
  int v118; // [rsp+84h] [rbp-54h]
  void *v119; // [rsp+88h] [rbp-50h]
  int v120; // [rsp+90h] [rbp-48h]
  int v121; // [rsp+94h] [rbp-44h]

  v112 = a3;
  v3 = 0LL;
  v115 = 0LL;
  v4 = a2;
  v113 = 0;
  v5 = a3;
  if ( (a3 & 0x20) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 24);
    v113 = v7;
    if ( v7 )
    {
      __writegsqword(0x250u, 0LL);
      v103 = &v115;
      v5 = a3 | 8;
      v112 = a3 | 8;
      v8 = RtlpCallInterceptRoutine(v7, a1, 0LL, 1);
      __writegsqword(0x250u, a1 + 20);
      v9 = *(unsigned int *)(a1 + 20);
      if ( (v9 & 0x10) != 0 )
      {
        v10 = *(unsigned int *)(a1 + 224);
        if ( (_DWORD)v10 != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
          RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 20, v9, v10);
      }
      if ( v8 < 0 )
        return 0LL;
      v3 = v115;
    }
  }
  if ( v4 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  v12 = v4 + v3;
  v13 = v12 + 16;
  if ( (v5 & 0x2000) == 0 )
    v13 = v12;
  if ( (v5 & 0x20000F08) != 0 )
    v13 = ((v13 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  if ( !v13 )
    v13 = 1LL;
  v14 = v5 & 0x10003002;
  v105 = v5 & 0x10003002;
  if ( (v5 & 0x1000) != 0 )
  {
    v15 = RtlpHpPgContextAllocate(a1 + 808, (unsigned int)v4, (unsigned int)v13, v14, v103);
    Slow = v15;
    v18 = v13;
    if ( v15 )
    {
      v19 = v15;
      goto LABEL_123;
    }
  }
  else
  {
    v18 = v13;
  }
  if ( v13 >= *(unsigned __int16 *)(a1 + 972) )
    goto LABEL_113;
  v20 = v18 + 2;
  v21 = a1 + 896;
  if ( (_DWORD)v4 == v18 )
    v20 = v18;
  v22 = (unsigned int)RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v20 + 15) >> 4] - 1;
  v23 = (unsigned __int16)*(_DWORD *)(a1 + 980);
  if ( v23 < 0x40 )
  {
    v24 = __readgsqword(8 * v23 + 5248);
    goto LABEL_27;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v24 = (__int64)TlsExpansionSlots[v23 - 64];
LABEL_27:
    if ( v24 )
      goto LABEL_29;
  }
  v24 = RtlpHpLfhThreadDataInitializeSet(a1 + 896);
LABEL_29:
  v26 = v21 + ((unsigned __int16)v24 << 6);
  v110 = BYTE4(v24);
  v27 = *(unsigned __int16 *)(2 * v22 + v26);
  if ( !*(_WORD *)(2 * v22 + v26) )
  {
    if ( !RtlpHpLfhBucketCheckAndUpdate(a1 + 896, (unsigned int)v22, v27) )
    {
LABEL_112:
      v14 = v105;
LABEL_113:
      if ( v13 > 0x20000 )
      {
        if ( v13 > *(unsigned int *)(a1 + 528) )
        {
          v89 = RtlpHpLargeAlloc(a1, v4, v13, v14);
        }
        else
        {
          v90 = a1 + 512;
          if ( v13 <= *(unsigned int *)(a1 + 336) )
            v90 = a1 + 320;
          v89 = RtlpHpSegAlloc(v90, v4, v13, v13, v14);
        }
      }
      else
      {
        v89 = RtlpHpVsContextAllocate((_BYTE *)(a1 + 704), v4, v13, v14);
      }
      Slow = v89;
      goto LABEL_121;
    }
    v28 = v21 + ((unsigned __int64)v110 << 8) + 1472;
    LODWORD(v27) = *(unsigned __int16 *)(v28 + 2 * v22);
    if ( v26 != v28 )
      *(_WORD *)(2 * v22 + v26) = *(_WORD *)(v28 + 2 * v22);
  }
  v29 = v21 + (unsigned int)((_DWORD)v27 << 6);
  v109 = v29;
  if ( *(_WORD *)(v29 + 4) )
  {
    v30 = *(_QWORD *)(v29 + 56);
    if ( (v30 & 0xFFF) != 0 && (*(_QWORD *)(v29 + 56) = v30 - 1, (v31 = v30 & 0xFFFFFFFFFFFFF000uLL) != 0) )
    {
      v32 = NtCurrentTeb();
      v33 = *(unsigned __int8 *)(v31 + 24);
      v34 = 0x100000001LL;
      v35 = v32->RngState[0];
      v36 = v32->RngState[1];
      v106 = qword_1801C6EC8 ^ *(_DWORD *)(v31 + 40) ^ (v31 >> 12);
      if ( (unsigned int)v4 >= (unsigned __int16)v106 )
        v34 = 1LL;
      v37 = v36 + v35;
      v38 = v35 ^ v36;
      v32->RngState[1] = __ROL8__(v38, 37);
      v32->RngState[0] = v38 ^ __ROL8__(v35, 24) ^ (v38 << 16);
      v16 = v31 + 64;
      v39 = (_DWORD *)(v31 + 64 + 8LL * *(unsigned __int8 *)(v31 + 36));
      for ( i = (unsigned int)~*v39; *v39 == -1; i = (unsigned int)~*v39 )
      {
        if ( v39 == (_DWORD *)(v31 + 64 + 8 * ((unsigned int)(v33 - 8) - 1LL)) )
          v39 = (_DWORD *)(v31 + 64);
        else
          v39 += 2;
      }
      _RAX = 1LL << ((unsigned __int16)(BYTE4(v37) * (unsigned __int16)__popcnt(i)) >> 8);
      __asm
      {
        pdep    rcx, rax, rcx
        tzcnt   rdx, rcx
      }
      *(_QWORD *)v39 |= v34 << _RDX;
      LODWORD(_RAX) = _RDX + 4 * ((_DWORD)v39 - v16);
      *(_BYTE *)(v31 + 36) = (unsigned int)_RAX >> 5;
      Slow = v31 + (unsigned __int16)v106 * (_DWORD)_RAX + (unsigned int)HIWORD(v106);
      if ( (v105 & 2) != 0 )
        RtlHeapZero(Slow, ((unsigned int)v4 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( (unsigned int)v4 < (unsigned __int16)v106 )
      {
        v44 = v106 - v4;
        if ( (unsigned __int16)v106 - (_DWORD)v4 == 1 )
          v44 = 0x8000;
        *(_WORD *)((unsigned __int16)v106 + Slow - 2) = v44;
      }
    }
    else
    {
      Slow = RtlpHpLfhSlotAllocateSlow(a1 + 896);
    }
    goto LABEL_111;
  }
  v45 = 0;
  _m_prefetchw((const void *)(v29 + 56));
  v46 = *(_QWORD *)(v29 + 56);
  if ( (v46 & 0xFFF) == 0 )
    goto LABEL_53;
  while ( 1 )
  {
    v47 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 56), v46 - 1, v46);
    if ( v46 == v47 )
      break;
    v45 = 1;
    v46 = v47;
    if ( (v47 & 0xFFF) == 0 )
      goto LABEL_53;
  }
  v48 = v46 & 0xFFFFFFFFFFFFF000uLL;
  if ( !v48 )
  {
LABEL_53:
    Slow = RtlpHpLfhSlotAllocateSlow(a1 + 896);
    goto LABEL_109;
  }
  v49 = NtCurrentTeb();
  v50 = *(unsigned __int8 *)(v48 + 24);
  v51 = 0x100000001LL;
  v52 = v49->RngState[0];
  v108 = qword_1801C6EC8 ^ *(_DWORD *)(v48 + 40) ^ (v48 >> 12);
  v53 = (unsigned int)v4 < (unsigned __int16)v108;
  v54 = v48 + 64;
  if ( !v53 )
    v51 = 1LL;
  v55 = v49->RngState[1];
  v56 = v55 + v52;
  v57 = v52 ^ v55;
  v58 = BYTE4(v56);
  v49->RngState[0] = v57 ^ __ROL8__(v52, 24) ^ (v57 << 16);
  v49->RngState[1] = __ROL8__(v57, 37);
  v59 = *(unsigned __int8 *)(v48 + 50);
  v104 = *(_BYTE *)(v48 + 39);
  v60 = (volatile signed __int64 *)(v54 + 8 * ((unsigned int)(v50 - 8) - 1LL));
  v61 = (volatile signed __int64 *)(v54 + 8LL * *(unsigned __int8 *)(v48 + 36));
LABEL_58:
  v16 = *v61;
  for ( _RAX = (unsigned int)~*(_DWORD *)v61; *(_DWORD *)v61 == -1; _RAX = (unsigned int)~*(_DWORD *)v61 )
  {
    if ( v61 == v60 )
      v61 = (volatile signed __int64 *)(v48 + 64);
    else
      ++v61;
    v16 = *v61;
  }
  while ( 1 )
  {
    if ( (qword_1801C6EE8 & 4) != 0 )
    {
      _RCX = 1LL << ((unsigned __int16)(v58 * __popcnt(_RAX)) >> 8);
      __asm
      {
        pdep    rdx, rcx, rax
        tzcnt   r10, rdx
      }
      v66 = v51 << _R10;
    }
    else
    {
      if ( v61 == v60 || v59 != 32 )
      {
        __asm { tzcnt   rdx, rax }
        _BitScanReverse64(&v69, _RAX);
        LODWORD(v114) = _RDX;
        v70 = v69 - _RDX + 1;
        if ( v59 < v70 )
          v70 = v59;
        v58 = _RDX + ((v70 * v58) >> 8);
        _RAX = __ROR8__(_RAX, v58);
        __asm { tzcnt   r10, rax }
        LODWORD(_R10) = v58 + _R10;
      }
      else
      {
        _RCX = (unsigned int)__ROR4__(_RAX, v58);
        __asm { tzcnt   r10, rcx }
        LODWORD(_R10) = ((_BYTE)v58 + (_BYTE)_R10) & 0x1F;
      }
      v66 = v51 << _R10;
    }
    v72 = v16;
    v73 = _InterlockedCompareExchange64(v61, v16 | v66, v16);
    v16 = v73;
    if ( v73 == v72 )
      break;
    _RAX = (unsigned int)~(_DWORD)v73;
    if ( !_RAX )
    {
      if ( v61 == v60 )
        v61 = (volatile signed __int64 *)(v48 + 64);
      else
        ++v61;
      goto LABEL_58;
    }
  }
  v21 = a1 + 896;
  v74 = _R10 + 4 * ((_DWORD)v61 - v54);
  *(_BYTE *)(v48 + 36) = v74 >> 5;
  v75 = HIWORD(v108) + (unsigned __int16)v108 * v74;
  if ( v104 <= 1u )
  {
    v76 = v74 <= *(unsigned __int16 *)(v48 + 48);
    v77 = (unsigned __int16)v108;
    if ( !v76 )
      RtlpHpLfhSubsegmentPrefetch(a1 + 896, v48, (unsigned int)v75, (unsigned __int16)v108);
    goto LABEL_84;
  }
  if ( (int)RtlpHpLfhSubsegmentCommitBlock(a1 + 896, v48, v75) >= 0 )
  {
    v77 = (unsigned __int16)v108;
LABEL_84:
    v4 = a2;
    Slow = v48 + v75;
    if ( (v105 & 2) != 0 )
      RtlHeapZero(Slow, ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned int)a2 < v77 )
    {
      v78 = v77 - a2;
      if ( v77 - (_DWORD)a2 == 1 )
        v78 = 0x8000;
      *(_WORD *)(v77 + Slow - 2) = v78;
    }
    goto LABEL_91;
  }
  Slow = 0LL;
  if ( v74 != -1 )
  {
    _InterlockedAnd64(
      (volatile signed __int64 *)(v48 + 8LL * (v74 >> 5) + 64),
      __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v74 & 0x1F));
    goto LABEL_92;
  }
  v4 = a2;
LABEL_91:
  if ( !Slow )
  {
LABEL_92:
    v79 = *(_QWORD *)(v48 + 16);
    v80 = a1 + 896;
    do
    {
      *(_QWORD *)&v114 = v79;
      v81 = BYTE6(v79);
      v107 = HIDWORD(v79);
      if ( BYTE6(v79) == 1 )
        v81 = 2;
      ++WORD1(v114);
      BYTE6(v114) = v81;
      v82 = (unsigned __int64)*(unsigned __int16 *)(v48 + 44) << 6;
      v83 = v79;
      v79 = _InterlockedCompareExchange64((volatile signed __int64 *)(v48 + 16), v114, v79);
    }
    while ( v83 != v79 );
    if ( !*(_BYTE *)(v82 + v80 + 92) )
    {
      *(_BYTE *)(v82 + v80 + 92) = 1;
      if ( !(_DWORD)qword_1801C7278 )
      {
        if ( qword_1801C7268 )
        {
          if ( !byte_1801CB8C8 && !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C7278, 1, 0) )
          {
            TpSetTimerEx(qword_1801C7268, (__int64)&qword_1801C7270, 0, 1000);
            if ( (RtlpHpHeapFeatures & 0x10) != 0 && (unsigned int)dword_1801C5680 > 5 )
            {
              v116 = off_1801C5688;
              v114 = 0x50B000000uLL;
              v117 = *(unsigned __int16 *)off_1801C5688;
              v119 = &unk_18019BEEE;
              v118 = 2;
              v120 = 25;
              v121 = 1;
              EtwEventWriteTransfer(qword_1801C56A0, &v114, 0LL, 0LL, 2, (__int64)&v116);
            }
          }
        }
      }
    }
    if ( BYTE2(v107) == 1 )
    {
      v84 = v80 + ((unsigned __int64)(unsigned __int16)v107 << 6);
      _m_prefetchw((const void *)(v84 + 8));
      v85 = *(_QWORD *)(v84 + 8);
      v16 = *(_QWORD *)(v48 + 24);
      *(_QWORD *)(v48 + 24) = v16 ^ (v16 ^ v85) & 0xFFFFFFFFFFFFF000uLL;
      v87 = v85;
      v86 = _InterlockedCompareExchange64((volatile signed __int64 *)(v84 + 8), v85 & 0xFFF | v48, v85);
      if ( v87 != v86 )
      {
        do
        {
          v88 = v86;
          *(_QWORD *)(v48 + 24) = v16 ^ (v16 ^ v86) & 0xFFFFFFFFFFFFF000uLL;
          v86 = _InterlockedCompareExchange64((volatile signed __int64 *)(v84 + 8), v48 | v86 & 0xFFF, v86);
        }
        while ( v86 != v88 );
      }
    }
    v4 = a2;
    v21 = a1 + 896;
  }
  v29 = v109;
LABEL_109:
  if ( v45 )
    RtlpHpLfhBucketUpdateAffinityMapping(
      v21,
      (volatile signed __int8 *)(v21 + ((unsigned __int64)*(unsigned __int16 *)(v29 + 2) << 6)));
LABEL_111:
  if ( Slow == -1 )
    goto LABEL_112;
LABEL_121:
  v19 = Slow;
  if ( !Slow )
    return 0LL;
  v5 = v112;
LABEL_123:
  if ( (v5 & 0x20002F08) == 0 || (v91 = RtlpHpExtrasAppend(a1, Slow, v4, v16, v115, v5), !v113) )
  {
LABEL_145:
    if ( RtlpHpStackLoggingEnabled(a1) )
      RtlpHpStackTraceAddStack(a1, Slow);
    if ( *(char *)(a1 + 20) < 0 )
      RtlpLogHeapAllocateEvent(a1, Slow, v4);
    return v19;
  }
  *(_BYTE *)(v91 + 2) ^= (*(_BYTE *)(v91 + 2) ^ v113) & 0xF;
  __writegsqword(0x250u, 0LL);
  if ( (int)RtlpCallInterceptRoutine(v113, a1, Slow, 2) >= 0 )
  {
    __writegsqword(0x250u, a1 + 20);
    v101 = *(unsigned int *)(a1 + 20);
    if ( (v101 & 0x10) != 0 )
    {
      v102 = *(unsigned int *)(a1 + 224);
      if ( (_DWORD)v102 != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
        RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 20, v101, v102);
    }
    goto LABEL_145;
  }
  RtlpCallInterceptRoutine(v113, a1, Slow, 3);
  __writegsqword(0x250u, a1 + 20);
  v92 = *(unsigned int *)(a1 + 20);
  if ( (v92 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 20, v92, a1 + 20);
  if ( (_WORD)Slow )
  {
    v95 = a1 + 320;
  }
  else
  {
    v93 = RtlCSparseBitmapBitmaskRead((__int64)&unk_1801C78C0, 2 * ((unsigned __int64)(Slow - qword_1801C78B8) >> 20));
    if ( !v93 || (v94 = v93 - 1, v94 == 2) )
    {
      RtlpHpLargeFree(a1, Slow);
      return 0LL;
    }
    v95 = a1 + 320;
    if ( v94 == 1 )
      v95 = a1 + 512;
  }
  v96 = *(_QWORD *)v95 & Slow;
  if ( RtlpHpHeapGlobals ^ v95 ^ *(_QWORD *)(v96 + 0x10) ^ v96 )
  {
    RtlpLogHeapFailure(9, *(_QWORD *)(v95 + 56), Slow, 0, 0LL, 0LL);
    return 0LL;
  }
  else
  {
    v97 = *(_BYTE *)(v95 + 8);
    v98 = v96 + 32 * ((unsigned __int64)(unsigned int)(Slow - v96) >> v97);
    v99 = v98 - 32LL * *(unsigned __int8 *)(v98 + 26);
    v100 = v96 + ((unsigned int)((v99 - v96) >> 5) << v97);
    if ( *(_BYTE *)(v99 + 24) + (v100 == Slow) == 11 )
      RtlpHpLfhContextFree(*(_QWORD *)(v95 + 24), v100, Slow);
    else
      RtlpHpSegFreeInternal(v95, Slow, v99, 0LL);
    return 0LL;
  }
}
