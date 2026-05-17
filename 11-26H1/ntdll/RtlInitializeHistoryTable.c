/*
 * XREFs of RtlInitializeHistoryTable @ 0x1800E554C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x18004AEA0 (RtlLookupFunctionEntry.c)
 *     LdrProtectMrdata @ 0x180081980 (LdrProtectMrdata.c)
 *     RtlpFunctionAddressTableEntry @ 0x1800E5610 (RtlpFunctionAddressTableEntry.c)
 */

struct _TEB *RtlInitializeHistoryTable()
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
      byte_1801E0365 = i;
    v2 = RtlLookupFunctionEntry((ULONG64)v1, &ImageBase, 0LL);
    v3 = 2LL * i;
    v4 = ImageBase + v2->BeginAddress;
    v5 = ImageBase + v2->EndAddress;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 6] = ImageBase;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 8] = v2;
    if ( v4 < qword_1801E0368 )
      qword_1801E0368 = v4;
    if ( v5 > qword_1801E0370 )
      qword_1801E0370 = v5;
  }
  RtlpUnwindHistoryTable[0] = i;
  return LdrProtectMrdata(1);
}
