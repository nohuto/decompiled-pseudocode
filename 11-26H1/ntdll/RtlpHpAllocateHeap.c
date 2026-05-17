/*
 * XREFs of RtlpHpAllocateHeap @ 0x180071440
 * Callers:
 *     RtlpHpTagAllocateHeap @ 0x180097930 (RtlpHpTagAllocateHeap.c)
 *     RtlAllocateHeapFast @ 0x18013FD70 (RtlAllocateHeapFast.c)
 *     RtlAllocateHeapFull @ 0x18013FEB0 (RtlAllocateHeapFull.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18000F040 (EtwEventWriteTransfer.c)
 *     RtlpHpVsContextAllocate @ 0x180012CA4 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x18003F520 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     TpSetTimerEx @ 0x180069020 (TpSetTimerEx.c)
 *     RtlpHpLargeAlloc @ 0x18008A18C (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180092C30 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1800933DC (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpAllocateHeapSlow @ 0x180097E10 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1800BF1B0 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x1800C14C0 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpAllocateHeapBackend @ 0x1800E005C (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x1801212E4 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     RtlHeapZero @ 0x1801642D0 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpAllocateHeap(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _DWORD *v4; // rcx
  unsigned int v6; // r14d
  __int64 Slow; // rsi
  unsigned __int64 v8; // r15
  __int64 v9; // r12
  int v10; // eax
  __int64 v11; // rbx
  unsigned int v12; // ecx
  __int64 v13; // rax
  void **TlsExpansionSlots; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // r8
  int v18; // r8d
  __int64 HeapBackend; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rbp
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
  int v37; // edi
  signed __int64 v38; // rbx
  signed __int64 v39; // rax
  unsigned __int64 v40; // rbx
  int v41; // esi
  unsigned __int64 v42; // r12
  struct _TEB *v43; // r8
  __int64 v44; // r15
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // rdx
  int v49; // r11d
  unsigned int v50; // r14d
  volatile signed __int64 *v51; // rsi
  volatile signed __int64 *v52; // r8
  signed __int64 v53; // r9
  __int64 v58; // rdx
  unsigned __int64 v61; // rcx
  unsigned int v62; // ecx
  signed __int64 v64; // rcx
  signed __int64 v65; // rax
  __int64 v66; // r15
  int v67; // r8d
  unsigned int v68; // r14d
  int v69; // esi
  __int64 v70; // rsi
  __int16 v71; // cx
  signed __int64 v72; // rax
  char v73; // dl
  unsigned __int64 v74; // rdx
  signed __int64 v75; // rtt
  int v76; // eax
  unsigned __int64 v77; // r8
  signed __int64 v78; // rax
  unsigned __int64 *v79; // r10
  unsigned __int64 v80; // r9
  signed __int64 v81; // rax
  signed __int64 v82; // rtt
  signed __int64 v83; // rdx
  unsigned __int8 v85; // [rsp+30h] [rbp-B8h]
  unsigned int v86; // [rsp+34h] [rbp-B4h]
  int v87; // [rsp+34h] [rbp-B4h]
  int v88; // [rsp+38h] [rbp-B0h]
  unsigned __int8 v89; // [rsp+44h] [rbp-A4h]
  __int64 v90; // [rsp+48h] [rbp-A0h]
  int v91; // [rsp+4Ch] [rbp-9Ch]
  unsigned __int64 v92; // [rsp+50h] [rbp-98h]
  __int128 v93; // [rsp+58h] [rbp-90h] BYREF
  unsigned int v94; // [rsp+68h] [rbp-80h]
  __int64 v95; // [rsp+70h] [rbp-78h]
  unsigned __int64 *v96; // [rsp+78h] [rbp-70h]
  void *v97; // [rsp+80h] [rbp-68h] BYREF
  int v98; // [rsp+88h] [rbp-60h]
  int v99; // [rsp+8Ch] [rbp-5Ch]
  void *v100; // [rsp+90h] [rbp-58h]
  int v101; // [rsp+98h] [rbp-50h]
  int v102; // [rsp+9Ch] [rbp-4Ch]

  v3 = a1;
  v95 = a1;
  v4 = (_DWORD *)(a1 + 20);
  __writegsqword(0x250u, (unsigned __int64)v4);
  v6 = ((unsigned __int16)*v4 | (unsigned __int16)a3) & 0x3FFA;
  v86 = v6;
  if ( (((unsigned __int16)*v4 | (unsigned __int16)a3) & 0x3FF8) == 0 )
  {
    v8 = 1LL;
    if ( a2 > 1 )
      v8 = a2;
    v92 = v8;
    if ( v8 >= *(unsigned __int16 *)(v3 + 972) )
      goto LABEL_20;
    v9 = v3 + 896;
    v10 = v8 + 2;
    v90 = v3 + 896;
    if ( (_DWORD)a2 == (_DWORD)v8 )
      v10 = v8;
    v11 = (unsigned int)RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v10 + 15) >> 4] - 1;
    v12 = (unsigned __int16)*(_DWORD *)(v9 + 84);
    if ( v12 >= 0x40 )
    {
      TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
      if ( !TlsExpansionSlots )
      {
LABEL_16:
        v13 = RtlpHpLfhThreadDataInitializeSet(v9);
LABEL_17:
        v15 = 2 * v11;
        v16 = v9 + ((unsigned __int16)v13 << 6);
        v89 = BYTE4(v13);
        v17 = *(unsigned __int16 *)(2 * v11 + v16);
        if ( !*(_WORD *)(2 * v11 + v16) )
        {
          if ( !RtlpHpLfhBucketCheckAndUpdate(v9, (unsigned int)v11, v17) )
          {
            v3 = v95;
LABEL_20:
            v18 = v8;
LABEL_21:
            if ( v8 > 0x20000 )
            {
              if ( v8 > *(unsigned int *)(v3 + 528) )
                HeapBackend = RtlpHpLargeAlloc(v3, a2, v8, v6);
              else
                HeapBackend = RtlpHpAllocateHeapBackend(v3, a2, v8, v6);
            }
            else
            {
              HeapBackend = RtlpHpVsContextAllocate((_BYTE *)(v3 + 704), a2, v18, v6);
            }
            Slow = HeapBackend;
            goto LABEL_109;
          }
          v20 = v9 + ((unsigned __int64)v89 << 8) + 1472;
          LODWORD(v17) = *(unsigned __int16 *)(v15 + v20);
          if ( v16 != v20 )
            *(_WORD *)(v15 + v16) = *(_WORD *)(v15 + v20);
        }
        v21 = v9 + (unsigned int)((_DWORD)v17 << 6);
        if ( *(_WORD *)(v21 + 4) )
        {
          v22 = *(_QWORD *)(v21 + 56);
          if ( (v22 & 0xFFF) != 0 && (*(_QWORD *)(v21 + 56) = v22 - 1, (v23 = v22 & 0xFFFFFFFFFFFFF000uLL) != 0) )
          {
            v24 = NtCurrentTeb();
            v25 = *(unsigned __int8 *)(v23 + 24);
            v26 = 0x100000001LL;
            v27 = v24->RngState[0];
            v28 = v24->RngState[1];
            v87 = qword_1801C6EC8 ^ *(_DWORD *)(v23 + 40) ^ (v23 >> 12);
            if ( (unsigned int)a2 >= (unsigned __int16)v87 )
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
            Slow = v23 + (unsigned __int16)v87 * (_DWORD)_RAX + (unsigned int)HIWORD(v87);
            if ( (v6 & 2) != 0 )
              RtlHeapZero(Slow, ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
            if ( (unsigned int)a2 < (unsigned __int16)v87 )
            {
              v36 = v87 - a2;
              if ( (unsigned __int16)v87 - (_DWORD)a2 == 1 )
                v36 = 0x8000;
              *(_WORD *)((unsigned __int16)v87 + Slow - 2) = v36;
            }
            v8 = v92;
          }
          else
          {
            Slow = RtlpHpLfhSlotAllocateSlow(v9);
          }
LABEL_103:
          v18 = v8;
          if ( Slow != -1 )
            goto LABEL_109;
          v3 = v95;
          goto LABEL_21;
        }
        v37 = 0;
        _m_prefetchw((const void *)(v21 + 56));
        v38 = *(_QWORD *)(v21 + 56);
        if ( (v38 & 0xFFF) == 0 )
          goto LABEL_46;
        while ( 1 )
        {
          v39 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 56), v38 - 1, v38);
          if ( v38 == v39 )
            break;
          v37 = 1;
          v38 = v39;
          if ( (v39 & 0xFFF) == 0 )
            goto LABEL_46;
        }
        v40 = v38 & 0xFFFFFFFFFFFFF000uLL;
        if ( !v40 )
        {
LABEL_46:
          Slow = RtlpHpLfhSlotAllocateSlow(v9);
          goto LABEL_101;
        }
        v41 = *(unsigned __int8 *)(v40 + 24);
        v42 = v40 + 64;
        v43 = NtCurrentTeb();
        v44 = 0x100000001LL;
        v88 = qword_1801C6EC8 ^ *(_DWORD *)(v40 + 40) ^ (v40 >> 12);
        v94 = (unsigned __int16)v88;
        v45 = v43->RngState[0];
        if ( (unsigned int)a2 >= (unsigned __int16)v88 )
          v44 = 1LL;
        v46 = v43->RngState[1];
        v96 = (unsigned __int64 *)(v40 + 24);
        v47 = v46 + v45;
        v48 = v45 ^ v46;
        v49 = BYTE4(v47);
        v43->RngState[0] = v48 ^ __ROL8__(v45, 24) ^ (v48 << 16);
        v43->RngState[1] = __ROL8__(v48, 37);
        v50 = *(unsigned __int8 *)(v40 + 50);
        v85 = *(_BYTE *)(v40 + 39);
        v51 = (volatile signed __int64 *)(v42 + 8 * ((unsigned int)(v41 - 8) - 1LL));
        v52 = (volatile signed __int64 *)(v42 + 8LL * *(unsigned __int8 *)(v40 + 36));
LABEL_51:
        v53 = *v52;
        for ( _RAX = (unsigned int)~*(_DWORD *)v52; *(_DWORD *)v52 == -1; _RAX = (unsigned int)~*(_DWORD *)v52 )
        {
          if ( v52 == v51 )
            v52 = (volatile signed __int64 *)(v40 + 64);
          else
            ++v52;
          v53 = *v52;
        }
        while ( 1 )
        {
          if ( (qword_1801C6EE8 & 4) != 0 )
          {
            _RCX = 1LL << ((unsigned __int16)(v49 * __popcnt(_RAX)) >> 8);
            __asm
            {
              pdep    rdx, rcx, rax
              tzcnt   r10, rdx
            }
            v58 = v44 << _R10;
          }
          else
          {
            if ( v52 == v51 || v50 != 32 )
            {
              __asm { tzcnt   rdx, rax }
              _BitScanReverse64(&v61, _RAX);
              LODWORD(v93) = _RDX;
              v62 = v61 - _RDX + 1;
              if ( v50 < v62 )
                v62 = v50;
              v49 = _RDX + ((v62 * v49) >> 8);
              _RAX = __ROR8__(_RAX, v49);
              __asm { tzcnt   r10, rax }
              LODWORD(_R10) = v49 + _R10;
            }
            else
            {
              _RCX = (unsigned int)__ROR4__(_RAX, v49);
              __asm { tzcnt   r10, rcx }
              LODWORD(_R10) = ((_BYTE)v49 + (_BYTE)_R10) & 0x1F;
            }
            v58 = v44 << _R10;
          }
          v64 = v53;
          v65 = _InterlockedCompareExchange64(v52, v53 | v58, v53);
          v53 = v65;
          if ( v65 == v64 )
            break;
          _RAX = (unsigned int)~(_DWORD)v65;
          if ( !_RAX )
          {
            if ( v52 == v51 )
              v52 = (volatile signed __int64 *)(v40 + 64);
            else
              ++v52;
            goto LABEL_51;
          }
        }
        v66 = v94;
        v67 = (_DWORD)v52 - v42;
        v9 = v90;
        v68 = _R10 + 4 * v67;
        v69 = v94 * v68;
        *(_BYTE *)(v40 + 36) = v68 >> 5;
        v70 = (unsigned int)HIWORD(v88) + v69;
        if ( v85 <= 1u )
        {
          if ( v68 > *(unsigned __int16 *)(v40 + 48) )
            RtlpHpLfhSubsegmentPrefetch(v90, v40, (unsigned int)v70, (unsigned int)v66);
        }
        else if ( (int)RtlpHpLfhSubsegmentCommitBlock(v90, v40, v70) < 0 )
        {
          Slow = 0LL;
          if ( v68 != -1 )
          {
            _InterlockedAnd64(
              (volatile signed __int64 *)(v40 + 8LL * (v68 >> 5) + 64),
              __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v68 & 0x1F));
            goto LABEL_84;
          }
          v6 = v86;
LABEL_83:
          if ( Slow )
          {
LABEL_100:
            v8 = v92;
LABEL_101:
            if ( v37 )
              RtlpHpLfhBucketUpdateAffinityMapping(v9, v9 + ((unsigned __int64)*(unsigned __int16 *)(v21 + 2) << 6));
            goto LABEL_103;
          }
LABEL_84:
          v72 = *(_QWORD *)(v40 + 16);
          do
          {
            *(_QWORD *)&v93 = v72;
            v73 = BYTE6(v72);
            v91 = HIDWORD(v72);
            if ( BYTE6(v72) == 1 )
              v73 = 2;
            ++WORD1(v93);
            BYTE6(v93) = v73;
            v74 = (unsigned __int64)*(unsigned __int16 *)(v40 + 44) << 6;
            v75 = v72;
            v72 = _InterlockedCompareExchange64((volatile signed __int64 *)(v40 + 16), v93, v72);
          }
          while ( v75 != v72 );
          if ( !*(_BYTE *)(v74 + v9 + 92) )
          {
            *(_BYTE *)(v74 + v9 + 92) = 1;
            v76 = qword_1801C7278;
            if ( !(_DWORD)qword_1801C7278 )
            {
              if ( qword_1801C7268 )
              {
                if ( byte_1801CB8C8 == (_BYTE)qword_1801C7278
                  && v76 == _InterlockedCompareExchange((volatile signed __int32 *)&qword_1801C7278, 1, qword_1801C7278) )
                {
                  TpSetTimerEx(qword_1801C7268, (__int64)&qword_1801C7270, 0, 1000);
                  if ( (RtlpHpHeapFeatures & 0x10) != 0 && (unsigned int)dword_1801C5680 > 5 )
                  {
                    v97 = off_1801C5688;
                    v93 = 0x50B000000uLL;
                    v98 = *(unsigned __int16 *)off_1801C5688;
                    v100 = &unk_18019BEEE;
                    v99 = 2;
                    v101 = 25;
                    v102 = 1;
                    EtwEventWriteTransfer(qword_1801C56A0, &v93, 0LL, 0LL, 2, (__int64)&v97);
                  }
                }
              }
            }
          }
          if ( BYTE2(v91) == 1 )
          {
            v77 = v9 + ((unsigned __int64)(unsigned __int16)v91 << 6);
            _m_prefetchw((const void *)(v77 + 8));
            v78 = *(_QWORD *)(v77 + 8);
            v79 = v96;
            v80 = *v96;
            *v96 ^= (v78 ^ *v96) & 0xFFFFFFFFFFFFF000uLL;
            v82 = v78;
            v81 = _InterlockedCompareExchange64((volatile signed __int64 *)(v77 + 8), v40 | v78 & 0xFFF, v78);
            if ( v82 != v81 )
            {
              do
              {
                v83 = v81;
                *v79 = v80 ^ (v80 ^ v81) & 0xFFFFFFFFFFFFF000uLL;
                v81 = _InterlockedCompareExchange64((volatile signed __int64 *)(v77 + 8), v40 | v81 & 0xFFF, v81);
              }
              while ( v81 != v83 );
            }
          }
          v6 = v86;
          goto LABEL_100;
        }
        v6 = v86;
        Slow = v40 + v70;
        if ( (v86 & 2) != 0 )
          RtlHeapZero(Slow, ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( (unsigned int)a2 < (unsigned int)v66 )
        {
          v71 = v66 - a2;
          if ( (_DWORD)v66 - (_DWORD)a2 == 1 )
            v71 = 0x8000;
          *(_WORD *)(v66 + Slow - 2) = v71;
        }
        goto LABEL_83;
      }
      v13 = (__int64)TlsExpansionSlots[v12 - 64];
    }
    else
    {
      v13 = __readgsqword(8 * v12 + 5248);
    }
    if ( v13 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( (v6 & 0x10) != 0 && *(_DWORD *)(v3 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    RtlpHpEnvAcquireGlobalLockSharedContended(v4, ((unsigned __int16)*v4 | (unsigned __int16)a3) & 0x3FFA, a3);
  Slow = RtlpHpAllocateHeapSlow(v3, a2, v6);
LABEL_109:
  __writegsqword(0x250u, 0LL);
  return Slow;
}
