/*
 * XREFs of ?GetProcessACP@@YAGPEAUtagPROCESSINFO@@@Z @ 0x1402B9E24
 * Callers:
 *     SfnINLPCREATESTRUCT @ 0x140258460 (SfnINLPCREATESTRUCT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessACP(struct tagPROCESSINFO *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return *(unsigned __int16 *)(PsGetProcessPeb(*(_QWORD *)a1) + 844);
  return result;
}
