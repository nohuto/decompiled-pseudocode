/*
 * XREFs of PopProcessorSetPep @ 0x140608E20
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 */

__int64 __fastcall PopProcessorSetPep(unsigned int a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx

  v2 = *(_QWORD *)(a2 + 64);
  v3 = 0;
  if ( v2 && *(_QWORD *)(v2 + 104) )
  {
    qword_140E676E8 = *(_QWORD *)(a2 + 64);
    *(_QWORD *)(KeGetPrcb(a1) + 35384) = a2;
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}
