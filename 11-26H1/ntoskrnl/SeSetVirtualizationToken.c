/*
 * XREFs of SeSetVirtualizationToken @ 0x140B33E8C
 * Callers:
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

void __fastcall SeSetVirtualizationToken(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  unsigned int v6; // eax
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v7, 0);
  v5 = *(_DWORD *)(a1 + 200);
  if ( !a2 )
  {
    v6 = v5 & 0xFFFFFBFF;
LABEL_5:
    *(_DWORD *)(a1 + 200) = v6;
    goto LABEL_3;
  }
  if ( (v5 & 0x200) != 0 )
  {
    v6 = v5 | 0x400;
    goto LABEL_5;
  }
LABEL_3:
  *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v7, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
}
