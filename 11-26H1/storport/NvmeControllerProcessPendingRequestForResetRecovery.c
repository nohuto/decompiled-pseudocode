/*
 * XREFs of NvmeControllerProcessPendingRequestForResetRecovery @ 0x14012BA9C
 * Callers:
 *     NvmeControllerResetRecovery @ 0x14012BD30 (NvmeControllerResetRecovery.c)
 * Callees:
 *     NvmeControllerCompleteAllRequests @ 0x1400F189C (NvmeControllerCompleteAllRequests.c)
 *     NvmeControllerRequeueSQPendingRequests @ 0x1400F9ED4 (NvmeControllerRequeueSQPendingRequests.c)
 */

char __fastcall NvmeControllerProcessPendingRequestForResetRecovery(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  int v5; // r8d
  char v6; // r10

  v2 = *(_QWORD *)(a1 + 128);
  v3 = 0LL;
  v5 = -1073740534;
  if ( a2 != 7 )
    v5 = 0;
  v6 = 56;
  if ( a2 != 7 )
    v6 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 400) + 184LL) & 0x40000000) != 0 || *(_BYTE *)(a1 + 1728) == 1 )
  {
    if ( a2 == 7 )
    {
      LOBYTE(v2) = NvmeControllerCompleteAllRequests(a1, v6, v5);
    }
    else
    {
      if ( *(_WORD *)(a1 + 22) )
      {
        do
        {
          NvmeControllerRequeueSQPendingRequests(*(_QWORD *)(a1 + 728) + 192 * v3);
          v3 = (unsigned int)(v3 + 1);
        }
        while ( (unsigned int)v3 < *(unsigned __int16 *)(a1 + 22) );
      }
      LOBYTE(v2) = NvmeControllerRequeueSQPendingRequests(*(_QWORD *)(a1 + 712));
    }
  }
  return v2;
}
