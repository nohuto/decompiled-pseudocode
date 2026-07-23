/*
 * XREFs of SmGlobalsStart @ 0x140C85428
 * Callers:
 *     SmInitSystem @ 0x140C852E8 (SmInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024F100 (KeRegisterBugCheckReasonCallback.c)
 *     ExDestroyPool @ 0x1406CFC20 (ExDestroyPool.c)
 *     ExCreatePoolInternal @ 0x140780744 (ExCreatePoolInternal.c)
 */

__int64 __fastcall SmGlobalsStart(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  ULONG_PTR v5; // rcx
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp+10h] BYREF

  v7[0] = 1966108LL;
  BugCheckParameter2 = 0LL;
  v7[1] = L"MemCompression";
  v4 = ExCreatePoolInternal(1LL, 16LL, a3, (__int64)v7, &BugCheckParameter2);
  if ( v4 < 0 )
  {
    v5 = BugCheckParameter2;
  }
  else
  {
    KeRegisterBugCheckReasonCallback(
      (PKBUGCHECK_REASON_CALLBACK_RECORD)&stru_140E27C48.KernelStack,
      (PKBUGCHECK_REASON_CALLBACK_ROUTINE)SmBugcheckCallback,
      KbCallbackSecondaryDumpData,
      (PUCHAR)"nt!store memory compression");
    *(_QWORD *)(a1 + 1360) = BugCheckParameter2;
    v5 = 0LL;
    *(_OWORD *)(a1 + 1368) = 0LL;
    v4 = 0;
    *(_QWORD *)(a1 + 1376) = *(_QWORD *)(a1 + 1360);
    *(_BYTE *)(a1 + 1368) = 4;
  }
  if ( v5 )
    ExDestroyPool(v5);
  return (unsigned int)v4;
}
