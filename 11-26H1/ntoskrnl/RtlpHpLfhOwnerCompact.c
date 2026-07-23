/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x140349990
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x1403496A8 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x140349990 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x14063CB34 (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1403488A0 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhOwnerCompact @ 0x140349990 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14034B2B0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpAcquireLockShared @ 0x14034C05C (RtlpHpAcquireLockShared.c)
 *     RtlpHpReleaseLockShared @ 0x14034DEC0 (RtlpHpReleaseLockShared.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhOwnerListCompact @ 0x14034F430 (RtlpHpLfhOwnerListCompact.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

_QWORD *__fastcall RtlpHpLfhOwnerCompact(__int64 a1, unsigned __int8 *a2, unsigned int a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // r12d
  unsigned int v5; // r10d
  unsigned __int8 *v8; // r13
  unsigned int i; // edx
  __int16 v10; // r8
  unsigned int v11; // ecx
  _WORD *v12; // rax
  __int64 v13; // rax
  volatile __int64 *v14; // rdi
  unsigned __int16 *v15; // rbx
  __int64 v16; // r14
  unsigned int v17; // r12d
  _QWORD *result; // rax
  unsigned int v19; // r15d
  bool v20; // zf
  volatile LONG *v21; // rcx
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v23; // rax
  void *v24; // rdx
  AutoBoost *v25; // r14
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v31[3]; // [rsp+28h] [rbp-160h] BYREF
  _DWORD v32[64]; // [rsp+40h] [rbp-148h] BYREF

  v4 = 0;
  v5 = a3;
  if ( (*a2 & 1) != 0 )
  {
    v8 = a2;
    a4 = 0LL;
    for ( i = 0;
          (unsigned int)a4 < *(unsigned __int8 *)(a1 + 72);
          a4 = (struct _KLOCK_ENTRIES *)(unsigned int)((_DWORD)a4 + 1) )
    {
      v10 = *(_WORD *)(a1 + 2 * (((unsigned __int64)(unsigned int)a4 << 7) + ((unsigned __int64)*a2 >> 1)) + 1472);
      v11 = 0;
      if ( i )
      {
        v12 = v32;
        while ( *v12 != v10 )
        {
          ++v11;
          v12 += 2;
          if ( v11 >= i )
            goto LABEL_7;
        }
        ++HIWORD(v32[v11]);
      }
      else
      {
LABEL_7:
        v13 = i++;
        v32[v13] = 0;
        LOWORD(v32[v13]) = v10;
        HIWORD(v32[v13]) = 1;
      }
    }
    v14 = 0LL;
    if ( i )
    {
      v15 = (unsigned __int16 *)v32;
      v16 = i;
      v17 = v5;
      do
      {
        v14 = (volatile __int64 *)(a1 + ((unsigned __int64)*v15 << 6));
        RtlpHpLfhOwnerCompact(a1, v14, v17);
        v15 += 2;
        --v16;
      }
      while ( v16 );
      v5 = a3;
      v4 = 0;
    }
  }
  else
  {
    v14 = (volatile __int64 *)a2;
    v8 = (unsigned __int8 *)(a1 + ((unsigned __int64)*((unsigned __int16 *)a2 + 1) << 6));
  }
  if ( *((unsigned __int8 **)a2 + 3) != a2 + 24 || (result = a2 + 40, (_QWORD *)*result != result) )
  {
    v19 = 7;
    if ( v5 )
      v19 = 3;
    v31[0] = (__int64)v31;
    v20 = (*a2 & 1) == 0;
    v31[1] = (__int64)v31;
    if ( !v20 || !*((_WORD *)a2 + 2) )
    {
      v21 = (volatile LONG *)(a2 + 16);
      if ( *(_BYTE *)(a1 + 73) )
      {
        ExAcquireSpinLockExclusive(v21);
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v23 = (AutoBoost *)KeAbPreAcquire((__int64)v21, 0LL, 0LL, a4);
        v25 = v23;
        if ( _interlockedbittestandset64((volatile signed __int32 *)a2 + 4, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a2 + 2, v23, (__int64)(a2 + 16));
        if ( v25 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v25, v24);
          else
            *((_BYTE *)v25 + 10) = 1;
        }
      }
    }
    if ( (*a2 & 1) == 0 && (v19 & 4) != 0 )
    {
      v26 = 0LL;
      v27 = _InterlockedExchange64(v14 + 7, 0LL);
      if ( (v27 & 0xFFF) != 0 )
        v26 = v27 & 0xFFFFFFFFFFFFF000uLL;
      v28 = v27 & 0xFFF;
      if ( v28 )
        *(_WORD *)(v26 + 32) += v28;
    }
    RtlpHpLfhOwnerRunMaintenance(a1, (__int64)a2, v31, v19);
    if ( (*a2 & 1) != 0 || !*((_WORD *)a2 + 2) )
      RtlpHpReleaseLockExclusive((struct _KTHREAD *)(a2 + 16));
    if ( (*a2 & 1) == 0 && *((_WORD *)a2 + 2) )
      v4 = 2;
    result = (_QWORD *)RtlpHpLfhBucketAddSubsegment(a1, v8, v31, v4);
    if ( (*a2 & 1) != 0 || !*((_WORD *)a2 + 2) )
    {
      RtlpHpAcquireLockShared(a2 + 16, *(unsigned __int8 *)(a1 + 73));
      RtlpHpLfhOwnerListCompact(a1, v29, a2 + 24);
      return (_QWORD *)RtlpHpReleaseLockShared((struct _KTHREAD *)(a2 + 16));
    }
  }
  return result;
}
