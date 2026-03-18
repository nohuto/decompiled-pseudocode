/*
 * XREFs of PspQueryJobHierarchyProcessIdList @ 0x140958B14
 * Callers:
 *     NtQueryInformationJobObject @ 0x1407F2FB0 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x140276AE0 (ExAcquireFastResourceShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExInitializeFastOwnerEntry @ 0x14043D670 (ExInitializeFastOwnerEntry.c)
 *     ExReleaseFastResourceShared @ 0x140485E00 (ExReleaseFastResourceShared.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14095A350 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspQueryJobHierarchyProcessIdList(__int64 *Object, void *a2, int a3, _DWORD *a4, char a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  char *v10; // rbx
  int v11; // r15d
  unsigned int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  $7A85BAF4F1FA08634C1C4A3E45B775B3 *v17; // rcx
  __int64 v19; // [rsp+38h] [rbp-C0h] BYREF
  int v20; // [rsp+40h] [rbp-B8h]
  int v21; // [rsp+44h] [rbp-B4h]
  int v22; // [rsp+48h] [rbp-B0h]
  char v23; // [rsp+4Ch] [rbp-ACh]
  __int16 v24; // [rsp+4Dh] [rbp-ABh]
  char v25; // [rsp+4Fh] [rbp-A9h]
  ULONG_PTR v26[10]; // [rsp+50h] [rbp-A8h] BYREF
  _DWORD Src[2]; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-50h]

  v24 = 0;
  v25 = 0;
  v28 = 0LL;
  memset_0(v26, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  ExInitializeFastOwnerEntry((__int64)v26);
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  v10 = (char *)(Object + 7);
  ExAcquireFastResourceShared(Object + 7, (ULONG_PTR)v26, 1);
  v11 = *((_DWORD *)Object + 54);
  v19 = (__int64)a2 + 8;
  v20 = a3 - 8;
  v21 = 0;
  v22 = v11;
  v23 = a5;
  v12 = PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)&v19, 1);
  ExReleaseFastResourceShared((ULONG_PTR)v10, (ULONG_PTR)v26, v13, v14);
  if ( CurrentThread )
  {
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      v17 = &CurrentThread->152;
      if ( ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)v17->ApcState.ApcListHead[0].Flink != v17 )
        KiCheckForKernelApcDelivery((__int64)v17, v15);
    }
  }
  if ( (int)(v12 + 0x80000000) < 0 || v12 == -2147483643 )
  {
    *a4 = 8 * v11 + 8;
    Src[0] = v11;
    Src[1] = v21;
    if ( a5 )
      RtlCopyToUser(a2, Src, 8uLL);
    else
      RtlCopyVolatileMemory(a2, Src, 8uLL);
  }
  return v12;
}
