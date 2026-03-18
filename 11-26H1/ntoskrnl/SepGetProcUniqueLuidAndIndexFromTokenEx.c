/*
 * XREFs of SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x1404BADAC
 * Callers:
 *     SeSetSecurityAttributesTokenEx @ 0x14063B970 (SeSetSecurityAttributesTokenEx.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x1403CD3FC (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 */

__int64 __fastcall SepGetProcUniqueLuidAndIndexFromTokenEx(char a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  char v4; // si
  unsigned int ProcUniqueLuidAndIndexFromAttributeInfo; // edi
  struct _KTHREAD *CurrentThread; // rax

  v4 = 0;
  ProcUniqueLuidAndIndexFromAttributeInfo = -1073741275;
  if ( (RtlpBootStatHandleLock.SchedulerApcFill3[60] & 3) == 3 )
  {
    if ( !a1 && KeGetCurrentIrql() < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      v4 = 1;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a2 + 48), 1u);
    }
    ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(
                                                *(_QWORD *)(a2 + 776),
                                                a3,
                                                a4);
    if ( v4 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
      KeLeaveCriticalRegion();
    }
  }
  return ProcUniqueLuidAndIndexFromAttributeInfo;
}
