/*
 * XREFs of RtlpCSparseBitmapPageDecommit @ 0x140353684
 * Callers:
 *     RtlCSparseBitmapBitsClear @ 0x1403501DC (RtlCSparseBitmapBitsClear.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MmFreePoolMemory @ 0x14035231C (MmFreePoolMemory.c)
 *     RtlpCSparseBitmapUnlock @ 0x140353ACC (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x140353B34 (RtlpCSparseBitmapWaitOnAddress.c)
 *     RtlCSparseBitmapEnterLockingRegion @ 0x140353C04 (RtlCSparseBitmapEnterLockingRegion.c)
 *     ExpUnblockPushLock @ 0x14036A040 (ExpUnblockPushLock.c)
 */

void __fastcall RtlpCSparseBitmapPageDecommit(ULONG_PTR a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // r14
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r9
  BOOL v11; // eax
  _QWORD *v12; // rdx
  _QWORD *v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 *v15; // r14
  volatile LONG *v16; // rcx
  __int64 v17; // r8
  volatile signed __int32 **v18; // rdx
  __int64 *v19; // rdx
  __int64 *v20; // r9
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  bool v23; // al
  char v24; // al
  bool i; // zf
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v27; // rax
  void *v28; // rdx
  AutoBoost *v29; // rcx
  signed __int32 v30[8]; // [rsp+0h] [rbp-D8h] BYREF
  const signed __int64 **v31; // [rsp+20h] [rbp-B8h]
  __int64 v32; // [rsp+28h] [rbp-B0h]
  BOOL v33; // [rsp+30h] [rbp-A8h]
  _QWORD *v34; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v35; // [rsp+40h] [rbp-98h]
  AutoBoost *v36; // [rsp+48h] [rbp-90h] BYREF
  __int128 v37; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v38; // [rsp+60h] [rbp-78h]
  __int64 v39; // [rsp+68h] [rbp-70h]
  __int128 v40; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v41; // [rsp+80h] [rbp-58h]
  unsigned __int64 v42; // [rsp+88h] [rbp-50h]
  _QWORD *v43; // [rsp+98h] [rbp-40h]
  ULONG_PTR v44; // [rsp+E0h] [rbp+8h] BYREF
  ULONG_PTR v45; // [rsp+E8h] [rbp+10h] BYREF
  int v46; // [rsp+F0h] [rbp+18h]
  int v47; // [rsp+F8h] [rbp+20h]

  v46 = a3;
  v45 = a2;
  v44 = a1;
  v31 = (const signed __int64 **)a1;
  v37 = 0LL;
  v47 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v43 = (_QWORD *)(a1 + 8);
  v38 = v5;
  v6 = *(_QWORD *)(a1 + 8);
  v32 = v6;
  v39 = v6;
  v7 = a2 << 15;
  v41 = a2 << 15;
  v35 = a2 << 15;
  v8 = 0x8000LL;
  v9 = v5 - (a2 << 15);
  if ( v9 <= 0x8000 )
    v8 = v9;
  v42 = v8;
  v40 = *(_OWORD *)RtlCSparseBitmapEnterLockingRegion(&v40, a1);
  while ( 1 )
  {
    if ( v46 )
      goto LABEL_21;
    v34 = 0LL;
    if ( v7 < v38 )
    {
      if ( v8 <= 1 )
      {
        if ( v8 == 1 )
        {
          v11 = !_bittest64((const signed __int64 *)(v6 + 8 * (v35 >> 6)), 0);
          goto LABEL_20;
        }
        goto LABEL_18;
      }
      if ( v38 - v7 >= v8 )
      {
        v10 = v8 + v7 - 1;
        v12 = (_QWORD *)(v6 + 8 * (v7 >> 6));
        v34 = v12;
        v13 = (_QWORD *)(v6 + 8 * (v10 >> 6));
        if ( v12 == v13 )
        {
          v14 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << v7;
LABEL_12:
          v11 = (v14 & *v12) == 0;
          goto LABEL_20;
        }
        if ( ((-1LL << v7) & *v12) == 0 )
        {
          v34 = ++v12;
          while ( v12 != v13 )
          {
            if ( *v12 )
              goto LABEL_18;
            v34 = ++v12;
          }
          v14 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v10;
          goto LABEL_12;
        }
      }
    }
LABEL_18:
    v11 = 0;
LABEL_20:
    v33 = v11;
    if ( !v11 )
      goto LABEL_37;
LABEL_21:
    v46 = 0;
    v15 = (unsigned __int64 *)(v31 + 3);
    v16 = (volatile LONG *)(v31 + 3);
    if ( *(_BYTE *)(a1 + 48) )
    {
      BYTE4(v37) = ExAcquireSpinLockExclusive(v16);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v27 = (AutoBoost *)KeAbPreAcquire((__int64)v16, 0LL, 0LL, (struct _KLOCK_ENTRIES *)v10);
      v29 = v27;
      v36 = v27;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
      {
        ExfAcquirePushLockExclusiveEx(v15, v27, (__int64)v15);
        v29 = v36;
      }
      if ( v29 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v29, v28);
        else
          *((_BYTE *)v29 + 10) = 1;
      }
      BYTE4(v37) = -1;
    }
    LODWORD(v37) = 1;
    *((_QWORD *)&v37 + 1) = a1;
    v36 = *(AutoBoost **)(a1 + 32);
    if ( v36 == (AutoBoost *)-1LL )
      break;
    RtlpCSparseBitmapUnlock(&v37);
    RtlpCSparseBitmapWaitOnAddress(a1 + 32, &v36, v17, a1);
    if ( !_bittest64(*v31, a2) )
      goto LABEL_37;
    v6 = v32;
  }
  *(_QWORD *)(a1 + 32) = a2;
  RtlpCSparseBitmapUnlock(&v37);
  v47 = 1;
  v18 = (volatile signed __int32 **)v31;
  if ( _bittest64(*v31, a2) && v7 < v38 )
  {
    if ( v8 > 1 )
    {
      if ( v38 - v7 >= v8 )
      {
        v19 = (__int64 *)(v32 + 8 * (v7 >> 6));
        v20 = (__int64 *)(v32 + 8 * ((v8 + v7 - 1) >> 6));
        v21 = *v19;
        if ( v19 == v20 )
        {
          v22 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << v7;
LABEL_35:
          v18 = (volatile signed __int32 **)v31;
          v23 = (v22 & v21) == 0;
          goto LABEL_36;
        }
        for ( i = ((-1LL << v7) & v21) == 0; i; i = v21 == 0 )
        {
          v21 = *++v19;
          if ( v19 == v20 )
          {
            v22 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v8 + (unsigned __int8)v7 - 1);
            goto LABEL_35;
          }
        }
      }
    }
    else if ( v8 == 1 )
    {
      if ( !_bittest64((const signed __int64 *)(v32 + 8 * (v35 >> 6)), 0) )
        goto LABEL_31;
      v23 = 0;
LABEL_36:
      if ( v23 )
      {
LABEL_31:
        _interlockedbittestandreset64(*v18, a2);
        v44 = *v43 + (a2 << 12);
        v45 = 4096LL;
        MmFreePoolMemory(&v44, &v45, 0x40004000u);
      }
    }
  }
LABEL_37:
  if ( v47 )
  {
    *(_QWORD *)(a1 + 32) = -1LL;
    v24 = *(_BYTE *)(a1 + 48);
    _InterlockedOr(v30, 0);
    if ( !v24 )
    {
      if ( *(_QWORD *)(a1 + 40) )
        ExpUnblockPushLock(a1 + 40, 0LL, 0LL);
    }
  }
  if ( *(_BYTE *)(*((_QWORD *)&v40 + 1) + 48LL) )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v40);
    __writecr8((unsigned __int8)v40);
  }
  else
  {
    KeLeaveGuardedRegion();
  }
}
