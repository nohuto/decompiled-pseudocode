/*
 * XREFs of ndisAllocateSharedMemoryInternal @ 0x140062560
 * Callers:
 *     NdisAllocateSharedMemory @ 0x1400621F0 (NdisAllocateSharedMemory.c)
 * Callees:
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

__int64 __fastcall ndisAllocateSharedMemoryInternal(_QWORD *a1, __int64 a2, __int128 *a3, _QWORD *a4)
{
  KSPIN_LOCK *v4; // r14
  char v5; // bp
  __int64 v6; // r13
  unsigned int v7; // eax
  __int64 v8; // r12
  KSPIN_LOCK v10; // rdi
  __int64 Pool2; // rax
  char *v12; // rbx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  unsigned int v16; // r15d
  __int128 v17; // xmm1
  USHORT HighestNodeNumber; // ax
  __int64 v19; // r9
  __int64 (__fastcall *v20)(KSPIN_LOCK, __int128 *, char *); // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // edi
  KSPIN_LOCK v25; // rcx
  KIRQL v26; // r9
  _QWORD *v27; // rcx
  KSPIN_LOCK v28; // rdx
  __int64 v29; // rdx
  _QWORD *v30; // rax
  _QWORD *v31; // r8
  _QWORD *v32; // rcx
  __int64 v33; // rdx
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  __int64 v36; // rcx
  void *ContiguousNodeMemory; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  USHORT Count; // [rsp+40h] [rbp-78h] BYREF
  _QWORD *v40; // [rsp+48h] [rbp-70h]
  _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-68h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-58h] BYREF

  v4 = (KSPIN_LOCK *)a1[1];
  v5 = 0;
  v6 = a1[2];
  v7 = *((_DWORD *)a3 + 12) + 184;
  v8 = a1[3];
  v40 = a4;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  v10 = v4[63];
  if ( v7 < 0xB8 )
    return (unsigned int)-1073741811;
  Pool2 = ExAllocatePool2(64LL, v7, 1650738254LL);
  v12 = (char *)Pool2;
  if ( !Pool2 )
  {
    v23 = -1073741670;
    goto LABEL_35;
  }
  v13 = *a3;
  *(_QWORD *)(Pool2 + 56) = v4;
  v14 = a3[1];
  *(_QWORD *)(Pool2 + 64) = v6;
  *(_OWORD *)(Pool2 + 112) = v13;
  v15 = a3[2];
  v16 = *((_DWORD *)a3 + 6);
  *(_OWORD *)(Pool2 + 128) = v14;
  *(_QWORD *)(Pool2 + 72) = v8;
  v17 = a3[3];
  *(_OWORD *)(Pool2 + 144) = v15;
  *(_QWORD *)&v15 = *((_QWORD *)a3 + 8);
  *(_OWORD *)(Pool2 + 160) = v17;
  *(_QWORD *)(Pool2 + 176) = v15;
  *(_QWORD *)(Pool2 + 168) = Pool2 + 184;
  HighestNodeNumber = KeQueryHighestNodeNumber();
  if ( v16 != 0x80000000 )
  {
    if ( v16 > HighestNodeNumber )
    {
      v16 = 0x80000000;
    }
    else
    {
      Count = 0;
      KeQueryNodeActiveAffinity(v16, &Affinity, &Count);
      if ( Count )
      {
        v5 = 1;
        KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      }
    }
  }
  if ( !*((_DWORD *)a3 + 2) || v6 || (v35 = *(_QWORD **)(v8 + 72)) == 0LL || !v35[97] )
  {
    v20 = (__int64 (__fastcall *)(KSPIN_LOCK, __int128 *, char *))v4[450];
    if ( v20 )
    {
      *((_QWORD *)v12 + 10) = v4[451];
      v25 = v4[452];
      *((_QWORD *)v12 + 11) = v25;
      v23 = v20(v25, a3, v12 + 96);
      if ( v23 < 0 )
        goto LABEL_15;
      if ( (*((_DWORD *)a3 + 1) & 1) == 0 || **((_DWORD **)a3 + 7) <= 1u )
      {
        memmove(*((void **)v12 + 21), *((const void **)a3 + 7), *((unsigned int *)a3 + 12));
        *((_DWORD *)v12 + 12) |= 8u;
        goto LABEL_15;
      }
      ((void (__fastcall *)(_QWORD, _QWORD))v4[451])(*((_QWORD *)v12 + 11), *((_QWORD *)v12 + 12));
    }
    else
    {
      if ( v10 )
      {
        v21 = *(_QWORD *)(v10 + 40);
        if ( ndisDmaUseNumaAwareAllocator && (*(_DWORD *)(v10 + 64) & 2) != 0 )
        {
          v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *, char, _DWORD))(*(_QWORD *)(v21 + 8) + 152LL))(
                  v21,
                  0LL,
                  *((unsigned int *)a3 + 8),
                  v12 + 104,
                  1,
                  *((_DWORD *)a3 + 6));
        }
        else
        {
          LOBYTE(v19) = 1;
          v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, __int64))(*(_QWORD *)(v21 + 8) + 16LL))(
                  v21,
                  *((unsigned int *)a3 + 8),
                  v12 + 104,
                  v19);
        }
        *((_QWORD *)a3 + 5) = v22;
        if ( !v22 )
          goto LABEL_39;
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 88));
        *((_DWORD *)v12 + 12) |= 1u;
LABEL_14:
        v23 = 0;
        goto LABEL_15;
      }
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(*((unsigned int *)a3 + 8), 0LL, -1LL, 0LL, 4, v16);
      *((_QWORD *)a3 + 5) = ContiguousNodeMemory;
      if ( ContiguousNodeMemory )
      {
        PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
        *((_DWORD *)v12 + 12) |= 2u;
        *((PHYSICAL_ADDRESS *)v12 + 13) = PhysicalAddress;
        goto LABEL_14;
      }
    }
LABEL_39:
    v23 = -1073741670;
    goto LABEL_15;
  }
  *((_QWORD *)v12 + 10) = v35[98];
  v36 = v35[99];
  *((_QWORD *)v12 + 11) = v36;
  v23 = ((__int64 (__fastcall *)(__int64, __int128 *, char *))v35[97])(v36, a3, v12 + 96);
  if ( v23 >= 0 )
  {
    if ( (*((_DWORD *)a3 + 1) & 1) != 0 && **((_DWORD **)a3 + 7) > 1u )
    {
      (*((void (__fastcall **)(_QWORD, _QWORD))v12 + 10))(*((_QWORD *)v12 + 11), *((_QWORD *)v12 + 12));
      goto LABEL_39;
    }
    memmove(*((void **)v12 + 21), *((const void **)a3 + 7), *((unsigned int *)a3 + 12));
    *((_DWORD *)v12 + 12) |= 4u;
  }
LABEL_15:
  if ( v5 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( v23 >= 0 )
  {
    *((_QWORD *)v12 + 19) = *((_QWORD *)a3 + 5);
    if ( (*((_DWORD *)v12 + 12) & 3) != 0 )
    {
      if ( *((_DWORD *)a3 + 12) >= 0x28u )
      {
        **((_DWORD **)a3 + 7) = 1;
        *(_QWORD *)(*((_QWORD *)a3 + 7) + 16LL) = *((_QWORD *)v12 + 13);
        *(_DWORD *)(*((_QWORD *)a3 + 7) + 24LL) = *((_DWORD *)a3 + 8);
      }
      *((_QWORD *)a3 + 2) = 0LL;
    }
    _InterlockedAdd64(&qword_14011EEB8, *((unsigned int *)a3 + 8));
    v26 = KeAcquireSpinLockRaiseToDpc(v4 + 12);
    v4[65] = (KSPIN_LOCK)KeGetCurrentThread();
    v27 = v4 + 448;
    v28 = v4[448];
    if ( *(KSPIN_LOCK **)(v28 + 8) == v4 + 448 )
    {
      *(_QWORD *)v12 = v28;
      *((_QWORD *)v12 + 1) = v27;
      *(_QWORD *)(v28 + 8) = v12;
      *v27 = v12;
      if ( v6 )
      {
        v32 = (_QWORD *)(v6 + 760);
        v33 = *(_QWORD *)(v6 + 760);
        v34 = v12 + 16;
        if ( *(_QWORD *)(v33 + 8) != v6 + 760 )
          goto LABEL_29;
        *v34 = v33;
        *((_QWORD *)v12 + 3) = v32;
        *(_QWORD *)(v33 + 8) = v34;
        *v32 = v34;
      }
      v29 = *(_QWORD *)(v8 + 88);
      v30 = (_QWORD *)(v8 + 88);
      v31 = v12 + 32;
      if ( *(_QWORD *)(v29 + 8) == v8 + 88 )
      {
        *v31 = v29;
        *((_QWORD *)v12 + 5) = v30;
        *(_QWORD *)(v29 + 8) = v31;
        *v30 = v31;
        v4[65] = 0LL;
        KeReleaseSpinLock(v4 + 12, v26);
        *v40 = v12;
        return (unsigned int)v23;
      }
    }
LABEL_29:
    __fastfail(3u);
  }
  ExFreePoolWithTag(v12, 0);
  if ( v23 == -1073741670 )
LABEL_35:
    _InterlockedAdd64(&qword_14011EEC0, *((unsigned int *)a3 + 8));
  return (unsigned int)v23;
}
