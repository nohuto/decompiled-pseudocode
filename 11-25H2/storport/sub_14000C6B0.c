/*
 * XREFs of sub_14000C6B0 @ 0x14000C6B0
 * Callers:
 *     sub_14000B0B0 @ 0x14000B0B0 (sub_14000B0B0.c)
 *     sub_14000CE18 @ 0x14000CE18 (sub_14000CE18.c)
 *     sub_140022EC0 @ 0x140022EC0 (sub_140022EC0.c)
 *     sub_14003E6C0 @ 0x14003E6C0 (sub_14003E6C0.c)
 *     sub_14005E400 @ 0x14005E400 (sub_14005E400.c)
 *     sub_14006191C @ 0x14006191C (sub_14006191C.c)
 *     sub_140065290 @ 0x140065290 (sub_140065290.c)
 *     sub_140065E20 @ 0x140065E20 (sub_140065E20.c)
 *     sub_140066768 @ 0x140066768 (sub_140066768.c)
 * Callees:
 *     sub_14000DC80 @ 0x14000DC80 (sub_14000DC80.c)
 *     sub_14002B0D0 @ 0x14002B0D0 (sub_14002B0D0.c)
 *     sub_14002B140 @ 0x14002B140 (sub_14002B140.c)
 *     sub_140051870 @ 0x140051870 (sub_140051870.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_14000C6B0(__int64 a1, char a2)
{
  char v2; // bp
  __int64 v4; // rdi
  void *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // r14
  KIRQL v9; // r15
  int v10; // ebp
  KIRQL v11; // al
  signed __int64 v12; // rsi
  KIRQL v13; // r13
  bool v14; // zf
  signed __int64 v15; // rax
  __int64 v16; // rax
  signed __int64 v17; // rdi
  char v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rax
  signed __int64 v21; // rdx
  signed __int64 v22; // rax
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rcx
  KIRQL v28; // al
  __int64 v29; // rdx
  int v30; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-98h] BYREF
  __int128 i; // [rsp+48h] [rbp-80h] BYREF
  __int64 v33; // [rsp+58h] [rbp-70h]
  int v34; // [rsp+60h] [rbp-68h]
  __int128 v35; // [rsp+68h] [rbp-60h] BYREF
  __int64 v36; // [rsp+78h] [rbp-50h]
  int v37; // [rsp+80h] [rbp-48h]
  __int64 *v38; // [rsp+D0h] [rbp+8h]

  v2 = a2;
  v4 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_DWORD *)(a1 + 968) )
  {
    do
    {
      v5 = (void *)(*(_QWORD *)(a1 + 960) + 320 * v4);
      v33 = 0LL;
      v34 = 0;
      for ( i = 0LL;
            ;
            (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(v7 + 712))(
              *(_QWORD *)(v7 + 704),
              v6 - 120,
              &i,
              0LL) )
      {
        v6 = sub_14002B140(v5);
        if ( !v6 )
          break;
        v7 = *(_QWORD *)(*(_QWORD *)(v6 - 120 + 184) + 32LL);
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *(_DWORD *)(a1 + 968) );
  }
  if ( !v2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  v8 = *(__int64 **)(a1 + 144);
  v38 = (__int64 *)(a1 + 144);
  if ( v8 != (__int64 *)(a1 + 144) )
  {
    do
    {
      v35 = 0LL;
      v36 = 0LL;
      v9 = 0;
      v37 = 0;
      if ( KeGetCurrentIrql() == 2 )
      {
        v10 = 1;
      }
      else
      {
        v10 = 0;
        v9 = KfRaiseIrql(2u);
      }
      v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v8 + 182);
      v12 = v8[93];
      v13 = v11;
      if ( (v12 & 1) == 0 )
      {
        ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v8 + 92);
        ExRundownCompleted((PEX_RUNDOWN_REF)v8 + 92);
        do
        {
          v15 = _InterlockedCompareExchange64(v8 + 93, v12 | 1, v12);
          v14 = v12 == v15;
          v12 = v15;
        }
        while ( !v14 && (v15 & 1) == 0 );
      }
      v16 = sub_14000DC80(v8 + 82, 0LL);
      v17 = v8[93];
      v18 = 0;
      v19 = v16;
      if ( (v17 & 3) != 0 )
      {
        while ( !*((_DWORD *)v8 + 171)
             && !*((_DWORD *)v8 + 168)
             && !*((_DWORD *)v8 + 172)
             && !*((_BYTE *)v8 + 693)
             && !*((_BYTE *)v8 + 695)
             && !*((_BYTE *)v8 + 692)
             && *((int *)v8 + 170) <= 0
             && !*((_BYTE *)v8 + 694) )
        {
          v20 = v17;
          if ( (v17 & 1) != 0 )
          {
            if ( !v18 )
            {
              ExReInitializeRundownProtection((PEX_RUNDOWN_REF)v8 + 92);
              v18 = 1;
            }
            v20 = v17 ^ 1;
          }
          v21 = v20 ^ 2;
          if ( (v17 & 2) == 0 )
            v21 = v20;
          v22 = _InterlockedCompareExchange64(v8 + 93, v21, v17);
          v14 = v17 == v22;
          v17 = v22;
          if ( v14 )
          {
            if ( *((_BYTE *)v8 + 693) || *((_BYTE *)v8 + 695) || *((_BYTE *)v8 + 692) || *((int *)v8 + 170) > 0 )
            {
              v23 = v8[93];
              if ( (v23 & 3) == 0 )
              {
                do
                {
                  v24 = v23;
                  v23 = _InterlockedCompareExchange64(v8 + 93, v23 | 2, v23);
                }
                while ( v24 != v23 && (v23 & 3) == 0 );
              }
            }
            break;
          }
          if ( (v22 & 3) == 0 )
            break;
        }
      }
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v8 + 182, v13);
      if ( v19 )
      {
        if ( (unsigned __int8)sub_140051870(v8[83], v19, &v35) )
        {
          v26 = v8[83];
          if ( (*(_BYTE *)(*(_QWORD *)(v26 + 48) + 112LL) & 4) != 0
            && *(_DWORD *)(v26 + 40) == 1699901262
            && *(_DWORD *)(v26 + 24)
            && !*(_DWORD *)(v26 + 192) )
          {
            *(_DWORD *)(v26 + 40) = 0;
            sub_14002B0D0((PVOID)v26);
          }
        }
        else
        {
          LOBYTE(v25) = 1;
          ((void (__fastcall *)(__int64, __int64, __int128 *, __int64))v8[81])(v8[80], v19 - 120, &v35, v25);
        }
      }
      if ( !v10 )
        KeLowerIrql(v9);
      if ( !*((_BYTE *)v8 + 695) )
      {
        v27 = *(v8 - 4);
        if ( v27 )
        {
          v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v27 + 24));
          v29 = *(v8 - 4);
          v30 = *(_DWORD *)(v29 + 80);
          if ( (v30 & 8) != 0 )
          {
            *(_DWORD *)(v29 + 80) = v30 & 0xFFFFFFF7;
            *(_DWORD *)(*(v8 - 4) + 80) |= 0x10u;
            KeReleaseSpinLock((PKSPIN_LOCK)(*(v8 - 4) + 24), v28);
            *(_QWORD *)(*(v8 - 4) + 72) = 0LL;
            IoQueueWorkItem(
              *(PIO_WORKITEM *)(*(v8 - 4) + 64),
              sub_1400406A0,
              CriticalWorkQueue,
              (PVOID)(*(v8 - 4) + 64));
          }
          else
          {
            KeReleaseSpinLock((PKSPIN_LOCK)(v29 + 24), v28);
          }
        }
      }
      v8 = (__int64 *)*v8;
    }
    while ( v8 != v38 );
    v2 = a2;
  }
  if ( !v2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
