/*
 * XREFs of PfTGenerateTrace @ 0x1409F2150
 * Callers:
 *     PfTLoggingWorker @ 0x1409F1030 (PfTLoggingWorker.c)
 * Callees:
 *     PfTCreateTraceDump @ 0x1409F21D0 (PfTCreateTraceDump.c)
 *     PfTTraceListAdd @ 0x140AF85FC (PfTTraceListAdd.c)
 */

__int64 __fastcall PfTGenerateTrace(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = PfTCreateTraceDump(a1, &v5);
  if ( v2 >= 0 )
  {
    ++*(_DWORD *)(a1 + 720);
    v3 = v5;
    *(_QWORD *)(a1 + 256) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    PfTTraceListAdd(a1, v3, 0xFFFFF780000003B0uLL, 0xFFFFF78000000008uLL);
  }
  return (unsigned int)v2;
}
