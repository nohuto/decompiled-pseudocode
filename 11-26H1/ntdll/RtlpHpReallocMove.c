/*
 * XREFs of RtlpHpReallocMove @ 0x1800818A0
 * Callers:
 *     RtlpHpLargeReAlloc @ 0x1800710A8 (RtlpHpLargeReAlloc.c)
 *     RtlpHpSegReAlloc @ 0x18008159C (RtlpHpSegReAlloc.c)
 * Callees:
 *     RtlpHpLfhContextFree @ 0x180004E80 (RtlpHpLfhContextFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180005150 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpExtrasSetPresent @ 0x1800056F0 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSegFreeInternal @ 0x180005E18 (RtlpHpSegFreeInternal.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180029A90 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     EtwEventWriteTransfer @ 0x18005A770 (EtwEventWriteTransfer.c)
 *     RtlpHpVsContextAllocate @ 0x18005E3D4 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLargeAlloc @ 0x18006FE4C (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x180071D60 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x180072340 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLargeFree @ 0x18008058C (RtlpHpLargeFree.c)
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x1800BEC50 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpExtrasMove @ 0x1800D4520 (RtlpHpExtrasMove.c)
 *     RtlpHpSegAlloc @ 0x1800DD93C (RtlpHpSegAlloc.c)
 *     RtlpHpPgContextAllocate @ 0x18010C620 (RtlpHpPgContextAllocate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117744 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     RtlHeapZero @ 0x1801641D0 (RtlHeapZero.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

char *__fastcall RtlpHpReallocMove(char *BaseAddress, __int64 Src, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r14
  unsigned int v6; // r12d
  __int64 v7; // rbp
  unsigned __int64 v8; // r15
  char *v9; // rsi
  int v10; // edx
  char *Slow; // rdi
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rbp
  __int64 v15; // rbx
  unsigned int v16; // ecx
  __int64 v17; // rax
  void **TlsExpansionSlots; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdi
  int v21; // edx
  unsigned __int64 v22; // rcx
  unsigned __int16 *v23; // r13
  __int64 v24; // r11
  unsigned __int64 v25; // r11
  struct _TEB *v26; // r9
  int v27; // r10d
  __int64 v28; // r14
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r8
  _DWORD *v33; // r8
  unsigned __int64 i; // rcx
  __int16 v38; // cx
  int v39; // esi
  signed __int64 v40; // rbx
  signed __int64 v41; // rax
  unsigned __int64 v42; // rbx
  struct _TEB *v43; // r8
  int v44; // edi
  __int64 v45; // r14
  unsigned __int64 v46; // rdx
  bool v47; // cf
  unsigned __int64 v48; // r15
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // r9
  unsigned __int64 v51; // rdx
  int v52; // r11d
  unsigned int v53; // ebp
  volatile signed __int64 *v54; // rdi
  volatile signed __int64 *v55; // r8
  signed __int64 v56; // r9
  __int64 v61; // rdx
  unsigned __int64 v64; // rcx
  unsigned int v65; // ecx
  signed __int64 v67; // rcx
  signed __int64 v68; // rax
  int v69; // r8d
  __int64 v70; // r15
  unsigned int v71; // ebp
  __int64 v72; // rdi
  __int16 v73; // cx
  signed __int64 v74; // rax
  char v75; // dl
  unsigned __int64 v76; // rdx
  signed __int64 v77; // rtt
  int v78; // eax
  unsigned __int64 v79; // r8
  __int64 v80; // r9
  signed __int64 v81; // rax
  signed __int64 v82; // rax
  signed __int64 v83; // rtt
  signed __int64 v84; // rdx
  __int64 v85; // rax
  int v86; // r10d
  size_t v87; // r8
  __int64 v88; // rax
  int v89; // eax
  __int64 v90; // r10
  __int64 v91; // r8
  char v92; // cl
  unsigned __int64 v93; // r11
  __int64 v94; // r11
  unsigned __int64 v95; // rdx
  unsigned __int8 v97; // [rsp+30h] [rbp-C8h]
  int v99; // [rsp+38h] [rbp-C0h]
  int v100; // [rsp+3Ch] [rbp-BCh]
  __int64 v101; // [rsp+40h] [rbp-B8h]
  int v102; // [rsp+44h] [rbp-B4h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B0h] BYREF
  unsigned __int64 v104; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v105; // [rsp+60h] [rbp-98h]
  char *v106; // [rsp+68h] [rbp-90h]
  __int64 v107; // [rsp+70h] [rbp-88h]
  __int64 v108; // [rsp+78h] [rbp-80h]
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-78h] BYREF
  void *v110; // [rsp+90h] [rbp-68h]
  int v111; // [rsp+98h] [rbp-60h]
  int v112; // [rsp+9Ch] [rbp-5Ch]

  v4 = Src;
  v5 = *(_QWORD *)(a3 + 32);
  v6 = a4;
  v7 = a3;
  v8 = *(_QWORD *)(a3 + 24);
  v9 = BaseAddress;
  v107 = Src;
  v10 = v8;
  v104 = v8;
  v108 = a3;
  v106 = BaseAddress;
  v105 = v5;
  if ( (a4 & 0x1000) != 0 )
  {
    Slow = (char *)RtlpHpPgContextAllocate(BaseAddress + 808, (unsigned int)v8, (unsigned int)v5);
    v12 = v5;
    if ( Slow )
      goto LABEL_106;
    v10 = v8;
  }
  else
  {
    v12 = v5;
  }
  if ( v5 >= *((unsigned __int16 *)v9 + 486) )
    goto LABEL_97;
  v13 = v12 + 2;
  v14 = (__int64)(v9 + 896);
  if ( v10 == v12 )
    v13 = v12;
  v101 = (__int64)(v9 + 896);
  v15 = (unsigned int)RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v13 + 15) >> 4] - 1;
  v16 = (unsigned __int16)*((_DWORD *)v9 + 245);
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
  v17 = RtlpHpLfhThreadDataInitializeSet((__int64)(v9 + 896));
LABEL_14:
  v19 = 2 * v15;
  v20 = v14 + ((unsigned __int16)v17 << 6);
  *(_QWORD *)&EventDescriptor.Id = v17;
  v21 = *(unsigned __int16 *)(2 * v15 + v20);
  if ( !*(_WORD *)(2 * v15 + v20) )
  {
    if ( !RtlpHpLfhBucketCheckAndUpdate(v14, v15) )
    {
      v9 = v106;
LABEL_97:
      if ( v5 > 0x20000 )
      {
        if ( v5 > *((unsigned int *)v9 + 132) )
        {
          v85 = (__int64)RtlpHpLargeAlloc(v9, v8, v5, v6);
        }
        else
        {
          v86 = (_DWORD)v9 + 512;
          if ( v5 <= *((unsigned int *)v9 + 84) )
            v86 = (_DWORD)v9 + 320;
          v85 = RtlpHpSegAlloc(v86, v8, v5, v5, v6);
        }
      }
      else
      {
        v85 = RtlpHpVsContextAllocate(v9 + 704, v8, v5, v6);
      }
      Slow = (char *)v85;
      goto LABEL_105;
    }
    v22 = v14 + ((unsigned __int64)EventDescriptor.Level << 8) + 1472;
    v21 = *(unsigned __int16 *)(v19 + v22);
    if ( v20 != v22 )
      *(_WORD *)(v19 + v20) = *(_WORD *)(v19 + v22);
  }
  v23 = (unsigned __int16 *)(v14 + (unsigned int)(v21 << 6));
  if ( !v23[2] )
  {
    v39 = 0;
    _m_prefetchw(v23 + 28);
    v40 = *((_QWORD *)v23 + 7);
    if ( (v40 & 0xFFF) == 0 )
      goto LABEL_38;
    while ( 1 )
    {
      v41 = _InterlockedCompareExchange64((volatile signed __int64 *)v23 + 7, v40 - 1, v40);
      if ( v40 == v41 )
        break;
      v39 = 1;
      v40 = v41;
      if ( (v41 & 0xFFF) == 0 )
        goto LABEL_38;
    }
    v42 = v40 & 0xFFFFFFFFFFFFF000uLL;
    if ( !v42 )
      goto LABEL_38;
    v43 = NtCurrentTeb();
    v44 = *(unsigned __int8 *)(v42 + 24);
    v45 = 0x100000001LL;
    v46 = v43->RngState[1];
    v100 = qword_1801C5EC8 ^ *(_DWORD *)(v42 + 40) ^ (v42 >> 12);
    v47 = (unsigned int)v8 < (unsigned __int16)v100;
    v48 = v42 + 64;
    v49 = v43->RngState[0];
    if ( !v47 )
      v45 = 1LL;
    v50 = v46 + v49;
    v51 = v49 ^ v46;
    v52 = BYTE4(v50);
    v43->RngState[0] = v51 ^ __ROL8__(v49, 24) ^ (v51 << 16);
    v43->RngState[1] = __ROL8__(v51, 37);
    v53 = *(unsigned __int8 *)(v42 + 50);
    v97 = *(_BYTE *)(v42 + 39);
    v54 = (volatile signed __int64 *)(v48 + 8 * ((unsigned int)(v44 - 8) - 1LL));
    v55 = (volatile signed __int64 *)(v48 + 8LL * *(unsigned __int8 *)(v42 + 36));
LABEL_43:
    v56 = *v55;
    for ( _RAX = (unsigned int)~*(_DWORD *)v55; *(_DWORD *)v55 == -1; _RAX = (unsigned int)~*(_DWORD *)v55 )
    {
      if ( v55 == v54 )
        v55 = (volatile signed __int64 *)(v42 + 64);
      else
        ++v55;
      v56 = *v55;
    }
    while ( 1 )
    {
      if ( (qword_1801C5EE8 & 4) != 0 )
      {
        _RCX = 1LL << ((unsigned __int16)(v52 * __popcnt(_RAX)) >> 8);
        __asm
        {
          pdep    rdx, rcx, rax
          tzcnt   r10, rdx
        }
        v61 = v45 << _R10;
      }
      else
      {
        if ( v55 == v54 || v53 != 32 )
        {
          __asm { tzcnt   rdx, rax }
          _BitScanReverse64(&v64, _RAX);
          *(_DWORD *)&EventDescriptor.Id = _RDX;
          v65 = v64 - _RDX + 1;
          if ( v53 < v65 )
            v65 = v53;
          v52 = _RDX + ((v65 * v52) >> 8);
          _RAX = __ROR8__(_RAX, v52);
          __asm { tzcnt   r10, rax }
          LODWORD(_R10) = v52 + _R10;
        }
        else
        {
          _RCX = (unsigned int)__ROR4__(_RAX, v52);
          __asm { tzcnt   r10, rcx }
          LODWORD(_R10) = ((_BYTE)v52 + (_BYTE)_R10) & 0x1F;
        }
        v61 = v45 << _R10;
      }
      v67 = v56;
      v68 = _InterlockedCompareExchange64(v55, v56 | v61, v56);
      v56 = v68;
      if ( v68 == v67 )
        break;
      _RAX = (unsigned int)~(_DWORD)v68;
      if ( !_RAX )
      {
        if ( v55 == v54 )
          v55 = (volatile signed __int64 *)(v42 + 64);
        else
          ++v55;
        goto LABEL_43;
      }
    }
    v69 = (_DWORD)v55 - v48;
    v70 = v101;
    v71 = _R10 + 4 * v69;
    *(_BYTE *)(v42 + 36) = v71 >> 5;
    v72 = HIWORD(v100) + (unsigned __int16)v100 * v71;
    if ( v97 <= 1u )
    {
      if ( v71 > *(unsigned __int16 *)(v42 + 48) )
        RtlpHpLfhSubsegmentPrefetch(v101, v42, (unsigned int)v72, (unsigned __int16)v100);
    }
    else if ( (int)RtlpHpLfhSubsegmentCommitBlock(v101, v42, v72) < 0 )
    {
      Slow = 0LL;
      if ( v71 != -1 )
      {
        _InterlockedAnd64(
          (volatile signed __int64 *)(v42 + 8LL * (v71 >> 5) + 64),
          __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v71 & 0x1F));
        goto LABEL_75;
      }
LABEL_74:
      if ( Slow )
      {
LABEL_90:
        if ( v39 )
          RtlpHpLfhBucketUpdateAffinityMapping(v70, v70 + ((unsigned __int64)v23[1] << 6));
        v8 = v104;
        goto LABEL_93;
      }
LABEL_75:
      v74 = *(_QWORD *)(v42 + 16);
      do
      {
        *(_QWORD *)&EventDescriptor.Id = v74;
        v75 = BYTE6(v74);
        v102 = HIDWORD(v74);
        if ( BYTE6(v74) == 1 )
          v75 = 2;
        ++*(_WORD *)&EventDescriptor.Version;
        LOBYTE(EventDescriptor.Task) = v75;
        v76 = (unsigned __int64)*(unsigned __int16 *)(v42 + 44) << 6;
        v77 = v74;
        v74 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v42 + 16),
                *(signed __int64 *)&EventDescriptor.Id,
                v74);
      }
      while ( v77 != v74 );
      if ( !*(_BYTE *)(v76 + v70 + 92) )
      {
        *(_BYTE *)(v76 + v70 + 92) = 1;
        v78 = qword_1801C6278;
        if ( !(_DWORD)qword_1801C6278 )
        {
          if ( Timer )
          {
            if ( byte_1801CA908 == (_BYTE)qword_1801C6278
              && v78 == _InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C6278, 1, qword_1801C6278) )
            {
              TpSetTimerEx(Timer, &DueTime, 0, 0x3E8u);
              if ( (RtlpHpHeapFeatures & 0x10) != 0 && (unsigned int)dword_1801C4680 > 5 )
              {
                *(_DWORD *)&EventDescriptor.Level = 5;
                UserData.Ptr = (unsigned __int64)off_1801C4688;
                *(_DWORD *)&EventDescriptor.Id = 184549376;
                EventDescriptor.Keyword = 0LL;
                UserData.Size = *(unsigned __int16 *)off_1801C4688;
                v110 = &unk_18019AE96;
                UserData.Reserved = 2;
                v111 = 25;
                v112 = 1;
                EtwEventWriteTransfer(qword_1801C46A0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
              }
            }
          }
        }
      }
      if ( BYTE2(v102) == 1 )
      {
        v79 = v70 + ((unsigned __int64)(unsigned __int16)v102 << 6);
        _m_prefetchw((const void *)(v79 + 8));
        v80 = *(_QWORD *)(v42 + 24);
        v81 = *(_QWORD *)(v79 + 8);
        *(_QWORD *)(v42 + 24) = v80 ^ (v81 ^ v80) & 0xFFFFFFFFFFFFF000uLL;
        v83 = v81;
        v82 = _InterlockedCompareExchange64((volatile signed __int64 *)(v79 + 8), v81 & 0xFFF | v42, v81);
        if ( v83 != v82 )
        {
          do
          {
            v84 = v82;
            *(_QWORD *)(v42 + 24) = v80 ^ (v82 ^ v80) & 0xFFFFFFFFFFFFF000uLL;
            v82 = _InterlockedCompareExchange64((volatile signed __int64 *)(v79 + 8), v42 | v82 & 0xFFF, v82);
          }
          while ( v82 != v84 );
        }
      }
      goto LABEL_90;
    }
    Slow = (char *)(v42 + v72);
    if ( (a4 & 2) != 0 )
      RtlHeapZero(Slow, ((unsigned int)v104 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned int)v104 < (unsigned __int16)v100 )
    {
      v73 = v100 - v104;
      if ( (unsigned __int16)v100 - (_DWORD)v104 == 1 )
        v73 = 0x8000;
      *(_WORD *)&Slow[(unsigned __int16)v100 - 2] = v73;
    }
    goto LABEL_74;
  }
  v24 = *((_QWORD *)v23 + 7);
  if ( (v24 & 0xFFF) == 0 || (*((_QWORD *)v23 + 7) = v24 - 1, (v25 = v24 & 0xFFFFFFFFFFFFF000uLL) == 0) )
  {
LABEL_38:
    Slow = (char *)RtlpHpLfhSlotAllocateSlow(v14);
    goto LABEL_94;
  }
  v26 = NtCurrentTeb();
  v27 = *(unsigned __int8 *)(v25 + 24);
  v28 = 0x100000001LL;
  v29 = v26->RngState[0];
  v30 = v26->RngState[1];
  v99 = qword_1801C5EC8 ^ *(_DWORD *)(v25 + 40) ^ (v25 >> 12);
  if ( (unsigned int)v8 >= (unsigned __int16)v99 )
    v28 = 1LL;
  v31 = v30 + v29;
  v32 = v29 ^ v30;
  v26->RngState[1] = __ROL8__(v32, 37);
  v26->RngState[0] = v32 ^ __ROL8__(v29, 24) ^ (v32 << 16);
  v33 = (_DWORD *)(v25 + 64 + 8LL * *(unsigned __int8 *)(v25 + 36));
  for ( i = (unsigned int)~*v33; *v33 == -1; i = (unsigned int)~*v33 )
  {
    if ( v33 == (_DWORD *)(v25 + 64 + 8 * ((unsigned int)(v27 - 8) - 1LL)) )
      v33 = (_DWORD *)(v25 + 64);
    else
      v33 += 2;
  }
  _RAX = 1LL << ((unsigned __int16)(BYTE4(v31) * (unsigned __int16)__popcnt(i)) >> 8);
  __asm
  {
    pdep    rcx, rax, rcx
    tzcnt   rdx, rcx
  }
  *(_QWORD *)v33 |= v28 << _RDX;
  LODWORD(_RAX) = _RDX + 4 * ((_DWORD)v33 - (v25 + 64));
  *(_BYTE *)(v25 + 36) = (unsigned int)_RAX >> 5;
  Slow = (char *)(v25 + (unsigned __int16)v99 * (_DWORD)_RAX + (unsigned int)HIWORD(v99));
  if ( (a4 & 2) != 0 )
    RtlHeapZero(Slow, ((unsigned int)v8 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (unsigned int)v8 < (unsigned __int16)v99 )
  {
    v38 = v99 - v8;
    if ( (unsigned __int16)v99 - (_DWORD)v8 == 1 )
      v38 = 0x8000;
    *(_WORD *)&Slow[(unsigned __int16)v99 - 2] = v38;
  }
LABEL_93:
  v5 = v105;
LABEL_94:
  v9 = v106;
  v6 = a4;
  if ( Slow == (char *)-1LL )
    goto LABEL_97;
LABEL_105:
  v4 = v107;
  v7 = v108;
LABEL_106:
  if ( Slow )
  {
    v87 = *(_QWORD *)v7;
    if ( *(_QWORD *)v7 >= *(_QWORD *)(v7 + 24) )
      v87 = *(_QWORD *)(v7 + 24);
    memmove(Slow, (const void *)v4, v87);
    if ( *(_DWORD *)(v7 + 16) )
    {
      RtlpHpExtrasMove(v4, *(_QWORD *)v7, (_DWORD)Slow, *(_QWORD *)(v7 + 24), v6);
      RtlpHpExtrasSetPresent((_RTL_SRWLOCK *)v9, (__int64)Slow);
    }
    if ( (_WORD)v4 )
    {
      v90 = (__int64)(v9 + 320);
    }
    else
    {
      v88 = RtlCSparseBitmapBitmaskRead((__int64)&::BaseAddress, 2 * ((unsigned __int64)(v4 - qword_1801C6908) >> 20));
      if ( !v88 || (v89 = v88 - 1, v89 == 2) )
      {
        RtlpHpLargeFree((__int64)v9, (char *)v4);
        return Slow;
      }
      v90 = (__int64)(v9 + 320);
      if ( v89 == 1 )
        v90 = (__int64)(v9 + 512);
    }
    v91 = *(_QWORD *)v90 & v4;
    if ( RtlpHpHeapGlobals ^ v90 ^ *(_QWORD *)(v91 + 0x10) ^ v91 )
    {
      RtlpLogHeapFailure(9, *(_QWORD *)(v90 + 56), v4, 0, 0LL, 0LL);
    }
    else
    {
      v92 = *(_BYTE *)(v90 + 8);
      v93 = v91 + 32 * ((unsigned __int64)(unsigned int)(v4 - v91) >> v92);
      v94 = v93 - 32LL * *(unsigned __int8 *)(v93 + 26);
      v95 = v91 + ((unsigned int)((v94 - v91) >> 5) << v92);
      if ( *(_BYTE *)(v94 + 24) + (v95 == v4) == 11 )
        RtlpHpLfhContextFree(*(_QWORD *)(v90 + 24), v95, v4);
      else
        RtlpHpSegFreeInternal(v90, v4, v94, 0LL);
    }
  }
  return Slow;
}
