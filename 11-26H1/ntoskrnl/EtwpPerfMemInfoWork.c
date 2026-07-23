/*
 * XREFs of EtwpPerfMemInfoWork @ 0x1409BBBC0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogMemInfoWs @ 0x1409BBBE8 (EtwpLogMemInfoWs.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpPerfMemInfoWork(_QWORD *a1)
{
  __int64 v1; // rbx

  v1 = a1[4];
  ExFreePoolWithTag(a1, 0);
  return EtwpLogMemInfoWs(0LL, v1);
}
