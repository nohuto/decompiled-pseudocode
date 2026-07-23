/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x180078C94
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x180116018 (AvrfMiniLoadDll.c)
 *     LdrpProcessMappedModule @ 0x180119E48 (LdrpProcessMappedModule.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x180078D20 (LdrProtectMrdata.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x180079470 (RtlpInsertInvertedFunctionTableEntry.c)
 *     RtlCaptureImageExceptionValues @ 0x180079550 (RtlCaptureImageExceptionValues.c)
 */

void __fastcall RtlInsertInvertedFunctionTable(void *a1, int a2)
{
  int v3; // edi
  int v4; // ecx

  v3 = (int)a1;
  RtlCaptureImageExceptionValues(a1);
  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  LdrProtectMrdata(0LL);
  RtlpInsertInvertedFunctionTableEntry(v4, v3, 0, a2, 0);
  LdrProtectMrdata(1LL);
  RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
