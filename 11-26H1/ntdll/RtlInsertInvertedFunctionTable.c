/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x1800818F4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x180116838 (AvrfMiniLoadDll.c)
 *     LdrpProcessMappedModule @ 0x18011A098 (LdrpProcessMappedModule.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x180081980 (LdrProtectMrdata.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x1800820D0 (RtlpInsertInvertedFunctionTableEntry.c)
 *     RtlCaptureImageExceptionValues @ 0x1800821B0 (RtlCaptureImageExceptionValues.c)
 */

struct _TEB *__fastcall RtlInsertInvertedFunctionTable(__int64 a1, int a2)
{
  int v3; // edi
  __int64 v4; // rdx
  int v5; // ecx
  int v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v7 = 0;
  v3 = a1;
  RtlCaptureImageExceptionValues(a1, &v8, &v7);
  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock, v4);
  LdrProtectMrdata(0LL);
  RtlpInsertInvertedFunctionTableEntry(v5, v3, v8, a2, v7);
  LdrProtectMrdata(1LL);
  return RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
