/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x1404CD1F0
 * Callers:
 *     EtwpLogMemInfoRundown @ 0x14082F528 (EtwpLogMemInfoRundown.c)
 *     PfpPrivSourceEnum @ 0x14096984C (PfpPrivSourceEnum.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_KPROCESS **a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 result; // rax

  v1 = qword_140E2C588;
  v2 = qword_140E3D880;
  v3 = qword_140E3D700;
  *a1 = stru_140E36558.ApcState.Process;
  result = 0LL;
  a1[1] = (_KPROCESS *)v1;
  a1[2] = (_KPROCESS *)v2;
  a1[3] = (_KPROCESS *)v3;
  return result;
}
