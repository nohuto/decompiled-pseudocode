/*
 * XREFs of ExDereferenceHandleDebugInfo @ 0x140A8F64C
 * Callers:
 *     ExDisableHandleTracing @ 0x1406CB8EC (ExDisableHandleTracing.c)
 *     ExEnableHandleTracing @ 0x1407795D8 (ExEnableHandleTracing.c)
 *     ExpUpdateDebugInfo @ 0x14092C6E0 (ExpUpdateDebugInfo.c)
 *     ExpFreeHandleTable @ 0x1409588DC (ExpFreeHandleTable.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403BD130 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExDereferenceHandleDebugInfo(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  ULONG_PTR v4; // rcx

  if ( _InterlockedExchangeAdd(a2, 0xFFFFFFFF) == 1 )
  {
    v3 = a2[1];
    ExFreePoolWithTag(a2, 0x6474624Fu);
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
      PsReturnProcessNonPagedPoolQuota(v4, (unsigned int)(160 * v3 + 80));
    _InterlockedAdd((volatile signed __int32 *)&PspSiloMonitorLock.CycleTime, -v3);
  }
}
