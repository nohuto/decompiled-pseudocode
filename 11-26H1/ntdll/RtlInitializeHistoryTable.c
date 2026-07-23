/*
 * XREFs of RtlInitializeHistoryTable @ 0x1800E33FC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x180035420 (RtlLookupFunctionEntry.c)
 *     LdrProtectMrdata @ 0x180078D20 (LdrProtectMrdata.c)
 *     RtlpFunctionAddressTableEntry @ 0x1800E34C0 (RtlpFunctionAddressTableEntry.c)
 */

void RtlInitializeHistoryTable()
{
  unsigned int i; // ebx
  void (__stdcall *v1)(PEXCEPTION_RECORD); // rax
  PRUNTIME_FUNCTION v2; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r8
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF

  ImageBase = 0LL;
  LdrProtectMrdata(0);
  for ( i = 0; i < 0xC; ++i )
  {
    v1 = (void (__stdcall *)(PEXCEPTION_RECORD))RtlpFunctionAddressTableEntry(i);
    if ( !v1 )
      break;
    if ( v1 == RtlRaiseException )
      byte_1801DF365 = i;
    v2 = RtlLookupFunctionEntry((ULONG64)v1, &ImageBase, 0LL);
    v3 = 2LL * i;
    v4 = ImageBase + v2->BeginAddress;
    v5 = ImageBase + v2->EndAddress;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 6] = ImageBase;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 8] = v2;
    if ( v4 < qword_1801DF368 )
      qword_1801DF368 = v4;
    if ( v5 > qword_1801DF370 )
      qword_1801DF370 = v5;
  }
  RtlpUnwindHistoryTable[0] = i;
  LdrProtectMrdata(1);
}
