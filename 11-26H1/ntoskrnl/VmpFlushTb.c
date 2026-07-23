/*
 * XREFs of VmpFlushTb @ 0x140253324
 * Callers:
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     KeFlushTb @ 0x140252130 (KeFlushTb.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     VmFlushTb @ 0x140414E94 (VmFlushTb.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x1402536A0 (VmpConvertPortionVpnRangeToGpnRange.c)
 *     VmpInsertInvalidateListRange @ 0x140253938 (VmpInsertInvalidateListRange.c)
 *     VmpFlushTbVaRange @ 0x140253DEC (VmpFlushTbVaRange.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     VmpProcessInvalidateList @ 0x140512570 (VmpProcessInvalidateList.c)
 *     VmpInvalidateOutstandingFaults @ 0x1405249A8 (VmpInvalidateOutstandingFaults.c)
 *     VmpLogTbFlushSlatFlushEntire @ 0x14052C2F8 (VmpLogTbFlushSlatFlushEntire.c)
 */

void __fastcall VmpFlushTb(PEX_SPIN_LOCK SpinLock, int a2, unsigned __int64 *a3)
{
  __int64 v3; // rsi
  char *v4; // rbx
  unsigned __int64 *v5; // r12
  unsigned __int64 v7; // r15
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  unsigned __int64 v12; // rcx
  __int64 v13; // r14
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r13
  __int64 v16; // r15
  __int64 v17; // rax
  unsigned __int64 v18; // r13
  __int64 v19; // rbx
  struct _KPRCB *v20; // rax
  __int64 v21; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-21h]
  unsigned __int64 v23; // [rsp+50h] [rbp-19h] BYREF
  __int64 v24; // [rsp+58h] [rbp-11h]
  __int64 v25[2]; // [rsp+60h] [rbp-9h] BYREF
  __int128 v26; // [rsp+70h] [rbp+7h] BYREF
  __int64 v27; // [rsp+80h] [rbp+17h]
  int v28; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v29; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = -1LL;
  v29 = -1LL;
  v27 = 0LL;
  v4 = 0LL;
  v21 = 0LL;
  v25[0] = 0LL;
  v5 = a3;
  v7 = 0LL;
  v26 = 0LL;
  if ( !a2 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
    CurrentPrcb = KeGetCurrentPrcb();
    v3 = -2LL;
    v4 = (char *)CurrentPrcb->VmInternal + 4608;
    *((_DWORD *)CurrentPrcb->VmInternal + 1153) |= 0x100u;
    if ( stru_140F06A28.InitialStack
      && *(_DWORD *)stru_140F06A28.InitialStack
      && (*((_DWORD *)stru_140F06A28.InitialStack + 4) & 0x100LL) != 0
      && (*((_QWORD *)stru_140F06A28.InitialStack + 3) & 0x100LL) == *((_QWORD *)stru_140F06A28.InitialStack + 3) )
    {
      VmpLogTbFlushSlatFlushEntire(*((_QWORD *)stru_140F06A28.InitialStack + 3), *((_QWORD *)SpinLock + 15));
    }
    v28 = 0;
    v23 = 0LL;
    *(_OWORD *)v25 = 0LL;
    v24 = 0x10000000000001LL;
    do
    {
      v9 = VmpConvertPortionVpnRangeToGpnRange(
             (_DWORD)SpinLock,
             (unsigned int)&v23,
             0x40000 - (int)v7,
             (unsigned int)&v26,
             (__int64)v25,
             (__int64)&v28,
             1);
      v10 = v25[1];
      v11 = v9;
      if ( !v25[1] )
        break;
      VmpInsertInvalidateListRange((_DWORD)SpinLock, (_DWORD)v4, v25[0], v9, v25[1], v28);
      VmpInvalidateOutstandingFaults(SpinLock, v11, v10);
      v7 += v10;
      if ( v7 >= 0x40000 )
      {
        if ( *((_QWORD *)v4 + 1) )
          VmpProcessInvalidateList(SpinLock, v4);
        *((_DWORD *)v4 + 1) = 0;
        v19 = *((_QWORD *)SpinLock + 11);
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        v7 = 0LL;
        ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
        v3 = -2LL;
        if ( v19 != *((_QWORD *)SpinLock + 11) )
        {
          v26 = 0LL;
          v27 = 0LL;
        }
        v20 = KeGetCurrentPrcb();
        v4 = (char *)v20->VmInternal + 4608;
        *((_DWORD *)v20->VmInternal + 1153) |= 0x100u;
      }
    }
    while ( v24 );
    goto LABEL_7;
  }
  v12 = 0LL;
  v13 = 0LL;
  v22 = 0LL;
  v14 = (unsigned __int64)&a3[a2];
  v23 = v14;
  if ( (unsigned __int64)a3 < v14 )
  {
    while ( 1 )
    {
      v15 = *v5;
      if ( *v5 < 0x7FFFFFFF0000LL )
      {
        v16 = (*v5 & 0x3FF) + 1;
        v17 = (v15 >> 10) & 3;
        if ( ((v15 >> 10) & 3) != 0 )
        {
          do
          {
            v16 <<= 9;
            --v17;
          }
          while ( v17 );
        }
        v18 = v15 >> 12;
        if ( v3 == -1 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
          v3 = -2LL;
          v12 = v22;
          v14 = v23;
          v29 = -2LL;
          v4 = (char *)KeGetCurrentPrcb()->VmInternal + 4608;
          v21 = (__int64)v4;
          *((_DWORD *)v4 + 1) |= 0x100u;
        }
        if ( v13 )
        {
          if ( v18 == v13 + v12 )
          {
            v13 += v16;
            goto LABEL_19;
          }
          VmpFlushTbVaRange(SpinLock, (__int64)v25, (__int64)&v29, (__int64)&v21);
          v3 = v29;
          v4 = (char *)v21;
        }
        v14 = v23;
        v12 = v18;
        v22 = v18;
        v13 = v16;
      }
LABEL_19:
      if ( (unsigned __int64)++v5 >= v14 )
      {
        if ( v13 )
        {
          VmpFlushTbVaRange(SpinLock, (__int64)v25, (__int64)&v29, (__int64)&v21);
          v3 = v29;
          v4 = (char *)v21;
        }
LABEL_7:
        if ( v3 != -1 )
        {
          if ( *((_QWORD *)v4 + 1) )
            VmpProcessInvalidateList(SpinLock, v4);
          *((_DWORD *)v4 + 1) = 0;
          if ( v3 == -2 )
            ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
          else
            ExReleaseSpinLockExclusive(SpinLock, v3);
        }
        return;
      }
    }
  }
}
