/*
 * XREFs of PfSnSectionInfoCleanupWorkItem @ 0x140989EB0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x14098B194 (PfSnCleanupPrefetchSectionInfo.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnSectionInfoCleanupWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // r15
  __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  void *v9; // rcx
  __int64 v10; // rax
  unsigned __int32 v11; // eax

  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD **)(v3 + 8);
  v5 = v4[8];
  v6 = v4[9];
  _interlockedbittestandset((volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry + 2, 0x19u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  while ( 1 )
  {
    v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 28), 1u);
    if ( v11 >= *(_DWORD *)(v3 + 32) )
      break;
    v8 = v11;
    v9 = *(void **)(v5 + 8LL * v11);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    v10 = *(unsigned int *)(v6 + 4 * v8);
    if ( (int)v10 >= 0 )
    {
      LOBYTE(a3) = 1;
      PfSnCleanupPrefetchSectionInfo(v4[7] + 56 * v10, v4, a3);
    }
  }
  KeLeaveCriticalRegion();
  _interlockedbittestandreset((volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry + 2, 0x19u);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v3);
}
