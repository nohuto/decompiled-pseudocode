/*
 * XREFs of sub_1400267A0 @ 0x1400267A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000D760 @ 0x14000D760 (sub_14000D760.c)
 *     sub_14000DC80 @ 0x14000DC80 (sub_14000DC80.c)
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_14002B0D0 @ 0x14002B0D0 (sub_14002B0D0.c)
 *     sub_14002B140 @ 0x14002B140 (sub_14002B140.c)
 *     sub_140051870 @ 0x140051870 (sub_140051870.c)
 *     sub_1400541AC @ 0x1400541AC (sub_1400541AC.c)
 *     sub_1400A6328 @ 0x1400A6328 (sub_1400A6328.c)
 *     sub_1400A65FC @ 0x1400A65FC (sub_1400A65FC.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_1400267A0(KSPIN_LOCK a1, int a2, int a3)
{
  int v3; // r14d
  KSPIN_LOCK v4; // r15
  __int64 v5; // r8
  __int64 v6; // rax
  void (__fastcall *v7)(__int64, __int64, _QWORD *); // rax
  unsigned int v8; // esi
  char v9; // al
  KSPIN_LOCK *v10; // rcx
  signed __int32 v11; // edi
  _QWORD *i; // rbx
  KSPIN_LOCK v13; // r9
  unsigned int v14; // edi
  void *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // r14
  KSPIN_LOCK v19; // r15
  int v20; // r12d
  KIRQL v21; // al
  signed __int64 v22; // rsi
  bool v23; // zf
  signed __int64 v24; // rax
  char *v25; // rax
  signed __int64 v26; // rdi
  char v27; // r8
  char *v28; // rsi
  __int64 v29; // rax
  signed __int64 v30; // rdx
  signed __int64 v31; // rax
  signed __int64 v32; // rax
  signed __int64 v33; // rtt
  __int64 v34; // r9
  __int64 v35; // rcx
  KIRQL v36; // al
  __int64 v37; // rdx
  int v38; // ecx
  __int64 v39; // rcx
  KIRQL v40; // [rsp+38h] [rbp-D0h]
  _QWORD v41[2]; // [rsp+40h] [rbp-C8h] BYREF
  int v42; // [rsp+50h] [rbp-B8h]
  char v43; // [rsp+54h] [rbp-B4h]
  __int16 v44; // [rsp+55h] [rbp-B3h]
  char v45; // [rsp+57h] [rbp-B1h]
  __int128 v46; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+68h] [rbp-A0h]
  __m256i v48; // [rsp+70h] [rbp-98h] BYREF
  int v49; // [rsp+90h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v51; // [rsp+B0h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v52; // [rsp+C8h] [rbp-40h] BYREF
  KSPIN_LOCK retaddr; // [rsp+130h] [rbp+28h]
  char v55; // [rsp+140h] [rbp+38h]
  KIRQL v56; // [rsp+148h] [rbp+40h]
  KIRQL v57; // [rsp+150h] [rbp+48h]

  v55 = a2;
  v3 = a2;
  v4 = a1;
  if ( byte_140168DAA && (byte_1401694F2 & 0x10) != 0 )
    sub_1400541AC(a1, (unsigned int)&unk_14014A258, a3, **(_QWORD **)(a1 + 4960), *(_DWORD *)(a1 + 56), a2);
  _interlockedbittestandset((volatile signed __int32 *)(*(_QWORD *)(v4 + 4960) + 20LL), 0);
  if ( sub_140020090(v4 + 376, 8) )
  {
    if ( sub_140020090(v4 + 376, 8) )
    {
      v6 = *(_QWORD *)(v4 + 608);
      v44 = 0;
      v45 = 0;
      v41[0] = 0x1800000001LL;
      v41[1] = 0LL;
      v42 = v3;
      v43 = 1;
      v7 = *(void (__fastcall **)(__int64, __int64, _QWORD *))(v6 + 120);
      if ( v7 )
        v7(*(_QWORD *)(v4 + 616) + 16LL, 8LL, v41);
    }
  }
  v8 = *(_DWORD *)(v4 + 968);
  v9 = 0;
  v10 = *(KSPIN_LOCK **)(v4 + 960);
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v51, 0, sizeof(v51));
  if ( v10 )
  {
    if ( v8 <= 1 )
    {
      KeAcquireInStackQueuedSpinLock(v10, &LockHandle);
      v11 = _InterlockedDecrement((volatile signed __int32 *)(v4 + 988));
      goto LABEL_15;
    }
    v9 = sub_1400A6328(v4);
  }
  v11 = _InterlockedDecrement((volatile signed __int32 *)(v4 + 988));
  if ( !v9 )
    goto LABEL_16;
  if ( v8 > 1 )
  {
    sub_1400A65FC(v4);
    goto LABEL_16;
  }
LABEL_15:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_16:
  if ( (*(_BYTE *)(v4 + 112) & 2) != 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 136), &v51);
    for ( i = *(_QWORD **)(v4 + 144); i != (_QWORD *)(v4 + 144); i = (_QWORD *)*i )
      sub_14000D760((__int64)(i - 8), 4);
    KeReleaseInStackQueuedSpinLock(&v51);
  }
  if ( (qword_140168458 & 0x200) != 0 )
  {
    v13 = *(unsigned int *)(v4 + 56);
    if ( *(_DWORD *)v4 != 1314275652 )
    {
      LODWORD(v10) = *(_DWORD *)(v4 + 4932);
      if ( (_DWORD)v10 )
      {
        v5 = *(_QWORD *)(v4 + 4936);
        if ( v5 )
        {
          v10 = (KSPIN_LOCK *)(v5
                             + 48LL
                             * (_InterlockedIncrement((volatile signed __int32 *)(v4 + 4928)) % (unsigned int)v10));
          *(_DWORD *)v10 = 7;
          v10[5] = MEMORY[0xFFFFF78000000014];
          v10[2] = v11;
          v10[1] = retaddr;
          v10[3] = v4;
          v10[4] = v13;
        }
      }
    }
  }
  if ( !v11 )
  {
    v40 = KfRaiseIrql(2u);
    v14 = 0;
    memset(&v52, 0, sizeof(v52));
    if ( *(_DWORD *)(v4 + 968) )
    {
      do
      {
        v46 = 0LL;
        v15 = (void *)(*(_QWORD *)(v4 + 960) + 320LL * v14);
        v47 = 0LL;
        v48.m256i_i32[0] = 0;
        while ( 1 )
        {
          v16 = sub_14002B140(v15);
          if ( !v16 )
            break;
          v17 = *(_QWORD *)(*(_QWORD *)(v16 - 120 + 184) + 32LL);
          (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(v17 + 712))(
            *(_QWORD *)(v17 + 704),
            v16 - 120,
            &v46,
            0LL);
        }
        ++v14;
      }
      while ( v14 < *(_DWORD *)(v4 + 968) );
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 136), &v52);
    v18 = *(__int64 **)(v4 + 144);
    if ( v18 != (__int64 *)(v4 + 144) )
    {
      v19 = v4 + 144;
      do
      {
        v56 = 0;
        memset(&v48.m256i_u64[1], 0, 24);
        v49 = 0;
        if ( KeGetCurrentIrql() == 2 )
        {
          v20 = 1;
        }
        else
        {
          v20 = 0;
          v56 = KfRaiseIrql(2u);
        }
        v21 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v18 + 182);
        v22 = v18[93];
        v57 = v21;
        if ( (v22 & 1) == 0 )
        {
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v18 + 92);
          ExRundownCompleted((PEX_RUNDOWN_REF)v18 + 92);
          do
          {
            v24 = _InterlockedCompareExchange64(v18 + 93, v22 | 1, v22);
            v23 = v22 == v24;
            v22 = v24;
          }
          while ( !v23 && (v24 & 1) == 0 );
        }
        v25 = sub_14000DC80((__int64)(v18 + 82), 0);
        v26 = v18[93];
        v27 = 0;
        v28 = v25;
        if ( (v26 & 3) != 0 )
        {
          while ( !*((_DWORD *)v18 + 171)
               && !*((_DWORD *)v18 + 168)
               && !*((_DWORD *)v18 + 172)
               && !*((_BYTE *)v18 + 693)
               && !*((_BYTE *)v18 + 695)
               && !*((_BYTE *)v18 + 692)
               && *((int *)v18 + 170) <= 0
               && !*((_BYTE *)v18 + 694) )
          {
            v29 = v26;
            if ( (v26 & 1) != 0 )
            {
              if ( !v27 )
              {
                ExReInitializeRundownProtection((PEX_RUNDOWN_REF)v18 + 92);
                v27 = 1;
              }
              v29 = v26 ^ 1;
            }
            v30 = v29 ^ 2;
            if ( (v26 & 2) == 0 )
              v30 = v29;
            v31 = _InterlockedCompareExchange64(v18 + 93, v30, v26);
            v23 = v26 == v31;
            v26 = v31;
            if ( v23 )
            {
              if ( *((_BYTE *)v18 + 693) || *((_BYTE *)v18 + 695) || *((_BYTE *)v18 + 692) || *((int *)v18 + 170) > 0 )
              {
                v32 = v18[93];
                if ( (v32 & 3) == 0 )
                {
                  do
                  {
                    v33 = v32;
                    v32 = _InterlockedCompareExchange64(v18 + 93, v32 | 2, v32);
                  }
                  while ( v33 != v32 && (v32 & 3) == 0 );
                }
              }
              break;
            }
            if ( (v31 & 3) == 0 )
              break;
          }
        }
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v18 + 182, v57);
        if ( v28 )
        {
          if ( (unsigned __int8)sub_140051870(v18[83], v28, &v48.m256i_u64[1]) )
          {
            v39 = v18[83];
            if ( (*(_BYTE *)(*(_QWORD *)(v39 + 48) + 112LL) & 4) != 0
              && *(_DWORD *)(v39 + 40) == 1699901262
              && *(_DWORD *)(v39 + 24)
              && !*(_DWORD *)(v39 + 192) )
            {
              *(_DWORD *)(v39 + 40) = 0;
              sub_14002B0D0((PVOID)v39);
            }
          }
          else
          {
            LOBYTE(v34) = 1;
            ((void (__fastcall *)(__int64, char *, unsigned __int64 *, __int64))v18[81])(
              v18[80],
              v28 - 120,
              &v48.m256i_u64[1],
              v34);
          }
        }
        if ( !v20 )
          KeLowerIrql(v56);
        if ( !*((_BYTE *)v18 + 695) )
        {
          v35 = *(v18 - 4);
          if ( v35 )
          {
            v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v35 + 24));
            v37 = *(v18 - 4);
            v38 = *(_DWORD *)(v37 + 80);
            if ( (v38 & 8) != 0 )
            {
              *(_DWORD *)(v37 + 80) = v38 & 0xFFFFFFF7;
              *(_DWORD *)(*(v18 - 4) + 80) |= 0x10u;
              KeReleaseSpinLock((PKSPIN_LOCK)(*(v18 - 4) + 24), v36);
              *(_QWORD *)(*(v18 - 4) + 72) = 0LL;
              IoQueueWorkItem(
                *(PIO_WORKITEM *)(*(v18 - 4) + 64),
                sub_1400406A0,
                CriticalWorkQueue,
                (PVOID)(*(v18 - 4) + 64));
            }
            else
            {
              KeReleaseSpinLock((PKSPIN_LOCK)(v37 + 24), v36);
            }
          }
        }
        v18 = (__int64 *)*v18;
      }
      while ( v18 != (__int64 *)v19 );
      v4 = a1;
    }
    KeReleaseInStackQueuedSpinLock(&v52);
    KeLowerIrql(v40);
    LOBYTE(v3) = v55;
  }
  if ( byte_140168DAA )
  {
    if ( (byte_1401694F2 & 0x10) != 0 )
      sub_1400541AC((_DWORD)v10, (unsigned int)&unk_14014B138, v5, **(_QWORD **)(v4 + 4960), *(_DWORD *)(v4 + 56), v3);
  }
}
