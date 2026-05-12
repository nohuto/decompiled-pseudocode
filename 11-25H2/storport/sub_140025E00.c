/*
 * XREFs of sub_140025E00 @ 0x140025E00
 * Callers:
 *     sub_140010CA0 @ 0x140010CA0 (sub_140010CA0.c)
 *     sub_140022EC0 @ 0x140022EC0 (sub_140022EC0.c)
 *     sub_14003E980 @ 0x14003E980 (sub_14003E980.c)
 *     sub_14006D53C @ 0x14006D53C (sub_14006D53C.c)
 * Callees:
 *     sub_140003B58 @ 0x140003B58 (sub_140003B58.c)
 *     sub_140003FEC @ 0x140003FEC (sub_140003FEC.c)
 *     sub_14000D760 @ 0x14000D760 (sub_14000D760.c)
 *     sub_14000D930 @ 0x14000D930 (sub_14000D930.c)
 *     sub_14000DAE0 @ 0x14000DAE0 (sub_14000DAE0.c)
 *     sub_14000DC80 @ 0x14000DC80 (sub_14000DC80.c)
 *     sub_14002B0D0 @ 0x14002B0D0 (sub_14002B0D0.c)
 *     sub_140051870 @ 0x140051870 (sub_140051870.c)
 *     sub_14006D168 @ 0x14006D168 (sub_14006D168.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140025E00(__int64 a1, int a2, int a3)
{
  unsigned int v5; // r14d
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  char v9; // r15
  __int64 v10; // r14
  unsigned int v11; // esi
  unsigned __int64 v12; // rdi
  KSPIN_LOCK *v13; // rbx
  unsigned __int64 v14; // rbx
  KIRQL v15; // r14
  signed __int64 v16; // rsi
  bool v17; // zf
  signed __int64 v18; // rax
  int v19; // eax
  char *v20; // rax
  signed __int64 v21; // rdi
  char v22; // r8
  __int64 v23; // rdx
  signed __int64 v24; // rcx
  signed __int64 v25; // rax
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  int v28; // eax
  int v29; // r8d
  char v30; // r9
  __int64 v31; // rcx
  __int64 i; // rdi
  __int64 v33; // rcx
  char *v35; // [rsp+58h] [rbp-80h] BYREF
  __int128 v36; // [rsp+60h] [rbp-78h] BYREF
  __int64 v37; // [rsp+70h] [rbp-68h]
  int v38; // [rsp+78h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-58h] BYREF
  __int128 v40; // [rsp+98h] [rbp-40h] BYREF

  v5 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0;
  if ( a3 )
  {
    v6 = a1 + 720;
    v7 = sub_14000DAE0(a1 + 720);
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 24);
    v9 = 0;
    if ( v8 )
    {
      v10 = *(_QWORD *)(a1 + 560);
      if ( v10 )
      {
        if ( *(_QWORD *)(v8 + 4904) )
        {
          v11 = 0;
          memset(&LockHandle, 0, sizeof(LockHandle));
          v12 = -1LL;
          if ( *(_DWORD *)(v10 + 8) )
          {
            do
            {
              v13 = (KSPIN_LOCK *)(v10 + ((v11 + 1LL) << 6));
              KeAcquireInStackQueuedSpinLock(v13 + 5, &LockHandle);
              if ( (KSPIN_LOCK *)*v13 != v13 && *(_QWORD *)(*v13 + 40) < v12 )
                v12 = *(_QWORD *)(*v13 + 40);
              KeReleaseInStackQueuedSpinLock(&LockHandle);
              ++v11;
            }
            while ( v11 < *(_DWORD *)(v10 + 8) );
          }
          v14 = 0LL;
          if ( v12 != -1LL )
            v14 = v12;
          if ( v14 )
            v9 = KeQueryUnbiasedInterruptTime() - v14 > *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4904LL);
        }
      }
    }
    v6 = a1 + 720;
    if ( a2 )
      sub_14000D760(a1, 0);
    v35 = 0LL;
    v15 = KfRaiseIrql(2u);
    if ( (unsigned __int8)sub_14000D930(a1 + 720, v9, 0, (__int64)&v35) )
    {
      KeLowerIrql(v15);
    }
    else
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 792));
      if ( !(unsigned __int8)sub_14000D930(a1 + 720, v9, 1, (__int64)&v35) )
      {
        v16 = *(_QWORD *)(a1 + 808);
        if ( (v16 & 1) == 0 )
        {
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 800));
          ExRundownCompleted((PEX_RUNDOWN_REF)(a1 + 800));
          do
          {
            v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v16 | 1, v16);
            v17 = v16 == v18;
            v16 = v18;
          }
          while ( !v17 && (v18 & 1) == 0 );
        }
        if ( a2 )
          *(_BYTE *)(a1 + 758) = 0;
        v19 = *(_DWORD *)(a1 + 748);
        if ( v19 )
          *(_DWORD *)(a1 + 748) = v19 - 1;
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 808), 0xFFFFFFFFFFFFFFFCuLL);
        if ( (((__int64)*(unsigned int *)(a1 + 808) >> 2) & 0x3FFFFFFF) == 0 && *(_DWORD *)(a1 + 760) )
          KeSetEvent((PRKEVENT)(a1 + 768), 0, 0);
        v20 = sub_14000DC80(a1 + 720, v9);
        v21 = *(_QWORD *)(a1 + 808);
        v22 = 0;
        v35 = v20;
        if ( (v21 & 3) != 0 )
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
            v23 = v21;
            if ( (v21 & 1) != 0 )
            {
              if ( !v22 )
              {
                ExReInitializeRundownProtection((PEX_RUNDOWN_REF)(a1 + 800));
                v22 = 1;
              }
              v23 = v21 ^ 1;
            }
            v24 = v23 ^ 2;
            if ( (v21 & 2) == 0 )
              v24 = v23;
            v25 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v24, v21);
            v17 = v21 == v25;
            v21 = v25;
            if ( v17 )
            {
              if ( *(_BYTE *)(a1 + 757) || *(_BYTE *)(a1 + 759) || *(_BYTE *)(a1 + 756) || *(int *)(a1 + 744) > 0 )
              {
                v26 = *(_QWORD *)(a1 + 808);
                if ( (v26 & 3) == 0 )
                {
                  do
                  {
                    v27 = v26;
                    v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v26 | 2, v26);
                  }
                  while ( v27 != v26 && (v26 & 3) == 0 );
                }
              }
              break;
            }
            if ( (v25 & 3) == 0 )
              break;
          }
        }
      }
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 792), v15);
    }
    v7 = (__int64)v35;
    v5 = 0;
  }
  if ( v7 )
  {
    if ( byte_140168DAA )
    {
      if ( byte_1401694F2 < 0 )
      {
        v40 = 0LL;
        IoGetActivityIdIrp(v7 - 120, &v40);
        if ( byte_1401694F2 < 0 )
        {
          sub_140003B58(v6);
          v28 = sub_140003FEC(v6);
          sub_14006D168(
            v29 + *(_DWORD *)(a1 + 736),
            v28,
            (unsigned int)&v40,
            v6,
            ((v30 & 6) != 0) + 1,
            5,
            0,
            v29 + *(_BYTE *)(a1 + 736),
            v28);
        }
      }
    }
    if ( (unsigned __int8)sub_140051870(*(_QWORD *)(a1 + 728), v7, &v36) )
    {
      v31 = *(_QWORD *)(a1 + 728);
      if ( (*(_BYTE *)(*(_QWORD *)(v31 + 48) + 112LL) & 4) != 0
        && *(_DWORD *)(v31 + 40) == 1699901262
        && *(_DWORD *)(v31 + 24)
        && !*(_DWORD *)(v31 + 192) )
      {
        *(_DWORD *)(v31 + 40) = 0;
        sub_14002B0D0((PVOID)v31);
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(a1 + 712))(
        *(_QWORD *)(a1 + 704),
        v7 - 120,
        &v36,
        0LL);
      v5 = 1;
    }
  }
  if ( a2 )
  {
    for ( i = sub_14000DAE0(v6); i; i = sub_14000DAE0(v6) )
    {
      if ( (unsigned __int8)sub_140051870(*(_QWORD *)(a1 + 728), i, &v36) )
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
        (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(a1 + 712))(
          *(_QWORD *)(a1 + 704),
          i - 120,
          &v36,
          0LL);
      }
    }
  }
  return v5;
}
