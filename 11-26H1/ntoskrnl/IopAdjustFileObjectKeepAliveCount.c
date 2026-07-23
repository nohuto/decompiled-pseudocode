/*
 * XREFs of IopAdjustFileObjectKeepAliveCount @ 0x14044D19C
 * Callers:
 *     IoIncrementKeepAliveCount @ 0x14044D080 (IoIncrementKeepAliveCount.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopGetSetSpecificExtension @ 0x14044D490 (IopGetSetSpecificExtension.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAdjustFileObjectKeepAliveCount(__int64 a1, KSPIN_LOCK a2, int a3, _DWORD *a4, __int64 *a5)
{
  KSPIN_LOCK *Pool2; // rbx
  __int64 v6; // rsi
  _DWORD *v7; // r13
  __int64 v11; // r14
  unsigned int v12; // edi
  PKSPIN_LOCK v13; // r14
  __int64 result; // rax
  KIRQL v15; // al
  KSPIN_LOCK v16; // rcx
  KIRQL v17; // r9
  KSPIN_LOCK i; // r8
  int v19; // eax
  int v20; // edx
  __int64 v21; // rcx
  _DWORD *v22; // rax
  bool v23; // al
  PKSPIN_LOCK SpinLock[2]; // [rsp+30h] [rbp-38h] BYREF

  Pool2 = 0LL;
  SpinLock[0] = 0LL;
  v6 = 0LL;
  v7 = a4;
  if ( a3 )
  {
    LOBYTE(a4) = 1;
    result = IopGetSetSpecificExtension(a1, 1, 32, (_DWORD)a4, (__int64)SpinLock, 0LL);
    v12 = result;
    if ( (int)result < 0 )
      return result;
    Pool2 = (KSPIN_LOCK *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      v6 = ExAllocatePool2(0x40uLL);
      if ( !v6 )
      {
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = 0LL;
      }
    }
    v13 = SpinLock[0];
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 208);
    v12 = 0;
    if ( !v11 )
      return 3221225485LL;
    v13 = *(PKSPIN_LOCK *)(v11 + 16);
    if ( !v13 )
      return 3221225485LL;
  }
  SpinLock[0] = (PKSPIN_LOCK)(a1 + 184);
  v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v16 = v13[3];
  v17 = v15;
  if ( v16 )
  {
    for ( i = v13[3]; i; i = *(_QWORD *)i )
    {
      if ( *(_QWORD *)(i + 8) == a2 )
      {
        v19 = *(_DWORD *)(i + 16);
        v20 = v19 + 1;
        if ( !a3 )
          v20 = v19 - 1;
        v21 = *(_QWORD *)(i + 24);
        *(_DWORD *)(i + 16) = v20;
        *v7 = v20;
        *a5 = v21;
        goto LABEL_17;
      }
    }
  }
  if ( a3 )
  {
    if ( Pool2 )
    {
      *Pool2 = v16;
      v13[3] = (KSPIN_LOCK)Pool2;
      *((_DWORD *)Pool2 + 4) = 1;
      Pool2[1] = a2;
      Pool2[3] = v6;
      *(_QWORD *)(v6 + 24) = a2;
      *(_QWORD *)(v6 + 40) = a1;
      v23 = 0;
      if ( (*(_DWORD *)(a1 + 80) & 0x20000000) != 0 )
      {
        v22 = *(_DWORD **)(a1 + 208);
        if ( !v22 || (*v22 & 8) == 0 )
          v23 = 1;
      }
      *(_BYTE *)(v6 + 18) = v23;
      Pool2 = 0LL;
      *v7 = 1;
      *a5 = v6;
      v6 = 0LL;
    }
    else
    {
      v12 = -1073741670;
    }
  }
  else
  {
    v12 = -1073741811;
  }
LABEL_17:
  KeReleaseSpinLock(SpinLock[0], v17);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v6 )
    ExFreePoolWithTag((PVOID)v6, 0);
  return v12;
}
