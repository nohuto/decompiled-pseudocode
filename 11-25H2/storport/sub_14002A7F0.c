/*
 * XREFs of sub_14002A7F0 @ 0x14002A7F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000D760 @ 0x14000D760 (sub_14000D760.c)
 *     sub_14000DC80 @ 0x14000DC80 (sub_14000DC80.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021760 @ 0x140021760 (sub_140021760.c)
 *     sub_14002B0D0 @ 0x14002B0D0 (sub_14002B0D0.c)
 *     sub_140051870 @ 0x140051870 (sub_140051870.c)
 *     sub_140053738 @ 0x140053738 (sub_140053738.c)
 *     sub_140099564 @ 0x140099564 (sub_140099564.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_14002A7F0(__int64 a1, char a2)
{
  char v2; // bl
  int v4; // r8d
  int v5; // r13d
  KSPIN_LOCK *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  KIRQL v16; // bl
  int v17; // r8d
  KIRQL v18; // r14
  KIRQL v19; // al
  signed __int64 v20; // rbp
  KIRQL v21; // r12
  bool v22; // zf
  signed __int64 v23; // rax
  char *v24; // rax
  signed __int64 v25; // rbx
  char v26; // r8
  char *v27; // rbp
  __int64 v28; // rax
  signed __int64 v29; // rdx
  signed __int64 v30; // rax
  signed __int64 v31; // rax
  signed __int64 v32; // rtt
  __int64 v33; // rcx
  __int64 v34; // rcx
  KIRQL v35; // al
  __int64 v36; // rdx
  int v37; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-60h] BYREF
  __int128 v39; // [rsp+80h] [rbp-48h] BYREF
  __int64 v40; // [rsp+90h] [rbp-38h]
  int v41; // [rsp+98h] [rbp-30h]

  v2 = a2;
  if ( sub_140021280(a1) )
  {
    if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
      sub_140053738(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&unk_14014B018,
        v4,
        **(_QWORD **)(a1 + 1872),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 104),
        *(_BYTE *)(a1 + 105),
        *(_BYTE *)(a1 + 106),
        v2);
    v5 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) & 4) != 0 && sub_1400215B0(a1, 6) && sub_1400215B0(a1, 6) )
      sub_140021760(*(_QWORD *)(a1 + 24) + 376LL);
    v6 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 1872) + 96LL);
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(v6, &LockHandle);
    *(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) |= 2u;
    if ( sub_140021280(a1) )
    {
      while ( 1 )
      {
        v7 = (_QWORD *)(*(_QWORD *)(a1 + 1872) + 80LL);
        if ( (_QWORD *)*v7 == v7 )
          break;
        v8 = *(_QWORD **)(*(_QWORD *)(a1 + 1872) + 88LL);
        if ( (_QWORD *)*v8 != v7 || (v9 = (_QWORD *)v8[1], (_QWORD *)*v9 != v8) )
          __fastfail(3u);
        *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 88LL) = v9;
        *v9 = v7;
        v10 = v8[2];
        v11 = *(_QWORD *)(*(_QWORD *)(v10 + 184) + 8LL);
        if ( *(_BYTE *)(v11 + 2) == 40 )
          v12 = *(_DWORD *)(v11 + 20);
        else
          v12 = *(unsigned __int8 *)(v11 + 2);
        v13 = v12 - 16;
        if ( !v13 || (v14 = v13 - 2) == 0 || (v15 = v14 - 1) == 0 || v15 == 13 )
        {
          v16 = KfRaiseIrql(2u);
          sub_140099564(*(_QWORD *)(a1 + 8), v10, a1 + 1824);
          KeLowerIrql(v16);
        }
        ExFreePoolWithTag(v8, 0x4F506152u);
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
      v2 = a2;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( *(_BYTE *)(a1 + 759) )
    {
      *(_BYTE *)(a1 + 759) = 0;
      sub_14000D760(a1, 2);
      v39 = 0LL;
      v40 = 0LL;
      v18 = 0;
      v41 = 0;
      if ( KeGetCurrentIrql() != 2 )
      {
        v5 = 0;
        v18 = KfRaiseIrql(2u);
      }
      v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 792));
      v20 = *(_QWORD *)(a1 + 808);
      v21 = v19;
      if ( (v20 & 1) == 0 )
      {
        ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 800));
        ExRundownCompleted((PEX_RUNDOWN_REF)(a1 + 800));
        do
        {
          v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v20 | 1, v20);
          v22 = v20 == v23;
          v20 = v23;
        }
        while ( !v22 && (v23 & 1) == 0 );
      }
      v24 = sub_14000DC80(a1 + 720, 0);
      v25 = *(_QWORD *)(a1 + 808);
      v26 = 0;
      v27 = v24;
      if ( (v25 & 3) != 0 )
      {
        while ( !*(_DWORD *)(a1 + 748)
             && !*(_DWORD *)(a1 + 736)
             && !*(_DWORD *)(a1 + 752)
             && !*(_BYTE *)(a1 + 757)
             && !*(_BYTE *)(a1 + 759)
             && !*(_BYTE *)(a1 + 756)
             && *(int *)(a1 + 744) <= 0
             && !*(_BYTE *)(a1 + 758) )
        {
          v28 = v25;
          if ( (v25 & 1) != 0 )
          {
            if ( !v26 )
            {
              ExReInitializeRundownProtection((PEX_RUNDOWN_REF)(a1 + 800));
              v26 = 1;
            }
            v28 = v25 ^ 1;
          }
          v29 = v28 ^ 2;
          if ( (v25 & 2) == 0 )
            v29 = v28;
          v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v29, v25);
          v22 = v25 == v30;
          v25 = v30;
          if ( v22 )
          {
            if ( *(_BYTE *)(a1 + 757) || *(_BYTE *)(a1 + 759) || *(_BYTE *)(a1 + 756) || *(int *)(a1 + 744) > 0 )
            {
              v31 = *(_QWORD *)(a1 + 808);
              if ( (v31 & 3) == 0 )
              {
                do
                {
                  v32 = v31;
                  v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v31 | 2, v31);
                }
                while ( v32 != v31 && (v31 & 3) == 0 );
              }
            }
            break;
          }
          if ( (v30 & 3) == 0 )
            break;
        }
      }
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 792), v21);
      if ( v27 )
      {
        if ( (unsigned __int8)sub_140051870(*(_QWORD *)(a1 + 728), v27, &v39) )
        {
          v33 = *(_QWORD *)(a1 + 728);
          if ( (*(_BYTE *)(*(_QWORD *)(v33 + 48) + 112LL) & 4) != 0
            && *(_DWORD *)(v33 + 40) == 1699901262
            && *(_DWORD *)(v33 + 24)
            && !*(_DWORD *)(v33 + 192) )
          {
            *(_DWORD *)(v33 + 40) = 0;
            sub_14002B0D0((PVOID)v33);
          }
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, char *, __int128 *, _QWORD))(a1 + 712))(
            *(_QWORD *)(a1 + 704),
            v27 - 120,
            &v39,
            0LL);
        }
      }
      if ( !v5 )
        KeLowerIrql(v18);
      if ( !*(_BYTE *)(a1 + 759) )
      {
        v34 = *(_QWORD *)(a1 + 32);
        if ( v34 )
        {
          v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v34 + 24));
          v36 = *(_QWORD *)(a1 + 32);
          v37 = *(_DWORD *)(v36 + 80);
          if ( (v37 & 8) != 0 )
          {
            *(_DWORD *)(v36 + 80) = v37 & 0xFFFFFFF7;
            *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) |= 0x10u;
            KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v35);
            *(_QWORD *)(*(_QWORD *)(a1 + 32) + 72LL) = 0LL;
            IoQueueWorkItem(
              *(PIO_WORKITEM *)(*(_QWORD *)(a1 + 32) + 64LL),
              sub_1400406A0,
              CriticalWorkQueue,
              (PVOID)(*(_QWORD *)(a1 + 32) + 64LL));
          }
          else
          {
            KeReleaseSpinLock((PKSPIN_LOCK)(v36 + 24), v35);
          }
        }
      }
      v2 = a2;
    }
    if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
      sub_140053738(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&unk_14014A3D0,
        v17,
        **(_QWORD **)(a1 + 1872),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 104),
        *(_BYTE *)(a1 + 105),
        *(_BYTE *)(a1 + 106),
        v2);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
}
