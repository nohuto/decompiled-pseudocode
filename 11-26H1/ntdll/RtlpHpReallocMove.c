/*
 * XREFs of RtlpHpReallocMove @ 0x1800B1D30
 * Callers:
 *     RtlpHpLargeReAlloc @ 0x180089604 (RtlpHpLargeReAlloc.c)
 *     RtlpHpSegReAlloc @ 0x1800B1A2C (RtlpHpSegReAlloc.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18000F040 (EtwEventWriteTransfer.c)
 *     RtlpHpVsContextAllocate @ 0x180012CA4 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhContextFree @ 0x180019DA0 (RtlpHpLfhContextFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18001A070 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpExtrasSetPresent @ 0x18001A610 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSegFreeInternal @ 0x18001AD38 (RtlpHpSegFreeInternal.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x18003F520 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     TpSetTimerEx @ 0x180069020 (TpSetTimerEx.c)
 *     RtlpHpLargeFree @ 0x18008918C (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x18008A18C (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180092C30 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1800933DC (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1800BF1B0 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x1800C14C0 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpExtrasMove @ 0x1800D7560 (RtlpHpExtrasMove.c)
 *     RtlpHpSegAlloc @ 0x1800E0094 (RtlpHpSegAlloc.c)
 *     RtlpHpPgContextAllocate @ 0x18010CAD0 (RtlpHpPgContextAllocate.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     RtlHeapZero @ 0x1801642D0 (RtlHeapZero.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

char *__fastcall RtlpHpReallocMove(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  unsigned int v6; // r12d
  __int64 v7; // r15
  unsigned __int64 v8; // r14
  __int64 v9; // rsi
  int v10; // edx
  char *Slow; // rdi
  int v12; // ecx
  int v13; // eax
  __int64 v14; // r15
  __int64 v15; // rbx
  unsigned int v16; // ecx
  __int64 v17; // rax
  void **TlsExpansionSlots; // rdx
  __int64 v19; // rdi
  int v20; // edx
  unsigned __int64 v21; // rcx
  __int64 v22; // r13
  __int64 v23; // r11
  unsigned __int64 v24; // r11
  struct _TEB *v25; // r9
  int v26; // r10d
  __int64 v27; // r14
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r8
  _DWORD *v32; // r8
  unsigned __int64 i; // rcx
  __int16 v37; // cx
  int v38; // esi
  signed __int64 v39; // rbx
  signed __int64 v40; // rax
  unsigned __int64 v41; // rbx
  struct _TEB *v42; // r8
  unsigned __int64 v43; // r15
  int v44; // edi
  __int64 v45; // r14
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // r9
  unsigned __int64 v49; // rdx
  int v50; // r11d
  unsigned int v51; // ebp
  volatile signed __int64 *v52; // rdi
  volatile signed __int64 *v53; // r8
  signed __int64 v54; // r9
  __int64 v59; // rdx
  unsigned __int64 v62; // rcx
  unsigned int v63; // ecx
  signed __int64 v65; // rcx
  signed __int64 v66; // rax
  int v67; // r8d
  unsigned int v68; // ebp
  __int64 v69; // rdi
  __int16 v70; // cx
  signed __int64 v71; // rax
  char v72; // dl
  unsigned __int64 v73; // rdx
  signed __int64 v74; // rtt
  unsigned __int64 v75; // r8
  __int64 v76; // r9
  signed __int64 v77; // rax
  signed __int64 v78; // rax
  signed __int64 v79; // rtt
  signed __int64 v80; // rdx
  __int64 v81; // rax
  int v82; // r10d
  size_t v83; // r8
  __int64 v84; // rax
  int v85; // eax
  __int64 v86; // r10
  unsigned __int64 v87; // r8
  char v88; // cl
  unsigned __int64 v89; // r11
  __int64 v90; // r11
  unsigned __int64 v91; // rdx
  unsigned __int8 v93; // [rsp+30h] [rbp-C8h]
  unsigned int v94; // [rsp+34h] [rbp-C4h]
  int v95; // [rsp+38h] [rbp-C0h]
  int v96; // [rsp+3Ch] [rbp-BCh]
  __int64 v97; // [rsp+40h] [rbp-B8h]
  int v98; // [rsp+44h] [rbp-B4h]
  __int128 v99; // [rsp+48h] [rbp-B0h] BYREF
  unsigned __int64 v100; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v101; // [rsp+60h] [rbp-98h]
  __int64 v102; // [rsp+68h] [rbp-90h]
  unsigned __int64 v103; // [rsp+70h] [rbp-88h]
  __int64 v104; // [rsp+78h] [rbp-80h]
  void *v105; // [rsp+80h] [rbp-78h] BYREF
  int v106; // [rsp+88h] [rbp-70h]
  int v107; // [rsp+8Ch] [rbp-6Ch]
  void *v108; // [rsp+90h] [rbp-68h]
  int v109; // [rsp+98h] [rbp-60h]
  int v110; // [rsp+9Ch] [rbp-5Ch]

  v4 = a2;
  v5 = *(_QWORD *)(a3 + 24);
  v6 = a4;
  v7 = a3;
  v8 = *(_QWORD *)(a3 + 32);
  v9 = a1;
  v103 = a2;
  v10 = v5;
  v101 = v8;
  v94 = a4;
  v104 = a3;
  v102 = a1;
  v100 = v5;
  if ( (a4 & 0x1000) != 0 )
  {
    Slow = (char *)RtlpHpPgContextAllocate(a1 + 808, (unsigned int)v5, (unsigned int)v8, a4);
    v12 = v8;
    if ( Slow )
      goto LABEL_108;
    v10 = v5;
  }
  else
  {
    v12 = v8;
  }
  if ( v8 >= *(unsigned __int16 *)(v9 + 972) )
    goto LABEL_99;
  v13 = v12 + 2;
  v14 = v9 + 896;
  if ( v10 == v12 )
    v13 = v12;
  v97 = v9 + 896;
  v15 = (unsigned int)RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v13 + 15) >> 4] - 1;
  v16 = (unsigned __int16)*(_DWORD *)(v9 + 980);
  if ( v16 < 0x40 )
  {
    v17 = __readgsqword(8 * v16 + 5248);
    goto LABEL_12;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v17 = (__int64)TlsExpansionSlots[v16 - 64];
LABEL_12:
    if ( v17 )
      goto LABEL_14;
  }
  v17 = RtlpHpLfhThreadDataInitializeSet(v9 + 896);
LABEL_14:
  v19 = v14 + ((unsigned __int16)v17 << 6);
  *(_QWORD *)&v99 = v17;
  v20 = *(unsigned __int16 *)(2 * v15 + v19);
  if ( !*(_WORD *)(2 * v15 + v19) )
  {
    if ( !RtlpHpLfhBucketCheckAndUpdate(v14, (unsigned int)v15, a3) )
    {
      v9 = v102;
LABEL_99:
      if ( v8 > 0x20000 )
      {
        if ( v8 > *(unsigned int *)(v9 + 528) )
        {
          v81 = RtlpHpLargeAlloc(v9, v5, v8, v6);
        }
        else
        {
          v82 = v9 + 512;
          if ( v8 <= *(unsigned int *)(v9 + 336) )
            v82 = v9 + 320;
          v81 = RtlpHpSegAlloc(v82, v5, v8, v8, v6);
        }
      }
      else
      {
        v81 = RtlpHpVsContextAllocate((_BYTE *)(v9 + 704), v5, v8, v6);
      }
      Slow = (char *)v81;
      goto LABEL_107;
    }
    v21 = v14 + ((unsigned __int64)BYTE4(v99) << 8) + 1472;
    v20 = *(unsigned __int16 *)(v21 + 2 * v15);
    if ( v19 != v21 )
      *(_WORD *)(2 * v15 + v19) = *(_WORD *)(v21 + 2 * v15);
  }
  v22 = v14 + (unsigned int)(v20 << 6);
  if ( *(_WORD *)(v22 + 4) )
  {
    v23 = *(_QWORD *)(v22 + 56);
    if ( (v23 & 0xFFF) != 0 && (*(_QWORD *)(v22 + 56) = v23 - 1, (v24 = v23 & 0xFFFFFFFFFFFFF000uLL) != 0) )
    {
      v25 = NtCurrentTeb();
      v26 = *(unsigned __int8 *)(v24 + 24);
      v27 = 0x100000001LL;
      v28 = v25->RngState[0];
      v29 = v25->RngState[1];
      v95 = qword_1801C6EC8 ^ *(_DWORD *)(v24 + 40) ^ (v24 >> 12);
      if ( (unsigned int)v5 >= (unsigned __int16)v95 )
        v27 = 1LL;
      v30 = v29 + v28;
      v31 = v28 ^ v29;
      v25->RngState[1] = __ROL8__(v31, 37);
      v25->RngState[0] = v31 ^ __ROL8__(v28, 24) ^ (v31 << 16);
      v32 = (_DWORD *)(v24 + 64 + 8LL * *(unsigned __int8 *)(v24 + 36));
      for ( i = (unsigned int)~*v32; *v32 == -1; i = (unsigned int)~*v32 )
      {
        if ( v32 == (_DWORD *)(v24 + 64 + 8 * ((unsigned int)(v26 - 8) - 1LL)) )
          v32 = (_DWORD *)(v24 + 64);
        else
          v32 += 2;
      }
      _RAX = 1LL << ((unsigned __int16)(BYTE4(v30) * (unsigned __int16)__popcnt(i)) >> 8);
      __asm
      {
        pdep    rcx, rax, rcx
        tzcnt   rdx, rcx
      }
      *(_QWORD *)v32 |= v27 << _RDX;
      LODWORD(_RAX) = _RDX + 4 * ((_DWORD)v32 - (v24 + 64));
      *(_BYTE *)(v24 + 36) = (unsigned int)_RAX >> 5;
      Slow = (char *)(v24 + (unsigned __int16)v95 * (_DWORD)_RAX + (unsigned int)HIWORD(v95));
      if ( (v94 & 2) != 0 )
        RtlHeapZero(Slow, ((unsigned int)v5 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( (unsigned int)v5 < (unsigned __int16)v95 )
      {
        v37 = v95 - v5;
        if ( (unsigned __int16)v95 - (_DWORD)v5 == 1 )
          v37 = 0x8000;
        *(_WORD *)&Slow[(unsigned __int16)v95 - 2] = v37;
      }
      v8 = v101;
    }
    else
    {
      Slow = (char *)RtlpHpLfhSlotAllocateSlow(v14);
    }
    goto LABEL_96;
  }
  v38 = 0;
  _m_prefetchw((const void *)(v22 + 56));
  v39 = *(_QWORD *)(v22 + 56);
  if ( (v39 & 0xFFF) == 0 )
    goto LABEL_39;
  while ( 1 )
  {
    v40 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 56), v39 - 1, v39);
    if ( v39 == v40 )
      break;
    v38 = 1;
    v39 = v40;
    if ( (v40 & 0xFFF) == 0 )
      goto LABEL_39;
  }
  v41 = v39 & 0xFFFFFFFFFFFFF000uLL;
  if ( !v41 )
  {
LABEL_39:
    Slow = (char *)RtlpHpLfhSlotAllocateSlow(v14);
    goto LABEL_94;
  }
  v42 = NtCurrentTeb();
  v43 = v41 + 64;
  v44 = *(unsigned __int8 *)(v41 + 24);
  v45 = 0x100000001LL;
  v46 = v42->RngState[1];
  v96 = qword_1801C6EC8 ^ *(_DWORD *)(v41 + 40) ^ (v41 >> 12);
  v47 = v42->RngState[0];
  if ( (unsigned int)v5 >= (unsigned __int16)v96 )
    v45 = 1LL;
  v48 = v46 + v47;
  v49 = v47 ^ v46;
  v50 = BYTE4(v48);
  v42->RngState[0] = v49 ^ __ROL8__(v47, 24) ^ (v49 << 16);
  v42->RngState[1] = __ROL8__(v49, 37);
  v51 = *(unsigned __int8 *)(v41 + 50);
  v93 = *(_BYTE *)(v41 + 39);
  v52 = (volatile signed __int64 *)(v43 + 8 * ((unsigned int)(v44 - 8) - 1LL));
  v53 = (volatile signed __int64 *)(v43 + 8LL * *(unsigned __int8 *)(v41 + 36));
LABEL_44:
  v54 = *v53;
  for ( _RAX = (unsigned int)~*(_DWORD *)v53; *(_DWORD *)v53 == -1; _RAX = (unsigned int)~*(_DWORD *)v53 )
  {
    if ( v53 == v52 )
      v53 = (volatile signed __int64 *)(v41 + 64);
    else
      ++v53;
    v54 = *v53;
  }
  while ( 1 )
  {
    if ( (qword_1801C6EE8 & 4) != 0 )
    {
      _RCX = 1LL << ((unsigned __int16)(v50 * __popcnt(_RAX)) >> 8);
      __asm
      {
        pdep    rdx, rcx, rax
        tzcnt   r10, rdx
      }
      v59 = v45 << _R10;
    }
    else
    {
      if ( v53 == v52 || v51 != 32 )
      {
        __asm { tzcnt   rdx, rax }
        _BitScanReverse64(&v62, _RAX);
        LODWORD(v99) = _RDX;
        v63 = v62 - _RDX + 1;
        if ( v51 < v63 )
          v63 = v51;
        v50 = _RDX + ((v63 * v50) >> 8);
        _RAX = __ROR8__(_RAX, v50);
        __asm { tzcnt   r10, rax }
        LODWORD(_R10) = v50 + _R10;
      }
      else
      {
        _RCX = (unsigned int)__ROR4__(_RAX, v50);
        __asm { tzcnt   r10, rcx }
        LODWORD(_R10) = ((_BYTE)v50 + (_BYTE)_R10) & 0x1F;
      }
      v59 = v45 << _R10;
    }
    v65 = v54;
    v66 = _InterlockedCompareExchange64(v53, v54 | v59, v54);
    v54 = v66;
    if ( v66 == v65 )
      break;
    _RAX = (unsigned int)~(_DWORD)v66;
    if ( !_RAX )
    {
      if ( v53 == v52 )
        v53 = (volatile signed __int64 *)(v41 + 64);
      else
        ++v53;
      goto LABEL_44;
    }
  }
  v67 = (_DWORD)v53 - v43;
  v14 = v97;
  v68 = _R10 + 4 * v67;
  *(_BYTE *)(v41 + 36) = v68 >> 5;
  v69 = HIWORD(v96) + (unsigned __int16)v96 * v68;
  if ( v93 <= 1u )
  {
    if ( v68 > *(unsigned __int16 *)(v41 + 48) )
      RtlpHpLfhSubsegmentPrefetch(v97, v41, (unsigned int)v69, (unsigned __int16)v96);
    goto LABEL_69;
  }
  if ( (int)RtlpHpLfhSubsegmentCommitBlock(v97, v41, v69) >= 0 )
  {
LABEL_69:
    v5 = v100;
    Slow = (char *)(v41 + v69);
    if ( (v94 & 2) != 0 )
      RtlHeapZero(Slow, ((unsigned int)v100 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned int)v100 < (unsigned __int16)v96 )
    {
      v70 = v96 - v100;
      if ( (unsigned __int16)v96 - (_DWORD)v100 == 1 )
        v70 = 0x8000;
      *(_WORD *)&Slow[(unsigned __int16)v96 - 2] = v70;
    }
    goto LABEL_76;
  }
  Slow = 0LL;
  if ( v68 != -1 )
  {
    _InterlockedAnd64(
      (volatile signed __int64 *)(v41 + 8LL * (v68 >> 5) + 64),
      __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v68 & 0x1F));
    goto LABEL_77;
  }
  v5 = v100;
LABEL_76:
  if ( !Slow )
  {
LABEL_77:
    v71 = *(_QWORD *)(v41 + 16);
    do
    {
      *(_QWORD *)&v99 = v71;
      v72 = BYTE6(v71);
      v98 = HIDWORD(v71);
      if ( BYTE6(v71) == 1 )
        v72 = 2;
      ++WORD1(v99);
      BYTE6(v99) = v72;
      v73 = (unsigned __int64)*(unsigned __int16 *)(v41 + 44) << 6;
      v74 = v71;
      v71 = _InterlockedCompareExchange64((volatile signed __int64 *)(v41 + 16), v99, v71);
    }
    while ( v74 != v71 );
    if ( !*(_BYTE *)(v73 + v14 + 92) )
    {
      *(_BYTE *)(v73 + v14 + 92) = 1;
      if ( !(_DWORD)qword_1801C7278 )
      {
        if ( qword_1801C7268 )
        {
          if ( !byte_1801CB8C8 && !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C7278, 1, 0) )
          {
            TpSetTimerEx(qword_1801C7268, (__int64)&qword_1801C7270, 0, 1000);
            if ( (RtlpHpHeapFeatures & 0x10) != 0 && (unsigned int)dword_1801C5680 > 5 )
            {
              v105 = off_1801C5688;
              v99 = 0x50B000000uLL;
              v106 = *(unsigned __int16 *)off_1801C5688;
              v108 = &unk_18019BEEE;
              v107 = 2;
              v109 = 25;
              v110 = 1;
              EtwEventWriteTransfer(qword_1801C56A0, &v99, 0LL, 0LL, 2, (__int64)&v105);
            }
          }
        }
      }
    }
    if ( BYTE2(v98) == 1 )
    {
      v75 = v14 + ((unsigned __int64)(unsigned __int16)v98 << 6);
      _m_prefetchw((const void *)(v75 + 8));
      v76 = *(_QWORD *)(v41 + 24);
      v77 = *(_QWORD *)(v75 + 8);
      *(_QWORD *)(v41 + 24) = v76 ^ (v77 ^ v76) & 0xFFFFFFFFFFFFF000uLL;
      v79 = v77;
      v78 = _InterlockedCompareExchange64((volatile signed __int64 *)(v75 + 8), v77 & 0xFFF | v41, v77);
      if ( v79 != v78 )
      {
        do
        {
          v80 = v78;
          *(_QWORD *)(v41 + 24) = v76 ^ (v78 ^ v76) & 0xFFFFFFFFFFFFF000uLL;
          v78 = _InterlockedCompareExchange64((volatile signed __int64 *)(v75 + 8), v41 | v78 & 0xFFF, v78);
        }
        while ( v78 != v80 );
      }
    }
    v5 = v100;
  }
  v8 = v101;
LABEL_94:
  if ( v38 )
    RtlpHpLfhBucketUpdateAffinityMapping(
      v14,
      (volatile signed __int8 *)(v14 + ((unsigned __int64)*(unsigned __int16 *)(v22 + 2) << 6)));
LABEL_96:
  v9 = v102;
  v6 = v94;
  if ( Slow == (char *)-1LL )
    goto LABEL_99;
LABEL_107:
  v4 = v103;
  v7 = v104;
LABEL_108:
  if ( Slow )
  {
    v83 = *(_QWORD *)v7;
    if ( *(_QWORD *)v7 >= *(_QWORD *)(v7 + 24) )
      v83 = *(_QWORD *)(v7 + 24);
    memmove(Slow, (const void *)v4, v83);
    if ( *(_DWORD *)(v7 + 16) )
    {
      RtlpHpExtrasMove(v4, *(_QWORD *)v7, (_DWORD)Slow, *(_QWORD *)(v7 + 24), v6);
      RtlpHpExtrasSetPresent(v9, (__int64)Slow);
    }
    if ( (_WORD)v4 )
    {
      v86 = v9 + 320;
    }
    else
    {
      v84 = RtlCSparseBitmapBitmaskRead((__int64)&unk_1801C78C0, 2 * ((v4 - qword_1801C78B8) >> 20));
      if ( !v84 || (v85 = v84 - 1, v85 == 2) )
      {
        RtlpHpLargeFree(v9, v4);
        return Slow;
      }
      v86 = v9 + 320;
      if ( v85 == 1 )
        v86 = v9 + 512;
    }
    v87 = *(_QWORD *)v86 & v4;
    if ( RtlpHpHeapGlobals ^ v86 ^ *(_QWORD *)(v87 + 0x10) ^ v87 )
    {
      RtlpLogHeapFailure(9, *(_QWORD *)(v86 + 56), v4, 0, 0LL, 0LL);
    }
    else
    {
      v88 = *(_BYTE *)(v86 + 8);
      v89 = v87 + 32 * ((unsigned __int64)(unsigned int)(v4 - v87) >> v88);
      v90 = v89 - 32LL * *(unsigned __int8 *)(v89 + 26);
      v91 = v87 + ((unsigned int)((__int64)(v90 - v87) >> 5) << v88);
      if ( *(_BYTE *)(v90 + 24) + (v91 == v4) == 11 )
        RtlpHpLfhContextFree(*(_QWORD *)(v86 + 24), v91, v4);
      else
        RtlpHpSegFreeInternal(v86, v4, v90, 0LL);
    }
  }
  return Slow;
}
