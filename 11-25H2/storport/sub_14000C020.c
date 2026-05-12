/*
 * XREFs of sub_14000C020 @ 0x14000C020
 * Callers:
 *     sub_140004004 @ 0x140004004 (sub_140004004.c)
 *     sub_140009D88 @ 0x140009D88 (sub_140009D88.c)
 *     sub_14000B358 @ 0x14000B358 (sub_14000B358.c)
 *     sub_14000BF6C @ 0x14000BF6C (sub_14000BF6C.c)
 *     sub_140034B00 @ 0x140034B00 (sub_140034B00.c)
 *     sub_1400422E0 @ 0x1400422E0 (sub_1400422E0.c)
 *     sub_140059DF8 @ 0x140059DF8 (sub_140059DF8.c)
 *     sub_140065290 @ 0x140065290 (sub_140065290.c)
 *     sub_140095B74 @ 0x140095B74 (sub_140095B74.c)
 *     sub_14009DB74 @ 0x14009DB74 (sub_14009DB74.c)
 *     sub_1400A06F0 @ 0x1400A06F0 (sub_1400A06F0.c)
 *     sub_1400A10B8 @ 0x1400A10B8 (sub_1400A10B8.c)
 *     sub_1401B1388 @ 0x1401B1388 (sub_1401B1388.c)
 * Callees:
 *     sub_14000DC80 @ 0x14000DC80 (sub_14000DC80.c)
 *     sub_14002B0D0 @ 0x14002B0D0 (sub_14002B0D0.c)
 *     sub_140051870 @ 0x140051870 (sub_140051870.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_14000C020(__int64 a1, unsigned __int8 a2)
{
  KIRQL v3; // r15
  int v4; // r14d
  KIRQL v5; // al
  signed __int64 v6; // rsi
  KIRQL v7; // r13
  bool v8; // zf
  signed __int64 v9; // rax
  __int64 v10; // rax
  signed __int64 v11; // rdi
  char v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rax
  signed __int64 v15; // rdx
  signed __int64 v16; // rax
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  __int64 v19; // rcx
  __int64 v20; // rcx
  KIRQL v21; // al
  __int64 v22; // rdx
  int v23; // ecx
  __int128 v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+40h] [rbp-38h]
  int v26; // [rsp+48h] [rbp-30h]

  v24 = 0LL;
  v25 = 0LL;
  v26 = 0;
  v3 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    v3 = KfRaiseIrql(2u);
  }
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 792));
  v6 = *(_QWORD *)(a1 + 808);
  v7 = v5;
  if ( (v6 & 1) == 0 )
  {
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 800));
    ExRundownCompleted((PEX_RUNDOWN_REF)(a1 + 800));
    do
    {
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v6 | 1, v6);
      v8 = v6 == v9;
      v6 = v9;
    }
    while ( !v8 && (v9 & 1) == 0 );
  }
  v10 = sub_14000DC80(a1 + 720, 0LL);
  v11 = *(_QWORD *)(a1 + 808);
  v12 = 0;
  v13 = v10;
  if ( (v11 & 3) != 0 )
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
      v14 = v11;
      if ( (v11 & 1) != 0 )
      {
        if ( !v12 )
        {
          ExReInitializeRundownProtection((PEX_RUNDOWN_REF)(a1 + 800));
          v12 = 1;
        }
        v14 = v11 ^ 1;
      }
      v15 = v14 ^ 2;
      if ( (v11 & 2) == 0 )
        v15 = v14;
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v15, v11);
      v8 = v11 == v16;
      v11 = v16;
      if ( v8 )
      {
        if ( *(_BYTE *)(a1 + 757) || *(_BYTE *)(a1 + 759) || *(_BYTE *)(a1 + 756) || *(int *)(a1 + 744) > 0 )
        {
          v17 = *(_QWORD *)(a1 + 808);
          if ( (v17 & 3) == 0 )
          {
            do
            {
              v18 = v17;
              v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v17 | 2, v17);
            }
            while ( v18 != v17 && (v17 & 3) == 0 );
          }
        }
        break;
      }
      if ( (v16 & 3) == 0 )
        break;
    }
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 792), v7);
  if ( v13 )
  {
    if ( (unsigned __int8)sub_140051870(*(_QWORD *)(a1 + 728), v13, &v24) )
    {
      v19 = *(_QWORD *)(a1 + 728);
      if ( (*(_BYTE *)(*(_QWORD *)(v19 + 48) + 112LL) & 4) != 0
        && *(_DWORD *)(v19 + 40) == 1699901262
        && *(_DWORD *)(v19 + 24)
        && !*(_DWORD *)(v19 + 192) )
      {
        *(_DWORD *)(v19 + 40) = 0;
        sub_14002B0D0((PVOID)v19);
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(a1 + 712))(
        *(_QWORD *)(a1 + 704),
        v13 - 120,
        &v24,
        a2);
    }
  }
  if ( !v4 )
    KeLowerIrql(v3);
  if ( !*(_BYTE *)(a1 + 759) )
  {
    v20 = *(_QWORD *)(a1 + 32);
    if ( v20 )
    {
      v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 24));
      v22 = *(_QWORD *)(a1 + 32);
      v23 = *(_DWORD *)(v22 + 80);
      if ( (v23 & 8) != 0 )
      {
        *(_DWORD *)(v22 + 80) = v23 & 0xFFFFFFF7;
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) |= 0x10u;
        KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v21);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 72LL) = 0LL;
        IoQueueWorkItem(
          *(PIO_WORKITEM *)(*(_QWORD *)(a1 + 32) + 64LL),
          sub_1400406A0,
          CriticalWorkQueue,
          (PVOID)(*(_QWORD *)(a1 + 32) + 64LL));
      }
      else
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 24), v21);
      }
    }
  }
}
