/*
 * XREFs of KiRspInIstStack @ 0x1403A8BB8
 * Callers:
 *     KeQueryCurrentStackInformationEx @ 0x1402634E0 (KeQueryCurrentStackInformationEx.c)
 *     MiComputeMaximumFaultCluster @ 0x1403A7780 (MiComputeMaximumFaultCluster.c)
 *     KeInvalidAccessAllowed @ 0x1403A8A70 (KeInvalidAccessAllowed.c)
 *     KiMcheckFastForward @ 0x1405FFBC0 (KiMcheckFastForward.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiRspInIstStack(unsigned int a1, unsigned __int64 a2)
{
  unsigned int v2; // r9d
  unsigned __int64 v3; // r8
  __int64 v4; // rax
  unsigned __int64 v6; // r8

  v2 = 0;
  v3 = *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 8 * a1 + 28);
  v4 = (unsigned int)KeIstStackSize;
  if ( KiKvaShadow )
    v4 = 464LL;
  if ( a2 <= v3 && a2 >= v3 - v4 )
    return 1LL;
  if ( !KiKvaShadow )
    return 0LL;
  v6 = *(_QWORD *)(v3 + 8);
  if ( a2 > v6 )
    return 0LL;
  LOBYTE(v2) = a2 >= v6 - (unsigned int)(KeIstStackSize - 32);
  return v2;
}
