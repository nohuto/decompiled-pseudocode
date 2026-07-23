/*
 * XREFs of HalpIsCmciImplementedAMD @ 0x140BF078C
 * Callers:
 *     HalpCmciInitProcessor @ 0x14044B398 (HalpCmciInitProcessor.c)
 * Callees:
 *     HalpWheaReadMsrMisc @ 0x14044B1DC (HalpWheaReadMsrMisc.c)
 */

char __fastcall HalpIsCmciImplementedAMD(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned int v6; // esi
  unsigned int v7; // ebp
  __int64 MsrMisc; // rax

  v3 = *(_QWORD *)&KeGetPcr()->HalReserved[6];
LABEL_2:
  if ( !v3 )
    return 0;
  v4 = *(_QWORD *)(v3 + 172);
  if ( !HalpMcaNumberOfBanks )
  {
    v5 = __readmsr(0x179u);
    HalpMcaNumberOfBanks = v5;
  }
  v6 = 0;
  v7 = (unsigned __int8)HalpMcaNumberOfBanks;
  while ( 1 )
  {
    if ( v6 >= v7 )
    {
      v3 = *(_QWORD *)(v3 + 184);
      goto LABEL_2;
    }
    MsrMisc = HalpWheaReadMsrMisc(v4, v6, a3);
    if ( MsrMisc < 0 && (MsrMisc & 0x6000000000000000LL) == 0x4000000000000000LL )
      return 1;
    ++v6;
  }
}
