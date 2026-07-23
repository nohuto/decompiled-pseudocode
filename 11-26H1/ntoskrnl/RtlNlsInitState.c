/*
 * XREFs of RtlNlsInitState @ 0x1408078C8
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407F4BD0 (PspInitializeServerSiloDeferred.c)
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall RtlNlsInitState(__int64 a1)
{
  __int64 v1; // rdi
  void *result; // rax

  v1 = a1 + 1032;
  *(_QWORD *)(a1 + 1160) = 0LL;
  memset_0((void *)(a1 + 1032), 0, 0x40uLL);
  *(_DWORD *)v1 = 327145;
  *(_DWORD *)(v1 + 4) = -196545;
  *(_DWORD *)(v1 + 8) = 4128831;
  *(_QWORD *)(v1 + 136) = 0LL;
  memset_0((void *)(v1 + 64), 0, 0x40uLL);
  result = &NlsEmptyLeadByteInfoTable;
  *(_QWORD *)(v1 + 144) = &NlsEmptyLeadByteInfoTable;
  *(_QWORD *)(v1 + 152) = &NlsEmptyLeadByteInfoTable;
  *(_DWORD *)(v1 + 64) = 327145;
  *(_DWORD *)(v1 + 68) = -196545;
  *(_DWORD *)(v1 + 72) = 4128831;
  *(_QWORD *)(v1 + 160) = 0LL;
  *(_QWORD *)(v1 + 168) = 0LL;
  *(_QWORD *)(v1 + 176) = 0LL;
  return result;
}
