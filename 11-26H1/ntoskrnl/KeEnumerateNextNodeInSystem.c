/*
 * XREFs of KeEnumerateNextNodeInSystem @ 0x140452D80
 * Callers:
 *     KiChooseTargetProcessor @ 0x1402370C0 (KiChooseTargetProcessor.c)
 *     KeConfigureHeteroProcessors @ 0x140452524 (KeConfigureHeteroProcessors.c)
 *     KiGetNumberOfActiveSubNodes @ 0x1404528F0 (KiGetNumberOfActiveSubNodes.c)
 *     KeInitializeSystemSubNodeEnumerationContext @ 0x1404529A8 (KeInitializeSystemSubNodeEnumerationContext.c)
 *     KeEnumerateNextSchedulerSubNodeInSystem @ 0x1404529F0 (KeEnumerateNextSchedulerSubNodeInSystem.c)
 *     PoCopyDeepIdleMask @ 0x140452B10 (PoCopyDeepIdleMask.c)
 *     KiRemoveForceParkedProcessorsFromAffinity @ 0x140452C8C (KiRemoveForceParkedProcessorsFromAffinity.c)
 *     PpmGetIdleConstrainedMask @ 0x1405258A0 (PpmGetIdleConstrainedMask.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeEnumerateNextNodeInSystem(unsigned __int16 *a1, __int64 *a2)
{
  int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax
  int v7; // r9d
  int v8; // edx

  while ( 1 )
  {
    v3 = *a1;
    if ( a1[1] )
    {
      v7 = (unsigned __int16)KeNumberNodes;
      v8 = *((_DWORD *)a1 + 1) + 1;
      *((_DWORD *)a1 + 1) = v8;
      v4 = v8 == v7 ? 0xFFFFFFFFLL : *(unsigned int *)(qword_140E2D810 + 4LL * (unsigned int)(v7 * v3 + v8));
    }
    else
    {
      v4 = *a1;
      a1[1] = 1;
    }
    if ( (_DWORD)v4 == -1 )
      break;
    v5 = KeNodeBlock[v4];
    if ( v5 )
    {
      *a2 = v5;
      return 0LL;
    }
  }
  result = 2147483674LL;
  *a1 = -1;
  return result;
}
