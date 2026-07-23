/*
 * XREFs of RtlpHpAllocateHeapSlow @ 0x180096F60
 * Callers:
 *     RtlpHpAllocateHeap @ 0x180091890 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpHpLfhContextFree @ 0x180004E80 (RtlpHpLfhContextFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180005150 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpExtrasAppend @ 0x180005470 (RtlpHpExtrasAppend.c)
 *     RtlpHpSegFreeInternal @ 0x180005E18 (RtlpHpSegFreeInternal.c)
 *     RtlpCallInterceptRoutine @ 0x180007640 (RtlpCallInterceptRoutine.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180029A90 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     EtwEventWriteTransfer @ 0x18005A770 (EtwEventWriteTransfer.c)
 *     RtlpHpVsContextAllocate @ 0x18005E3D4 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLargeAlloc @ 0x18006FE4C (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x180071D60 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x180072340 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLargeFree @ 0x18008058C (RtlpHpLargeFree.c)
 *     RtlpHpStackLoggingEnabled @ 0x1800809B0 (RtlpHpStackLoggingEnabled.c)
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpStackTraceAddStack @ 0x1800BD890 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x1800BEC50 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpSegAlloc @ 0x1800DD93C (RtlpHpSegAlloc.c)
 *     RtlpHpPgContextAllocate @ 0x18010C620 (RtlpHpPgContextAllocate.c)
 *     RtlpLogHeapAllocateEvent @ 0x180112C8C (RtlpLogHeapAllocateEvent.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117744 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x180121080 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     RtlHeapZero @ 0x1801641D0 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpAllocateHeapSlow(char *BaseAddress, unsigned __int64 a2, int a3)
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
  int v14; // r14d
  __int64 v15; // rax
  signed __int64 v16; // r9
  __int64 Slow; // rbx
  int v18; // ecx
  __int64 v19; // rdi
  int v20; // eax
  char *v21; // rbp
  __int64 v22; // rbx
  unsigned int v23; // ecx
  __int64 v24; // rax
  void **TlsExpansionSlots; // rdx
  char *v26; // rdi
  int v27; // r8d
  char *v28; // rcx
  char *v29; // rdx
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
  unsigned __int64 v53; // rdx
  bool v54; // cf
  unsigned __int64 v55; // r12
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
  int v74; // r8d
  char *v75; // r12
  unsigned int v76; // ebp
  __int64 v77; // rbx
  bool v78; // cc
  unsigned int v79; // ebp
  __int16 v80; // cx
  signed __int64 v81; // rax
  char v82; // dl
  unsigned __int64 v83; // rdx
  signed __int64 v84; // rtt
  char *v85; // r8
  signed __int64 v86; // rax
  signed __int64 v87; // rax
  signed __int64 v88; // rtt
  signed __int64 v89; // rdx
  __int64 v90; // rax
  int v91; // r10d
  unsigned __int64 v92; // rax
  int v93; // r14d
  __int64 v94; // rbp
  __int64 v95; // rdx
  __int64 v96; // rax
  int v97; // eax
  __int64 v98; // r10
  __int64 v99; // r8
  char v100; // cl
  unsigned __int64 v101; // r11
  __int64 v102; // r11
  unsigned __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // r8
  unsigned __int8 v106; // [rsp+30h] [rbp-A8h]
  int v107; // [rsp+38h] [rbp-A0h]
  int v108; // [rsp+3Ch] [rbp-9Ch]
  int v109; // [rsp+40h] [rbp-98h]
  int v110; // [rsp+44h] [rbp-94h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-90h] BYREF
  int v112; // [rsp+58h] [rbp-80h]
  int v113; // [rsp+5Ch] [rbp-7Ch]
  unsigned __int64 v114; // [rsp+60h] [rbp-78h]
  unsigned __int64 v115; // [rsp+68h] [rbp-70h] BYREF
  char *v116; // [rsp+70h] [rbp-68h]
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-60h] BYREF
  void *v118; // [rsp+88h] [rbp-50h]
  int v119; // [rsp+90h] [rbp-48h]
  int v120; // [rsp+94h] [rbp-44h]

  v114 = a2;
  v112 = a3;
  v3 = 0LL;
  v115 = 0LL;
  v4 = a2;
  v113 = 0;
  v5 = a3;
  if ( (a3 & 0x20) != 0 )
  {
    v7 = *((_DWORD *)BaseAddress + 6);
    v113 = v7;
    if ( v7 )
    {
      __writegsqword(0x250u, 0LL);
      v5 = a3 | 8;
      v112 = a3 | 8;
      v8 = RtlpCallInterceptRoutine(v7, (__int64)BaseAddress, 0LL, 1u, (__int64)&v115);
      __writegsqword(0x250u, (unsigned __int64)(BaseAddress + 20));
      v9 = *((unsigned int *)BaseAddress + 5);
      if ( (v9 & 0x10) != 0 )
      {
        v10 = *((unsigned int *)BaseAddress + 56);
        if ( (_DWORD)v10 != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
          RtlpHpEnvAcquireGlobalLockSharedContended(BaseAddress + 20, v9, v10);
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
  v109 = v5 & 0x10003002;
  if ( (v5 & 0x1000) != 0 )
  {
    v15 = RtlpHpPgContextAllocate(BaseAddress + 808, (unsigned int)v4, (unsigned int)v13);
    Slow = v15;
    v18 = v13;
    if ( v15 )
    {
      v19 = v15;
      goto LABEL_119;
    }
  }
  else
  {
    v18 = v13;
  }
  if ( v13 >= *((unsigned __int16 *)BaseAddress + 486) )
    goto LABEL_109;
  v20 = v18 + 2;
  v21 = BaseAddress + 896;
  if ( (_DWORD)v4 == v18 )
    v20 = v18;
  v22 = (unsigned int)RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v20 + 15) >> 4] - 1;
  v23 = (unsigned __int16)*((_DWORD *)BaseAddress + 245);
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
  v24 = RtlpHpLfhThreadDataInitializeSet((__int64)(BaseAddress + 896));
LABEL_29:
  v26 = &v21[64 * (unsigned __int16)v24];
  *(_QWORD *)&EventDescriptor.Id = v24;
  v27 = *(unsigned __int16 *)&v26[2 * v22];
  if ( !*(_WORD *)&v26[2 * v22] )
  {
    if ( !RtlpHpLfhBucketCheckAndUpdate((__int64)(BaseAddress + 896), v22) )
    {
LABEL_109:
      if ( v13 > 0x20000 )
      {
        if ( v13 > *((unsigned int *)BaseAddress + 132) )
        {
          v90 = (__int64)RtlpHpLargeAlloc(BaseAddress, v4, v13, v14);
        }
        else
        {
          v91 = (_DWORD)BaseAddress + 512;
          if ( v13 <= *((unsigned int *)BaseAddress + 84) )
            v91 = (_DWORD)BaseAddress + 320;
          v90 = RtlpHpSegAlloc(v91, v4, v13, v13, v14);
        }
      }
      else
      {
        v90 = RtlpHpVsContextAllocate(BaseAddress + 704, v4, v13, v14);
      }
      Slow = v90;
      goto LABEL_117;
    }
    v28 = &v21[256 * (unsigned __int64)EventDescriptor.Level + 1472];
    v27 = *(unsigned __int16 *)&v28[2 * v22];
    if ( v26 != v28 )
      *(_WORD *)&v26[2 * v22] = *(_WORD *)&v28[2 * v22];
  }
  v29 = &v21[v27 << 6];
  v116 = v29;
  if ( *((_WORD *)v29 + 2) )
  {
    v30 = *((_QWORD *)v29 + 7);
    if ( (v30 & 0xFFF) != 0 )
    {
      *((_QWORD *)v29 + 7) = v30 - 1;
      v31 = v30 & 0xFFFFFFFFFFFFF000uLL;
      if ( v31 )
      {
        v32 = NtCurrentTeb();
        v33 = *(unsigned __int8 *)(v31 + 24);
        v34 = 0x100000001LL;
        v35 = v32->RngState[0];
        v36 = v32->RngState[1];
        v107 = qword_1801C5EC8 ^ *(_DWORD *)(v31 + 40) ^ (v31 >> 12);
        if ( (unsigned int)v4 >= (unsigned __int16)v107 )
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
        v14 = v109;
        LODWORD(_RAX) = _RDX + 4 * ((_DWORD)v39 - v16);
        *(_BYTE *)(v31 + 36) = (unsigned int)_RAX >> 5;
        Slow = v31 + (unsigned __int16)v107 * (_DWORD)_RAX + (unsigned int)HIWORD(v107);
        if ( (v109 & 2) != 0 )
          RtlHeapZero(Slow, ((unsigned int)v4 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( (unsigned int)v4 < (unsigned __int16)v107 )
        {
          v44 = v107 - v4;
          if ( (unsigned __int16)v107 - (_DWORD)v4 == 1 )
            v44 = 0x8000;
          *(_WORD *)((unsigned __int16)v107 + Slow - 2) = v44;
        }
        goto LABEL_108;
      }
    }
LABEL_52:
    Slow = RtlpHpLfhSlotAllocateSlow((__int64)(BaseAddress + 896));
    goto LABEL_108;
  }
  v45 = 0;
  _m_prefetchw(v29 + 56);
  v46 = *((_QWORD *)v29 + 7);
  if ( (v46 & 0xFFF) == 0 )
    goto LABEL_52;
  while ( 1 )
  {
    v47 = _InterlockedCompareExchange64((volatile signed __int64 *)v29 + 7, v46 - 1, v46);
    if ( v46 == v47 )
      break;
    v45 = 1;
    v46 = v47;
    if ( (v47 & 0xFFF) == 0 )
      goto LABEL_52;
  }
  v48 = v46 & 0xFFFFFFFFFFFFF000uLL;
  if ( !v48 )
    goto LABEL_52;
  v49 = NtCurrentTeb();
  v50 = *(unsigned __int8 *)(v48 + 24);
  v51 = 0x100000001LL;
  v52 = v49->RngState[0];
  v53 = v49->RngState[1];
  v110 = qword_1801C5EC8 ^ *(_DWORD *)(v48 + 40) ^ (v48 >> 12);
  v54 = (unsigned int)v4 < (unsigned __int16)v110;
  v55 = v48 + 64;
  if ( !v54 )
    v51 = 1LL;
  v56 = v53 + v52;
  v57 = v52 ^ v53;
  v58 = BYTE4(v56);
  v49->RngState[1] = __ROL8__(v57, 37);
  v49->RngState[0] = v57 ^ __ROL8__(v52, 24) ^ (v57 << 16);
  v59 = *(unsigned __int8 *)(v48 + 50);
  v106 = *(_BYTE *)(v48 + 39);
  v60 = (volatile signed __int64 *)(v55 + 8 * ((unsigned int)(v50 - 8) - 1LL));
  v61 = (volatile signed __int64 *)(v55 + 8LL * *(unsigned __int8 *)(v48 + 36));
LABEL_57:
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
    if ( (qword_1801C5EE8 & 4) != 0 )
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
        *(_DWORD *)&EventDescriptor.Id = _RDX;
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
      goto LABEL_57;
    }
  }
  v74 = (_DWORD)v61 - v55;
  v75 = BaseAddress + 896;
  v76 = _R10 + 4 * v74;
  *(_BYTE *)(v48 + 36) = v76 >> 5;
  v77 = HIWORD(v110) + (unsigned __int16)v110 * v76;
  if ( v106 <= 1u )
  {
    v78 = v76 <= *(unsigned __int16 *)(v48 + 48);
    v79 = (unsigned __int16)v110;
    if ( !v78 )
      RtlpHpLfhSubsegmentPrefetch(BaseAddress + 896, v48, (unsigned int)v77, (unsigned __int16)v110);
    goto LABEL_83;
  }
  if ( (int)RtlpHpLfhSubsegmentCommitBlock((__int64)(BaseAddress + 896), v48, v77) >= 0 )
  {
    v79 = (unsigned __int16)v110;
LABEL_83:
    Slow = v48 + v77;
    if ( (v109 & 2) != 0 )
      RtlHeapZero(Slow, ((unsigned int)v114 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned int)v114 < v79 )
    {
      v80 = v79 - v114;
      if ( v79 - (_DWORD)v114 == 1 )
        v80 = 0x8000;
      *(_WORD *)(v79 + Slow - 2) = v80;
    }
    goto LABEL_89;
  }
  Slow = 0LL;
  if ( v76 != -1 )
  {
    _InterlockedAnd64(
      (volatile signed __int64 *)(v48 + 8LL * (v76 >> 5) + 64),
      __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v76 & 0x1F));
    goto LABEL_90;
  }
LABEL_89:
  if ( !Slow )
  {
LABEL_90:
    v81 = *(_QWORD *)(v48 + 16);
    do
    {
      *(_QWORD *)&EventDescriptor.Id = v81;
      v82 = BYTE6(v81);
      v108 = HIDWORD(v81);
      if ( BYTE6(v81) == 1 )
        v82 = 2;
      ++*(_WORD *)&EventDescriptor.Version;
      LOBYTE(EventDescriptor.Task) = v82;
      v83 = (unsigned __int64)*(unsigned __int16 *)(v48 + 44) << 6;
      v84 = v81;
      v81 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v48 + 16),
              *(signed __int64 *)&EventDescriptor.Id,
              v81);
    }
    while ( v84 != v81 );
    if ( !v75[v83 + 92] )
    {
      v75[v83 + 92] = 1;
      if ( !(_DWORD)qword_1801C6278 )
      {
        if ( Timer )
        {
          if ( !byte_1801CA908 && !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C6278, 1, 0) )
          {
            TpSetTimerEx(Timer, &DueTime, 0, 0x3E8u);
            if ( (RtlpHpHeapFeatures & 0x10) != 0 && (unsigned int)dword_1801C4680 > 5 )
            {
              *(_DWORD *)&EventDescriptor.Level = 5;
              UserData.Ptr = (unsigned __int64)off_1801C4688;
              *(_DWORD *)&EventDescriptor.Id = 184549376;
              EventDescriptor.Keyword = 0LL;
              UserData.Size = *(unsigned __int16 *)off_1801C4688;
              v118 = &unk_18019AE96;
              UserData.Reserved = 2;
              v119 = 25;
              v120 = 1;
              EtwEventWriteTransfer(qword_1801C46A0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
            }
          }
        }
      }
    }
    if ( BYTE2(v108) == 1 )
    {
      v85 = &v75[64 * (unsigned __int64)(unsigned __int16)v108];
      _m_prefetchw(v85 + 8);
      v86 = *((_QWORD *)v85 + 1);
      v16 = *(_QWORD *)(v48 + 24);
      *(_QWORD *)(v48 + 24) = v16 ^ (v16 ^ v86) & 0xFFFFFFFFFFFFF000uLL;
      v88 = v86;
      v87 = _InterlockedCompareExchange64((volatile signed __int64 *)v85 + 1, v86 & 0xFFF | v48, v86);
      if ( v88 != v87 )
      {
        do
        {
          v89 = v87;
          *(_QWORD *)(v48 + 24) = v16 ^ (v16 ^ v87) & 0xFFFFFFFFFFFFF000uLL;
          v87 = _InterlockedCompareExchange64((volatile signed __int64 *)v85 + 1, v48 | v87 & 0xFFF, v87);
        }
        while ( v87 != v89 );
      }
    }
  }
  if ( v45 )
    RtlpHpLfhBucketUpdateAffinityMapping(
      BaseAddress + 896,
      &v75[64 * (unsigned __int64)*((unsigned __int16 *)v116 + 1)]);
  v14 = v109;
  v4 = v114;
LABEL_108:
  if ( Slow == -1 )
    goto LABEL_109;
LABEL_117:
  v19 = Slow;
  if ( !Slow )
    return 0LL;
  v5 = v112;
LABEL_119:
  if ( (v5 & 0x20002F08) == 0
    || (v92 = RtlpHpExtrasAppend((_RTL_SRWLOCK *)BaseAddress, Slow, v4, v16, v115, v5), (v93 = v113) == 0) )
  {
LABEL_141:
    if ( RtlpHpStackLoggingEnabled((__int64)BaseAddress) )
      RtlpHpStackTraceAddStack(BaseAddress, Slow);
    if ( BaseAddress[20] < 0 )
      RtlpLogHeapAllocateEvent(BaseAddress, Slow, v4);
    return v19;
  }
  v94 = v92 + 16;
  *(_BYTE *)(v92 + 2) ^= (*(_BYTE *)(v92 + 2) ^ v113) & 0xF;
  __writegsqword(0x250u, 0LL);
  if ( (int)RtlpCallInterceptRoutine(v93, (__int64)BaseAddress, Slow, 2u, v92 + 16) >= 0 )
  {
    __writegsqword(0x250u, (unsigned __int64)(BaseAddress + 20));
    v104 = *((unsigned int *)BaseAddress + 5);
    if ( (v104 & 0x10) != 0 )
    {
      v105 = *((unsigned int *)BaseAddress + 56);
      if ( (_DWORD)v105 != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
        RtlpHpEnvAcquireGlobalLockSharedContended(BaseAddress + 20, v104, v105);
    }
    goto LABEL_141;
  }
  RtlpCallInterceptRoutine(v93, (__int64)BaseAddress, Slow, 3u, v94);
  __writegsqword(0x250u, (unsigned __int64)(BaseAddress + 20));
  v95 = *((unsigned int *)BaseAddress + 5);
  if ( (v95 & 0x10) != 0 && *((_DWORD *)BaseAddress + 56) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    RtlpHpEnvAcquireGlobalLockSharedContended(BaseAddress + 20, v95, BaseAddress + 20);
  if ( (_WORD)Slow )
  {
    v98 = (__int64)(BaseAddress + 320);
  }
  else
  {
    v96 = RtlCSparseBitmapBitmaskRead((__int64)&::BaseAddress, 2 * ((unsigned __int64)(Slow - qword_1801C6908) >> 20));
    if ( !v96 || (v97 = v96 - 1, v97 == 2) )
    {
      RtlpHpLargeFree((__int64)BaseAddress, (char *)Slow);
      return 0LL;
    }
    v98 = (__int64)(BaseAddress + 320);
    if ( v97 == 1 )
      v98 = (__int64)(BaseAddress + 512);
  }
  v99 = *(_QWORD *)v98 & Slow;
  if ( RtlpHpHeapGlobals ^ v98 ^ *(_QWORD *)(v99 + 0x10) ^ v99 )
  {
    RtlpLogHeapFailure(9, *(_QWORD *)(v98 + 56), Slow, 0, 0LL, 0LL);
    return 0LL;
  }
  else
  {
    v100 = *(_BYTE *)(v98 + 8);
    v101 = v99 + 32 * ((unsigned __int64)(unsigned int)(Slow - v99) >> v100);
    v102 = v101 - 32LL * *(unsigned __int8 *)(v101 + 26);
    v103 = v99 + ((unsigned int)((v102 - v99) >> 5) << v100);
    if ( *(_BYTE *)(v102 + 24) + (v103 == Slow) == 11 )
      RtlpHpLfhContextFree(*(_QWORD *)(v98 + 24), v103, Slow);
    else
      RtlpHpSegFreeInternal(v98, Slow, v102, 0LL);
    return 0LL;
  }
}
