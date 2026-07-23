/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x1404C6990
 * Callers:
 *     EtwpLogMemInfoRundown @ 0x140835768 (EtwpLogMemInfoRundown.c)
 *     PfpPrivSourceEnum @ 0x14091DEAC (PfpPrivSourceEnum.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_KPROCESS **a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 result; // rax

  v1 = qword_140E2C708;
  v2 = qword_140E3DA00;
  v3 = qword_140E3D880;
  *a1 = stru_140E366D8.ApcState.Process;
  result = 0LL;
  a1[1] = (_KPROCESS *)v1;
  a1[2] = (_KPROCESS *)v2;
  a1[3] = (_KPROCESS *)v3;
  return result;
}
