/*
 * XREFs of HalpFreeDmaChannels @ 0x140436F14
 * Callers:
 *     IoFreeAdapterChannelV3Internal @ 0x140437694 (IoFreeAdapterChannelV3Internal.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     HalpAllocateDmaResourcesInternal @ 0x14043721C (HalpAllocateDmaResourcesInternal.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall HalpFreeDmaChannels(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  unsigned __int64 v3; // rdx
  unsigned __int8 CurrentIrql; // di
  KSPIN_LOCK *v5; // rbp
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  __int64 v10; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 368);
  v2 = *(_QWORD *)(v1 + 56) + 160LL * *(unsigned int *)(a1 + 380);
  *(_DWORD *)(a1 + 392) = 0;
  v3 = *(unsigned __int8 *)(v1 + 176);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v3 )
    __writecr8(v3);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, v3);
  }
  v5 = (KSPIN_LOCK *)(v1 + 168);
  KxAcquireSpinLock(v5);
  v6 = (_QWORD *)(v2 + 144);
  v7 = *(_QWORD **)(v2 + 144);
  if ( v7 == (_QWORD *)(v2 + 144) )
  {
    *(_WORD *)(v2 + 5) = 0;
    *(_QWORD *)(v2 + 24) = 0LL;
    KxReleaseSpinLock(v5);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    if ( (_QWORD *)v7[1] != v6 || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *v6 = v8;
    v9 = v7 - 26;
    *(_QWORD *)(v8 + 8) = v6;
    ++*((_DWORD *)v7 + 104);
    *((_DWORD *)v7 + 46) = 1;
    *(_QWORD *)(v2 + 24) = v7 - 26;
    KxReleaseSpinLock(v5);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    LOBYTE(v10) = 1;
    return HalpAllocateDmaResourcesInternal(v9, v10, 0LL);
  }
  return result;
}
