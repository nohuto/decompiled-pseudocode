/*
 * XREFs of ExAllocateCacheAwarePushLock @ 0x1404E0B10
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x140201320 (KeQueryNodeActiveAffinity.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     ExFreeCacheAwarePushLock @ 0x1404E0C30 (ExFreeCacheAwarePushLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void *__fastcall ExAllocateCacheAwarePushLock(char a1)
{
  char v1; // r15
  ULONG_PTR v2; // rbp
  void *Pool2; // rdi
  __int64 v4; // rax
  void *v5; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rsi
  unsigned int v9; // r12d
  __int64 i; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  int v12; // ecx
  __int64 v13; // rax
  __int128 v14; // [rsp+30h] [rbp-58h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+40h] [rbp-48h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+50h] [rbp-38h] BYREF

  v1 = 0;
  Affinity = 0LL;
  v2 = (-(__int64)((a1 & 1) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256;
  v14 = 0LL;
  PreviousAffinity = 0LL;
  Pool2 = (void *)ExAllocatePool2(v2);
  if ( !Pool2 )
    return 0LL;
  if ( KeNumberNodes == 1 )
  {
    v4 = ExAllocatePool2(v2);
    if ( !v4 )
    {
      v5 = 0LL;
LABEL_5:
      ExFreeCacheAwarePushLock(Pool2);
      return v5;
    }
    v7 = (__int64 *)Pool2;
    v8 = 32LL;
    do
    {
      *(_BYTE *)(v4 + 8) = 1;
      *(_QWORD *)(v4 + 16) = Pool2;
      *(_QWORD *)v4 = 0LL;
      *v7 = v4;
      v4 += 128LL;
      ++v7;
      --v8;
    }
    while ( v8 );
    return Pool2;
  }
  else
  {
    v9 = KeNumberProcessors_0;
    for ( i = 0LL; (unsigned int)i < 0x20; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= v9 )
        CurrentPrcb = KeGetCurrentPrcb();
      else
        CurrentPrcb = (struct _KPRCB *)KeGetPrcb(i);
      v12 = CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0];
      if ( (v2 & 0x40) != 0 )
      {
        LOBYTE(v14) = 3;
        DWORD2(v14) = v12 | 0x80000000;
        v13 = ExAllocatePool3(v2, 128LL, 1818455120LL, &v14, 1);
      }
      else
      {
        KeQueryNodeActiveAffinity(v12, &Affinity, 0LL);
        if ( v1 )
        {
          KeSetSystemGroupAffinityThread(&Affinity, 0LL);
        }
        else
        {
          KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
          v1 = 1;
        }
        v13 = ExAllocatePool2(v2);
      }
      if ( !v13 )
      {
        v5 = 0LL;
        goto LABEL_28;
      }
      *(_BYTE *)(v13 + 8) = 0;
      *(_QWORD *)(v13 + 16) = Pool2;
      *(_QWORD *)v13 = 0LL;
      *((_QWORD *)Pool2 + i) = v13;
    }
    v5 = Pool2;
    Pool2 = 0LL;
LABEL_28:
    if ( v1 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    if ( Pool2 )
      goto LABEL_5;
  }
  return v5;
}
