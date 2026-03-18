/*
 * XREFs of KeEnumerateNextNodeInSystem @ 0x1403EE250
 * Callers:
 *     KiChooseTargetProcessor @ 0x140235760 (KiChooseTargetProcessor.c)
 *     KeConfigureHeteroProcessors @ 0x1403ED9F4 (KeConfigureHeteroProcessors.c)
 *     KiGetNumberOfActiveSubNodes @ 0x1403EDDC0 (KiGetNumberOfActiveSubNodes.c)
 *     KeInitializeSystemSubNodeEnumerationContext @ 0x1403EDE78 (KeInitializeSystemSubNodeEnumerationContext.c)
 *     KeEnumerateNextSchedulerSubNodeInSystem @ 0x1403EDEC0 (KeEnumerateNextSchedulerSubNodeInSystem.c)
 *     PoCopyDeepIdleMask @ 0x1403EDFE0 (PoCopyDeepIdleMask.c)
 *     KiRemoveForceParkedProcessorsFromAffinity @ 0x1403EE15C (KiRemoveForceParkedProcessorsFromAffinity.c)
 *     PpmGetIdleConstrainedMask @ 0x140523230 (PpmGetIdleConstrainedMask.c)
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
      v4 = v8 == v7 ? 0xFFFFFFFFLL : *(unsigned int *)(qword_140E2D690 + 4LL * (unsigned int)(v7 * v3 + v8));
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
