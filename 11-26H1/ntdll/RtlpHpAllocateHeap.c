/*
 * XREFs of RtlpHpAllocateHeap @ 0x180091890
 * Callers:
 *     RtlpHpTagAllocateHeap @ 0x180096A80 (RtlpHpTagAllocateHeap.c)
 *     RtlAllocateHeapFast @ 0x18013FC70 (RtlAllocateHeapFast.c)
 *     RtlAllocateHeapFull @ 0x18013FDB0 (RtlAllocateHeapFull.c)
 * Callees:
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180029A90 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     EtwEventWriteTransfer @ 0x18005A770 (EtwEventWriteTransfer.c)
 *     RtlpHpVsContextAllocate @ 0x18005E3D4 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLargeAlloc @ 0x18006FE4C (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x180071D60 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x180072340 (RtlpHpLfhThreadDataInitializeSet.c)
 *     TpSetTimerEx @ 0x180089470 (TpSetTimerEx.c)
 *     RtlpHpAllocateHeapSlow @ 0x180096F60 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x1800BEC50 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpAllocateHeapBackend @ 0x1800DD904 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117744 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x180121080 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     RtlHeapZero @ 0x1801641D0 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpAllocateHeap(char *BaseAddress, unsigned __int64 a2, __int64 a3)
{
  char *v3; // rbx
  _DWORD *v4; // rcx
  unsigned int v6; // r14d
  __int64 Slow; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r15
  __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rbx
  unsigned int v13; // ecx
  __int64 v14; // rax
  void **TlsExpansionSlots; // rdx
  __int64 v16; // rdi
  int v17; // r8d
  int v18; // r8d
  __int64 HeapBackend; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r11
  unsigned __int64 v23; // r11
  struct _TEB *v24; // r9
  int v25; // r10d
  __int64 v26; // r15
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  _DWORD *v31; // r8
  unsigned __int64 i; // rcx
  __int16 v36; // cx
  int v37; // esi
  signed __int64 v38; // rbx
  signed __int64 v39; // rax
  unsigned __int64 v40; // rbx
  int v41; // edi
  struct _TEB *v42; // r8
  __int64 v43; // r15
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // r9
  unsigned __int64 v47; // rdx
  int v48; // r11d
  unsigned int v49; // r14d
  __int64 v50; // rdi
  volatile signed __int64 *v51; // r8
  signed __int64 v52; // r9
  __int64 v57; // rdx
  unsigned __int64 v60; // rcx
  unsigned int v61; // ecx
  signed __int64 v63; // rcx
  signed __int64 v64; // rax
  __int64 v65; // r15
  __int64 v66; // r12
  unsigned int v67; // r14d
  int v68; // edi
  __int64 v69; // rdi
  __int16 v70; // cx
  signed __int64 v71; // rax
  char v72; // dl
  unsigned __int64 v73; // rdx
  signed __int64 v74; // rtt
  unsigned __int64 v75; // r8
  signed __int64 v76; // rax
  unsigned __int64 *v77; // r10
  unsigned __int64 v78; // r9
  signed __int64 v79; // rax
  signed __int64 v80; // rtt
  signed __int64 v81; // rdx
  unsigned __int8 v83; // [rsp+30h] [rbp-B8h]
  unsigned int v84; // [rsp+34h] [rbp-B4h]
  int v85; // [rsp+34h] [rbp-B4h]
  int v86; // [rsp+38h] [rbp-B0h]
  __int64 v87; // [rsp+40h] [rbp-A8h]
  int v88; // [rsp+44h] [rbp-A4h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-A0h] BYREF
  unsigned int v90; // [rsp+58h] [rbp-90h]
  unsigned __int64 v91; // [rsp+60h] [rbp-88h]
  char *v92; // [rsp+68h] [rbp-80h]
  unsigned __int64 *v93; // [rsp+70h] [rbp-78h]
  __int64 v94; // [rsp+78h] [rbp-70h]
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-68h] BYREF
  void *v96; // [rsp+90h] [rbp-58h]
  int v97; // [rsp+98h] [rbp-50h]
  int v98; // [rsp+9Ch] [rbp-4Ch]

  v3 = BaseAddress;
  v92 = BaseAddress;
  v4 = BaseAddress + 20;
  __writegsqword(0x250u, (unsigned __int64)v4);
  v6 = ((unsigned __int16)*v4 | (unsigned __int16)a3) & 0x3FFA;
  v84 = v6;
  if ( (((unsigned __int16)*v4 | (unsigned __int16)a3) & 0x3FF8) == 0 )
  {
    v8 = *((unsigned __int16 *)v3 + 486);
    v9 = 1LL;
    if ( a2 > 1 )
      v9 = a2;
    v91 = v9;
    if ( v9 >= v8 )
      goto LABEL_20;
    v10 = (__int64)(v3 + 896);
    v11 = v9 + 2;
    v87 = (__int64)(v3 + 896);
    if ( (_DWORD)a2 == (_DWORD)v9 )
      v11 = v9;
    v12 = (unsigned int)RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v11 + 15) >> 4] - 1;
    v13 = (unsigned __int16)*(_DWORD *)(v10 + 84);
    if ( v13 >= 0x40 )
    {
      TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
      if ( !TlsExpansionSlots )
      {
LABEL_16:
        v14 = RtlpHpLfhThreadDataInitializeSet(v10);
LABEL_17:
        v16 = v10 + ((unsigned __int16)v14 << 6);
        *(_QWORD *)&EventDescriptor.Id = v14;
        v17 = *(unsigned __int16 *)(v16 + 2 * v12);
        if ( !*(_WORD *)(v16 + 2 * v12) )
        {
          if ( !RtlpHpLfhBucketCheckAndUpdate(v10, v12) )
          {
            v3 = v92;
LABEL_20:
            v18 = v9;
LABEL_21:
            if ( v9 > 0x20000 )
            {
              if ( v9 > *((unsigned int *)v3 + 132) )
                HeapBackend = (__int64)RtlpHpLargeAlloc(v3, a2, v9, v6);
              else
                HeapBackend = RtlpHpAllocateHeapBackend(v3, a2, v9, v6);
            }
            else
            {
              HeapBackend = RtlpHpVsContextAllocate(v3 + 704, a2, v18, v6);
            }
            Slow = HeapBackend;
            goto LABEL_106;
          }
          v20 = v10 + ((unsigned __int64)EventDescriptor.Level << 8) + 1472;
          v17 = *(unsigned __int16 *)(v20 + 2 * v12);
          if ( v16 != v20 )
            *(_WORD *)(v16 + 2 * v12) = *(_WORD *)(v20 + 2 * v12);
        }
        v21 = v10 + (unsigned int)(v17 << 6);
        v94 = v21;
        if ( *(_WORD *)(v21 + 4) )
        {
          v22 = *(_QWORD *)(v21 + 56);
          if ( (v22 & 0xFFF) != 0 )
          {
            *(_QWORD *)(v21 + 56) = v22 - 1;
            v23 = v22 & 0xFFFFFFFFFFFFF000uLL;
            if ( v23 )
            {
              v24 = NtCurrentTeb();
              v25 = *(unsigned __int8 *)(v23 + 24);
              v26 = 0x100000001LL;
              v27 = v24->RngState[0];
              v28 = v24->RngState[1];
              v85 = qword_1801C5EC8 ^ *(_DWORD *)(v23 + 40) ^ (v23 >> 12);
              if ( (unsigned int)a2 >= (unsigned __int16)v85 )
                v26 = 1LL;
              v29 = v28 + v27;
              v30 = v27 ^ v28;
              v24->RngState[1] = __ROL8__(v30, 37);
              v24->RngState[0] = v30 ^ __ROL8__(v27, 24) ^ (v30 << 16);
              v31 = (_DWORD *)(v23 + 64 + 8LL * *(unsigned __int8 *)(v23 + 36));
              for ( i = (unsigned int)~*v31; *v31 == -1; i = (unsigned int)~*v31 )
              {
                if ( v31 == (_DWORD *)(v23 + 64 + 8 * ((unsigned int)(v25 - 8) - 1LL)) )
                  v31 = (_DWORD *)(v23 + 64);
                else
                  v31 += 2;
              }
              _RAX = 1LL << ((unsigned __int16)(BYTE4(v29) * (unsigned __int16)__popcnt(i)) >> 8);
              __asm
              {
                pdep    rcx, rax, rcx
                tzcnt   rdx, rcx
              }
              *(_QWORD *)v31 |= v26 << _RDX;
              LODWORD(_RAX) = _RDX + 4 * ((_DWORD)v31 - (v23 + 64));
              *(_BYTE *)(v23 + 36) = (unsigned int)_RAX >> 5;
              Slow = v23 + (unsigned __int16)v85 * (_DWORD)_RAX + (unsigned int)HIWORD(v85);
              if ( (v6 & 2) != 0 )
                RtlHeapZero(Slow, ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
              if ( (unsigned int)a2 < (unsigned __int16)v85 )
              {
                v36 = v85 - a2;
                if ( (unsigned __int16)v85 - (_DWORD)a2 == 1 )
                  v36 = 0x8000;
                *(_WORD *)((unsigned __int16)v85 + Slow - 2) = v36;
              }
LABEL_99:
              v9 = v91;
              goto LABEL_100;
            }
          }
LABEL_44:
          Slow = RtlpHpLfhSlotAllocateSlow(v10);
LABEL_100:
          v18 = v9;
          if ( Slow != -1 )
            goto LABEL_106;
          v3 = v92;
          goto LABEL_21;
        }
        v37 = 0;
        _m_prefetchw((const void *)(v21 + 56));
        v38 = *(_QWORD *)(v21 + 56);
        if ( (v38 & 0xFFF) == 0 )
          goto LABEL_44;
        while ( 1 )
        {
          v39 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 56), v38 - 1, v38);
          if ( v38 == v39 )
            break;
          v37 = 1;
          v38 = v39;
          if ( (v39 & 0xFFF) == 0 )
            goto LABEL_44;
        }
        v40 = v38 & 0xFFFFFFFFFFFFF000uLL;
        if ( !v40 )
          goto LABEL_44;
        v41 = *(unsigned __int8 *)(v40 + 24);
        v42 = NtCurrentTeb();
        v43 = 0x100000001LL;
        v44 = v42->RngState[1];
        v86 = qword_1801C5EC8 ^ *(_DWORD *)(v40 + 40) ^ (v40 >> 12);
        v90 = (unsigned __int16)v86;
        v45 = v42->RngState[0];
        if ( (unsigned int)a2 >= (unsigned __int16)v86 )
          v43 = 1LL;
        v93 = (unsigned __int64 *)(v40 + 24);
        v46 = v44 + v45;
        v47 = v45 ^ v44;
        v48 = BYTE4(v46);
        v42->RngState[0] = v47 ^ __ROL8__(v45, 24) ^ (v47 << 16);
        v42->RngState[1] = __ROL8__(v47, 37);
        v49 = *(unsigned __int8 *)(v40 + 50);
        v83 = *(_BYTE *)(v40 + 39);
        v50 = v40 + 64 + 8 * ((unsigned int)(v41 - 8) - 1LL);
        v51 = (volatile signed __int64 *)(v40 + 64 + 8LL * *(unsigned __int8 *)(v40 + 36));
LABEL_49:
        v52 = *v51;
        for ( _RAX = (unsigned int)~*(_DWORD *)v51; *(_DWORD *)v51 == -1; _RAX = (unsigned int)~*(_DWORD *)v51 )
        {
          if ( v51 == (volatile signed __int64 *)v50 )
            v51 = (volatile signed __int64 *)(v40 + 64);
          else
            ++v51;
          v52 = *v51;
        }
        while ( 1 )
        {
          if ( (qword_1801C5EE8 & 4) != 0 )
          {
            _RCX = 1LL << ((unsigned __int16)(v48 * __popcnt(_RAX)) >> 8);
            __asm
            {
              pdep    rdx, rcx, rax
              tzcnt   r10, rdx
            }
            v57 = v43 << _R10;
          }
          else
          {
            if ( v51 == (volatile signed __int64 *)v50 || v49 != 32 )
            {
              __asm { tzcnt   rdx, rax }
              _BitScanReverse64(&v60, _RAX);
              *(_DWORD *)&EventDescriptor.Id = _RDX;
              v61 = v60 - _RDX + 1;
              if ( v49 < v61 )
                v61 = v49;
              v48 = _RDX + ((v61 * v48) >> 8);
              _RAX = __ROR8__(_RAX, v48);
              __asm { tzcnt   r10, rax }
              LODWORD(_R10) = v48 + _R10;
            }
            else
            {
              _RCX = (unsigned int)__ROR4__(_RAX, v48);
              __asm { tzcnt   r10, rcx }
              LODWORD(_R10) = ((_BYTE)v48 + (_BYTE)_R10) & 0x1F;
            }
            v57 = v43 << _R10;
          }
          v63 = v52;
          v64 = _InterlockedCompareExchange64(v51, v52 | v57, v52);
          v52 = v64;
          if ( v64 == v63 )
            break;
          _RAX = (unsigned int)~(_DWORD)v64;
          if ( !_RAX )
          {
            if ( v51 == (volatile signed __int64 *)v50 )
              v51 = (volatile signed __int64 *)(v40 + 64);
            else
              ++v51;
            goto LABEL_49;
          }
        }
        v65 = v90;
        v66 = v87;
        v67 = _R10 + 4 * ((_DWORD)v51 - (v40 + 64));
        v68 = v90 * v67;
        *(_BYTE *)(v40 + 36) = v67 >> 5;
        v69 = (unsigned int)HIWORD(v86) + v68;
        if ( v83 <= 1u )
        {
          if ( v67 > *(unsigned __int16 *)(v40 + 48) )
            RtlpHpLfhSubsegmentPrefetch(v87, v40, (unsigned int)v69, (unsigned int)v65);
        }
        else if ( (int)RtlpHpLfhSubsegmentCommitBlock(v87, v40, v69) < 0 )
        {
          Slow = 0LL;
          if ( v67 != -1 )
          {
            _InterlockedAnd64(
              (volatile signed __int64 *)(v40 + 8LL * (v67 >> 5) + 64),
              __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v67 & 0x1F));
            goto LABEL_81;
          }
LABEL_80:
          if ( Slow )
          {
LABEL_96:
            if ( v37 )
              RtlpHpLfhBucketUpdateAffinityMapping(v66, v66 + ((unsigned __int64)*(unsigned __int16 *)(v94 + 2) << 6));
            v6 = v84;
            goto LABEL_99;
          }
LABEL_81:
          v71 = *(_QWORD *)(v40 + 16);
          do
          {
            *(_QWORD *)&EventDescriptor.Id = v71;
            v72 = BYTE6(v71);
            v88 = HIDWORD(v71);
            if ( BYTE6(v71) == 1 )
              v72 = 2;
            ++*(_WORD *)&EventDescriptor.Version;
            LOBYTE(EventDescriptor.Task) = v72;
            v73 = (unsigned __int64)*(unsigned __int16 *)(v40 + 44) << 6;
            v74 = v71;
            v71 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v40 + 16),
                    *(signed __int64 *)&EventDescriptor.Id,
                    v71);
          }
          while ( v74 != v71 );
          if ( !*(_BYTE *)(v73 + v66 + 92) )
          {
            *(_BYTE *)(v73 + v66 + 92) = 1;
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
                    v96 = &unk_18019AE96;
                    UserData.Reserved = 2;
                    v97 = 25;
                    v98 = 1;
                    EtwEventWriteTransfer(qword_1801C46A0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
                  }
                }
              }
            }
          }
          if ( BYTE2(v88) == 1 )
          {
            v75 = v66 + ((unsigned __int64)(unsigned __int16)v88 << 6);
            _m_prefetchw((const void *)(v75 + 8));
            v76 = *(_QWORD *)(v75 + 8);
            v77 = v93;
            v78 = *v93;
            *v93 ^= (v76 ^ *v93) & 0xFFFFFFFFFFFFF000uLL;
            v80 = v76;
            v79 = _InterlockedCompareExchange64((volatile signed __int64 *)(v75 + 8), v40 | v76 & 0xFFF, v76);
            if ( v80 != v79 )
            {
              do
              {
                v81 = v79;
                *v77 = v78 ^ (v78 ^ v79) & 0xFFFFFFFFFFFFF000uLL;
                v79 = _InterlockedCompareExchange64((volatile signed __int64 *)(v75 + 8), v40 | v79 & 0xFFF, v79);
              }
              while ( v79 != v81 );
            }
          }
          goto LABEL_96;
        }
        Slow = v40 + v69;
        if ( (v84 & 2) != 0 )
          RtlHeapZero(Slow, ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( (unsigned int)a2 < (unsigned int)v65 )
        {
          v70 = v65 - a2;
          if ( (_DWORD)v65 - (_DWORD)a2 == 1 )
            v70 = 0x8000;
          *(_WORD *)(v65 + Slow - 2) = v70;
        }
        goto LABEL_80;
      }
      v14 = (__int64)TlsExpansionSlots[v13 - 64];
    }
    else
    {
      v14 = __readgsqword(8 * v13 + 5248);
    }
    if ( v14 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( (v6 & 0x10) != 0 && *((_DWORD *)v3 + 56) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    RtlpHpEnvAcquireGlobalLockSharedContended(v4, ((unsigned __int16)*v4 | (unsigned __int16)a3) & 0x3FFA, a3);
  Slow = RtlpHpAllocateHeapSlow(v3);
LABEL_106:
  __writegsqword(0x250u, 0LL);
  return Slow;
}
